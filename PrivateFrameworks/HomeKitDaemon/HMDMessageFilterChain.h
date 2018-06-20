//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "HMFObject.h"

@class NSArray, NSMutableArray, NSObject<OS_dispatch_queue>;

@interface HMDMessageFilterChain : HMFObject
{
    NSObject<OS_dispatch_queue> *_workQueue;
    NSMutableArray *_messageFilters;
}

@property(retain, nonatomic) NSMutableArray *messageFilters; // @synthesize messageFilters=_messageFilters;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
- (void).cxx_destruct;
- (void)_executeChainForMessage:(id)arg1 queue:(id)arg2 target:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)resetConfiguration:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)removeMessageFilter:(id)arg1;
- (void)addMessageFilter:(id)arg1;
- (BOOL)shouldCloudSyncData;
- (void)executeChainForMessage:(id)arg1 queue:(id)arg2 target:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
@property(readonly, copy, nonatomic) NSArray *filters;
- (id)init;

@end

