//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface PAESharedDefaultBase : NSObject
{
    id <PROAPIAccessing> _apiManager;
    BOOL _upscalesFields;
    BOOL _hostIsFinalCutPro;
    BOOL _hostIsVertigo;
    BOOL _ignorePixelAspectRatio;
}

- (float)getBlendingGamma;
- (void)fxTime:(CDUnion_baaf6063 *)arg1 fromFrame:(double)arg2 forPlugIn:(id)arg3;
- (double)frameFromFxTime:(CDUnion_baaf6063)arg1 forPlugIn:(id)arg2;
- (double)frameRate;
- (double)secondsFromFxTime:(CDUnion_baaf6063)arg1;
- (double)relativeShutterForAngle:(double)arg1;
- (BOOL)getPoint:(PCVector2_5d498db0 *)arg1 fromParm:(unsigned int)arg2 atTime:(CDUnion_baaf6063)arg3 withImage:(id)arg4;
- (BOOL)ignoresPixelAspectRatio;
- (void)setIgnoresPixelAspectRatio:(BOOL)arg1;
- (HGRef_265f9e4c)transformFromImage:(id)arg1 toImage:(id)arg2 fit:(BOOL)arg3;
- (void)transform:(HGRef_265f9e4c *)arg1 fromImage:(id)arg2 toImage:(id)arg3 fit:(BOOL)arg4;
- (BOOL)smear:(HGRef_265f9e4c)arg1 fromImage:(id)arg2 toImage:(id)arg3 resultNode:(HGRef_265f9e4c *)arg4;
- (HGRef_265f9e4c)smear:(HGRef_265f9e4c)arg1 fromImage:(id)arg2 toImage:(id)arg3;
- (HGRef_265f9e4c)cropFromImage:(id)arg1 toImage:(id)arg2;
- (void)crop:(HGRef_265f9e4c *)arg1 withRect:(PCRect_7f811c82)arg2;
- (void)crop:(HGRef_265f9e4c *)arg1 fromImage:(id)arg2 toImage:(id)arg3;
- (BOOL)getCropRectFromImage:(id)arg1 toImage:(id)arg2 output:(PCRect_7f811c82 *)arg3;
- (PCRect_7f811c82)getCropRectFromImage:(id)arg1 toImage:(id)arg2;
- (PCRect_7f811c82)getImageBoundary:(id)arg1;
- (PCVector2_5d498db0)convertRelativeToPixelCoordinates:(const PCVector2_5d498db0 *)arg1 withImage:(id)arg2;
- (PCVector2_5d498db0)convertRelativeToImageCoordinates:(const PCVector2_5d498db0 *)arg1 withImage:(id)arg2;
- (PCMatrix44Tmpl_93ed1289)getInversePixelTransformForImage:(id)arg1;
- (PCVector2_5d498db0)getScaleForImage:(id)arg1;
- (PCMatrix44Tmpl_93ed1289)getPixelTransformForImage:(id)arg1;
- (BOOL)getHeliumImage:(id *)arg1 source:(BOOL)arg2 withInfo:(CDStruct_f5b31fc1)arg3 atTime:(CDUnion_baaf6063)arg4;
- (BOOL)getHeliumImage:(id *)arg1 layerOffsetX:(double *)arg2 layerOffsetY:(double *)arg3 requestInfo:(CDStruct_f5b31fc1)arg4 fromParm:(int)arg5 atTime:(CDUnion_baaf6063)arg6;
- (HGRef_265f9e4c)changeDOD:(HGRef_265f9e4c)arg1 withRect:(const PCRect_3a266109 *)arg2;
- (void)overrideFrameSetupForRenderMode:(CDStruct_f5b31fc1)arg1 hardware:(char *)arg2 software:(char *)arg3;
- (int)getRenderMode:(CDUnion_baaf6063)arg1;
- (BOOL)frameCleanup;
- (BOOL)frameSetup:(CDStruct_f5b31fc1)arg1 inputInfo:(CDStruct_4a07eeda)arg2 hardware:(char *)arg3 software:(char *)arg4;
- (BOOL)addParameters;
- (id)properties;
- (BOOL)variesOverTime;
- (void)dealloc;
- (id)initWithAPIManager:(id)arg1;

@end

