//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "CRCaptureSessionManager.h"

@class AVCaptureDeviceInput, AVCaptureInputPort, AVCaptureSession, AVCaptureVideoDataOutput, AVCaptureVideoPreviewLayer, CALayer, NSString;

@interface CRDefaultCaptureSessionManager : NSObject <CRCaptureSessionManager>
{
    BOOL _enableMetadataOutput;
    BOOL _exposureAdjustmentInProgress;
    BOOL _runningManualExposure;
    float _maxISO;
    float _minISO;
    int _exposureAdjustmentInProgressTimeoutCount;
    long long _cameraPosition;
    NSString *_cameraMode;
    long long _whiteBalanceMode;
    long long _focusMode;
    long long _exposureMode;
    long long _torchMode;
    id <AVCaptureVideoDataOutputSampleBufferDelegate> _captureSessionDelegate;
    NSString *_currentDeviceID;
    AVCaptureSession *_captureSession;
    AVCaptureVideoPreviewLayer *_avfPreviewLayer;
    AVCaptureDeviceInput *_deviceInput;
    AVCaptureVideoDataOutput *_captureVideoDataOutput;
    id _inputPortFormatObserver;
    AVCaptureInputPort *_inputPortFormatSender;
    CDStruct_7012203e *_exposure_table;
    struct CGSize _cameraResolution;
    CDStruct_1b6d18a9 _highISOThresholdDuration;
}

@property CDStruct_7012203e *exposure_table; // @synthesize exposure_table=_exposure_table;
@property BOOL runningManualExposure; // @synthesize runningManualExposure=_runningManualExposure;
@property int exposureAdjustmentInProgressTimeoutCount; // @synthesize exposureAdjustmentInProgressTimeoutCount=_exposureAdjustmentInProgressTimeoutCount;
@property BOOL exposureAdjustmentInProgress; // @synthesize exposureAdjustmentInProgress=_exposureAdjustmentInProgress;
@property CDStruct_1b6d18a9 highISOThresholdDuration; // @synthesize highISOThresholdDuration=_highISOThresholdDuration;
@property float minISO; // @synthesize minISO=_minISO;
@property float maxISO; // @synthesize maxISO=_maxISO;
@property(nonatomic) __weak AVCaptureInputPort *inputPortFormatSender; // @synthesize inputPortFormatSender=_inputPortFormatSender;
@property(retain) id inputPortFormatObserver; // @synthesize inputPortFormatObserver=_inputPortFormatObserver;
@property(retain, nonatomic) AVCaptureVideoDataOutput *captureVideoDataOutput; // @synthesize captureVideoDataOutput=_captureVideoDataOutput;
@property(retain, nonatomic) AVCaptureDeviceInput *deviceInput; // @synthesize deviceInput=_deviceInput;
@property(retain, nonatomic) AVCaptureVideoPreviewLayer *avfPreviewLayer; // @synthesize avfPreviewLayer=_avfPreviewLayer;
@property(retain, nonatomic) AVCaptureSession *captureSession; // @synthesize captureSession=_captureSession;
@property struct CGSize cameraResolution; // @synthesize cameraResolution=_cameraResolution;
@property BOOL enableMetadataOutput; // @synthesize enableMetadataOutput=_enableMetadataOutput;
@property(retain) NSString *currentDeviceID; // @synthesize currentDeviceID=_currentDeviceID;
@property __weak id <AVCaptureVideoDataOutputSampleBufferDelegate> captureSessionDelegate; // @synthesize captureSessionDelegate=_captureSessionDelegate;
@property(nonatomic) long long torchMode; // @synthesize torchMode=_torchMode;
@property(nonatomic) long long exposureMode; // @synthesize exposureMode=_exposureMode;
@property(nonatomic) long long focusMode; // @synthesize focusMode=_focusMode;
@property(nonatomic) long long whiteBalanceMode; // @synthesize whiteBalanceMode=_whiteBalanceMode;
@property(copy, nonatomic) NSString *cameraMode; // @synthesize cameraMode=_cameraMode;
@property(nonatomic) long long cameraPosition; // @synthesize cameraPosition=_cameraPosition;
- (void).cxx_destruct;
- (struct CGRect)previewVisibleRect;
- (BOOL)isPreviewVideoMirrored;
- (struct CGPoint)focusPointOfInterest;
- (BOOL)isFocusPointOfInterestSupported;
- (void)highISOAdjustExposure;
- (void)setupHighISO:(id)arg1;
- (struct CGRect)convertCameraRect:(struct CGRect)arg1 fromLayer:(id)arg2;
- (struct CGPoint)convertCameraPointOCR:(struct CGPoint)arg1 toLayer:(id)arg2 flipped:(BOOL)arg3;
- (struct CGPoint)convertCameraPoint:(struct CGPoint)arg1 toLayer:(id)arg2 flipped:(BOOL)arg3;
- (struct CGPoint)convertCameraPoint:(struct CGPoint)arg1 toLayer:(id)arg2;
- (struct CGPoint)convertCameraPoint:(struct CGPoint)arg1 fromLayer:(id)arg2;
- (BOOL)isAdjustingFocus;
- (BOOL)switchToCamera:(long long)arg1;
- (BOOL)switchToCameraWithDeviceID:(id)arg1;
- (BOOL)toggleCamera;
- (id)captureDeviceWithIdentifier:(id)arg1;
- (id)captureDeviceWithPosition:(long long)arg1;
- (id)backFacingCamera;
- (id)frontFacingCamera;
- (unsigned long long)cameraCount;
- (BOOL)isRearCamera;
- (void)changeCameraConfiguration;
- (void)teardownCameraSession;
- (void)setupCameraSessionWithCaptureDevice:(id)arg1;
- (void)setupCameraSession;
- (int)targetVideoFormat;
- (BOOL)isRunning;
- (void)startRunning;
- (void)cacheCameraResolution:(id)arg1;
- (void)stopRunning;
@property(readonly, nonatomic) CALayer *previewLayer;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

