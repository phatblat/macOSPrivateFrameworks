//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSObject<OS_dispatch_queue>, NSObject<OS_dispatch_source>, PLChangeStore;

@interface PLChangeHub : NSObject
{
    BOOL _didInitializeState;
    NSObject<OS_dispatch_source> *_memoryPressureSource;
    NSObject<OS_dispatch_queue> *_eventsSerializationQueue;
    PLChangeStore *_changeStore;
}

+ (void)setCurrentInMemoryEventIndex:(unsigned long long)arg1;
+ (unsigned long long)currentInMemoryEventIndex;
+ (id)sharedChangeHub;
- (void).cxx_destruct;
- (void)_inq_sendPendingEventsForRequest:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)sendPendingEventsForRequest:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)eventsSinceIndex:(unsigned long long)arg1 filteredBy:(CDUnknownBlockType)arg2 onQueue:(id)arg3 withBlock:(CDUnknownBlockType)arg4;
- (void)fetchCurrentEventIndexWithCompletionHandler:(CDUnknownBlockType)arg1;
- (unsigned long long)_inq_currentEventIndex;
- (void)_startListeningToMemoryPressureEvents;
- (void)_onEventsQueueAsyncWithTransaction:(id)arg1 perform:(CDUnknownBlockType)arg2;
- (id)init;
- (void)clearChangeStore:(CDUnknownBlockType)arg1;

@end
