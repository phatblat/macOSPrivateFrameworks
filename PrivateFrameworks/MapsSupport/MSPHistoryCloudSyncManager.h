//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <MapsSupport/MSPCloudSyncManager.h>

@interface MSPHistoryCloudSyncManager : MSPCloudSyncManager
{
}

+ (id)KVSMergeableStateSnapshotForOrderedRecordsWithContents:(id)arg1;
+ (id)KVSSyncItemKeyPrefix;
+ (id)KVSAdditionalStoreIdentifier;
+ (id)mergeOptionsForEarliestKnownSyncDate:(id)arg1;
+ (id)cloudRecordType;
+ (Class)replicaRecordClass;
+ (Class)replicaClass;
+ (id)journalName;
+ (id)boostDateDefaultsKey;
+ (id)identityDefaultsKey;
+ (BOOL)usesZoneWidePCS;
+ (id)zoneName;
- (void)getEditedRecords:(out id *)arg1 recordNamesToDelete:(out id *)arg2 fromExistingCloudRecords:(id)arg3 withReplica:(id)arg4 mergingWithReplica:(id)arg5 knownSyncDateForLeastRecentlySyncedClientIfAny:(id)arg6 creatingRecordsUsingAccess:(id)arg7;

@end

