//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSOperation.h"

#import "BROperationClient.h"

@class NSObject<BRCancellable>, NSObject<OS_dispatch_queue>, NSString;

@interface BROperation : NSOperation <BROperationClient>
{
    id _remoteOperation;
    NSObject<OS_dispatch_queue> *_queue;
    unsigned char _uuid[16];
    id _executionTransation;
    BOOL _finished;
    BOOL _waitForRemoteToBeCancelled;
}

@property(nonatomic) BOOL waitForRemoteToBeCancelled; // @synthesize waitForRemoteToBeCancelled=_waitForRemoteToBeCancelled;
@property(retain, nonatomic) NSObject<BRCancellable> *remoteOperation; // @synthesize remoteOperation=_remoteOperation;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *callbackQueue; // @synthesize callbackQueue=_queue;
@property(readonly, getter=isFinished) BOOL finished; // @synthesize finished=_finished;
- (void).cxx_destruct;
- (oneway void)invalidate;
- (oneway void)progressCallbackWithTopic:(id)arg1 userInfo:(id)arg2;
- (oneway void)setRemoteOperationProxy:(id)arg1 userInfo:(id)arg2;
- (void)_setRemoteOperation:(id)arg1;
- (void)finishWithResult:(id)arg1 error:(id)arg2;
- (void)completedWithResult:(id)arg1 error:(id)arg2;
- (id)remoteObject;
- (BOOL)finishIfCancelled;
- (BOOL)_finishIfCancelled;
- (void)cancel;
- (void)start;
- (void)_setExecuting:(BOOL)arg1;
@property(readonly, getter=isExecuting) BOOL executing;
- (void)_setFinished:(BOOL)arg1;
- (void)dealloc;
@property(readonly, copy) NSString *description;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

