//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <HomeKitDaemon/HMDTLVBase.h>

#import "HMDTLVCreateParse.h"
#import "NSSecureCoding.h"

@class HMDCameraRecordingAudioCodec, HMDCameraRecordingAudioCodecParameters;

@interface HMDCameraRecordingAudioCodecConfiguration : HMDTLVBase <HMDTLVCreateParse, NSSecureCoding>
{
    HMDCameraRecordingAudioCodec *_codec;
    HMDCameraRecordingAudioCodecParameters *_parameters;
}

+ (BOOL)supportsSecureCoding;
@property(readonly, copy, nonatomic) HMDCameraRecordingAudioCodecParameters *parameters; // @synthesize parameters=_parameters;
@property(readonly, copy, nonatomic) HMDCameraRecordingAudioCodec *codec; // @synthesize codec=_codec;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)description:(id)arg1 indent:(id)arg2;
- (id)tlvData;
- (BOOL)_parseFromTLVData;
- (id)initWithAudioCodec:(id)arg1 codecParameters:(id)arg2;

@end
