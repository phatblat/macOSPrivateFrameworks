//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "EDAMUserStore.h"

@class NSString;

@interface EDAMUserStoreClient : NSObject <EDAMUserStore>
{
    id <ENTProtocol> _inProtocol;
    id <ENTProtocol> _outProtocol;
}

- (void).cxx_destruct;
- (id)getConnectedIdentities:(id)arg1 identityIds:(id)arg2;
- (id)getAccountLimits:(int)arg1;
- (id)createSessionAuthenticationToken:(id)arg1;
- (void)unregisterForSyncPushNotifications:(id)arg1;
- (id)registerForSyncPushNotifications:(id)arg1 credentials:(id)arg2;
- (id)listBusinessInvitations:(id)arg1 includeRequestedInvitations:(BOOL)arg2;
- (id)listBusinessUsers:(id)arg1;
- (void)updateBusinessUserIdentifier:(id)arg1 oldEmailAddress:(id)arg2 newEmailAddress:(id)arg3;
- (void)removeFromBusiness:(id)arg1 emailAddress:(id)arg2;
- (void)inviteToBusiness:(id)arg1 emailAddress:(id)arg2;
- (id)getUserUrls:(id)arg1;
- (id)getNoteStoreUrl:(id)arg1;
- (id)getSubscriptionInfo:(id)arg1;
- (id)getPremiumInfo:(id)arg1;
- (id)getPublicUserInfo:(id)arg1;
- (id)getUser:(id)arg1;
- (id)refreshAuthentication:(id)arg1;
- (id)authenticateToBusiness:(id)arg1;
- (void)revokeLongSession:(id)arg1;
- (id)completeTwoFactorAuthentication:(id)arg1 oneTimeCode:(id)arg2 deviceIdentifier:(id)arg3 deviceDescription:(id)arg4;
- (id)authenticateLongSessionV2:(id)arg1;
- (id)authenticateLongSession:(id)arg1 password:(id)arg2 consumerKey:(id)arg3 consumerSecret:(id)arg4 deviceIdentifier:(id)arg5 deviceDescription:(id)arg6 supportsTwoFactor:(BOOL)arg7;
- (id)authenticateOpenID:(id)arg1 consumerKey:(id)arg2 consumerSecret:(id)arg3 deviceIdentifier:(id)arg4 deviceDescription:(id)arg5 authLongSession:(BOOL)arg6 supportsTwoFactor:(BOOL)arg7;
- (id)authenticate:(id)arg1 password:(id)arg2 consumerKey:(id)arg3 consumerSecret:(id)arg4 supportsTwoFactor:(BOOL)arg5;
- (id)getBootstrapInfo:(id)arg1;
- (BOOL)checkVersion:(id)arg1 edamVersionMajor:(short)arg2 edamVersionMinor:(short)arg3;
- (id)initWithInProtocol:(id)arg1 outProtocol:(id)arg2;
- (id)initWithProtocol:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
