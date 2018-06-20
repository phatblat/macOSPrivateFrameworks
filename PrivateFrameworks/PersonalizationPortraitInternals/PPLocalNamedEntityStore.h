//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PPNamedEntityStore.h"

@class PPDeletionTracker, PPKVOObserver, _PASLock, _PASNotificationToken;

@interface PPLocalNamedEntityStore : PPNamedEntityStore
{
    _PASLock *_lock;
    unsigned long long _hardFetchLimit;
    // Error parsing type: AB, name: _isCacheInvalidated
    _PASLock *_cacheLock;
    PPDeletionTracker *_deletionTracker;
    PPKVOObserver *_defaultsOverrideObserver;
    id _remoteDeletionObserver;
    int _bundleIdBlacklistNotificationToken;
    _PASNotificationToken *_assetUpdateNotificationToken;
}

+ (id)defaultStore;
- (void).cxx_destruct;
- (BOOL)donateLocationNamedEntities:(id)arg1 bundleId:(id)arg2 error:(id *)arg3;
- (BOOL)clearWithError:(id *)arg1;
- (BOOL)removeMapItemsBeforeCutoffDate:(id)arg1 error:(id *)arg2;
- (BOOL)removeMapItemForPlaceName:(id)arg1 error:(id *)arg2;
- (id)mapItemForPlaceName:(id)arg1 error:(id *)arg2;
- (BOOL)donateMapItem:(id)arg1 forPlaceName:(id)arg2 error:(id *)arg3;
- (BOOL)deleteAllNamedEntitiesFromSourcesWithBundleId:(id)arg1 groupId:(id)arg2 olderThan:(id)arg3 error:(id *)arg4;
- (BOOL)deleteAllNamedEntitiesFromSourcesWithBundleId:(id)arg1 error:(id *)arg2;
- (BOOL)deleteAllNamedEntitiesFromSourcesWithBundleId:(id)arg1 groupIds:(id)arg2 error:(id *)arg3;
- (BOOL)deleteAllNamedEntitiesFromSourcesWithBundleId:(id)arg1 documentIds:(id)arg2 error:(id *)arg3;
- (BOOL)_deleteAllNamedEntitiesWithPredicate:(id)arg1 loggingBundleId:(id)arg2 deletedCount:(unsigned long long *)arg3 error:(id *)arg4;
- (BOOL)_signalNamedEntitiesRemoved:(id)arg1;
- (BOOL)_deleteAllExtractionsWithPredicate:(id)arg1 fromStreams:(id)arg2 deletedCount:(unsigned long long *)arg3 namedEntitiesRemoved:(id)arg4 error:(id *)arg5;
- (BOOL)flushDonationsWithError:(id *)arg1;
- (BOOL)donateNamedEntities:(id)arg1 source:(id)arg2 algorithm:(unsigned long long)arg3 cloudSync:(BOOL)arg4 decayRate:(double)arg5 error:(id *)arg6;
- (id)_filterOutInvalidNamesFromEntities:(id)arg1;
- (BOOL)_shouldSuppressRepeatedImpressions:(id)arg1;
- (id)_filterBlacklistedScoredNamedEntities:(id)arg1;
- (id)_coalesceScoredNamedEntities:(id)arg1;
- (void)feedbackNamedEntitiesOverallEngagement:(id)arg1;
- (void)feedbackNamedEntitiesOverallEngagement:(id)arg1 clientIdentifier:(id)arg2;
- (void)feedbackEngagedNamedEntities:(id)arg1;
- (void)feedbackEngagedNamedEntities:(id)arg1 clientIdentifier:(id)arg2;
- (void)feedbackUsedNamedEntities:(id)arg1;
- (void)feedbackUsedNamedEntities:(id)arg1 clientIdentifier:(id)arg2;
- (id)rankedNamedEntitiesWithQuery:(id)arg1 error:(id *)arg2;
- (BOOL)iterRankedNamedEntitiesWithQuery:(id)arg1 error:(id *)arg2 block:(CDUnknownBlockType)arg3;
- (BOOL)monitorNamedEntityRecordChangesWithError:(id *)arg1 setup:(CDUnknownBlockType)arg2 handler:(CDUnknownBlockType)arg3 finish:(CDUnknownBlockType)arg4;
- (id)_rankedNamedEntitiesWithQuery:(id)arg1 usingFakeDataSource:(id)arg2;
- (id)_cached_namedEntityRecordsWithQuery:(id)arg1;
- (id)namedEntityRecordsWithQuery:(id)arg1 error:(id *)arg2;
- (BOOL)iterNamedEntityRecordsWithQuery:(id)arg1 error:(id *)arg2 block:(CDUnknownBlockType)arg3;
- (double)_scoreEntityRecord:(id)arg1 query:(id)arg2 scoringDate:(id)arg3;
- (id)_namedEntitiesOverride;
- (void)_loadNamedEntitiesOverrideFromDefaults:(id)arg1;
- (void)_clearQueryCacheWithLockWitness:(id)arg1;
- (void)dealloc;
- (id)initWithRecordFetchLimit:(unsigned long long)arg1 useQueryCache:(BOOL)arg2;

@end

