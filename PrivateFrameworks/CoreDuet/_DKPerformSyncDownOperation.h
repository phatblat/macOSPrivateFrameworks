//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CoreDuet/_DKSyncCompositeOperation.h>

@class NSArray, _DKSync2Policy, _DKSyncType;

@interface _DKPerformSyncDownOperation : _DKSyncCompositeOperation
{
    id <_DKSyncLocalKnowledgeStorage> _localStorage;
    id <_DKSyncRemoteKnowledgeStorage> _transport;
    NSArray *_peers;
    _DKSync2Policy *_policy;
    _DKSyncType *_type;
}

- (void).cxx_destruct;
- (void)performSyncDown;
- (void)main;
- (BOOL)isAsynchronous;
- (id)initWithParent:(id)arg1 localStorage:(id)arg2 transport:(id)arg3 peers:(id)arg4 policy:(id)arg5 type:(id)arg6;

@end

