//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class PPDKStorage, PPRecordStorageHelper, PPSQLDatabase;

@interface PPNamedEntityStorage : NSObject
{
    PPSQLDatabase *_db;
    PPDKStorage *_dkStorage;
    id _deletionObserver;
    PPRecordStorageHelper *_storageHelper;
}

+ (double)_scoreEntityWithInitialScore:(double)arg1 decayRate:(double)arg2 extractionDate:(id)arg3 scoringDate:(id)arg4;
+ (id)_loadTrieFromLocalAsset:(id)arg1;
- (void).cxx_destruct;
- (id)tempTableForSourceIdsExcludedAlgorithms:(id)arg1 txnWitness:(id)arg2;
- (double)duetWriteBatchInterval;
- (unsigned int)duetWriteBatchSize;
- (unsigned int)duetReadBatchSize;
- (void)disableSyncForBundleIds:(id)arg1;
- (struct _PASDBIterAction_)_populateEvents:(id)arg1 statement:(id)arg2 txnWitness:(id)arg3;
- (void)fixupNamedEntityDKEventsWithBatchSize:(unsigned int)arg1 isComplete:(char *)arg2;
- (void)clearRemotelyGeneratedNamedEntityRecordsMissingInDuet;
- (void)_exportNamedEntityRecordsToDKWithLimit:(unsigned int)arg1 isComplete:(char *)arg2 txnWitness:(id)arg3;
- (void)exportLocallyGeneratedNamedEntityRecordsToDKWithLimit:(unsigned int)arg1 isComplete:(char *)arg2;
- (void)_dkEventImportToDatabaseWithEvent:(id)arg1 eventUUIDBlob:(id)arg2 txnWitness:(id)arg3;
- (void)_importDKEventsWithLimit:(unsigned int)arg1 remoteEventsOnly:(BOOL)arg2 isComplete:(char *)arg3;
- (void)_asyncPopulateDatabaseFromDKEventsIfNecessary;
- (void)importRemotelyGeneratedNamedEntityDKEventsWithLimit:(unsigned int)arg1 isComplete:(char *)arg2;
- (void)_truncateRecordsByDroppingOldestMakingRoomForCount:(unsigned int)arg1 txnWitness:(id)arg2;
- (void)processNewDKEventDeletions;
- (void)_asyncProcessNewDKEventDeletions;
- (id)_deletionQueue;
- (BOOL)deleteAllNamedEntitiesFromSourcesWithBundleId:(id)arg1 groupId:(id)arg2 olderThanDate:(id)arg3 atLeastOneNamedEntityRemoved:(char *)arg4 deletedCount:(unsigned long long *)arg5 error:(id *)arg6;
- (BOOL)deleteAllNamedEntitiesFromSourcesWithBundleId:(id)arg1 atLeastOneNamedEntityRemoved:(char *)arg2 deletedCount:(unsigned long long *)arg3 error:(id *)arg4;
- (BOOL)deleteAllNamedEntitiesFromSourcesWithBundleId:(id)arg1 groupIds:(id)arg2 atLeastOneNamedEntityRemoved:(char *)arg3 deletedCount:(unsigned long long *)arg4 error:(id *)arg5;
- (BOOL)deleteAllNamedEntitiesFromSourcesWithBundleId:(id)arg1 documentIds:(id)arg2 atLeastOneNamedEntityRemoved:(char *)arg3 deletedCount:(unsigned long long *)arg4 error:(id *)arg5;
- (BOOL)deleteAllNamedEntitiesOlderThanDate:(id)arg1 atLeastOneNamedEntityRemoved:(char *)arg2 deletedCount:(unsigned long long *)arg3 error:(id *)arg4;
- (void)_prepareDonationStatement:(id)arg1 scoredNamedEntity:(struct PPScoredItem *)arg2 algorithm:(unsigned long long)arg3 cloudSync:(BOOL)arg4 decayRate:(double)arg5 sentimentScore:(double)arg6 occurrencesInSource:(unsigned short)arg7 weightMultiplier:(double)arg8 sourceRowId:(long long)arg9;
- (BOOL)_donateNamedEntities:(id)arg1 source:(id)arg2 algorithm:(unsigned long long)arg3 cloudSync:(BOOL)arg4 decayRate:(double)arg5 sentimentScore:(double)arg6 txnWitness:(id)arg7;
- (BOOL)donateNamedEntities:(id)arg1 source:(id)arg2 algorithm:(unsigned long long)arg3 cloudSync:(BOOL)arg4 decayRate:(double)arg5 sentimentScore:(double)arg6 error:(id *)arg7;
- (struct _PASDBIterAction_)_populateUpdates:(id)arg1 statement:(id)arg2 source:(id)arg3 weightMultiplier:(double)arg4 entityToScoredEntityMap:(id)arg5;
- (id)_updatePreexistingEntitiesMatchingEntities:(id)arg1 source:(id)arg2 algorithm:(unsigned long long)arg3 txnWitness:(id)arg4;
- (BOOL)_shouldSuppressRepeatedImpressions:(id)arg1;
- (BOOL)clearWithError:(id *)arg1 deletedCount:(unsigned long long *)arg2;
- (id)_createRecordWithStatement:(id)arg1;
- (BOOL)iterNamedEntityRecordsWithQuery:(id)arg1 error:(id *)arg2 block:(CDUnknownBlockType)arg3;
- (void)dealloc;
- (id)init;
- (id)initWithDatabase:(id)arg1;
- (id)initWithDatabase:(id)arg1 maxRecords:(unsigned int)arg2 dkStorage:(id)arg3 loadEmptyDatabaseFromDK:(BOOL)arg4;

@end
