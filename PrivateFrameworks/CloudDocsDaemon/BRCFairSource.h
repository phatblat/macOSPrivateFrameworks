//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class BRCFairScheduler, NSObject<OS_dispatch_queue>, NSString;

__attribute__((visibility("hidden")))
@interface BRCFairSource : NSObject
{
    unsigned long long _schedulerBitIndex;
    NSString *_name;
    BRCFairScheduler *_scheduler;
    int _suspendCount;
    BOOL _cancelled;
    BOOL _signaled;
    NSObject<OS_dispatch_queue> *_queue;
    CDUnknownBlockType _eventHandler;
}

@property(copy, nonatomic) CDUnknownBlockType eventHandler; // @synthesize eventHandler=_eventHandler;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
- (void).cxx_destruct;
- (void)resume;
- (void)suspend;
- (void)cancel;
- (void)_runEventHandler;
- (void)signal;
- (id)description;
- (id)initWithName:(id)arg1 scheduler:(id)arg2;

@end

