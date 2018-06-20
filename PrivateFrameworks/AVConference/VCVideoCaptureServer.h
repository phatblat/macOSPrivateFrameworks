//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "VideoCaptureServer.h"

@class NSMutableArray, NSObject<AVConferencePreviewDelegate>, NSObject<OS_dispatch_queue>, NSObject<OS_dispatch_source>, NSObject<VideoCaptureProtocol>, NSString, VCImageQueue, VideoAttributes;

__attribute__((visibility("hidden")))
@interface VCVideoCaptureServer : NSObject <VideoCaptureServer>
{
    int currentWidth;
    int currentHeight;
    int currentFrameRate;
    int _maxFrameRate;
    int previewFrameCount;
    int captureFrameCount;
    NSObject<OS_dispatch_source> *cameraHealthMonitor;
    int pendingWidth;
    int pendingHeight;
    int pendingFrameRate;
    NSString *_currentCameraUniqueID;
    BOOL firstPreviewFrame;
    int snapshotRequestCount;
    NSMutableArray *cameraClients;
    NSMutableArray *screenCaptureClients;
    NSMutableArray *_cameraPreviewClients;
    VideoAttributes *localVideoAttributes;
    struct CGSize localScreenPortraitAspectRatio;
    struct CGSize localScreenLandscapeAspectRatio;
    struct CGSize localExpectedPortraitAspectRatio;
    struct CGSize localExpectedLandscapeAspectRatio;
    NSObject<OS_dispatch_queue> *captureServerQueue;
    NSObject<OS_dispatch_queue> *captureClientQueue;
    NSObject<OS_dispatch_queue> *captureCameraQueue;
    NSObject<OS_dispatch_queue> *_xpcCommandQueue;
    NSObject<OS_dispatch_queue> *delegateNotificationQueue;
    NSObject<OS_dispatch_queue> *variablesQueue;
    NSObject<OS_dispatch_queue> *snapshotQueue;
    NSObject<VideoCaptureProtocol> *avCapture;
    NSObject<VideoCaptureProtocol> *screenCapture;
    struct OpaqueVTPixelTransferSession *transferSession;
    struct __CVPixelBufferPool *bufferPool;
    BOOL resize;
    NSObject<AVConferencePreviewDelegate> *appDelegate;
    double falteredRenderingtimeStamp;
    VCImageQueue *frontQueue;
    VCImageQueue *backQueue;
    unsigned int _previewSlot;
    int _thermalNotificationToken;
    int _thermalLevel;
    int _newThermalLevel;
    int _peakPowerNotificationToken;
    int _peakPowerLevel;
    int _newPeakPowerLevel;
    BOOL _isPreviewRunning;
    BOOL _forceDisableThermal;
}

+ (id)VCVideoCaptureServerSingleton;
@property(retain) NSString *currentCameraUniqueID; // @synthesize currentCameraUniqueID=_currentCameraUniqueID;
@property(retain, nonatomic) NSObject<AVConferencePreviewDelegate> *appDelegate; // @synthesize appDelegate;
- (BOOL)cameraSupportsWidth:(int)arg1 height:(int)arg2;
- (void)resetCameraToPreviewSettingsForced:(BOOL)arg1;
- (void)setCaptureWidth:(int)arg1 height:(int)arg2 rate:(int)arg3;
- (void)setCaptureWidth:(int)arg1 height:(int)arg2 rate:(int)arg3 forced:(BOOL)arg4;
- (void)sendSnapshotFromFrame:(struct __CVBuffer *)arg1;
- (void)stopCapture;
- (void)startCaptureWithWidth:(int)arg1 height:(int)arg2 frameRate:(int)arg3 unpausing:(BOOL)arg4;
- (void)stopPreview;
- (void)pausePreview;
- (void)startPreviewUnpausing:(BOOL)arg1;
- (void)endPIPToPreviewAnimation;
- (void)beginPIPToPreviewAnimation;
- (void)endPreviewToPIPAnimation;
- (void)beginPreviewToPIPAnimation;
- (unsigned int)setLocalVideoDestination:(id)arg1 facing:(BOOL)arg2;
- (BOOL)setCaptureCameraWithUID:(id)arg1;
- (id)copyLocalScreenAttributesForVideoAttributes:(id)arg1;
- (id)localScreenAttributesForVideoAttributes:(id)arg1;
- (struct CGSize)localExpectedRatioForScreenOrientation:(int)arg1;
- (struct CGSize)localScreenRatioForScreenOrientation:(int)arg1;
- (BOOL)setLocalScreenAttributes:(id)arg1;
- (id)copyLocalVideoAttributes;
- (id)localVideoAttributes;
- (BOOL)setLocalVideoAttributes:(id)arg1;
- (void)updateImageQueueFrameRate:(int)arg1;
- (void)setCurrentFrameRate:(int)arg1;
- (void)setCaptureFrameRate:(int)arg1;
- (BOOL)isClientRegisteredForVideoFrames:(id)arg1 fromSource:(int)arg2;
- (BOOL)deregisterForVideoFramesFromSource:(int)arg1 withClient:(id)arg2;
- (BOOL)registerForVideoFramesFromSource:(int)arg1 withClient:(id)arg2 width:(int)arg3 height:(int)arg4 frameRate:(int)arg5 unpausing:(BOOL)arg6;
- (BOOL)registerForFrames:(id)arg1 unpausing:(BOOL)arg2;
- (struct __CFDictionary *)copyCameraColorInfo;
- (BOOL)canStopPreview;
- (void)changeCameraToPendingSettingsWithReset:(BOOL)arg1;
- (struct __CVBuffer *)createResizedFrame:(struct __CVBuffer *)arg1;
- (void)onCaptureScreenFrame:(struct opaqueCMSampleBuffer *)arg1 frameTime:(CDStruct_1b6d18a9)arg2 droppedFrames:(int)arg3 orientation:(int)arg4;
- (void)notifyFrameRateBeingThrottledForClients:(id)arg1 newFrameRate:(int)arg2 thermalLevelDidChange:(_Bool)arg3 powerLevelDidChange:(_Bool)arg4;
- (void)notifyThermalChangeForClients:(id)arg1;
- (int)getFrameRateForThermalLevel:(int)arg1 peakPowerPressure:(int)arg2;
- (int)getFrameRateForPeakPowerLevel:(int)arg1;
- (int)getFrameRateForThermalLevel:(int)arg1;
- (void)applyPressureLevelChanges;
- (void)clearAllStickers:(BOOL)arg1;
- (void)addStickerWithURL:(id)arg1 isFaceSticker:(BOOL)arg2 atPosition:(struct CGPoint)arg3 identifier:(id)arg4;
- (void)setMemoji:(id)arg1;
- (void)setAnimoji:(id)arg1;
- (void)onCaptureVideoFrame:(struct opaqueCMSampleBuffer *)arg1 frameTime:(CDStruct_1b6d18a9)arg2 preview:(BOOL)arg3 shouldEnqueueFrame:(BOOL)arg4 droppedFrames:(int)arg5 switching:(BOOL)arg6 orientation:(int)arg7 camera:(int)arg8;
- (BOOL)enqueueFrameToQueueFront:(BOOL)arg1 frame:(struct __CVBuffer *)arg2 frameTime:(CDStruct_1b6d18a9)arg3;
- (BOOL)captureVideoWidth:(int *)arg1 height:(int *)arg2 frameRate:(int *)arg3;
- (void)previewVideoWidth:(int *)arg1 height:(int *)arg2 frameRate:(int *)arg3;
- (void)reconnectClientLayerFront:(BOOL)arg1;
- (void)handleCaptureEvent:(id)arg1;
- (void)handleAVCaptureError:(int)arg1 error:(id)arg2;
- (int)createVideoCaptureWithWidth:(int)arg1 height:(int)arg2 frameRate:(int)arg3 useBackFacingCamera:(BOOL)arg4;
- (void)registerBlocksForServer;
- (id)autorelease;
- (oneway void)release;
- (unsigned long long)retainCount;
- (id)retain;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)allocWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)init;

@end

