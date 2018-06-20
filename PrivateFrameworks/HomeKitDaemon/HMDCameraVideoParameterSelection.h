//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <HomeKitDaemon/HMDCameraParameterSelectionBase.h>

@class HMDCameraVideoTier, HMDCameraVideoTierParameters, HMDH264Level, HMDH264Profile, HMDPacketizationMode, HMDSelectedVideoParameters, HMDStreamingCapabilities, HMDSupportedRTPConfiguration, HMDSupportedVideoStreamConfiguration, HMDVideoCodec, NSArray, NSNumber;

@interface HMDCameraVideoParameterSelection : HMDCameraParameterSelectionBase
{
    HMDSupportedVideoStreamConfiguration *_supportedVideoStreamConfiguration;
    HMDSupportedRTPConfiguration *_rtpConfiguration;
    NSNumber *_syncSource;
    HMDSelectedVideoParameters *_selectedVideoParameters;
    HMDStreamingCapabilities *_streamingCapabilities;
    NSArray *_videoCodecsPreference;
    NSArray *_h264ProfilesPreference;
    NSArray *_h264LevelsPreference;
    NSArray *_h264PacketizationPreference;
    NSArray *_videoResolutionsPreference;
    NSArray *_validVideoParameterCombinations;
    HMDCameraVideoTierParameters *_videoTierParameters;
    HMDH264Profile *_selectedProfile;
    HMDH264Level *_selectedLevel;
    HMDPacketizationMode *_selectedPacketizationMode;
    NSNumber *_selectedFramerate;
    HMDCameraVideoTier *_selectedVideoTier;
    HMDVideoCodec *_selectedCodecType;
}

+ (id)logCategory;
@property(retain, nonatomic) HMDVideoCodec *selectedCodecType; // @synthesize selectedCodecType=_selectedCodecType;
@property(retain, nonatomic) HMDCameraVideoTier *selectedVideoTier; // @synthesize selectedVideoTier=_selectedVideoTier;
@property(retain, nonatomic) NSNumber *selectedFramerate; // @synthesize selectedFramerate=_selectedFramerate;
@property(retain, nonatomic) HMDPacketizationMode *selectedPacketizationMode; // @synthesize selectedPacketizationMode=_selectedPacketizationMode;
@property(retain, nonatomic) HMDH264Level *selectedLevel; // @synthesize selectedLevel=_selectedLevel;
@property(retain, nonatomic) HMDH264Profile *selectedProfile; // @synthesize selectedProfile=_selectedProfile;
@property(readonly, nonatomic) HMDCameraVideoTierParameters *videoTierParameters; // @synthesize videoTierParameters=_videoTierParameters;
@property(readonly, nonatomic) NSArray *validVideoParameterCombinations; // @synthesize validVideoParameterCombinations=_validVideoParameterCombinations;
@property(readonly, nonatomic) NSArray *videoResolutionsPreference; // @synthesize videoResolutionsPreference=_videoResolutionsPreference;
@property(readonly, nonatomic) NSArray *h264PacketizationPreference; // @synthesize h264PacketizationPreference=_h264PacketizationPreference;
@property(readonly, nonatomic) NSArray *h264LevelsPreference; // @synthesize h264LevelsPreference=_h264LevelsPreference;
@property(readonly, nonatomic) NSArray *h264ProfilesPreference; // @synthesize h264ProfilesPreference=_h264ProfilesPreference;
@property(readonly, nonatomic) NSArray *videoCodecsPreference; // @synthesize videoCodecsPreference=_videoCodecsPreference;
@property(readonly, nonatomic) HMDStreamingCapabilities *streamingCapabilities; // @synthesize streamingCapabilities=_streamingCapabilities;
@property(retain, nonatomic) HMDSelectedVideoParameters *selectedVideoParameters; // @synthesize selectedVideoParameters=_selectedVideoParameters;
@property(readonly, nonatomic) NSNumber *syncSource; // @synthesize syncSource=_syncSource;
@property(readonly, nonatomic) HMDSupportedRTPConfiguration *rtpConfiguration; // @synthesize rtpConfiguration=_rtpConfiguration;
@property(readonly, nonatomic) HMDSupportedVideoStreamConfiguration *supportedVideoStreamConfiguration; // @synthesize supportedVideoStreamConfiguration=_supportedVideoStreamConfiguration;
- (void).cxx_destruct;
- (void)_generateAllCombinations;
- (id)createReselectedVideoParameters:(id)arg1;
- (id)createSelectedVideoParameters;
- (id)createSRTPParamters;
- (BOOL)_selectParametersFromCodec:(id)arg1 profiles:(id)arg2 levels:(id)arg3 packetizationModes:(id)arg4 videoAttributes:(id)arg5;
- (BOOL)selectVideoParameters;
- (id)logIdentifier;
- (void)_setVideoResolutionPreference;
- (id)initWithSessionID:(id)arg1 videoTierParameters:(id)arg2 supportedVideoConfiguration:(id)arg3 supportedRTPConfiguration:(id)arg4 streamingCapabilities:(id)arg5;

@end

