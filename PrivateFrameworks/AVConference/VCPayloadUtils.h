//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

__attribute__((visibility("hidden")))
@interface VCPayloadUtils : NSObject
{
}

+ (unsigned int)bitrateForEVSCodecMode:(int)arg1;
+ (unsigned int)bitrateForAMRWBCodecMode:(int)arg1;
+ (unsigned int)bitrateForAMRCodecMode:(int)arg1;
+ (BOOL)supportsCodecRateModesForCodecType:(long long)arg1;
+ (unsigned int)bitrateForCodecType:(long long)arg1 mode:(int)arg2;
+ (int)payloadForCodecType:(long long)arg1;
+ (long long)codecTypeForPayload:(int)arg1;
+ (float)qualityForPayload:(int)arg1 forBitrate:(unsigned int)arg2;
+ (BOOL)shouldEnablePacketSizeLimitForPayload:(int)arg1;
+ (unsigned int)internalBundleFactorForPayload:(int)arg1;
+ (BOOL)canBundleExternallyForPayload:(int)arg1 forBundlingScheme:(int)arg2 operatingMode:(int)arg3;
+ (BOOL)shouldUseCookieForPayload:(int)arg1;
+ (BOOL)canSetBitrateForPayload:(int)arg1;
+ (unsigned int)blockSizeForPayload:(int)arg1;
+ (unsigned int)sampleRateForPayload:(int)arg1;
+ (BOOL)isPayloadSupportedInFaceTime:(int)arg1;
+ (BOOL)isUseCaseWatchContinuity:(int)arg1 primaryPayload:(int)arg2;

@end

