//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CoreDuet/_DKSyncCompositeOperation.h>

@class NSDate, _CDMutablePerfMetric, _DKSync2Policy, _DKSyncHistory, _DKSyncPeer, _DKSyncType;

@interface _DKPerformSyncUpHistoryAdditionsOperation : _DKSyncCompositeOperation
{
    id <_DKSyncLocalKnowledgeStorage> _localStorage;
    id <_DKSyncRemoteKnowledgeStorage> _transport;
    _DKSyncPeer *_me;
    _DKSync2Policy *_policy;
    _DKSyncType *_type;
    _CDMutablePerfMetric *_perfMetric;
    struct _CDPerfEvent _perfEvent;
    BOOL _hadAdditions;
    NSDate *_startDate;
    NSDate *_now;
    unsigned long long _batchNumber;
    _DKSyncHistory *_history;
}

+ (void)_updateEventStatsWithTotal:(unsigned long long)arg1 streamNameCounts:(id)arg2 transportType:(long long)arg3;
+ (void)_updateEventStatsWithPreviousSyncDate:(id)arg1 transportType:(long long)arg2;
@property(readonly) _DKSyncHistory *history; // @synthesize history=_history;
- (void).cxx_destruct;
- (void)endPerfMetrics;
- (void)startPerfMetrics;
- (void)endOperation;
- (void)handleUpdateStorageWithFetchedWindow:(id)arg1 eventsCount:(unsigned long long)arg2 error:(id)arg3;
- (void)performSyncUpHistoryAdditionsWithPreviousHighWaterMark:(id)arg1;
- (void)performSyncUpHistoryAdditionsWithAdditionsHighWaterMark:(id)arg1 orError:(id)arg2;
- (void)performSyncUpHistoryAdditions;
- (void)main;
- (BOOL)isAsynchronous;
- (id)initWithParent:(id)arg1 localStorage:(id)arg2 transport:(id)arg3 peer:(id)arg4 policy:(id)arg5 type:(id)arg6;

@end

