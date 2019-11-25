//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@class NSData, NSError, NSString, VideoAttributes;

@protocol AVConferencePreviewClientDelegate

@optional
- (void)cameraZoomAvailabilityDidChange:(BOOL)arg1 currentZoomFactor:(double)arg2 maxZoomFactor:(double)arg3;
- (void)cameraZoomAvailabilityDidChange:(BOOL)arg1;
- (void)cameraDidBecomeInterruptedForForUniqueID:(NSString *)arg1 reason:(long long)arg2;
- (void)cameraDidBecomeAvailableForUniqueID:(NSString *)arg1;
- (void)didGetSnapshot:(NSData *)arg1;
- (void)didReceiveCommError;
- (void)didReceiveErrorFromCameraUniqueID:(NSString *)arg1 error:(NSError *)arg2;
- (void)didChangeLocalScreenAttributes:(VideoAttributes *)arg1;
- (void)didChangeLocalVideoAttributes:(VideoAttributes *)arg1;
- (void)didReceiveFirstPreviewFrameFromCameraUniqueID:(NSString *)arg1;
- (void)didReceiveFirstPreviewFrameFromCamera:(unsigned int)arg1;
- (void)didStopPreview;
- (void)didPausePreview;
- (void)didStartPreview;
@end

