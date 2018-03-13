//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "WBSHistoryConnectionProxyDelegate.h"
#import "WBSHistoryLoaderDelegate.h"
#import "WBSHistoryServiceDatabaseDelegate.h"
#import "WBSHistoryStore.h"

@class NSData, NSDate, NSMutableDictionary, NSMutableSet, NSObject<OS_dispatch_queue>, NSObject<OS_dispatch_source>, NSString, NSURL, WBSHistoryCrypto, WBSHistoryObjectCache, WBSPeriodicActivityScheduler;

@interface WBSHistoryServiceStore : NSObject <WBSHistoryConnectionProxyDelegate, WBSHistoryLoaderDelegate, WBSHistoryStore, WBSHistoryServiceDatabaseDelegate>
{
    Class _historyItemClass;
    unsigned long long _itemCountLimit;
    // Error parsing type: {atomic<WBSHistoryServiceStoreState>="__a_"Aq}, name: _state
    id <WBSHistoryConnectionProxy> _connection;
    NSObject<OS_dispatch_queue> *_databaseQueue;
    NSURL *_databaseURL;
    id <WBSHistoryServiceDatabaseProtocol> _database;
    WBSHistoryObjectCache *_cache;
    long long _nextTemporaryDatabaseID;
    long long _lastTemporaryDatabaseID;
    CDUnknownBlockType _loadCompletionBlock;
    NSMutableDictionary *_clientVersions;
    long long _currentGeneration;
    long long _lastSyncedGeneration;
    BOOL _commitGenerationValuesOnNextWrite;
    NSDate *_lastMaintenanceDate;
    BOOL _writeLastMaintenanceDateOnNextWrite;
    WBSPeriodicActivityScheduler *_maintenanceScheduler;
    NSObject<OS_dispatch_source> *_sendDeltaToServiceTimer;
    struct unique_ptr<SafariShared::SuddenTerminationDisabler, std::__1::default_delete<SafariShared::SuddenTerminationDisabler>> _suddenTerminationDisabler;
    BOOL _makeTestDriveVisitsPermanentOnNextWrite;
    NSMutableSet *_pendingAddsOrUpdates;
    NSMutableSet *_pendingDeletes;
    NSMutableSet *_pendingVisitDeletes;
    NSMutableSet *_pendingTombstones;
    BOOL _pushNotificationsAreInitialized;
    id <WBSHistoryStoreDelegate> _delegate;
    double _historyAgeLimit;
    NSData *_pushThrottlerData;
    NSData *_fetchThrottlerData;
    NSData *_syncCircleSizeRetrievalThrottlerData;
    unsigned long long _cachedNumberOfDevicesInSyncCircle;
    WBSHistoryCrypto *_crypto;
}

@property(readonly, nonatomic) WBSHistoryCrypto *crypto; // @synthesize crypto=_crypto;
@property(nonatomic) BOOL pushNotificationsAreInitialized; // @synthesize pushNotificationsAreInitialized=_pushNotificationsAreInitialized;
@property(nonatomic) unsigned long long cachedNumberOfDevicesInSyncCircle; // @synthesize cachedNumberOfDevicesInSyncCircle=_cachedNumberOfDevicesInSyncCircle;
@property(copy, nonatomic) NSData *syncCircleSizeRetrievalThrottlerData; // @synthesize syncCircleSizeRetrievalThrottlerData=_syncCircleSizeRetrievalThrottlerData;
@property(copy, nonatomic) NSData *fetchThrottlerData; // @synthesize fetchThrottlerData=_fetchThrottlerData;
@property(copy, nonatomic) NSData *pushThrottlerData; // @synthesize pushThrottlerData=_pushThrottlerData;
@property(nonatomic) double historyAgeLimit; // @synthesize historyAgeLimit=_historyAgeLimit;
@property(nonatomic) __weak id <WBSHistoryStoreDelegate> delegate; // @synthesize delegate=_delegate;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)historyLoaderDidFinishLoading:(id)arg1;
- (void)historyLoader:(id)arg1 didLoadItems:(id)arg2 discardedItems:(id)arg3 stringsForUserTypeDomainExpansion:(id)arg4;
- (void)_removeHistoryPlistAtURL:(id)arg1;
- (BOOL)_shouldMigrateFromPropertyListWhenLoadingDatabase:(id)arg1;
- (void)_migrateFromPlist:(id)arg1 completionHandlerToRunOnDatabaseQueue:(CDUnknownBlockType)arg2;
- (void)_migrateFromPlistIfNecessary:(id)arg1 completionHandlerToRunOnDatabaseQueue:(CDUnknownBlockType)arg2;
- (id)_visitsOrderedForInsertion:(id)arg1;
- (id)_itemsOrderedForInsertion:(id)arg1;
- (void)connectionProxyConnectionWasInterrupted:(id)arg1;
- (void)searchForUserTypedString:(id)arg1 options:(unsigned long long)arg2 currentTime:(double)arg3 enumerationBlock:(CDUnknownBlockType)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)_waitForDatabase:(CDUnknownBlockType)arg1;
- (void)handleEvent:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)reportSevereError:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)reportPermanentIDsForVisits:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)reportPermanentIDsForItems:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_processPendingWrites:(unsigned long long)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_processPendingWrites;
- (BOOL)_ensureVisitHasID:(id)arg1;
- (BOOL)_ensureItemHasID:(id)arg1;
- (long long)_generateTemporaryDatabaseID;
- (id)_processPendingVisitDeletes;
- (id)_processPendingItemDeletes;
- (void)_scheduleImmediateDeltaToService;
- (void)_scheduleSendDeltaToService;
- (void)removeAllTestDriveVisitsWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)makePermanentAllTestDriveVisits;
- (void)_setMetadataValue:(id)arg1 forKey:(id)arg2 group:(id)arg3;
- (void)updateHistoryAfterSuccessfulPersistedLongLivedSaveOperationWithGeneration:(long long)arg1 completion:(CDUnknownBlockType)arg2;
- (void)visitIdentifiersMatchingExistingVisits:(id)arg1 populateAssociatedVisits:(BOOL)arg2 completion:(CDUnknownBlockType)arg3;
- (void)getVisitsAndTombstonesNeedingSyncWithVisitSyncWindow:(double)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_updateDatabaseAfterSuccessfulSyncWithGeneration:(long long)arg1 convertTombstonesToSecureFormat:(BOOL)arg2;
- (void)_convertTombstoneWithGenerationToSecureFormat:(long long)arg1;
- (void)setServerChangeTokenData:(id)arg1;
- (void)getServerChangeTokenDataWithCompletion:(CDUnknownBlockType)arg1;
- (void)setLastSeenDate:(id)arg1 forCloudClientVersion:(unsigned long long)arg2;
- (id)lastSeenDateForCloudClientVersion:(unsigned long long)arg1;
- (id)_lastSeenDateForCloudClientVersionOnDatabaseQueue:(unsigned long long)arg1;
- (BOOL)_shouldEmitLegacyTombstones;
- (BOOL)shouldEmitLegacyTombstones;
- (void)resetCloudHistoryDataWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)_incrementCurrentGeneration;
- (void)_setLastSyncedGeneration:(unsigned long long)arg1;
- (void)_updateGenerationForVisits:(id)arg1;
- (void)pruneTombstonesWithEndDatePriorToDate:(id)arg1;
- (void)replayAndAddTombstone:(id)arg1;
- (void)getAllTombstonesWithCompletion:(CDUnknownBlockType)arg1;
- (void)_removeVisitsMatchingPredicate:(id)arg1 addingTombstone:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)_deletionPlanForDeletionOfVisits:(id)arg1;
- (void)closeWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)performMaintenance:(CDUnknownBlockType)arg1;
- (void)_performMaintenance:(CDUnknownBlockType)arg1;
- (void)_enforceAgeAndItemCountLimits:(CDUnknownBlockType)arg1;
- (double)_ageLimitSinceReferenceDate;
- (void)_expireOldVisits;
- (void)_recomputeDerivedVisitCountScores;
- (void)_scheduleMaintenance;
- (void)clearHistoryVisitsAddedAfterDate:(id)arg1 beforeDate:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)clearHistoryWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)visitTitleWasUpdated:(id)arg1;
- (void)visitsWereModified:(id)arg1;
- (void)visitsWereAdded:(id)arg1;
- (void)itemWasReplaced:(id)arg1 byItem:(id)arg2;
- (void)itemsWereModified:(id)arg1 byUserInitiatedAction:(BOOL)arg2;
- (void)itemsWereAdded:(id)arg1 byUserInitiatedAction:(BOOL)arg2;
- (void)removePastHistoryVisitsForItem:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)getVisitsCreatedAfterDate:(id)arg1 beforeDate:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)enumerateSubsequentVisitsInRedirectChainOnDatabaseQueue:(id)arg1 items:(id)arg2 enumerationBlock:(CDUnknownBlockType)arg3;
- (void)enumeratePriorVisitsInRedirectChainOnDatabaseQueue:(id)arg1 items:(id)arg2 enumerationBlock:(CDUnknownBlockType)arg3;
- (void)enumerateLastVisitForItemsOnDatabaseQueue:(id)arg1 ignoringVisits:(id)arg2 enumerationBlock:(CDUnknownBlockType)arg3;
- (void)removeVisitsOnDatabaseQueue:(id)arg1;
- (void)removeItemsOnDatabaseQueue:(id)arg1;
- (void)_addOrUpdateItemsOnDatabaseQueue:(id)arg1 userInitiated:(BOOL)arg2;
- (void)addOrUpdateItemsOnDatabaseQueue:(id)arg1;
- (id)allVisitsForItemsOnDatabaseQueue:(id)arg1;
- (id)_fetchGroupedVisitsOnDatabaseQueue:(unsigned long long)arg1 predicate:(id)arg2 enumerationBlock:(CDUnknownBlockType)arg3;
- (void)_enumerateVisitsGroupedByItem:(id)arg1 enumerationBlock:(CDUnknownBlockType)arg2;
- (id)_fetchVisitsOnDatabaseQueue:(unsigned long long)arg1 predicate:(id)arg2 error:(id *)arg3;
- (void)_fetchWithOptions:(unsigned long long)arg1 predicate:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)_fetchWithOptionsOnDatabaseQueue:(unsigned long long)arg1 predicate:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)_evaluateWithOptionsOnDatabaseQueue:(unsigned long long)arg1 predicate:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)_databaseFetchWithOptions:(unsigned long long)arg1 predicate:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)waitForLoadingToComplete;
- (void)_load;
- (id)_loadOnDatabaseQueue:(unsigned long long)arg1 readHandle:(id)arg2;
- (void)startLoading;
- (void)_connectWithOptions:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)_connectOptions;
- (id)initWithURL:(id)arg1 itemCountLimit:(unsigned long long)arg2 historyAgeLimit:(double)arg3 historyItemClass:(Class)arg4;
- (id)initWithURL:(id)arg1 itemCountLimit:(unsigned long long)arg2 historyAgeLimit:(double)arg3 historyItemClass:(Class)arg4 connectionProxy:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

