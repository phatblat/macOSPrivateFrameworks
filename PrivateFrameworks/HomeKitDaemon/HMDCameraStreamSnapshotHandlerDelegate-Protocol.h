//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class HMDCameraSnapshotData, HMDCameraStreamSnapshotHandler;

@protocol HMDCameraStreamSnapshotHandlerDelegate <NSObject>
- (void)streamSnapshotHandler:(HMDCameraStreamSnapshotHandler *)arg1 didGetLastSnapshot:(HMDCameraSnapshotData *)arg2;
- (void)streamSnapshotHandler:(HMDCameraStreamSnapshotHandler *)arg1 didGetNewSnapshot:(HMDCameraSnapshotData *)arg2;

@optional
- (void)streamSnapshotHandler:(HMDCameraStreamSnapshotHandler *)arg1 didChangeStreamSetupInProgress:(BOOL)arg2;
@end

