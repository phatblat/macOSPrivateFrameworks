//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSSecureCoding.h"

@class CKPurchaseResponse, CKStoreClient, NSDictionary, NSError, NSString;

@interface CKPurchaseTransaction : NSObject <NSSecureCoding>
{
    NSString *_purchaseQueueIdentifier;
    BOOL _usePasswordFallback;
    NSString *_challenge;
    NSString *_signature;
    NSString *_publicKey;
    NSString *_originatingStorefront;
    BOOL _authedToBuy;
    unsigned char _state;
    id _transactionIdentifier;
    id _groupIdentifier;
    CKStoreClient *_storeClient;
    NSDictionary *_buyParameters;
    NSString *_bagURLKey;
    NSString *_forcedUsername;
    CKPurchaseResponse *_response;
    NSError *_error;
}

+ (BOOL)supportsSecureCoding;
@property(readonly) NSError *error; // @synthesize error=_error;
@property(readonly) CKPurchaseResponse *response; // @synthesize response=_response;
@property(readonly) unsigned char state; // @synthesize state=_state;
@property(readonly) BOOL authedToBuy; // @synthesize authedToBuy=_authedToBuy;
@property(readonly) NSString *forcedUsername; // @synthesize forcedUsername=_forcedUsername;
@property(readonly) NSString *bagURLKey; // @synthesize bagURLKey=_bagURLKey;
@property(readonly) NSDictionary *buyParameters; // @synthesize buyParameters=_buyParameters;
@property(readonly) CKStoreClient *storeClient; // @synthesize storeClient=_storeClient;
@property(readonly) id groupIdentifier; // @synthesize groupIdentifier=_groupIdentifier;
@property(readonly) id transactionIdentifier; // @synthesize transactionIdentifier=_transactionIdentifier;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)_initWithGroupIdentifier:(id)arg1;
- (id)_initWithPurchase:(id)arg1 groupIdentifier:(id)arg2;
@property(copy) NSString *originatingStorefront;
@property(retain) NSString *publicKey;
@property(retain) NSString *signature;
@property(retain) NSString *challenge;
@property BOOL usePasswordFallback;
@property(copy) NSString *purchaseQueueIdentifier;

@end

