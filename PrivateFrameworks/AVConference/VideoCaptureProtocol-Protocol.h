//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@class NSData, NSString, NSURL;

@protocol VideoCaptureProtocol
- (BOOL)cameraSupportsFormatWidth:(int)arg1 height:(int)arg2;
- (int)frameBecameAvailableCount:(int *)arg1 figBufferQueueEmptyCount:(int *)arg2 figBufferQueueErrorCount:(int *)arg3;
- (int)getPreviewFrameCount:(int *)arg1 captureFrameCount:(int *)arg2 reset:(BOOL)arg3;
- (BOOL)isFrontCamera;
- (int)setFrameRate:(int)arg1;
- (NSString *)getCameraUID;
- (int)setCameraWithUID:(NSString *)arg1;
- (BOOL)isPreviewRunning;
- (int)copyColorInfo:(const struct __CFDictionary **)arg1;
- (int)setWidth:(int)arg1 height:(int)arg2 frameRate:(int)arg3;
- (int)stop:(BOOL)arg1;
- (int)startCaptureWithWidth:(int)arg1 height:(int)arg2 frameRate:(int)arg3;
- (int)startPreview;

@optional
- (void)addStickerWithURL:(NSURL *)arg1 atPosition:(struct CGPoint)arg2 identifier:(NSString *)arg3;
- (BOOL)setMemoji:(NSData *)arg1;
- (BOOL)setAnimoji:(NSString *)arg1;
- (unsigned int)previewSlot;
@end

