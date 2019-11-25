//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <HomeKitDaemon/HMDTLVBase.h>

#import "HMDTLVCreateParse.h"
#import "NSSecureCoding.h"

@class NSArray, NSNumber;

@interface HMDCameraRecordingAudioCodecParameters : HMDTLVBase <HMDTLVCreateParse, NSSecureCoding>
{
    NSNumber *_audioChannelCount;
    NSArray *_bitRateModes;
    NSArray *_audioSampleRates;
    NSNumber *_maxAudioBitRate;
}

+ (BOOL)supportsSecureCoding;
@property(readonly, copy, nonatomic) NSNumber *maxAudioBitRate; // @synthesize maxAudioBitRate=_maxAudioBitRate;
@property(readonly, copy, nonatomic) NSArray *audioSampleRates; // @synthesize audioSampleRates=_audioSampleRates;
@property(readonly, copy, nonatomic) NSArray *bitRateModes; // @synthesize bitRateModes=_bitRateModes;
@property(readonly, copy, nonatomic) NSNumber *audioChannelCount; // @synthesize audioChannelCount=_audioChannelCount;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)description:(id)arg1 indent:(id)arg2;
- (id)tlvData;
- (BOOL)_parseFromTLVData;
- (id)initWithChannelCount:(id)arg1 bitRateModes:(id)arg2 audioSampleRates:(id)arg3 maxAudioBitRate:(id)arg4;

@end

