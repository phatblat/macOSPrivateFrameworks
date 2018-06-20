//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSOperation.h"

#import "HMFLogging.h"
#import "HMFTimerDelegate.h"

@class HMFActivity, HMFTimer, HMFUnfairLock, NSDate, NSError, NSObject<OS_dispatch_queue>, NSString, NSUUID;

@interface HMFOperation : NSOperation <HMFLogging, HMFTimerDelegate>
{
    BOOL _executing;
    BOOL _finished;
    NSError *_error;
    HMFUnfairLock *_lock;
    NSObject<OS_dispatch_queue> *_queue;
    HMFActivity *_activity;
    NSUUID *_identifier;
    HMFTimer *_timer;
}

+ (id)logCategory;
+ (BOOL)automaticallyNotifiesObserversForKey:(id)arg1;
@property(retain) HMFTimer *timer; // @synthesize timer=_timer;
@property(readonly) NSUUID *identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;
- (void)timerDidFire:(id)arg1;
- (id)logIdentifier;
@property(retain) HMFActivity *activity; // @synthesize activity=_activity;
- (void)cancelWithError:(id)arg1;
- (void)cancel;
- (void)start;
@property(readonly, copy) NSDate *timeoutDate;
- (void)setError:(id)arg1;
@property(readonly, copy) NSError *error;
- (void)finish;
@property(getter=isFinished) BOOL finished;
@property(getter=isExecuting) BOOL executing;
- (BOOL)isAsynchronous;
@property(readonly) NSObject<OS_dispatch_queue> *underlyingQueue;
@property(readonly, copy) NSString *description;
@property(readonly, copy) NSString *debugDescription;
- (id)initWithTimeout:(double)arg1;
- (id)init;

// Remaining properties
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
