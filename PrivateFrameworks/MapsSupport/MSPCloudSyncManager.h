//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "MSPCloudSynchronizerDelegate.h"
#import "MSPContainerObserver.h"
#import "MSPJournaling.h"

@class GEONetworkObserver, MSPCloudKitAccountAccess, MSPCloudSynchronizer, MSPContainer, MSPContainerPolicyObserver, MSPJournal, NSDate, NSObject<OS_dispatch_source>, NSString, NSUbiquitousKeyValueStore;

@interface MSPCloudSyncManager : NSObject <MSPCloudSynchronizerDelegate, MSPContainerObserver, MSPJournaling>
{
    id <MSPCloudAccess> _access;
    MSPCloudKitAccountAccess *_cloudKitAccess;
    MSPCloudSynchronizer *_synchronizer;
    MSPContainer *_container;
    MSPContainerPolicyObserver *_policyObserver;
    unsigned long long _dataCheckDelay;
    NSDate *_lastDataCheck;
    NSObject<OS_dispatch_source> *_syncTimer;
    GEONetworkObserver *_networkObserver;
    NSUbiquitousKeyValueStore *_correspondingKeyValueStore;
    BOOL _migratingFromKVS;
    BOOL _hasWrittenKVSEntriesToDiskAndMustMarkAsDone;
    MSPJournal *_journal;
}

+ (id)mergeOptionsForEarliestKnownSyncDate:(id)arg1;
+ (id)KVSMergeableStateSnapshotForOrderedRecordsWithContents:(id)arg1;
+ (id)KVSSyncItemKeyPrefix;
+ (id)KVSAdditionalStoreIdentifier;
+ (id)cloudRecordType;
+ (Class)replicaRecordClass;
+ (Class)replicaClass;
+ (id)journalName;
+ (id)boostDateDefaultsKey;
+ (id)identityDefaultsKey;
+ (BOOL)usesZoneWidePCS;
+ (id)zoneName;
- (void).cxx_destruct;
- (void)_migrateFromKVSStorageIfNeededWithCompletion:(CDUnknownBlockType)arg1;
- (void)_didChangeContentsOfKVSStore;
- (BOOL)shouldReportState:(id)arg1;
- (void)_setNeedsMergeForUserObservableChange:(BOOL)arg1 completion:(CDUnknownBlockType)arg2;
- (void)setNeedsMergeWithCompletion:(CDUnknownBlockType)arg1;
- (void)_requestMergeIfNeededForUserObservableChange:(BOOL)arg1;
- (void)requestMergeIfNeeded;
- (void)noteDidReceiveCloudKitNotificationWithUserInfo:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)synchronizer:(id)arg1 didFailAttemptingTask:(id)arg2 withError:(id)arg3 reattemptingAfterDate:(id)arg4;
- (void)containerDidEraseContents:(id)arg1 fromStorageTypes:(unsigned long long)arg2;
- (void)container:(id)arg1 didEditWithNewContents:(id)arg2 orderedEdits:(id)arg3 cause:(long long)arg4 context:(id)arg5;
- (id)taskToDownloadCloudStoreByErasingLocalStoreForSynchronizer:(id)arg1;
- (void)_finishTask:(id)arg1 byUpdatingRegistrationRecord:(id)arg2 throughAccess:(id)arg3;
- (id)taskToMergeLocalAndCloudStoresForSynchronizer:(id)arg1;
- (id)_newRegistrationRequestUpdateGroupForAccess:(id)arg1;
- (id)_newMergeGroupForAccess:(id)arg1;
- (id)_taskPerformingCachedFetchWithExpectedMergeSize:(long long)arg1 processingBlock:(CDUnknownBlockType)arg2;
- (void)synchronizer:(id)arg1 userIdentityDidLogOutWithFollowUp:(long long)arg2;
- (void)synchronizer:(id)arg1 storeNewClientRegistrationIdentifier:(id)arg2;
- (id)storedClientRegistrationIdentifierForSynchronizer:(id)arg1;
- (void)synchronizer:(id)arg1 storeNewBoostDate:(id)arg2;
- (id)storedBoostDateForSynchronizer:(id)arg1;
- (void)synchronizer:(id)arg1 storeNewUserIdentity:(id)arg2;
- (id)storedUserIdentityForSynchronizer:(id)arg1;
- (void)networkReachabilityChanged;
- (void)start;
- (id)initWithContainer:(id)arg1 options:(unsigned long long)arg2;
- (id)initWithContainer:(id)arg1 environment:(long long)arg2 options:(unsigned long long)arg3;
- (id)currentSyncClientRegistrationIdentifier;
- (void)getEditedRecords:(out id *)arg1 recordNamesToDelete:(out id *)arg2 fromExistingCloudRecords:(id)arg3 withReplica:(id)arg4 mergingWithReplica:(id)arg5 knownSyncDateForLeastRecentlySyncedClientIfAny:(id)arg6 creatingRecordsUsingAccess:(id)arg7;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

