//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface VTUtilities : NSObject
{
}

+ (double)VTMachAbsoluteTimeGetTimeInterval:(unsigned long long)arg1;
+ (id)getAssetHashFromConfigPath:(id)arg1;
+ (unsigned long long)deviceCategoryForDeviceProductType:(id)arg1;
+ (id)deviceSoftwareVersion;
+ (id)deviceProductType;
+ (id)deviceProductVersion;
+ (BOOL)isInternalInstall;
+ (BOOL)supportPremiumAssets;
+ (BOOL)supportBargeIn;
+ (BOOL)isAlwaysOn;
+ (BOOL)supportExternalPhraseSpotter;
+ (BOOL)supportTTS;
+ (BOOL)VTIsHorseman;
+ (BOOL)isNano;
+ (double)systemUpTime;
+ (double)_round:(double)arg1 withPlaces:(int)arg2;
+ (id)sanitizeEventInfoForLogging:(id)arg1;
+ (void)forceReload;

@end
