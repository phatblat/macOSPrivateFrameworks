//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSOperation.h"

#import "FPOperationClient.h"

@class NSObject<OS_dispatch_queue>;

@interface FPOperation : NSOperation <FPOperationClient>
{
    id <FPCancellable> _remoteOperation;
    NSObject<OS_dispatch_queue> *_queue;
    unsigned char _uuid[16];
    id _executionTransaction;
    BOOL _finished;
    CDUnknownBlockType _finishedBlock;
}

@property(copy) CDUnknownBlockType finishedBlock; // @synthesize finishedBlock=_finishedBlock;
@property(retain, nonatomic) id <FPCancellable> remoteOperation; // @synthesize remoteOperation=_remoteOperation;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *callbackQueue; // @synthesize callbackQueue=_queue;
@property(readonly, getter=isFinished) BOOL finished; // @synthesize finished=_finished;
- (void).cxx_destruct;
- (void)operationDidProgressWithInfo:(id)arg1 error:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (oneway void)invalidate;
- (oneway void)setCancellationHandler:(id)arg1;
- (void)_setRemoteCancellationHandler:(id)arg1;
- (void)finishWithResult:(id)arg1 error:(id)arg2;
- (void)completedWithResult:(id)arg1 error:(id)arg2;
- (BOOL)finishIfCancelled;
- (BOOL)_finishIfCancelled;
- (oneway void)cancel;
- (void)start;
- (void)_setExecuting:(BOOL)arg1;
@property(readonly, getter=isExecuting) BOOL executing;
- (void)_setFinished:(BOOL)arg1;
- (void)dealloc;
- (id)description;
- (id)operationDescription;
- (id)init;

@end

