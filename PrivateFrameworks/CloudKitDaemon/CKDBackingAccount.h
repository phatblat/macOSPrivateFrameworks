//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSPersonNameComponents, NSString, NSURL;

@interface CKDBackingAccount : NSObject
{
    BOOL _isPrimaryEmailVerified;
}

+ (void)deviceCountForAccount:(id)arg1 ignoreCache:(BOOL)arg2 completionHandler:(CDUnknownBlockType)arg3;
+ (void)ensureCloudKitChildAccountOnParentAccount:(id)arg1 inStore:(id)arg2;
+ (BOOL)_lockedEnsureCloudKitChildAccountOnParentAccount:(id)arg1 inStore:(id)arg2;
+ (id)accountQueue;
+ (id)fakeAccountWithEmail:(id)arg1 password:(id)arg2 propertyOverrides:(id)arg3 overridesByDataclass:(id)arg4;
+ (id)primaryAccountInStore:(id)arg1;
+ (id)accountWithIdentifier:(id)arg1 inStore:(id)arg2;
+ (Class)_platformBackingAccountClass;
@property(readonly, nonatomic) BOOL isPrimaryEmailVerified; // @synthesize isPrimaryEmailVerified=_isPrimaryEmailVerified;
- (void)deviceCountWithCompletionHandler:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic) NSString *personaIdentifier;
@property(readonly, nonatomic) NSString *sharingURLHostname;
@property(readonly, nonatomic) NSURL *privateDatabaseRPCServiceURL;
@property(readonly, nonatomic) NSURL *privateMetricsServiceURL;
- (id)privateCodeServiceURLPreferringGateway:(BOOL)arg1;
@property(readonly, nonatomic) NSURL *privateCodeServiceURL;
@property(readonly, nonatomic) NSURL *privateDeviceServiceURL;
@property(readonly, nonatomic) NSURL *privateShareServiceURL;
@property(readonly, nonatomic) NSURL *privateCloudDBURL;
- (id)urlForDataclass:(id)arg1;
- (id)urlForDataclass:(id)arg1 preferringGateway:(BOOL)arg2;
- (id)accountPropertiesForDataclass:(id)arg1;
- (void)validateVettingToken:(id)arg1 vettingEmail:(id)arg2 vettingPhone:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)updateAccountPropertiesAndSaveAccountInStore:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)renewAuthTokenInStore:(id)arg1 withOptions:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (BOOL)isDataclassEnabled:(id)arg1;
@property(readonly, nonatomic) BOOL iCloudDriveAllowsCellularAccess;
@property(readonly, nonatomic) BOOL isFakeAccount;
@property(readonly, nonatomic) NSString *serverPreferredPushEnvironment;
- (BOOL)canRenew;
- (id)iCloudAuthTokenWithError:(id *)arg1;
- (id)cloudKitAuthTokenWithError:(id *)arg1;
@property(readonly, nonatomic) NSString *displayedHostname;
@property(readonly, nonatomic) NSPersonNameComponents *fullName;
@property(readonly, nonatomic) NSString *identifier;
@property(readonly, nonatomic) NSString *dsid;
@property(readonly, nonatomic) NSString *username;
@property(readonly, nonatomic) NSString *primaryEmail;
- (id)parentAppleAccount;
- (id)ckAccount;
- (id)init;
- (id)_init;

@end

