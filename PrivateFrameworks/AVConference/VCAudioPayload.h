//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class VCAudioPayloadConfig;

__attribute__((visibility("hidden")))
@interface VCAudioPayload : NSObject
{
    struct SoundDec_t *_encoder;
    VCAudioPayloadConfig *_config;
    unsigned int _bitrate;
    BOOL _shouldReset;
}

@property(readonly, nonatomic) unsigned int bitrate; // @synthesize bitrate=_bitrate;
@property(readonly, nonatomic) VCAudioPayloadConfig *config; // @synthesize config=_config;
- (id)description;
- (BOOL)getMagicCookie:(char *)arg1 withLength:(unsigned int *)arg2;
- (BOOL)setBitrate:(unsigned int)arg1;
- (void)resetEncoderWithSampleBuffer:(char *)arg1 numBytes:(int)arg2;
- (void)resetEncoder;
- (int)encodeAudio:(struct opaqueVCAudioBufferList *)arg1 numInputSamples:(int)arg2 outputBytes:(void *)arg3 numOutputBytes:(int)arg4;
- (BOOL)createEncoderWithInputFormat:(struct AudioStreamBasicDescription *)arg1;
- (void)dealloc;
- (id)initWithConfig:(id)arg1;
- (BOOL)isDTXEmptyPacket:(unsigned int)arg1;

@end

