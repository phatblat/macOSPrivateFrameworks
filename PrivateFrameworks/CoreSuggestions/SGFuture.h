//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSError, NSObject<OS_dispatch_queue>, NSObject<OS_dispatch_source>;

@interface SGFuture : NSObject
{
    NSObject *_result;
    NSError *_error;
    struct _opaque_pthread_mutex_t _lock;
    NSObject<OS_dispatch_queue> *_callbacks;
    NSObject<OS_dispatch_source> *_timeoutTimer;
    BOOL _alwaysUseCallbacksQueue;
    BOOL _yoDontLeaveMeHangingBro;
    NSObject *_parentObject;
    void *_parentObjectKey;
    BOOL _isComplete;
    NSObject<OS_dispatch_queue> *_workQueue;
}

+ (void)waitForFuturesToComplete:(id)arg1 withCallback:(CDUnknownBlockType)arg2;
+ (id)createWithImmediateError:(id)arg1;
+ (id)createWithImmediateResult:(id)arg1;
+ (id)createWithImmediateResult:(id)arg1 error:(id)arg2;
+ (id)createAfter:(id)arg1 onCreate:(CDUnknownBlockType)arg2;
+ (id)futureForObject:(id)arg1 withKey:(void *)arg2 onCreate:(CDUnknownBlockType)arg3;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
@property(readonly, nonatomic) BOOL isComplete; // @synthesize isComplete=_isComplete;
- (void).cxx_destruct;
- (void)disassociateFromParentObject;
- (id)waitWithTimeout:(double)arg1;
- (void)_clearTimeoutNonThreadSafe;
- (void)clearTimeout;
- (void)setTimeout:(double)arg1;
- (BOOL)_finishWithResult:(id)arg1 orError:(id)arg2;
- (CDUnknownBlockType)completer;
- (BOOL)completeWithResult:(id)arg1 error:(id)arg2;
- (BOOL)fail:(id)arg1;
- (BOOL)succeed:(id)arg1;
- (id)error;
- (id)result;
- (void)_wait:(CDUnknownBlockType)arg1 forSyncAPI:(BOOL)arg2;
- (void)wait:(CDUnknownBlockType)arg1;
- (id)wait;
- (void)setTargetQueue:(id)arg1 useAfterCompletion:(BOOL)arg2;
- (void)dealloc;
- (id)init;

@end

