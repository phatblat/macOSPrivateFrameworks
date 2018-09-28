//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CoreDuet/_DKSyncCompositeOperation.h>

@class NSArray, NSDate, NSString, _CDMutablePerfMetric, _DKSync2Policy, _DKSyncHistory, _DKSyncPeer, _DKSyncType;

@interface _DKPerformSyncDownPeerAdditionsOperation : _DKSyncCompositeOperation
{
    id <_DKSyncLocalKnowledgeStorage> _localStorage;
    id <_DKSyncRemoteKnowledgeStorage> _transport;
    _DKSyncPeer *_peer;
    _DKSync2Policy *_policy;
    _DKSyncType *_type;
    _CDMutablePerfMetric *_perfMetric;
    struct _CDPerfEvent _perfEvent;
    NSDate *_startDate;
    NSArray *_streamNames;
    BOOL _highPriority;
    _DKSyncHistory *_history;
    id <_DKKeyValueStore> _keyValueStore;
    NSString *_hadAdditionsKey;
    NSDate *_highWaterMark;
    unsigned long long _batchNumber;
    NSArray *_overlappingWindows;
    BOOL _foundAdditions;
}

+ (void)_updateEventStatsWithTotal:(unsigned long long)arg1 streamNameCounts:(id)arg2 transportType:(long long)arg3;
+ (void)_updateEventStatsWithSyncLatencyOfEvent:(id)arg1 ingressDate:(id)arg2 transportType:(long long)arg3;
+ (void)_updateEventStatsWithPreviousSyncDate:(id)arg1 transportType:(long long)arg2;
+ (void)_updateEventStatsWithIsNewestMissingWindow:(BOOL)arg1;
- (void).cxx_destruct;
- (void)endPerfMetrics;
- (void)startPerfMetrics;
- (void)endOperation;
- (void)updateEvents:(id)arg1 withSourceDeviceID:(id)arg2;
- (void)coalesceRedundantOverlappingWindows;
- (void)handleFetchedEvents:(id)arg1 windowStartDate:(id)arg2 windowEndDate:(id)arg3 window:(id)arg4;
- (void)performSyncDownPeerAdditionsWithPreviousWindow:(id)arg1;
- (void)performSyncDownPeerAdditionsWithHighWaterMark:(id)arg1 orError:(id)arg2;
- (void)performSyncDownPeerAdditions;
- (void)main;
- (BOOL)isAsynchronous;
- (id)initWithParent:(id)arg1 localStorage:(id)arg2 transport:(id)arg3 peer:(id)arg4 policy:(id)arg5 type:(id)arg6;

@end

