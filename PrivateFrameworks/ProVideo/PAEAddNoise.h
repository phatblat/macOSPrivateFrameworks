//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <ProVideo/PAEFilterDefaultBase.h>

@interface PAEAddNoise : PAEFilterDefaultBase
{
}

- (id)dynamicPropertiesAtTime:(CDUnion_baaf6063)arg1 withError:(id *)arg2;
- (id)properties;
- (BOOL)frameSetup:(CDStruct_f5b31fc1)arg1 inputInfo:(CDStruct_4a07eeda)arg2 hardware:(char *)arg3 software:(char *)arg4;
- (BOOL)canThrowRenderOutput:(id)arg1 withInput:(id)arg2 withInfo:(CDStruct_f5b31fc1)arg3;
- (HGRef_265f9e4c)noiseNodeWithWidth:(int)arg1 height:(int)arg2 noiseType:(int)arg3 isMono:(BOOL)arg4 frameNum:(double)arg5 autoAnimate:(BOOL)arg6 randomSeed:(int)arg7 inputPixelTransform:(PCMatrix44Tmpl_93ed1289)arg8 outputPixelTransform:(PCMatrix44Tmpl_93ed1289)arg9 outputInvPixelTransform:(PCMatrix44Tmpl_93ed1289)arg10 is360:(BOOL)arg11;
- (HGRef_265f9e4c)translateNode:(HGRef_265f9e4c)arg1 byAmount:(PCVector2_5d498db0)arg2 andCropTo:(struct HGRect)arg3;
- (BOOL)parameterChanged:(unsigned int)arg1;
- (BOOL)addParameters;
- (BOOL)variesOverTime;
- (id)initWithAPIManager:(id)arg1;

@end

