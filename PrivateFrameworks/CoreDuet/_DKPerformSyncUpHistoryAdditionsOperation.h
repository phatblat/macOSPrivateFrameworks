//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CoreDuet/_DKSyncCompositeOperation.h>

@class NSDate, NSMutableDictionary, _DKSync2Policy, _DKSyncHistory, _DKSyncPeer, _DKSyncType;

@interface _DKPerformSyncUpHistoryAdditionsOperation : _DKSyncCompositeOperation
{
    id <_DKSyncLocalKnowledgeStorage> _localStorage;
    id <_DKSyncRemoteKnowledgeStorage> _transport;
    _DKSyncPeer *_me;
    _DKSync2Policy *_policy;
    _DKSyncType *_type;
    NSDate *_now;
    _DKSyncHistory *_history;
    unsigned long long _batchNumber;
    NSMutableDictionary *_events;
}

@property(retain, nonatomic) NSMutableDictionary *events; // @synthesize events=_events;
- (void).cxx_destruct;
- (void)handleUpdateStorageWithFetchedWindow:(id)arg1 eventsCount:(unsigned long long)arg2 error:(id)arg3;
- (void)performSyncUpHistoryAdditionsWithPreviousHighWaterMark:(id)arg1;
- (void)performSyncUpHistoryAdditionsWithAdditionsHighWaterMark:(id)arg1 orError:(id)arg2;
- (void)performSyncUpHistoryAdditions;
- (void)main;
- (BOOL)isAsynchronous;
- (id)initWithParent:(id)arg1 localStorage:(id)arg2 transport:(id)arg3 peer:(id)arg4 policy:(id)arg5 type:(id)arg6;

@end
