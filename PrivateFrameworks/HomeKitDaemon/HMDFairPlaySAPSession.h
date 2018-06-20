//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "HMFObject.h"

@class NSObject<OS_dispatch_queue>, NSUUID;

@interface HMDFairPlaySAPSession : HMFObject
{
    unsigned long long _state;
    id <HMDFairPlaySAPSessionDelegate> _delegate;
    NSObject<OS_dispatch_queue> *_delegateQueue;
    NSUUID *_sessionIdentifier;
    NSObject<OS_dispatch_queue> *_clientQueue;
}

@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *clientQueue; // @synthesize clientQueue=_clientQueue;
@property(readonly, nonatomic) NSUUID *sessionIdentifier; // @synthesize sessionIdentifier=_sessionIdentifier;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *delegateQueue; // @synthesize delegateQueue=_delegateQueue;
@property(readonly) __weak id <HMDFairPlaySAPSessionDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) unsigned long long state; // @synthesize state=_state;
- (void).cxx_destruct;
- (void)verifySignedData:(id)arg1 signature:(id)arg2 completionQueue:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)signatureForData:(id)arg1 completionQueue:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)_setupSAPSessionWithCompletionQueue:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_teardown;
- (void)_closeWithError:(id)arg1;
- (void)close;
- (void)openWithCompletionQueue:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)dealloc;
- (id)initWithDelegate:(id)arg1 delegateQueue:(id)arg2;

@end

