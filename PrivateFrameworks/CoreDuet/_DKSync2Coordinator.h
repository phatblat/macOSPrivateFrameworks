//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "APSConnectionDelegate.h"

@class APSConnection, NSMutableArray, NSMutableSet, NSString, _CDPeriodicSchedulerJob, _DKDataProtectionStateMonitor, _DKKnowledgeStorage, _DKSync2State, _DKSyncPeerStatusTracker, _DKSyncToggle, _DKThrottledActivity;

@interface _DKSync2Coordinator : NSObject <APSConnectionDelegate>
{
    id <_DKKeyValueStore> _keyValueStore;
    _DKThrottledActivity *_activityThrottler;
    id <NSObject> _observerToken;
    NSMutableSet *_busyTransactions;
    _DKSyncPeerStatusTracker *_tracker;
    NSMutableArray *_insertedSyncedEvents;
    NSMutableArray *_deletedSyncedEvents;
    NSMutableSet *_activatedPeers;
    _DKDataProtectionStateMonitor *_dataProtectionMonitor;
    BOOL _hasRegisteredOptionalObservers;
    BOOL _isEnabled;
    BOOL _hasSyncedUpHistoryToCloud;
    NSString *_triggeredSyncDelayActivityName;
    NSString *_syncActivityName;
    _DKSync2State *_syncState;
    double _periodicJobInterval;
    BOOL _databaseObserversRegistered;
    BOOL _cloudDeviceCountChangedObserverRegistered;
    BOOL _cloudSyncAvailablityObserverRegistered;
    BOOL _rapportAvailablityObserverRegistered;
    BOOL _syncPolicyChangedObserverRegistered;
    APSConnection *_connection;
    NSMutableSet *_streamNamesObservedForAdditions;
    NSMutableSet *_streamNamesObservedForDeletions;
    _DKSyncToggle *_syncEnabledToggler;
    _DKSyncToggle *_someTransportIsAvailableToggler;
    _DKSyncToggle *_cloudIsAvailableToggler;
    _DKSyncToggle *_rapportIsAvailableToggler;
    _CDPeriodicSchedulerJob *_periodicJob;
    BOOL _isBusy;
    _DKKnowledgeStorage *_storage;
    id <_DKSyncLocalKnowledgeStorage> _localStorage;
    id <_DKSyncRemoteKnowledgeStorage> _transportCloudDown;
    id <_DKSyncRemoteKnowledgeStorage> _transportCloudUp;
    id <_DKSyncRemoteKnowledgeStorage> _transportRapport;
}

+ (BOOL)isOnPower;
+ (id)streamNamesToSync;
+ (BOOL)canPerformSyncOperationWithClass:(Class)arg1 syncType:(id)arg2 history:(id)arg3 transport:(id)arg4 peer:(id)arg5 policy:(id)arg6;
+ (id)keyValueStoreForDomain:(id)arg1;
+ (id)storage;
@property(retain, nonatomic) id <_DKSyncRemoteKnowledgeStorage> transportRapport; // @synthesize transportRapport=_transportRapport;
@property(retain, nonatomic) id <_DKSyncRemoteKnowledgeStorage> transportCloudUp; // @synthesize transportCloudUp=_transportCloudUp;
@property(retain, nonatomic) id <_DKSyncRemoteKnowledgeStorage> transportCloudDown; // @synthesize transportCloudDown=_transportCloudDown;
@property(retain, nonatomic) id <_DKSyncLocalKnowledgeStorage> localStorage; // @synthesize localStorage=_localStorage;
@property BOOL isBusy; // @synthesize isBusy=_isBusy;
@property(readonly, nonatomic) _DKKnowledgeStorage *storage; // @synthesize storage=_storage;
- (void).cxx_destruct;
- (void)removeBusyTransaction:(id)arg1;
- (id)createBusyTransactionWithName:(const char *)arg1;
- (void)_destroyPushConnection;
- (void)_createPushConnection;
- (void)_unregisterSyncPolicyChangedObserver;
- (void)_registerSyncPolicyChangedObserver;
- (void)_syncPolicyDidChange:(id)arg1;
- (void)_unregisterRapportAvailablityObserver;
- (void)_registerRapportAvailablityObserver;
- (void)_unregisterCloudDeviceCountChangedObserver;
- (void)_registerCloudDeviceCountChangedObserver;
- (void)_unregisterCloudSyncAvailablityObserver;
- (void)_registerCloudSyncAvailablityObserver;
- (void)_cloudSyncAvailabilityDidChange:(id)arg1;
- (void)_unregisterDatabaseObservers;
- (void)_registerDatabaseObservers;
- (void)knowledgeStorage:(id)arg1 didDeleteEventsWithStreamNameCounts:(id)arg2;
- (void)_databaseDidDeleteFromStreamNameCounts:(id)arg1;
- (void)_databaseDidDeleteFromStreamName:(id)arg1;
- (void)knowledgeStorage:(id)arg1 didInsertEventsWithStreamNameCounts:(id)arg2;
- (void)_databaseDidAddToStreamNameCounts:(id)arg1;
- (void)_databaseDidAddToStreamName:(id)arg1;
- (void)_databaseDidDeleteSyncedEvents:(id)arg1;
- (void)knowledgeStorage:(id)arg1 didDeleteSyncedEvents:(id)arg2;
- (void)_databaseDidInsertSyncedEvents:(id)arg1;
- (void)knowledgeStorage:(id)arg1 didInsertSyncedEvents:(id)arg2;
- (void)knowledgeStorage:(id)arg1 didHaveInsertsAndDeletesWithCount:(unsigned long long)arg2;
- (void)handleDataProtectionChangeFor:(id)arg1 willBeAvailable:(BOOL)arg2;
- (void)_unregisterPeriodicJob;
- (void)_registerPeriodicJobWithInterval:(double)arg1;
- (void)_reregisterPeriodicJob;
- (void)_registerPeriodicJob;
- (id)_executionCriteriaWithInterval:(double)arg1;
- (double)_intervalForJobGivenIsSingleDevice:(BOOL)arg1;
- (void)_performPeriodicJob;
- (void)_performInitialSync;
- (void)_possiblyPerformInitialSync;
- (void)__finishSyncWithTransaction:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)__performSyncWithCompletion:(CDUnknownBlockType)arg1;
- (void)_performSyncWithSyncType:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_synchronizeWithUrgency:(unsigned long long)arg1 client:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_performSyncWithForceSync:(BOOL)arg1 completion:(CDUnknownBlockType)arg2;
- (void)deleteRemoteStateWithReply:(CDUnknownBlockType)arg1;
- (void)synchronizeWithUrgency:(unsigned long long)arg1 client:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (void)syncWithReply:(CDUnknownBlockType)arg1;
- (void)handleFetchedSourceDeviceID:(id)arg1 fromPeer:(id)arg2 error:(id)arg3;
- (void)fetchSourceDeviceIDFromPeer:(id)arg1;
- (id)deletedEventIDsSinceDate:(id)arg1 streamNames:(id)arg2 error:(id *)arg3;
- (id)sortedEventsWithCreationDateBetweenDate:(id)arg1 andDate:(id)arg2 streamNames:(id)arg3 limit:(unsigned long long)arg4 fetchOrder:(long long)arg5 error:(id *)arg6;
- (void)possiblyUpdateIsBusyProperty;
- (void)handleStatusChangeForPeer:(id)arg1 previousTransports:(long long)arg2;
- (id)policyForSyncTransport:(id)arg1;
- (id)policyForSyncTransportType:(long long)arg1;
- (void)start;
- (void)setupStorage;
- (void)configureTracker;
- (void)_performEnableAndStart;
- (void)_rapportIsUnavailableToggle;
- (void)_rapportIsAvailableToggle;
- (void)_cloudIsUnavailableToggle;
- (void)_cloudIsAvailableToggle;
- (void)_noTransportIsAvailableToggle;
- (void)_someTransportIsAvailableToggle;
- (void)_syncDisabledToggle;
- (void)_syncEnabledToggle;
- (void)_performSyncTogglesChangedActions;
- (id)deviceUUID;
- (void)dealloc;
- (id)initWithStorage:(id)arg1;
- (void)connection:(id)arg1 didReceiveIncomingMessage:(id)arg2;
- (void)connection:(id)arg1 didReceivePublicToken:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

