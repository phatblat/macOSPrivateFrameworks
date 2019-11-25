//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "HMFObject.h"

#import "HMDMPCSessionDataMediaProfileSource.h"
#import "HMFMessageReceiver.h"

@class HMDHome, NSObject<OS_dispatch_queue>, NSString, NSUUID;

@interface HMDMediaActionRouter : HMFObject <HMDMPCSessionDataMediaProfileSource, HMFMessageReceiver>
{
    BOOL _shouldExecuteOnCurrentDevice;
    id <HMDMediaActionRouterDataSource> _dataSource;
}

@property(readonly, nonatomic) BOOL shouldExecuteOnCurrentDevice; // @synthesize shouldExecuteOnCurrentDevice=_shouldExecuteOnCurrentDevice;
@property(readonly, nonatomic) __weak id <HMDMediaActionRouterDataSource> dataSource; // @synthesize dataSource=_dataSource;
- (void).cxx_destruct;
- (id)mediaProfileWithUUID:(id)arg1;
@property(readonly) __weak HMDHome *home;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property(readonly, nonatomic) NSUUID *messageTargetUUID;
- (void)executeMediaActionWithSessionData:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)targetResidentDeviceForExecutingMediaActionWithProfiles:(id)arg1;
- (void)routeMessage:(id)arg1;
- (void)sendMediaActionMessageToDevice:(id)arg1 sessionData:(id)arg2 encodePlaybackArchive:(BOOL)arg3 completion:(CDUnknownBlockType)arg4;
- (void)routeSessionDataForExecution:(id)arg1 encodePlaybackArchive:(BOOL)arg2 completion:(CDUnknownBlockType)arg3;
- (void)routeMediaActionForExecution:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_registerForMessages;
- (void)dealloc;
- (id)init;
- (id)initWithDataSource:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

