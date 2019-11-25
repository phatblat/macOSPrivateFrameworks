//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "HMFObject.h"

#import "HMFLogging.h"

@class HMDAccessory, HMDCameraResidentMessageHandler, HMDCameraSnapshotMetrics, HMDCameraSnapshotSessionID, HMDSnapshotFile, HMDSnapshotRequestHandler, NSDictionary, NSObject<OS_dispatch_queue>, NSString, NSUUID;

@interface HMDCameraSnapshotReceiver : HMFObject <HMFLogging>
{
    NSUUID *_uniqueIdentifier;
    HMDCameraSnapshotSessionID *_sessionID;
    NSObject<OS_dispatch_queue> *_workQueue;
    HMDAccessory *_accessory;
    NSDictionary *_options;
    NSObject<OS_dispatch_queue> *_delegateQueue;
    HMDSnapshotFile *_snapshotFile;
    HMDSnapshotRequestHandler *_snapshotRequestHandler;
    HMDCameraResidentMessageHandler *_residentMessageHandler;
    HMDCameraSnapshotMetrics *_snapshotMetrics;
}

+ (id)logCategory;
@property(retain, nonatomic) HMDCameraSnapshotMetrics *snapshotMetrics; // @synthesize snapshotMetrics=_snapshotMetrics;
@property(readonly, nonatomic) HMDCameraResidentMessageHandler *residentMessageHandler; // @synthesize residentMessageHandler=_residentMessageHandler;
@property(readonly, nonatomic) HMDSnapshotRequestHandler *snapshotRequestHandler; // @synthesize snapshotRequestHandler=_snapshotRequestHandler;
@property(retain, nonatomic) HMDSnapshotFile *snapshotFile; // @synthesize snapshotFile=_snapshotFile;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *delegateQueue; // @synthesize delegateQueue=_delegateQueue;
@property(readonly, nonatomic) NSDictionary *options; // @synthesize options=_options;
@property(readonly, nonatomic) __weak HMDAccessory *accessory; // @synthesize accessory=_accessory;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
@property(readonly, nonatomic) HMDCameraSnapshotSessionID *sessionID; // @synthesize sessionID=_sessionID;
@property(readonly, nonatomic) NSUUID *uniqueIdentifier; // @synthesize uniqueIdentifier=_uniqueIdentifier;
- (void).cxx_destruct;
- (void)_sendConfirmationToResident:(CDUnknownBlockType)arg1;
- (id)_sendRequestWithTierType:(unsigned long long)arg1 toResident:(CDUnknownBlockType)arg2;
- (id)_sendMessageWithName:(id)arg1 payload:(id)arg2 responseHandler:(CDUnknownBlockType)arg3;
- (id)logIdentifier;
- (id)initWithSessionID:(id)arg1 workQueue:(id)arg2 options:(id)arg3 accessory:(id)arg4 delegateQueue:(id)arg5 uniqueIdentifier:(id)arg6 snapshotRequestHandler:(id)arg7 residentMessageHandler:(id)arg8;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

