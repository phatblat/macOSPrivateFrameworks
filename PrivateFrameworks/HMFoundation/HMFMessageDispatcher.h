//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <HMFoundation/HMFObject.h>

#import "HMFLogging.h"
#import "HMFMessageTransportDelegate.h"

@class HMFMessageTransport, HMFTimer, NSBackgroundActivityScheduler, NSDictionary, NSMutableOrderedSet, NSObject<OS_dispatch_queue>, NSSet, NSString;

@interface HMFMessageDispatcher : HMFObject <HMFLogging, HMFMessageTransportDelegate>
{
    id <HMFLocking> _lock;
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableOrderedSet *_handlers;
    HMFTimer *_indexWatchdog;
    NSBackgroundActivityScheduler *_indexScheduler;
    NSDictionary *_destinationHandlerIndexes;
    NSDictionary *_nameHandlerIndexes;
    BOOL _indexed;
    BOOL _shouldAutomaticallyIndex;
    NSSet *_filterClasses;
    HMFMessageTransport *_transport;
    NSObject<OS_dispatch_queue> *_workQueue;
}

+ (id)logCategory;
@property(readonly) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
@property(nonatomic) BOOL shouldAutomaticallyIndex; // @synthesize shouldAutomaticallyIndex=_shouldAutomaticallyIndex;
@property(readonly, nonatomic) HMFMessageTransport *transport; // @synthesize transport=_transport;
- (void).cxx_destruct;
- (void)messageTransport:(id)arg1 didReceiveMessage:(id)arg2;
- (void)sendMessage:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)sendMessage:(id)arg1;
- (void)dispatchMessage:(id)arg1;
- (void)deregisterReceiver:(id)arg1;
- (void)deregisterForMessage:(id)arg1 receiver:(id)arg2;
- (void)registerForMessage:(id)arg1 receiver:(id)arg2 policies:(id)arg3 messageHandler:(CDUnknownBlockType)arg4;
- (void)registerForMessage:(id)arg1 receiver:(id)arg2 policies:(id)arg3 selector:(SEL)arg4;
- (void)registerForMessage:(id)arg1 receiver:(id)arg2 messageHandler:(CDUnknownBlockType)arg3;
- (void)registerForMessage:(id)arg1 receiver:(id)arg2 selector:(SEL)arg3;
- (id)handlersForMessage:(id)arg1;
- (void)index;
@property(readonly, getter=isIndexed) BOOL indexed; // @synthesize indexed=_indexed;
@property(copy) NSSet *filterClasses; // @synthesize filterClasses=_filterClasses;
- (id)initWithTransport:(id)arg1;
- (id)init;
- (void)sendMessage:(id)arg1 target:(id)arg2 responseQueue:(id)arg3 responseHandler:(CDUnknownBlockType)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)sendMessage:(id)arg1 target:(id)arg2 andInvokeCompletionHandler:(CDUnknownBlockType)arg3;
- (void)sendMessage:(id)arg1 target:(id)arg2 responseQueue:(id)arg3 responseHandler:(CDUnknownBlockType)arg4;
- (void)sendMessage:(id)arg1 target:(id)arg2;
- (void)dispatchMessage:(id)arg1 target:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

