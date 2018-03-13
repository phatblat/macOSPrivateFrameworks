//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSSecureCoding.h"

@class NSArray, PKPeerPaymentTransactionMetadata;

@interface PKPaymentAuthorizationResult : NSObject <NSSecureCoding>
{
    long long _status;
    NSArray *_errors;
    PKPeerPaymentTransactionMetadata *_peerPaymentTransactionMetadata;
}

+ (BOOL)supportsSecureCoding;
@property(retain, nonatomic) PKPeerPaymentTransactionMetadata *peerPaymentTransactionMetadata; // @synthesize peerPaymentTransactionMetadata=_peerPaymentTransactionMetadata;
@property(copy, nonatomic) NSArray *errors; // @synthesize errors=_errors;
@property(nonatomic) long long status; // @synthesize status=_status;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithStatus:(long long)arg1 errors:(id)arg2;

@end

