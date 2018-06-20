//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <HomeKit/HMCameraControl.h>

#import "_HMCameraStreamControlDelegate.h"

@class HMCameraStream, NSObject<OS_dispatch_queue>, NSString, _HMCameraStreamControl;

@interface HMCameraStreamControl : HMCameraControl <_HMCameraStreamControlDelegate>
{
    id <HMCameraStreamControlDelegate> _delegate;
    _HMCameraStreamControl *_streamControl;
    NSObject<OS_dispatch_queue> *_propertyQueue;
}

@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *propertyQueue; // @synthesize propertyQueue=_propertyQueue;
@property(retain, nonatomic) _HMCameraStreamControl *streamControl; // @synthesize streamControl=_streamControl;
- (void).cxx_destruct;
- (void)cameraStreamControl:(id)arg1 didStopStream:(id)arg2;
- (void)cameraStreamControlDidStartStream:(id)arg1;
- (void)stopStream;
- (void)startStreamWithPreferences:(id)arg1;
- (void)startStream;
@property(readonly, nonatomic) HMCameraStream *cameraStream;
@property(readonly, nonatomic) unsigned long long streamState;
@property(nonatomic) __weak id <HMCameraStreamControlDelegate> delegate; // @synthesize delegate=_delegate;
- (id)initWithStreamControl:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

