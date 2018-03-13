//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface VCBitrateArbiter : NSObject
{
    unsigned int _maxAllowedBitrate;
    unsigned int _maxAllowedBitrate2G;
    unsigned int _maxAllowedBitrate3G;
    unsigned int _maxAllowedBitrateLTE;
    unsigned int _maxAllowedBitrateWifi;
    unsigned int _maxAllowedScreenShareBitrate2G;
    unsigned int _maxAllowedScreenShareBitrate3G;
    unsigned int _maxAllowedScreenShareBitrateLTE;
    unsigned int _maxAllowedScreenShareBitrateWifi;
    unsigned int _maxAllowedAudioOnlyBitrate2G;
    unsigned int _maxAllowedAudioOnlyBitrate3G;
    unsigned int _maxAllowedAudioOnlyBitrateLTE;
    unsigned int _maxAllowedAudioOnlyBitrateWifi;
    NSMutableArray *supportedBitrateRules;
}

@property(readonly) unsigned int maxAllowedBitrateWifi; // @synthesize maxAllowedBitrateWifi=_maxAllowedBitrateWifi;
@property(readonly) unsigned int maxAllowedBitrateLTE; // @synthesize maxAllowedBitrateLTE=_maxAllowedBitrateLTE;
@property(readonly) unsigned int maxAllowedBitrate3G; // @synthesize maxAllowedBitrate3G=_maxAllowedBitrate3G;
@property(readonly) unsigned int maxAllowedBitrate2G; // @synthesize maxAllowedBitrate2G=_maxAllowedBitrate2G;
@property(readonly) unsigned int maxAllowedBitrate; // @synthesize maxAllowedBitrate=_maxAllowedBitrate;
- (unsigned int)maxAllowedBitrateForConnection:(int)arg1 operatingMode:(int)arg2;
- (id)maxAllowedBitrateRuleForConnection:(int)arg1;
- (unsigned int)maxAllowedAudioOnlyBitrateForConnection:(int)arg1;
- (unsigned int)maxAllowedScreenShareBitrateForConnection:(int)arg1;
- (unsigned int)maxAllowedBitrateForConnection:(int)arg1;
- (unsigned int)maxAllowedScreenShareCellularBitrate;
- (unsigned int)maxAllowedCellularBitrate;
- (void)readCarrierBundleValues;
- (void)readStoreBagValues:(void *)arg1;
- (void)readHardwareValues;
- (void)createSupportedBitrateRuleSets;
- (void)dealloc;
- (id)initWithDeviceRole:(int)arg1 callLogFile:(void *)arg2;

@end

