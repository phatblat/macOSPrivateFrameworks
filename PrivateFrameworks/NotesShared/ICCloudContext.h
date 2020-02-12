//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class ICSelectorDelayer, NSDictionary, NSMutableDictionary, NSMutableSet, NSObject<OS_dispatch_queue>, NSOperationQueue, NSTimer;

@interface ICCloudContext : NSObject
{
    BOOL _fetchOperationsPending;
    BOOL _needsToUpdateSubscriptions;
    BOOL _enableLongLivedOperations;
    BOOL _disableAutomaticallyRetryNetworkFailures;
    BOOL _disableRetryTimer;
    BOOL _disabled;
    BOOL _disabledInternal;
    BOOL _needsToProcessAllObjects;
    BOOL _didAddObservers;
    BOOL _fetchingEnabled;
    BOOL _syncDisabledByServer;
    BOOL _didCheckForLongLivedOperations;
    id <ICCloudContextDelegate> _cloudContextDelegate;
    long long _qualityOfService;
    unsigned long long _discretionaryNetworkBehavior;
    NSOperationQueue *_operationQueue;
    NSObject<OS_dispatch_queue> *_processingQueue;
    NSObject<OS_dispatch_queue> *_containersCreationQueue;
    NSMutableSet *_objectIDsToRetry;
    NSTimer *_retryTimer;
    NSMutableDictionary *_retryCountsByOperationType;
    NSMutableSet *_objectIDsToProcess;
    ICSelectorDelayer *_processingSelectorDelayer;
    ICSelectorDelayer *_syncSelectorDelayer;
    NSDictionary *_containersByAccountID;
    NSMutableDictionary *_accountZoneIDsNeedingFetchChanges;
    NSMutableDictionary *_accountZoneIDsFetchingChanges;
    NSMutableDictionary *_accountZoneIDsNeedingToBeSaved;
    NSMutableSet *_subscribedSubscriptionIDs;
}

+ (void)deleteAllServerChangeTokens;
+ (BOOL)shouldIgnoreErrorForBackoffTimer:(id)arg1;
+ (id)errorCodesToIgnoreForBackoffTimer;
+ (id)zoneIDsFromZoneInfos:(id)arg1;
+ (id)zoneInfosFromZoneIDs:(id)arg1;
+ (BOOL)isZoneConfigurations:(id)arg1 subsetOfZoneConfigurations:(id)arg2;
+ (id)errorsFromError:(id)arg1;
+ (BOOL)haveZoneIDsInAccountZoneIDs:(id)arg1;
+ (id)allZoneIDsInAccountZoneIDs:(id)arg1;
+ (id)deduplicatedRecordsForCloudObjects:(id)arg1;
+ (id)objectsByDatabaseScope:(id)arg1;
+ (id)objectsByAccount:(id)arg1;
+ (id)sortedRecords:(id)arg1;
+ (void)batchRecordsToSave:(id)arg1 delete:(id)arg2 maxRecordCountPerBatch:(unsigned long long)arg3 maxRecordSizePerBatch:(unsigned long long)arg4 withBlock:(CDUnknownBlockType)arg5;
+ (id)userRecordNameForContainer:(id)arg1;
+ (id)errorFromOperations:(id)arg1;
+ (id)errorFromErrors:(id)arg1;
+ (id)errorForWaitingForRetryTimer;
+ (id)errorForDisabledCloudSyncing;
+ (id)metadataZoneID;
+ (id)notesZoneID;
+ (id)newNotesContainerForAccountID:(id)arg1;
+ (id)newNotesContainer;
+ (id)sharedContext;
@property(nonatomic) BOOL didCheckForLongLivedOperations; // @synthesize didCheckForLongLivedOperations=_didCheckForLongLivedOperations;
@property(retain) NSMutableSet *subscribedSubscriptionIDs; // @synthesize subscribedSubscriptionIDs=_subscribedSubscriptionIDs;
@property(retain, nonatomic) NSMutableDictionary *accountZoneIDsNeedingToBeSaved; // @synthesize accountZoneIDsNeedingToBeSaved=_accountZoneIDsNeedingToBeSaved;
@property(retain, nonatomic) NSMutableDictionary *accountZoneIDsFetchingChanges; // @synthesize accountZoneIDsFetchingChanges=_accountZoneIDsFetchingChanges;
@property(retain, nonatomic) NSMutableDictionary *accountZoneIDsNeedingFetchChanges; // @synthesize accountZoneIDsNeedingFetchChanges=_accountZoneIDsNeedingFetchChanges;
@property(retain, nonatomic) NSDictionary *containersByAccountID; // @synthesize containersByAccountID=_containersByAccountID;
@property(nonatomic) BOOL syncDisabledByServer; // @synthesize syncDisabledByServer=_syncDisabledByServer;
@property(nonatomic, getter=isFetchingEnabled) BOOL fetchingEnabled; // @synthesize fetchingEnabled=_fetchingEnabled;
@property(nonatomic) BOOL didAddObservers; // @synthesize didAddObservers=_didAddObservers;
@property(retain) ICSelectorDelayer *syncSelectorDelayer; // @synthesize syncSelectorDelayer=_syncSelectorDelayer;
@property(retain) ICSelectorDelayer *processingSelectorDelayer; // @synthesize processingSelectorDelayer=_processingSelectorDelayer;
@property(retain, nonatomic) NSMutableSet *objectIDsToProcess; // @synthesize objectIDsToProcess=_objectIDsToProcess;
@property(nonatomic) BOOL needsToProcessAllObjects; // @synthesize needsToProcessAllObjects=_needsToProcessAllObjects;
@property(getter=isDisabledInternal) BOOL disabledInternal; // @synthesize disabledInternal=_disabledInternal;
@property(retain, nonatomic) NSMutableDictionary *retryCountsByOperationType; // @synthesize retryCountsByOperationType=_retryCountsByOperationType;
@property(retain) NSTimer *retryTimer; // @synthesize retryTimer=_retryTimer;
@property(retain, nonatomic) NSMutableSet *objectIDsToRetry; // @synthesize objectIDsToRetry=_objectIDsToRetry;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *containersCreationQueue; // @synthesize containersCreationQueue=_containersCreationQueue;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *processingQueue; // @synthesize processingQueue=_processingQueue;
@property(retain, nonatomic) NSOperationQueue *operationQueue; // @synthesize operationQueue=_operationQueue;
@property(getter=isDisabled) BOOL disabled; // @synthesize disabled=_disabled;
@property(nonatomic) BOOL disableRetryTimer; // @synthesize disableRetryTimer=_disableRetryTimer;
@property(nonatomic) BOOL disableAutomaticallyRetryNetworkFailures; // @synthesize disableAutomaticallyRetryNetworkFailures=_disableAutomaticallyRetryNetworkFailures;
@property(nonatomic) BOOL enableLongLivedOperations; // @synthesize enableLongLivedOperations=_enableLongLivedOperations;
@property(nonatomic) unsigned long long discretionaryNetworkBehavior; // @synthesize discretionaryNetworkBehavior=_discretionaryNetworkBehavior;
@property(nonatomic) long long qualityOfService; // @synthesize qualityOfService=_qualityOfService;
@property BOOL needsToUpdateSubscriptions; // @synthesize needsToUpdateSubscriptions=_needsToUpdateSubscriptions;
@property(readonly, nonatomic) BOOL fetchOperationsPending; // @synthesize fetchOperationsPending=_fetchOperationsPending;
@property(nonatomic) __weak id <ICCloudContextDelegate> cloudContextDelegate; // @synthesize cloudContextDelegate=_cloudContextDelegate;
- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (id)serverChangeTokenForChangedZonesInDatabase:(id)arg1 accountID:(id)arg2;
- (void)deleteServerChangeTokenForChangedZonesInDatabase:(id)arg1 accountID:(id)arg2;
- (void)saveServerChangeToken:(id)arg1 forChangedZonesInDatabase:(id)arg2 accountID:(id)arg3;
- (void)deleteServerChangeTokenForRecordZoneID:(id)arg1 databaseScope:(long long)arg2 accountID:(id)arg3;
- (id)serverChangeTokenForRecordZoneID:(id)arg1 databaseScope:(long long)arg2 accountID:(id)arg3;
- (void)saveServerChangeToken:(id)arg1 forRecordZoneID:(id)arg2 databaseScope:(long long)arg3 accountID:(id)arg4;
- (void)retryOperationsIfNecessary;
- (void)startRetryTimerIfNecessaryWithError:(id)arg1;
- (void)incrementOrClearRetryCountForOperationType:(id)arg1 error:(id)arg2;
- (void)clearRetryCountForOperationType:(id)arg1;
- (void)incrementRetryCountForOperationType:(id)arg1;
- (void)checkForLongLivedOperations;
- (void)updateCloudContextStateOnlyIfReachable:(BOOL)arg1;
- (void)updateCloudContextState;
- (BOOL)isInForeground;
- (void)clearSubscribedSubscriptionIDs;
- (void)saveSubscriptionsForDatabase:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)fetchSubscriptionsForDatabase:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)updateSubscriptionsWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)subscriptionForDatabase:(id)arg1;
- (void)clearZoneFetchState;
- (void)saveZoneFetchState;
- (void)loadZoneFetchState;
- (void)fetchDatabaseChangesOperation:(id)arg1 finishedWithServerChangeToken:(id)arg2 accountID:(id)arg3 error:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)fetchDatabaseChangesOperation:(id)arg1 changeTokenUpdated:(id)arg2 accountID:(id)arg3;
- (void)fetchDatabaseChangesOperation:(id)arg1 recordZoneWithIDWasDeleted:(id)arg2 accountID:(id)arg3;
- (void)fetchDatabaseChangesOperation:(id)arg1 recordZoneWithIDChanged:(id)arg2 accountID:(id)arg3;
- (id)operationToFetchDatabaseChangesForDatabase:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)fetchDatabaseChangesForDatabases:(id)arg1 reason:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)fetchDatabaseChangesWithReason:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)fireSyncRequest;
- (void)syncIfNeeded;
- (void)fetchRecordZoneChangesOperation:(id)arg1 zoneID:(id)arg2 accountID:(id)arg3 changeTokenUpdated:(id)arg4;
- (void)fetchRecordZoneChangesOperation:(id)arg1 recordWasDeletedWithRecordID:(id)arg2 recordType:(id)arg3 context:(id)arg4;
- (void)fetchRecordZoneChangesOperation:(id)arg1 recordChanged:(id)arg2 context:(id)arg3;
- (void)fetchRecordZoneChangesOperationDidComplete:(id)arg1 error:(id)arg2;
- (void)fetchRecordZoneChangesOperation:(id)arg1 completedFetchForZoneID:(id)arg2 serverChangeToken:(id)arg3 error:(id)arg4;
- (id)newOperationToFetchRecordZoneChangesWithZoneConfigurations:(id)arg1 database:(id)arg2;
- (id)operationToFetchRecordZoneChangesForZoneIDs:(id)arg1 database:(id)arg2;
- (id)operationsToFetchRecordZoneChangesForZoneIDs:(id)arg1 accountID:(id)arg2;
- (void)addOperationsToFetchRecordZoneChangesForAccountZoneIDs:(id)arg1 reason:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)fetchRecordZoneChangesForAccountZoneIDs:(id)arg1 reason:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)fetchRecordZoneChangesForZoneIDs:(id)arg1 accountID:(id)arg2 reason:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)fetchRecordZoneChangesWithReason:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)validateAccountZoneIDsNeedingFetchChanges;
- (void)handleNotification:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)handleDatabaseNotification:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_processCloudObjects:(id)arg1 operationQueue:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)processObjectIDs:(id)arg1 operationQueue:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)processAllCloudObjectsWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)processPendingCloudObjectsWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)processPendingCloudObjects;
- (void)addOperationToProcessObjectsWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)contextDidSave:(id)arg1;
- (id)operationToSaveZonesForZoneIDs:(id)arg1 accountID:(id)arg2;
- (id)operationToSaveZonesIfNecessaryForAccountID:(id)arg1;
- (void)addDependenciesForModifyRecordsOperation:(id)arg1;
- (void)recursiveCancelDependentOperations:(id)arg1;
- (BOOL)partialError:(id)arg1 containsErrorCode:(long long)arg2;
- (void)handleGenericPartialFailuresForError:(id)arg1 operation:(id)arg2;
- (void)modifyRecordsOperation:(id)arg1 didCompleteWithSavedRecords:(id)arg2 deletedRecordIDs:(id)arg3 rootRecordIDsByShareID:(id)arg4 error:(id)arg5;
- (void)modifyRecordsOperation:(id)arg1 perDeleteRecordIDCompletion:(id)arg2 rootRecordIDsByShareID:(id)arg3 error:(id)arg4;
- (void)modifyRecordsOperation:(id)arg1 perSaveRecordCompletion:(id)arg2 error:(id)arg3;
- (void)addCallbackBlocksToModifyRecordsOperation:(id)arg1 rootRecordIDsByShareID:(id)arg2;
- (id)operationToModifyRecordsToSave:(id)arg1 delete:(id)arg2 rootRecordIDsByShareID:(id)arg3 database:(id)arg4;
- (id)operationsToModifyRecordsToSave:(id)arg1 delete:(id)arg2 rootRecordIDsByShareID:(id)arg3 database:(id)arg4;
- (id)operationsToModifyRecordsForCloudObjectsToSave:(id)arg1 delete:(id)arg2 deleteShares:(id)arg3 saveUserSpecificRecords:(id)arg4 operationGroupName:(id)arg5 addDependencies:(BOOL)arg6 accountID:(id)arg7;
- (void)_addModifyRecordsOperationsWithCloudObjectsToSave:(id)arg1 delete:(id)arg2 accountID:(id)arg3 operationGroupName:(id)arg4 waitForDependencies:(BOOL)arg5 completionHandler:(CDUnknownBlockType)arg6;
- (void)addModifyRecordsOperationsWithCloudObjectsToSave:(id)arg1 delete:(id)arg2 accountID:(id)arg3 operationGroupName:(id)arg4 waitForDependencies:(BOOL)arg5 completionHandler:(CDUnknownBlockType)arg6;
- (void)deleteSharesForObjects:(id)arg1 accountID:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)deleteSharesForObjects:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)pushCloudObjects:(id)arg1 operationGroupName:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)didFetchShare:(id)arg1 accountID:(id)arg2 context:(id)arg3;
- (void)fetchOperation:(id)arg1 didCompleteWithRecordsByRecordID:(id)arg2 error:(id)arg3;
- (void)fetchOperation:(id)arg1 fetchedRecord:(id)arg2 recordID:(id)arg3 error:(id)arg4;
- (void)fetchOperation:(id)arg1 progressWithRecordID:(id)arg2 progress:(double)arg3;
- (id)operationToFetchRecordIDs:(id)arg1 database:(id)arg2 qualityOfService:(long long)arg3;
- (id)operationsToFetchRecordIDs:(id)arg1 database:(id)arg2 qualityOfService:(long long)arg3;
- (id)operationsToFetchRecordIDs:(id)arg1 qualityOfService:(long long)arg2 operationGroupName:(id)arg3 accountID:(id)arg4;
- (void)addFetchOperationsForRecordIDs:(id)arg1 accountID:(id)arg2 qualityOfService:(long long)arg3 operationGroupName:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)fetchRecordIDs:(id)arg1 accountID:(id)arg2 operationGroupName:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)fetchCloudObjects:(id)arg1 accountID:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)newPlaceholderObjectForRecordID:(id)arg1 recordType:(id)arg2 accountID:(id)arg3 context:(id)arg4;
- (id)newCloudObjectForRecord:(id)arg1 accountID:(id)arg2 context:(id)arg3;
- (id)existingCloudObjectForUserSpecificRecordID:(id)arg1 createPlaceholderIfNecessary:(BOOL)arg2 accountID:(id)arg3 context:(id)arg4;
- (id)existingCloudObjectForRecordID:(id)arg1 recordType:(id)arg2 accountID:(id)arg3 context:(id)arg4 excludingRecordTypes:(id)arg5;
- (id)existingCloudObjectForRecordID:(id)arg1 recordType:(id)arg2 accountID:(id)arg3 context:(id)arg4;
- (id)existingCloudObjectForRecord:(id)arg1 accountID:(id)arg2 context:(id)arg3;
- (void)fetchUserRecordWithContainer:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)fetchUserRecordWithAccountID:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)updateAccountStatusWithCompletionHandler:(CDUnknownBlockType)arg1;
@property(nonatomic) long long accountStatus;
- (void)pauseCloudSyncWhileSynchronouslyPerformingBlock:(CDUnknownBlockType)arg1;
- (void)finishOperationsForRecordID:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (BOOL)canRetryImmediatelyAfterError:(id)arg1;
- (double)timeIntervalToRetryAfterFromError:(id)arg1;
- (BOOL)isInternetReachable;
- (BOOL)isFetchingAllRecordZones;
- (void)deleteRecordZonesWithZoneIDs:(id)arg1 accountID:(id)arg2 markZonesAsUserPurged:(BOOL)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)clearPendingActivity;
- (void)cancelEverythingWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)_syncWithReason:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)syncWithReason:(id)arg1 onlyIfReachable:(BOOL)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)syncWithReason:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)allCloudObjectsInContext:(id)arg1;
- (void)receivedZoneNotFound:(id)arg1 operation:(id)arg2;
- (id)allZoneIDs;
- (void)addStateHandler;
- (void)printOperationQueue;
- (BOOL)hasPendingOperations;
- (void)cloudKitAccountChanged:(id)arg1;
- (void)reachabilityChanged:(id)arg1;
@property(readonly, nonatomic) NSDictionary *cloudObjectClassesByRecordType;
- (void)updateSelectorDelayers;
- (void)updateConfiguration;
- (void)disableCloudSyncingIfCurrentVersionNotSuppported;
- (BOOL)isCloudKitAccountAvailable;
- (BOOL)isReadyToSync;
- (id)readinessLoggingDescription;
- (void)dealloc;
- (id)containerForAccountID:(id)arg1;
- (void)clearContainers;
- (id)init;

@end

