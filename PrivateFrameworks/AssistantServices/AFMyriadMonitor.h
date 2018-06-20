//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableSet, NSObject<OS_dispatch_queue>, NSObject<OS_dispatch_semaphore>, NSObject<OS_dispatch_source>;

@interface AFMyriadMonitor : NSObject
{
    BOOL _myriadIsWaiting;
    NSObject<OS_dispatch_source> *_timer;
    struct __CFNotificationCenter *_center;
    NSObject<OS_dispatch_queue> *_myriadMonitorQueue;
    NSObject<OS_dispatch_semaphore> *_decisionSemaphore;
    NSMutableSet *_groupsToWake;
}

+ (void)clear;
+ (void)awaitMyriadDecisionInGroup:(id)arg1;
+ (id)sharedMonitor;
- (void).cxx_destruct;
- (void)resultSeenWithValue:(BOOL)arg1;
- (void)_leaveGroups;
- (void)clear;
- (void)addDispatchGroup:(id)arg1;
- (void)setDecisionIsPending;
- (void)dealloc;
- (id)init;

@end

