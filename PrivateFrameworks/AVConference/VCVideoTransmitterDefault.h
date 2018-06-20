//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <AVConference/VCVideoTransmitterBase.h>

__attribute__((visibility("hidden")))
@interface VCVideoTransmitterDefault : VCVideoTransmitterBase
{
    struct tagHANDLE *_videoTransmitter;
}

- (void)handleActiveConnectionChange:(id)arg1;
- (void)collectChannelMetrics:(CDStruct_1c8e0384 *)arg1;
- (void)setIsServerBasedBandwidthProbingEnabled:(BOOL)arg1;
- (void)computeTimestamp:(unsigned int *)arg1 hostTime:(double *)arg2 forFrame:(struct opaqueCMSampleBuffer *)arg3;
- (void)setStreamIDs:(unsigned short *)arg1 numOfStreamIDs:(unsigned char)arg2 repairedStreamIDs:(unsigned short *)arg3 numOfRepairedStreamIDs:(unsigned char)arg4;
- (void)setKeyFrameOnlyStreamID:(unsigned short)arg1;
- (BOOL)enqueueVideoFrame:(struct opaqueCMSampleBuffer *)arg1 frameTime:(CDStruct_1b6d18a9)arg2 droppedFrames:(int)arg3 cameraStatusBits:(unsigned char)arg4;
- (unsigned int)setTemporaryMaximumBitrate:(unsigned int)arg1;
- (void)generateKeyFrame;
- (void)stopVideo;
- (void)startVideo;
- (void)dealloc;
- (id)initWithConfig:(id)arg1;

@end

