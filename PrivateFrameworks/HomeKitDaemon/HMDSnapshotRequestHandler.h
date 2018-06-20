//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "HMFObject.h"

#import "HMDCameraStreamSnapshotHandlerDelegate.h"
#import "HMDSnapshotRequestHandlerProtocol.h"
#import "HMFLogging.h"
#import "HMFTimerDelegate.h"

@class HMDAccessory, HMDCameraStreamSnapshotHandler, HMDSnapshotFile, HMFTimer, NSArray, NSMutableArray, NSObject<OS_dispatch_queue>, NSString;

@interface HMDSnapshotRequestHandler : HMFObject <HMFLogging, HMFTimerDelegate, HMDCameraStreamSnapshotHandlerDelegate, HMDSnapshotRequestHandlerProtocol>
{
    NSString *_imageCacheDirectory;
    NSObject<OS_dispatch_queue> *_workQueue;
    NSString *_logString;
    HMDAccessory *_accessory;
    NSMutableArray *_pendingRequests;
    HMFTimer *_mostRecentSnapshotInvalidationTimer;
    HMDSnapshotFile *_mostRecentSnapshot;
    HMDCameraStreamSnapshotHandler *_streamSnapshotHandler;
    NSArray *_supportedVideoResolutions;
}

+ (id)logCategory;
@property(retain, nonatomic) NSArray *supportedVideoResolutions; // @synthesize supportedVideoResolutions=_supportedVideoResolutions;
@property(readonly, nonatomic) HMDCameraStreamSnapshotHandler *streamSnapshotHandler; // @synthesize streamSnapshotHandler=_streamSnapshotHandler;
@property(retain, nonatomic) HMDSnapshotFile *mostRecentSnapshot; // @synthesize mostRecentSnapshot=_mostRecentSnapshot;
@property(retain, nonatomic) HMFTimer *mostRecentSnapshotInvalidationTimer; // @synthesize mostRecentSnapshotInvalidationTimer=_mostRecentSnapshotInvalidationTimer;
@property(readonly, nonatomic) NSMutableArray *pendingRequests; // @synthesize pendingRequests=_pendingRequests;
@property(readonly, nonatomic) __weak HMDAccessory *accessory; // @synthesize accessory=_accessory;
@property(readonly, nonatomic) NSString *logString; // @synthesize logString=_logString;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
@property(readonly, nonatomic) NSString *imageCacheDirectory; // @synthesize imageCacheDirectory=_imageCacheDirectory;
- (void).cxx_destruct;
- (id)_saveSnapshotFile:(id)arg1;
- (void)streamSnapshotHandler:(id)arg1 didGetLastSnapshot:(id)arg2;
- (void)streamSnapshotHandler:(id)arg1 didGetNewSnapshot:(id)arg2;
- (void)_handleImageResourceData:(id)arg1 error:(id)arg2 requestedResolution:(id)arg3 snapshotDataTrasaction:(id)arg4;
- (id)_prepareResolutionPreference:(id)arg1;
- (void)_addSupportedResolutionsFrom:(id)arg1 to:(id)arg2;
- (void)_handleSupportedParameters:(id)arg1 sessionID:(id)arg2 streamingTierType:(unsigned long long)arg3;
- (void)_getSupportedVideoResolutions:(id)arg1 streamingTierType:(unsigned long long)arg2;
- (id)_resolutionToRequest:(unsigned long long)arg1;
- (void)_sendSnapshotRequest:(id)arg1 streamingTierType:(unsigned long long)arg2;
- (void)requestSnapshot:(id)arg1 streamingTierType:(unsigned long long)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)timerDidFire:(id)arg1;
- (id)logIdentifier;
- (id)initWithAccessory:(id)arg1 workQueue:(id)arg2 streamSnapshotHandler:(id)arg3 imageCacheDirectory:(id)arg4 logID:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

