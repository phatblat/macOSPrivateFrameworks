//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class HMDCameraSnapshotRemoteRelayReceiver, HMDCameraSnapshotSessionID, HMDSnapshotFile, NSError;

@protocol HMDCameraSnapshotRemoteRelayReceiverDelegate <NSObject>
- (void)snapshotRelayReceiver:(HMDCameraSnapshotRemoteRelayReceiver *)arg1 didSaveSnapshotFile:(HMDSnapshotFile *)arg2 error:(NSError *)arg3 sessionID:(HMDCameraSnapshotSessionID *)arg4;
- (void)snapshotRelayReceiver:(HMDCameraSnapshotRemoteRelayReceiver *)arg1 didStartGettingImage:(NSError *)arg2 sessionID:(HMDCameraSnapshotSessionID *)arg3;
@end

