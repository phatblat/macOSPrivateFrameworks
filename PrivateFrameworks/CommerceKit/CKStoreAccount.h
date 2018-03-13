//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"
#import "NSSecureCoding.h"

@class NSNumber, NSString;

@interface CKStoreAccount : NSObject <NSCopying, NSSecureCoding>
{
    NSString *_clientIdentifier;
    long long _serverType;
    NSString *_token;
    unsigned char _kind;
    BOOL _isManagedStudent;
    NSNumber *_dsID;
    NSString *_identifier;
    NSString *_credit;
}

+ (BOOL)supportsSecureCoding;
+ (id)_storeAccountFromLegacyStoreAccount:(id)arg1 client:(id)arg2;
@property(readonly) NSString *credit; // @synthesize credit=_credit;
@property(readonly) BOOL isManagedStudent; // @synthesize isManagedStudent=_isManagedStudent;
@property(readonly) NSString *identifier; // @synthesize identifier=_identifier;
@property(readonly) NSNumber *dsID; // @synthesize dsID=_dsID;
@property(readonly) unsigned char kind; // @synthesize kind=_kind;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)description;
- (BOOL)isEqual:(id)arg1;
@property(readonly) BOOL isPrimary;
@property(readonly) BOOL isSignedIn;
- (void)_setCredit:(id)arg1;
- (void)_setToken:(id)arg1;
- (id)_token;
- (long long)_serverType;
- (id)_clientIdentifier;
- (id)_plist;
- (id)_legacyStoreAccount;
- (id)_initWithStoreClient:(id)arg1 plist:(id)arg2;
- (id)_initWithStoreClient:(id)arg1 response:(id)arg2;

@end

