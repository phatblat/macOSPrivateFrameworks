//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class PipelineStatePromise;

@interface MetalFAST9BRIEF : NSObject
{
    id <MTLDevice> _device;
    id <MTLCommandQueue> _queue;
    id <MTLLibrary> _library;
    id <MTLFunction> _response4MapKernel;
    id <MTLFunction> _suppress4MapKernel;
    id <MTLFunction> _compute4HistogramKernel;
    id <MTLFunction> _responseMapKernel;
    id <MTLFunction> _suppressMapKernel;
    id <MTLFunction> _computeHistogramKernel;
    id <MTLFunction> _histogramThresholdKernel;
    id <MTLFunction> _cumulativeSumSimpleKernel;
    id <MTLFunction> _compactMPSBuffersKernel;
    id <MTLComputePipelineState> _histogramThresholdPipelineState;
    id <MTLComputePipelineState> _cumulativeSumSimplePipelineState;
    id <MTLComputePipelineState> _compactMPSBuffersPipelineState;
    id <MTLFunction> _listKeypointsSimpleKernel;
    id <MTLFunction> _listKeypointsKernel;
    id <MTLFunction> _listKeypoints2Kernel;
    id <MTLFunction> _listKeypoints3Kernel;
    id <MTLComputePipelineState> _listKeypointsSimplePipelineState;
    id <MTLComputePipelineState> _listKeypointsPipelineState;
    id <MTLComputePipelineState> _listKeypoints2PipelineState;
    id <MTLComputePipelineState> _listKeypoints3PipelineState;
    id <MTLFunction> _refineKeypointKernel;
    id <MTLFunction> _extractORBKernel;
    id <MTLFunction> _boxBlurKernel;
    id <MTLFunction> _boxBlurKernel_R8;
    id <MTLComputePipelineState> _refineKeypointPipelineState;
    id <MTLComputePipelineState> _extractORBPipelineState;
    id <MTLComputePipelineState> _boxBlurPipelineState;
    id <MTLComputePipelineState> _boxBlurR8PipelineState;
    id <MTLFunction> _gaussianishBlurKernel;
    id <MTLSamplerState> _clampedLinearNonNormSamplerState;
    PipelineStatePromise *_pipelineStates;
    struct __CVMetalTextureCache *_textureCache;
}

+ (id)_createMTLBufferFromRectRegionsDesiredKeypoints:(id)arg1 device:(id)arg2 storageMode:(unsigned long long)arg3 maxAllowedDescriptors:(unsigned long long *)arg4;
+ (id)_createMTLBufferFromRects:(id)arg1 device:(id)arg2 storageMode:(unsigned long long)arg3 maxRectWidth:(unsigned long long *)arg4 maxRectHeight:(unsigned long long *)arg5;
@property(readonly, retain) id <MTLCommandQueue> queue; // @synthesize queue=_queue;
@property(readonly, retain) id <MTLDevice> device; // @synthesize device=_device;
- (void).cxx_destruct;
- (void)_gaussianishBlur_metal:(id)arg1 inputTexture:(id)arg2 outputTexture:(id)arg3 offset:(struct CGPoint)arg4;
- (void)ORBDescriptorsFromPixelBuffer_metal:(id)arg1 inputBuffer:(struct __CVBuffer *)arg2 descriptorBuffer:(id)arg3 refinedKeypointsBuffer:(id)arg4 responseBuffer:(id)arg5 cumulativeKeypointsPerRegionBuffer:(id)arg6 intermediateBuffers:(id)arg7;
- (void)_ORBDescriptorsFromTextures_part2_metal:(id)arg1 inputTexture_RGBA8Uint:(id)arg2 inputTexture_R8Unorm:(id)arg3 descriptorBuffer:(id)arg4 refinedKeypointsBuffer:(id)arg5 cumulativeKeypointsPerRegionBuffer:(id)arg6 intermediateBuffers:(id)arg7 keypointCount:(int)arg8;
- (void)_ORBDescriptorsFromTextures_part1_metal:(id)arg1 inputTexture_RGBA8Uint:(id)arg2 inputTexture_R8Unorm:(id)arg3 responseBuffer:(id)arg4 cumulativeKeypointsPerRegionBuffer:(id)arg5 intermediateBuffers:(id)arg6;
- (void)_boxBlur_metal:(id)arg1 inputImageTexture:(id)arg2 boxBlurredTexture:(id)arg3;
- (void)_extractORB_metal:(id)arg1 boxBlurredTexture:(id)arg2 keypointLocationsBuffer:(id)arg3 outputORBDescriptorBuffer:(id)arg4 keypointCountBuffer:(id)arg5 keypointCount:(unsigned long long)arg6;
- (void)_refineKeypoints_metal:(id)arg1 inputImageTexture:(id)arg2 keypointLocationsBuffer:(id)arg3 refinedLocationsBuffer:(id)arg4 keypointCountBuffer:(id)arg5 keypointCount:(unsigned long long)arg6 debugIntermediatesBuffer:(id)arg7 cumulativePointsBuffer:(id)arg8 tileCountBuffer:(id)arg9;
- (void)_listKeypoints3_metal:(id)arg1 suppressedResponseMapTexture:(id)arg2 tileBuffer:(id)arg3 tileCountBuffer:(id)arg4 tileCount:(unsigned long long)arg5 thresholdsBuffer:(id)arg6 cumulativePointsBuffer:(id)arg7 keypointLocationsBuffer:(id)arg8 keypointResponsesBuffer:(id)arg9 maxRegionHeight:(double)arg10 maxRegionWidth:(double)arg11;
- (void)_listKeypoints2_metal:(id)arg1 suppressedResponseMapTexture:(id)arg2 tileBuffer:(id)arg3 tileCountBuffer:(id)arg4 tileCount:(unsigned long long)arg5 thresholdsBuffer:(id)arg6 cumulativePointsBuffer:(id)arg7 keypointLocationsBuffer:(id)arg8 keypointResponsesBuffer:(id)arg9 maxRegionHeight:(double)arg10;
- (void)_listKeypointsSimple_metal:(id)arg1 suppressedResponseMapTexture:(id)arg2 tileBuffer:(id)arg3 tileCountBuffer:(id)arg4 tileCount:(unsigned long long)arg5 thresholdsBuffer:(id)arg6 cumulativePointsBuffer:(id)arg7 keypointLocationsBuffer:(id)arg8 keypointResponsesBuffer:(id)arg9 desiredKeypointsBuffer:(id)arg10 indexBuffer:(id)arg11;
- (void)_cumulativeSum_metal:(id)arg1 expectedPointsBuffer:(id)arg2 cumulativePointsBuffer:(id)arg3 regionCountBuffer:(id)arg4 keypointCountBuffer:(id)arg5 regionCount:(unsigned long long)arg6;
- (void)_generateHistograms_metal:(id)arg1 suppressedTexture:(id)arg2 tileBuffer:(id)arg3 desiredKeypointCountsBuffer:(id)arg4 thresholdsBuffer:(id)arg5 histogramBuffer:(id)arg6 thresholdRangeBuffer:(id)arg7 keypointsAtChosenThresholdBuffer:(id)arg8 truncatedRegionsBuffer:(id)arg9 tileCount:(unsigned long long)arg10 maxTileHeight:(unsigned long long)arg11;
- (void)_suppressResponseMap_metal:(id)arg1 unsuppressedTexture:(id)arg2 suppressedTexture:(id)arg3 garbagePixelCount:(unsigned int)arg4;
- (void)_computeResponseMap_metal:(id)arg1 inputTexture:(id)arg2 outputTexture:(id)arg3 garbagePixelCount:(unsigned int)arg4;
- (id)_textureFromPixelBuffer:(struct __CVBuffer *)arg1 forcedMetalPixelFormat:(unsigned long long)arg2 forcedWidthDivisior:(int)arg3;
- (BOOL)didFinishInitializationWithTimeout:(double)arg1;
- (void)dealloc;
- (id)init;
- (struct __CVMetalTextureCache *)textureCache;

@end

