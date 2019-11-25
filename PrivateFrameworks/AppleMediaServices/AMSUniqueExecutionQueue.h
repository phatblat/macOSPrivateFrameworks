//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class AMSPromise, NSObject<OS_dispatch_queue>;

@interface AMSUniqueExecutionQueue : NSObject
{
    CDUnknownBlockType _block;
    NSObject<OS_dispatch_queue> *_completionCallbacksQueue;
    NSObject<OS_dispatch_queue> *_executeBlockQueue;
    AMSPromise *_executionPromise;
    NSObject<OS_dispatch_queue> *_executionPromiseAccessQueue;
}

@property(readonly) NSObject<OS_dispatch_queue> *executionPromiseAccessQueue; // @synthesize executionPromiseAccessQueue=_executionPromiseAccessQueue;
@property(retain) AMSPromise *executionPromise; // @synthesize executionPromise=_executionPromise;
@property(retain) NSObject<OS_dispatch_queue> *executeBlockQueue; // @synthesize executeBlockQueue=_executeBlockQueue;
@property(retain) NSObject<OS_dispatch_queue> *completionCallbacksQueue; // @synthesize completionCallbacksQueue=_completionCallbacksQueue;
@property(copy) CDUnknownBlockType block; // @synthesize block=_block;
- (void).cxx_destruct;
- (id)_createExecutionPromise;
- (void)_beginExecutingBlockWithPromise:(id)arg1;
- (void)addCompletionBlockForSubsequentExecution:(CDUnknownBlockType)arg1;
- (void)addCompletionBlock:(CDUnknownBlockType)arg1;
- (id)initWithBlock:(CDUnknownBlockType)arg1;

@end

