//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IDSAccountDelegate.h"

@class NSArray, NSDictionary, NSMutableDictionary, NSSet, NSString;

@interface IMDAccountController : NSObject <IDSAccountDelegate>
{
    NSMutableDictionary *_accounts;
    NSMutableDictionary *_activeAccounts;
    NSSet *_operationalAccountsCache;
    BOOL _isLoading;
    BOOL _isFirstLoad;
    BOOL _networkDataAvailable;
}

+ (id)sharedAccountController;
+ (id)sharedInstance;
@property(nonatomic) BOOL networkDataAvailable; // @synthesize networkDataAvailable=_networkDataAvailable;
@property(readonly, nonatomic) BOOL isLoading; // @synthesize isLoading=_isLoading;
- (void)account:(id)arg1 isActiveChanged:(BOOL)arg2;
- (id)_nicknameController;
- (BOOL)_isOperationalForAccount:(id)arg1;
- (id)_operationalAccounts;
- (void)_rebuildOperationalAccountsCache;
- (void)_checkPowerAssertion;
- (id)anySessionForServiceName:(id)arg1;
- (id)sessionForAccount:(id)arg1;
@property(readonly, nonatomic) NSArray *activeSessions;
- (id)accountForIDSAccountUniqueID:(id)arg1;
- (id)connectingAccountsForService:(id)arg1;
@property(readonly, nonatomic) NSArray *connectingAccounts;
- (id)connectedAccountsForService:(id)arg1;
@property(readonly, nonatomic) NSArray *connectedAccounts;
- (id)activeAccountsForService:(id)arg1;
@property(readonly, nonatomic) NSArray *activeAccounts;
- (id)accountsForService:(id)arg1;
- (id)accountForAccountID:(id)arg1;
- (id)accountsForLoginID:(id)arg1 onService:(id)arg2;
@property(readonly, nonatomic) NSArray *accounts;
- (void)setupAccount:(id)arg1;
- (void)removeAccount:(id)arg1;
- (void)addAccount:(id)arg1;
- (BOOL)isAccountActive:(id)arg1;
- (BOOL)_isAccountActive:(id)arg1 forService:(id)arg2;
- (void)deactivateAccount:(id)arg1 force:(BOOL)arg2;
- (void)deactivateAccounts:(id)arg1;
- (void)deactivateAccount:(id)arg1;
- (void)deactivateAccounts:(id)arg1 force:(BOOL)arg2;
- (void)activateAccounts:(id)arg1;
- (void)activateAccount:(id)arg1;
- (void)save;
- (void)deferredSave;
- (void)load;
- (void)_daemonWillShutdown:(id)arg1;
- (void)dealloc;
- (id)init;
@property(readonly, nonatomic) NSDictionary *loadOldStatusStore;
- (id)_superFormatFromAIML:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

