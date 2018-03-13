//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface VKAnimation : NSObject
{
    CDUnknownBlockType _completionHandler;
    NSString *_name;
    long long _priority;
    id <VKAnimationRunner> _runner;
    long long _state;
    BOOL _runsForever;
}

@property(readonly, nonatomic) long long state; // @synthesize state=_state;
@property(readonly, nonatomic) NSString *name; // @synthesize name=_name;
@property(nonatomic) BOOL runsForever; // @synthesize runsForever=_runsForever;
@property(readonly, nonatomic) long long priority; // @synthesize priority=_priority;
@property(copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
- (void)onTimerFired:(double)arg1;
- (void)resume;
- (void)pause;
- (void)stop;
- (void)stopAnimation:(BOOL)arg1;
- (void)transferToRunner:(id)arg1;
- (void)startWithRunner:(id)arg1;
- (id)description;
- (void)dealloc;
- (id)initWithPriority:(long long)arg1;
- (id)initWithPriority:(long long)arg1 name:(id)arg2;
- (id)initWithName:(id)arg1;
@property(readonly, nonatomic) BOOL timed;
@property(nonatomic) double duration;
@property(readonly, nonatomic) BOOL running;

@end

