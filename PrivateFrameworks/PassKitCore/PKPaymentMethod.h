//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"
#import "NSSecureCoding.h"

@class NSString, PKPaymentPass, PKRemotePaymentInstrument;

@interface PKPaymentMethod : NSObject <NSSecureCoding, NSCopying>
{
    NSString *_displayName;
    NSString *_network;
    unsigned long long _type;
    PKPaymentPass *_paymentPass;
    PKRemotePaymentInstrument *_remoteInstrument;
    NSString *_peerPaymentQuoteIdentifier;
}

+ (BOOL)supportsSecureCoding;
+ (long long)version;
+ (id)paymentMethodWithProtobuf:(id)arg1;
@property(copy, nonatomic) NSString *peerPaymentQuoteIdentifier; // @synthesize peerPaymentQuoteIdentifier=_peerPaymentQuoteIdentifier;
@property(retain, nonatomic) PKRemotePaymentInstrument *remoteInstrument; // @synthesize remoteInstrument=_remoteInstrument;
@property(copy, nonatomic) PKPaymentPass *paymentPass; // @synthesize paymentPass=_paymentPass;
@property(nonatomic) unsigned long long type; // @synthesize type=_type;
@property(copy, nonatomic) NSString *network; // @synthesize network=_network;
@property(copy, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithPeerPaymentQuote:(id)arg1;
- (id)initWithRemotePaymentInstrument:(id)arg1 paymentApplication:(id)arg2;
- (id)initWithRemotePaymentInstrument:(id)arg1;
- (id)initWithPaymentPass:(id)arg1 paymentApplication:(id)arg2 obfuscateNetworks:(BOOL)arg3;
- (id)initWithPaymentPass:(id)arg1 obfuscateNetworks:(BOOL)arg2;
- (id)protobuf;

@end

