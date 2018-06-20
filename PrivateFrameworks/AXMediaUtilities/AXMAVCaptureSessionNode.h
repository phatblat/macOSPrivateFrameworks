//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <AXMediaUtilities/AXMSourceNode.h>

#import "AVCaptureVideoDataOutputSampleBufferDelegate.h"

@class AVCaptureSession, AXMVisionAnalysisOptions, NSObject<OS_dispatch_queue>, NSString;

@interface AXMAVCaptureSessionNode : AXMSourceNode <AVCaptureVideoDataOutputSampleBufferDelegate>
{
    NSObject<OS_dispatch_queue> *_avkit_queue;
    id <AXMAVCaptureSessionNodeDelegate> _captureSessionNodeDelegate;
    AVCaptureSession *_captureSession;
    AXMVisionAnalysisOptions *_analysisOptions;
}

+ (id)title;
+ (BOOL)isSupported;
+ (BOOL)supportsSecureCoding;
@property(retain, nonatomic) AXMVisionAnalysisOptions *analysisOptions; // @synthesize analysisOptions=_analysisOptions;
@property(nonatomic) __weak AVCaptureSession *captureSession; // @synthesize captureSession=_captureSession;
@property(nonatomic) __weak id <AXMAVCaptureSessionNodeDelegate> captureSessionNodeDelegate; // @synthesize captureSessionNodeDelegate=_captureSessionNodeDelegate;
- (void).cxx_destruct;
- (void)captureOutput:(id)arg1 didDropSampleBuffer:(struct opaqueCMSampleBuffer *)arg2 fromConnection:(id)arg3;
- (void)captureOutput:(id)arg1 didOutputSampleBuffer:(struct opaqueCMSampleBuffer *)arg2 fromConnection:(id)arg3;
- (void)endAutoTriggerOfVideoFrameEvents;
- (void)autoTriggerVideoFrameEventsWithAVCaptureSession:(id)arg1 options:(id)arg2 delegate:(id)arg3;
- (void)nodeInitialize;
- (void)produceImage:(id)arg1;
- (void)setShouldProcessRemotely:(BOOL)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

