//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

__attribute__((visibility("hidden")))
@interface FFTMeter : NSObject
{
    struct vDSP_DFT_SetupStruct *fftSetup;
    struct DSPSplitComplex dspSplitComplex;
    float sampleHistory[3840];
    float magnitudeBuffer[1920];
    float fftBuffer[3840];
    float windowBuffer[3840];
    float windowHistory[3840];
    float octaveDbOld[54];
    float octaveDb[54];
    float octaveDbFilt[55];
    float lerpIdxs[66];
    float fftNormFactor;
    float adjust0DB;
}

- (id)computeWithSampleBuffer:(struct opaqueVCAudioBufferList *)arg1;
- (void)dealloc;
- (id)init;

@end

