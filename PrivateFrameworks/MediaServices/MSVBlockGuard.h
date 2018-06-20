//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class MSVTimer, NSObject<OS_dispatch_queue>;

@interface MSVBlockGuard : NSObject
{
    NSObject<OS_dispatch_queue> *_accessQueue;
    BOOL _disarmed;
    BOOL _didTimeout;
    MSVTimer *_timeoutTimer;
    CDUnknownBlockType _interruptionHandler;
}

- (void).cxx_destruct;
- (BOOL)disarm;
- (void)_interruptWithReason:(long long)arg1;
- (void)dealloc;
- (id)initWithTimeout:(double)arg1 interruptionHandler:(CDUnknownBlockType)arg2;
- (id)initWithTimeout:(double)arg1;
- (id)initWithDeallocHandler:(CDUnknownBlockType)arg1;

@end

