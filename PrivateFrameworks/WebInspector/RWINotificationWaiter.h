//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDate, NSObject<OS_dispatch_queue>, NSTimer;

@interface RWINotificationWaiter : NSObject
{
    NSDate *_startTime;
    unsigned long long _notificationHandlerID;
    NSTimer *_watchdogTimer;
    double _timeout;
    id <RWINotifier> _notifier;
    CDUnknownBlockType _predicate;
    NSObject<OS_dispatch_queue> *_completionQueue;
    CDUnknownBlockType _completionBlock;
}

+ (id)waitForNotification:(id)arg1 matchingPredicate:(CDUnknownBlockType)arg2 withTimeout:(double)arg3 completionQueue:(id)arg4 completionBlock:(CDUnknownBlockType)arg5;
@property(copy, nonatomic) CDUnknownBlockType completionBlock; // @synthesize completionBlock=_completionBlock;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *completionQueue; // @synthesize completionQueue=_completionQueue;
@property(copy, nonatomic) CDUnknownBlockType predicate; // @synthesize predicate=_predicate;
@property(retain, nonatomic) id <RWINotifier> notifier; // @synthesize notifier=_notifier;
@property(nonatomic) double timeout; // @synthesize timeout=_timeout;
- (void).cxx_destruct;
@property(readonly, nonatomic) double elapsedTime;
- (void)_teardownAndDispatchResult:(long long)arg1 notification:(id)arg2;
- (void)_watchdogTimerFired:(id)arg1;
- (void)start;
- (id)initWithNotifier:(id)arg1 predicate:(CDUnknownBlockType)arg2 timeout:(double)arg3 completionQueue:(id)arg4 completionBlock:(CDUnknownBlockType)arg5;

@end

