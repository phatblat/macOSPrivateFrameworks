//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class DolbyVisionComposer, DolbyVisionDisplayManagement, NSObject<OS_dispatch_queue>, NSObject<OS_dispatch_semaphore>, SpatialResampler;

@interface HDRProcessorMetal : NSObject
{
    id <MTLDevice> _device;
    id <MTLCommandQueue> _commandQueue;
    DolbyVisionComposer *_composer;
    SpatialResampler *_resampler;
    DolbyVisionDisplayManagement *_dm;
    struct EDRMetaData_RBSP *_parser;
    CDStruct_634fb64f _edrMetaData[2];
    unsigned int _hdrMode;
    unsigned long long _bitDepth;
    unsigned int _displayType;
    unsigned long long _displayDiagonalSize;
    unsigned long long _maxDisplayBrightnessNits;
    float _minDisplayBrightnessNits;
    unsigned long long _videoFullRangeFlag;
    unsigned long long _colourPrimaries;
    unsigned long long _transferFunction;
    unsigned long long _matrixCoeffs;
    unsigned long long _maxMasteringNits;
    float _minMasteringNits;
    unsigned long long _numberOfRequestedFrames;
    unsigned long long _numberOfScheduledFrames;
    unsigned long long _numberOfProcessedFrames;
    CDStruct_f0352202 _configurationParameters;
    struct __CVPixelBufferPool *_420vPool;
    struct __CVPixelBufferPool *_x420Pool;
    NSObject<OS_dispatch_queue> *_scheduleQueue;
    NSObject<OS_dispatch_queue> *_completionQueue;
    NSObject<OS_dispatch_semaphore> *_scheduleSemaphone;
    float _defaultMaxEDRValue;
    float _defaultEDRFactorValue;
    float _defaultAmbientLightValue;
    double _targetNits;
    struct __CFString *_targetColorPrimaries;
}

@property struct __CFString *targetColorPrimaries; // @synthesize targetColorPrimaries=_targetColorPrimaries;
@property double targetNits; // @synthesize targetNits=_targetNits;
@property float defaultAmbientLightValue; // @synthesize defaultAmbientLightValue=_defaultAmbientLightValue;
@property float defaultEDRFactorValue; // @synthesize defaultEDRFactorValue=_defaultEDRFactorValue;
@property float defaultMaxEDRValue; // @synthesize defaultMaxEDRValue=_defaultMaxEDRValue;
- (void).cxx_destruct;
- (long long)encodeToCommandBuffer:(id)arg1 inputSurfaceLayer0:(struct __IOSurface *)arg2 inputSurfacelayer1:(struct __IOSurface *)arg3 outputSurface:(struct __IOSurface *)arg4 metadata:(id)arg5;
- (id)initWithDevice:(id)arg1 config:(const CDStruct_f0352202 *)arg2;
- (long long)processPixelsWithLayer0:(struct __IOSurface *)arg1 layer1:(struct __IOSurface *)arg2 output:(struct __IOSurface *)arg3 metaData:(CDStruct_634fb64f *)arg4 tcControl:(struct ToneCurve_Control *)arg5 hdrControl:(CDStruct_bea360c6 *)arg6 hdr10InfoFrame:(CDStruct_52986d3b *)arg7 commandbuffer:(id)arg8;
- (void)extractFrameMetadata:(struct __CFDictionary *)arg1 intoTCControl:(struct ToneCurve_Control *)arg2;
- (unsigned int)selectHDRUsage;
- (void)setCSCMatrixInHDRControl:(CDStruct_bea360c6 *)arg1 forIndex:(unsigned int)arg2;
- (void)setHDRControl:(CDStruct_bea360c6 *)arg1 withRUP:(BOOL)arg2;
- (void)extractHEVCHDRParameterFromInputIOSurface:(struct __IOSurface *)arg1 forInfoFrame:(CDStruct_52986d3b *)arg2;
- (void)extractCAMetaData:(id)arg1 withRPU:(BOOL)arg2;
- (void)checkIOSurface:(struct __IOSurface *)arg1 forInfoFrame:(CDStruct_52986d3b *)arg2 withRPUData:(BOOL)arg3;
- (void)processFrameInternalWithLayer0:(struct __IOSurface *)arg1 layer1:(struct __IOSurface *)arg2 outout:(struct __IOSurface *)arg3 metadata:(id)arg4 commandbuffer:(id)arg5;
- (long long)processFrameWithLayer0:(struct __CVBuffer *)arg1 layer1:(struct __CVBuffer *)arg2 output:(struct __CVBuffer *)arg3 metadata:(id)arg4 commandbuffer:(id)arg5 callback:(CDUnknownBlockType)arg6;
- (void)releaseResources;
- (void)dealloc;
- (BOOL)allocateResources;
- (id)initWithConfigurationParameters:(CDStruct_f0352202 *)arg1;

@end

