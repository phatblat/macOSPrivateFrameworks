//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <HomeKitDaemon/HMDCameraIDSSessionHandler.h>

#import "HMDCameraRemoteStreamReceiverDestinationProtocol.h"
#import "IDSSessionDelegate.h"

@class IDSSession, NSObject<OS_dispatch_queue>, NSString;

@interface HMDCameraIDSSessionReceiver : HMDCameraIDSSessionHandler <IDSSessionDelegate, HMDCameraRemoteStreamReceiverDestinationProtocol>
{
    id <HMDCameraIDSSessionReceiverDelegate> _delegate;
    NSObject<OS_dispatch_queue> *_delegateQueue;
}

+ (id)logCategory;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *delegateQueue; // @synthesize delegateQueue=_delegateQueue;
@property(nonatomic) __weak id <HMDCameraIDSSessionReceiverDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)sessionEnded:(id)arg1 withReason:(unsigned int)arg2 error:(id)arg3;
- (void)sessionStarted:(id)arg1;
- (void)_receivedIDSSession:(id)arg1;
- (void)service:(id)arg1 account:(id)arg2 inviteReceivedForSession:(id)arg3 fromID:(id)arg4 withContext:(id)arg5;
- (void)_callSessionEnded:(id)arg1;
- (void)_callSessionSetup:(id)arg1;
- (void)setupReceiver:(id)arg1;
- (void)dealloc;
@property(readonly, nonatomic) NSString *remoteDestination;
@property(readonly, nonatomic) IDSSession *session;
- (id)logIdentifier;
- (id)initWithSessionID:(id)arg1 workQueue:(id)arg2 delegate:(id)arg3 delegateQueue:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

