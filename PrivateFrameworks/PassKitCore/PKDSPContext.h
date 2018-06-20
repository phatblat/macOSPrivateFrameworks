//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class NSString;

@interface PKDSPContext : NSObject <NSCopying>
{
    NSString *_secureElementID;
    NSString *_serverEndpointIdentifier;
    NSString *_cardholderName;
    NSString *_phoneNumber;
    NSString *_peerPaymentRecipientAddress;
    unsigned long long _eventFrequency;
    NSString *_primaryAppleAccountFirstName;
    NSString *_primaryAppleAccountLastName;
}

@property(copy, nonatomic) NSString *primaryAppleAccountLastName; // @synthesize primaryAppleAccountLastName=_primaryAppleAccountLastName;
@property(copy, nonatomic) NSString *primaryAppleAccountFirstName; // @synthesize primaryAppleAccountFirstName=_primaryAppleAccountFirstName;
@property(nonatomic) unsigned long long eventFrequency; // @synthesize eventFrequency=_eventFrequency;
@property(copy, nonatomic) NSString *peerPaymentRecipientAddress; // @synthesize peerPaymentRecipientAddress=_peerPaymentRecipientAddress;
@property(copy, nonatomic) NSString *phoneNumber; // @synthesize phoneNumber=_phoneNumber;
@property(copy, nonatomic) NSString *cardholderName; // @synthesize cardholderName=_cardholderName;
@property(copy, nonatomic) NSString *serverEndpointIdentifier; // @synthesize serverEndpointIdentifier=_serverEndpointIdentifier;
@property(copy, nonatomic) NSString *secureElementID; // @synthesize secureElementID=_secureElementID;
- (void).cxx_destruct;
- (void)setPrimaryAppleAccount:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

