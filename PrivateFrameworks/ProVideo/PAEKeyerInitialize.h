//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class PAEKeyer;

@interface PAEKeyerInitialize : NSObject
{
    PAEKeyer *_keyer;
    id _apiManager;
}

+ (void)setInitialSamples:(vector_ff5abfb7 *)arg1 autokeySetupUtil:(id)arg2 sampleBoxHalfDim:(float)arg3;
- (BOOL)findSampleRectsWithInfo:(CDStruct_f5b31fc1)arg1 screenColor:(int *)arg2 colorPrimaries:(int)arg3 width:(int)arg4 height:(int)arg5 minGreenHueAngle:(float)arg6 maxGreenHueAngle:(float)arg7 greenChroma:(float)arg8 minBlueHueAngle:(float)arg9 maxBlueHueAngle:(float)arg10 blueChroma:(float)arg11 histoPercentageIncluded:(float)arg12 omSamples:(struct OMSamples *)arg13 viewingSetupMatte:(BOOL)arg14 use32x32Histogram:(BOOL)arg15 simpleKey:(BOOL)arg16;
- (BOOL)calculateInitialMatteWithInfo:(CDStruct_f5b31fc1)arg1 omSamples:(struct OMSamples *)arg2 colorPrimaries:(int)arg3 screenColor:(int *)arg4 minGreenHueAngle:(float)arg5 maxGreenHueAngle:(float)arg6 greenChroma:(float)arg7 minBlueHueAngle:(float)arg8 maxBlueHueAngle:(float)arg9 blueChroma:(float)arg10 histoPercentageIncluded:(float)arg11 use32x32x32:(BOOL)arg12 simpleKey:(BOOL)arg13;
- (void)calculateInitialSamples:(struct ColorHisto *)arg1 percentageOfBaseColorIncluded:(float)arg2 use32x32x32:(BOOL)arg3 autokeySetupUtil:(id)arg4 samples:(vector_ff5abfb7 *)arg5;
- (void)dealloc;
- (id)initWithAPIManager:(id)arg1 keyer:(id)arg2;

@end
