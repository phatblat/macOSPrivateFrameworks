//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <HMFoundation/HMFObject.h>

@class HMFUnfairLock, NSDate, NSObject<OS_dispatch_queue>, NSObject<OS_dispatch_source>;

@interface HMFTimer : HMFObject
{
    HMFUnfairLock *_lock;
    NSObject<OS_dispatch_queue> *_delegateQueue;
    NSObject<OS_dispatch_queue> *_timerQueue;
    double _timeInterval;
    long long _leeway;
    BOOL _running;
    NSDate *_fireDate;
    id <HMFTimerDelegate> _delegate;
    NSObject<OS_dispatch_source> *_timer;
    unsigned long long _options;
}

+ (id)shortDescription;
@property(readonly, nonatomic) unsigned long long options; // @synthesize options=_options;
@property(readonly, nonatomic) NSObject<OS_dispatch_source> *timer; // @synthesize timer=_timer;
@property __weak id <HMFTimerDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) double timeInterval; // @synthesize timeInterval=_timeInterval;
- (void).cxx_destruct;
- (void)__handleExpiration;
- (void)__fire;
- (void)fire;
- (void)kick;
- (void)suspend;
- (void)resume;
@property(retain) NSObject<OS_dispatch_queue> *delegateQueue;
- (void)setFireDate:(id)arg1;
@property(readonly, copy) NSDate *fireDate; // @synthesize fireDate=_fireDate;
@property(readonly, getter=isRunning) BOOL running;
@property(readonly, nonatomic) unsigned long long leeway;
- (id)attributeDescriptions;
- (void)dealloc;
- (id)initWithTimeInterval:(double)arg1 options:(unsigned long long)arg2;
- (id)init;

@end

