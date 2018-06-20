//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "MCActivityTarget.h"

@class NSMapTable, NSMutableArray, NSMutableDictionary, NSMutableSet, NSString, NSTimer;

@interface MFAccountStatus : NSObject <MCActivityTarget>
{
    NSMutableDictionary *_states;
    NSMutableDictionary *_stateDetails;
    NSMapTable *_clients;
    NSMutableSet *_allRegisteredAccounts;
    unsigned long long _allRegisteredTypes;
    NSMutableArray *_accountRefreshQueue;
    NSTimer *_refreshTimer;
}

+ (id)sharedStatus;
@property(readonly, nonatomic) NSTimer *refreshTimer; // @synthesize refreshTimer=_refreshTimer;
- (void).cxx_destruct;
- (void)_accountStatusUpdatedWithInfo:(id)arg1;
- (void)_refreshAccountStatus:(id)arg1;
- (void)_refreshAccounts:(id)arg1 clearingStatus:(BOOL)arg2;
- (void)refreshStatusForClient:(id)arg1 forceRefresh:(BOOL)arg2;
- (void)refreshAndClearStatus:(BOOL)arg1;
- (void)_accountInfoChanged:(id)arg1;
- (void)_networkChanged:(id)arg1;
- (void)_timedRefresh:(id)arg1;
- (void)_setStatusDetails:(id)arg1 forAccount:(id)arg2;
- (id)accountStatusDetails:(id)arg1;
- (void)_setStatus:(long long)arg1 forAccount:(id)arg2;
- (long long)knownAccountStatus:(id)arg1;
- (long long)accountStatus:(id)arg1;
- (id)_accountsForTypes:(unsigned long long)arg1;
- (id)_allRegisteredAccounts;
- (id)_registeredAccountsForClient:(id)arg1 onlyWithUnknownStatus:(BOOL)arg2;
- (id)registeredAccountsForClient:(id)arg1;
- (void)unregisterClient:(id)arg1;
- (void)registerAccounts:(id)arg1 forClient:(id)arg2;
- (void)registerAccountTypes:(unsigned long long)arg1 forClient:(id)arg2;
- (void)registerAccountTypes:(unsigned long long)arg1 accounts:(id)arg2 forClient:(id)arg3;
- (void)invalidate;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, copy, nonatomic) NSString *displayName;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

