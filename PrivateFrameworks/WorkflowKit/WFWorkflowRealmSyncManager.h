//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "WFApplicationStateObserver.h"
#import "WFDatabaseResultObserver.h"

@class NSLock, NSMutableArray, NSObject<OS_dispatch_queue>, NSObject<OS_dispatch_source>, WFDatabase, WFDatabaseResult;

@interface WFWorkflowRealmSyncManager : NSObject <WFApplicationStateObserver, WFDatabaseResultObserver>
{
    BOOL _pendingResume;
    BOOL _syncPending;
    long long _accountStatus;
    id <WFUserInterface> _userInterface;
    WFDatabase *_database;
    WFDatabaseResult *_databaseResultForObservation;
    unsigned long long _pauseCount;
    unsigned long long _start;
    NSObject<OS_dispatch_source> *_timer;
    NSLock *_timerLock;
    NSObject<OS_dispatch_queue> *_syncSessionQueue;
    NSLock *_completionHandlerLock;
    NSMutableArray *_completionHandlers;
}

+ (void)setDefaultManager:(id)arg1;
+ (id)defaultManager;
@property(readonly, nonatomic) BOOL syncPending; // @synthesize syncPending=_syncPending;
@property(readonly, nonatomic) NSMutableArray *completionHandlers; // @synthesize completionHandlers=_completionHandlers;
@property(readonly, nonatomic) NSLock *completionHandlerLock; // @synthesize completionHandlerLock=_completionHandlerLock;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *syncSessionQueue; // @synthesize syncSessionQueue=_syncSessionQueue;
@property(readonly, nonatomic) NSLock *timerLock; // @synthesize timerLock=_timerLock;
@property(retain, nonatomic) NSObject<OS_dispatch_source> *timer; // @synthesize timer=_timer;
@property(nonatomic) unsigned long long start; // @synthesize start=_start;
@property(nonatomic) BOOL pendingResume; // @synthesize pendingResume=_pendingResume;
@property(nonatomic) unsigned long long pauseCount; // @synthesize pauseCount=_pauseCount;
@property(retain, nonatomic) WFDatabaseResult *databaseResultForObservation; // @synthesize databaseResultForObservation=_databaseResultForObservation;
@property(readonly, nonatomic) WFDatabase *database; // @synthesize database=_database;
@property(retain, nonatomic) id <WFUserInterface> userInterface; // @synthesize userInterface=_userInterface;
@property(readonly, nonatomic) long long accountStatus; // @synthesize accountStatus=_accountStatus;
- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)stopObservingUserDefaults;
- (void)startObservingUserDefaults;
- (id)userDefaultsKeysToObserve;
- (void)handleAccountChangedNotification:(id)arg1;
- (void)unsubscribeFromCloudKitAccountStatusNotifications;
- (void)subscribeToCloudKitAccountStatusNotifications;
- (void)updateAccountStatus;
- (void)databaseResult:(id)arg1 didUpdateObjects:(id)arg2 inserted:(id)arg3 removed:(id)arg4;
- (void)applicationContext:(id)arg1 applicationStateDidChange:(long long)arg2;
- (void)resumeAutomaticUpdates;
- (void)pauseAutomaticUpdates;
- (void)stopAutomaticUpdates;
- (void)startAutomaticUpdates;
- (void)triggerSync:(BOOL)arg1 onlyIfPending:(BOOL)arg2 completion:(CDUnknownBlockType)arg3;
- (void)triggerSync:(BOOL)arg1 completion:(CDUnknownBlockType)arg2;
- (void)completeSyncWithSuccess:(BOOL)arg1 changes:(BOOL)arg2 error:(id)arg3;
- (void)pushCompletionHandler:(CDUnknownBlockType)arg1;
- (void)handleUserDeletedZoneErrorIfNeededWithSuccess:(BOOL)arg1 changes:(BOOL)arg2 error:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)startSync;
- (void)dealloc;
- (id)initWithDatabase:(id)arg1;

@end
