//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "PDScheduledActivityClient.h"

@class CKContainer, NSArray, NSError, NSMutableDictionary, NSMutableSet, NSObject<OS_dispatch_group>, NSObject<OS_dispatch_queue>, NSString;

@interface PDCloudStoreContainer : NSObject <PDScheduledActivityClient>
{
    NSMutableSet *_initializationCompletionHandlers;
    NSObject<OS_dispatch_queue> *_backgroundQueue;
    NSObject<OS_dispatch_group> *_batchUpdateGroup;
    BOOL _shouldInvalidateCloudStore;
    BOOL _shouldCancelAllTasks;
    BOOL _accountChangedNotificationReceived;
    BOOL _cloudContainerSetupInProgress;
    BOOL _resettingCloudContainer;
    CKContainer *_container;
    id <PDCloudStoreContainerDelegate> _delegate;
    id <PDCloudStoreDataSource> _dataSource;
    NSArray *_subscriptionIdentifiers;
    NSArray *_zoneNames;
    NSMutableDictionary *_subscriptionsByIdentifier;
    NSMutableDictionary *_zonesByName;
    NSMutableDictionary *_changeTokensByZoneID;
    NSMutableDictionary *_completedFetchTimestampByZoneID;
    NSObject<OS_dispatch_queue> *_workQueue;
    NSError *_operationError;
    unsigned long long _nextExpectedState;
}

+ (void)invalidateServerChangeTokens;
@property(nonatomic) BOOL resettingCloudContainer; // @synthesize resettingCloudContainer=_resettingCloudContainer;
@property(nonatomic) BOOL cloudContainerSetupInProgress; // @synthesize cloudContainerSetupInProgress=_cloudContainerSetupInProgress;
@property(nonatomic) BOOL accountChangedNotificationReceived; // @synthesize accountChangedNotificationReceived=_accountChangedNotificationReceived;
@property(nonatomic) unsigned long long nextExpectedState; // @synthesize nextExpectedState=_nextExpectedState;
@property(retain, nonatomic) NSError *operationError; // @synthesize operationError=_operationError;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
@property(readonly, nonatomic) NSMutableDictionary *completedFetchTimestampByZoneID; // @synthesize completedFetchTimestampByZoneID=_completedFetchTimestampByZoneID;
@property(readonly, nonatomic) NSMutableDictionary *changeTokensByZoneID; // @synthesize changeTokensByZoneID=_changeTokensByZoneID;
@property(readonly, nonatomic) NSMutableDictionary *zonesByName; // @synthesize zonesByName=_zonesByName;
@property(readonly, nonatomic) NSMutableDictionary *subscriptionsByIdentifier; // @synthesize subscriptionsByIdentifier=_subscriptionsByIdentifier;
@property(retain, nonatomic) NSArray *zoneNames; // @synthesize zoneNames=_zoneNames;
@property(retain, nonatomic) NSArray *subscriptionIdentifiers; // @synthesize subscriptionIdentifiers=_subscriptionIdentifiers;
@property(readonly, nonatomic) __weak id <PDCloudStoreDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property(nonatomic) __weak id <PDCloudStoreContainerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) CKContainer *container; // @synthesize container=_container;
- (void).cxx_destruct;
- (id)_serverChangeTokenFromArchiveData:(id)arg1;
- (void)_markEndCloudStoreDatabaseSetupWithSuccess:(BOOL)arg1 error:(id)arg2;
- (id)_cannotPerformActionErrorWithFailureReason:(id)arg1;
- (void)_resetContainerValues;
@property(readonly, copy) NSString *description;
- (void)performScheduledActivityWithIdentifier:(id)arg1 activityCriteria:(id)arg2;
- (void)_cancelCloudStoreInitializationTimer;
- (void)_startCloudStoreInitializationTimer;
- (void)saveServerSubscriptionsForKey:(id)arg1;
- (void)saveServerZonesForKey:(id)arg1;
- (void)saveServerFetchTimestampsForKey:(id)arg1;
- (void)saveServerChangeTokensForKey:(id)arg1;
- (void)resetCachedContainerValues;
- (void)retrieveCachedServerSubscriptionsForKey:(id)arg1;
- (void)retrieveCachedServerZonesForKey:(id)arg1;
- (void)retrieveCachedServerFetchTimestampsForKey:(id)arg1;
- (void)retrieveCachedServerChangeTokensForKey:(id)arg1;
- (id)errorWithCode:(long long)arg1 description:(id)arg2;
- (void)_addOperation:(id)arg1;
- (void)_cancelAllOperations;
- (void)_retryContainerStateWithError:(id)arg1 retryCount:(unsigned long long)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_fetchAllSubscriptionsWithCompletion:(CDUnknownBlockType)arg1;
- (void)_fetchRecordZonesWithCompletion:(CDUnknownBlockType)arg1;
- (void)_zoneOperationWithZonesToSave:(id)arg1 zonesIDsToDelete:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_deleteAllZoneSubscriptionsWithCompletion:(CDUnknownBlockType)arg1;
- (void)_deleteAllZonesWithCompletion:(CDUnknownBlockType)arg1;
- (void)_subscriptionOperationWithSubscriptionsToSave:(id)arg1 subscriptionIDsToDelete:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_fetchRecordsWithQuery:(id)arg1 operationGroupName:(id)arg2 cursor:(id)arg3 fetchedRecords:(id)arg4 zone:(id)arg5 completion:(CDUnknownBlockType)arg6;
- (void)_fetchRecordsWithQuery:(id)arg1 operationGroupName:(id)arg2 zone:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)_modifyRecordsOperationWithRecordsToSave:(id)arg1 recordIDsToDelete:(id)arg2 operationGroupName:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)resetContainerWithCompletion:(CDUnknownBlockType)arg1;
- (void)removeItemsWithRecordNames:(id)arg1 itemType:(unsigned long long)arg2 completion:(CDUnknownBlockType)arg3;
- (void)itemOfItemType:(unsigned long long)arg1 recordName:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)allItemsOfItemType:(unsigned long long)arg1 storeLocally:(BOOL)arg2 userInfo:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)allItemsOfItemType:(unsigned long long)arg1 storeLocally:(BOOL)arg2 completion:(CDUnknownBlockType)arg3;
- (void)fetchRecordsWithRecordIDs:(id)arg1 operationGroupName:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)fetchAndStoreChanges:(BOOL)arg1 forceFetch:(BOOL)arg2 operationGroupName:(id)arg3 userInfo:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (void)fetchAndStoreChangesWithForceFetch:(BOOL)arg1 operationGroupName:(id)arg2 userInfo:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)fetchAndStoreChangesWithForceFetch:(BOOL)arg1 operationGroupName:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)fetchAndStoreChangesWithOperationGroupName:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)simulateCloudStorePushWithCompletion:(CDUnknownBlockType)arg1;
- (void)createZoneSubscriptions:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)createZones:(id)arg1 userInfo:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)createZones:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)updateCloudStoreWithLocalItems:(id)arg1 recordSpecificKeys:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_keychainSyncFinishedFired;
- (void)cloudStoreAccountChanged:(id)arg1;
- (void)processResultWithError:(id)arg1 nextExpectedState:(unsigned long long)arg2 retryCount:(unsigned long long)arg3 shouldRetry:(BOOL)arg4 completion:(CDUnknownBlockType)arg5;
- (void)processFetchedCloudStoreDataWithModifiedRecords:(id)arg1 deletedRecords:(id)arg2 operationGroupName:(id)arg3 shouldUpdateLocalDatabase:(BOOL)arg4 userInfo:(id)arg5 completion:(CDUnknownBlockType)arg6;
- (void)processFetchedCloudStoreDataWithModifiedRecords:(id)arg1 deletedRecords:(id)arg2 operationGroupName:(id)arg3 shouldUpdateLocalDatabase:(BOOL)arg4 completion:(CDUnknownBlockType)arg5;
- (void)setContainerState:(unsigned long long)arg1 retryCount:(unsigned long long)arg2 completion:(CDUnknownBlockType)arg3;
- (void)setContainerState:(unsigned long long)arg1 completion:(CDUnknownBlockType)arg2;
- (void)cloudStoreAccountInformationWithCompletion:(CDUnknownBlockType)arg1;
- (void)detachFromContainerWithState:(unsigned long long)arg1;
- (void)attachToContainer;
- (void)invalidateCloudStoreWithCompletion:(CDUnknownBlockType)arg1;
- (id)lastFetchDateForZoneWithName:(id)arg1;
- (id)cloudStoreSpecificKeysForItem:(id)arg1;
- (id)recordTypeForRecordID:(id)arg1;
- (id)allRecordNamesAssociatedWithRecordName:(id)arg1 inZone:(id)arg2;
- (void)saveCachedContainerValues;
- (void)readCachedContainerValues;
- (id)recordTypesForCloudStoreItemType:(unsigned long long)arg1;
- (id)zoneForCloudStoreItemType:(unsigned long long)arg1;
- (id)cloudRecordObjectFromItemType:(unsigned long long)arg1 records:(id)arg2;
- (BOOL)shouldFetchAndStoreCloudDataAtStartup;
- (BOOL)canUpdateAndFetchRecords;
- (BOOL)canInitializeContainer;
- (BOOL)isSetup;
- (BOOL)ensureContainerState:(unsigned long long)arg1;
- (void)initialCloudDatabaseSetupWithCompletion:(CDUnknownBlockType)arg1;
- (id)initWithDataSource:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

