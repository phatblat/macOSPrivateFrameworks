//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MTLDevice.h"

@class MTLCommandQueueDescriptor, MTLComputePipelineDescriptor, MTLIndirectCommandBufferDescriptor, MTLMotionEstimationPipelineDescriptor, MTLMotionEstimatorCapabilities, MTLRenderPipelineDescriptor, MTLStructType, MTLTextureDescriptor, NSArray, NSData, NSMutableDictionary, NSObject<OS_dispatch_data>, NSString, _MTLIndirectArgumentBufferLayout;

@protocol MTLDeviceSPI <MTLDevice>
+ (void)registerDevices;
@property(readonly, getter=isPlacementHeapSupported) BOOL placementHeapSupported;
@property unsigned long long currentUtilityBufferIndex;
@property(retain, nonatomic) NSArray *utilityBuffers;
@property(readonly, getter=isUtilityBufferRequired) BOOL utilityBufferRequired;
@property(nonatomic, getter=isResourceIndirectionEnabled) BOOL resourceIndirectionEnabled;
@property(readonly) unsigned long long samplerReductionModeSupport;
@property(readonly) struct IndirectArgumentBufferCapabilities indirectArgumentBufferCapabilities;
@property(readonly) BOOL requiresIABEmulation;
@property(readonly) unsigned long long dedicatedMemorySize;
@property(readonly) unsigned long long sharedMemorySize;
@property(readonly) BOOL supportPriorityBand;
@property(readonly) unsigned int acceleratorPort;
@property(readonly) unsigned long long maxComputeAttributes;
@property(readonly) unsigned long long maxTextureBufferWidth;
@property(readonly) unsigned long long maxCustomSamplePositions;
@property(readonly) unsigned long long maxViewportCount;
@property(readonly) unsigned long long maxIndirectSamplersPerDevice;
@property(readonly) unsigned long long maxIndirectSamplers;
@property(readonly) unsigned long long maxIndirectTextures;
@property(readonly) unsigned long long maxIndirectBuffers;
@property(readonly) unsigned long long maxTessellationFactor;
@property(readonly) unsigned long long maxInterpolatedComponents;
@property(readonly) unsigned long long maxComputeThreadgroupMemoryAlignmentBytes;
@property(readonly) unsigned long long maxFunctionConstantIndices;
@property(readonly) unsigned long long deviceLinearReadOnlyTextureAlignmentBytes;
@property(readonly) unsigned long long deviceLinearTextureAlignmentBytes;
@property(readonly) unsigned long long iosurfaceReadOnlyTextureAlignmentBytes;
@property(readonly) unsigned long long iosurfaceTextureAlignmentBytes;
@property(readonly) unsigned long long linearTextureAlignmentBytes;
@property(readonly) unsigned long long maxTextureLayers;
@property(readonly) unsigned long long maxTextureDimensionCube;
@property(readonly) unsigned long long maxTextureDepth3D;
@property(readonly) unsigned long long maxTextureHeight3D;
@property(readonly) unsigned long long maxTextureWidth3D;
@property(readonly) unsigned long long maxTextureHeight2D;
@property(readonly) unsigned long long maxTextureWidth2D;
@property(readonly) unsigned long long maxTextureWidth1D;
@property(readonly) unsigned long long minBufferNoCopyAlignmentBytes;
@property(readonly) unsigned long long minConstantBufferAlignmentBytes;
@property(readonly) unsigned long long maxVisibilityQueryOffset;
@property(readonly) float maxPointSize;
@property(readonly) float maxLineWidth;
@property(readonly) unsigned long long maxComputeThreadgroupMemory;
@property(readonly) unsigned long long maxTotalComputeThreadsPerThreadgroup;
@property(readonly) unsigned long long maxComputeLocalMemorySizes;
@property(readonly) unsigned long long maxComputeInlineDataSize;
@property(readonly) unsigned long long maxComputeSamplers;
@property(readonly) unsigned long long maxComputeTextures;
@property(readonly) unsigned long long maxComputeBuffers;
@property(readonly) unsigned long long maxFragmentInlineDataSize;
@property(readonly) unsigned long long maxFragmentSamplers;
@property(readonly) unsigned long long maxFragmentTextures;
@property(readonly) unsigned long long maxFragmentBuffers;
@property(readonly) unsigned long long maxInterpolants;
@property(readonly) unsigned long long maxVertexInlineDataSize;
@property(readonly) unsigned long long maxVertexSamplers;
@property(readonly) unsigned long long maxVertexTextures;
@property(readonly) unsigned long long maxVertexBuffers;
@property(readonly) unsigned long long maxVertexAttributes;
@property(readonly) unsigned long long maxColorAttachments;
@property(readonly) const CDStruct_ba442ac5 *limits;
@property(readonly) unsigned long long featureProfile;
@property(nonatomic) BOOL metalAssertionsEnabled;
@property(readonly) unsigned long long doubleFPConfig;
@property(readonly) unsigned long long singleFPConfig;
@property(readonly) unsigned long long halfFPConfig;
@property(readonly, getter=isMagicMipmapSupported) BOOL magicMipmapSupported;
@property(getter=areGPUAssertionsEnabled, setter=setGPUAssertionsEnabled:) BOOL gpuAssertionsEnabled;
@property(readonly, nonatomic) BOOL supportsFloat16BCubicFiltering;
@property(readonly, nonatomic) BOOL supportsForceSeamsOnCubemaps;
@property(readonly, nonatomic) BOOL supportsTexture2DMultisampleArray;
@property(readonly, nonatomic) BOOL supportsDepthClipModeClampExtended;
@property(readonly, nonatomic) BOOL supportsSIMDReduction;
@property(readonly, nonatomic) BOOL supportsMirrorClampToEdgeSamplerMode;
@property(readonly, nonatomic) BOOL supportsBlackOrWhiteSamplerBorderColors;
@property(readonly, nonatomic) BOOL supportsShaderBarycentricCoordinates;
@property(readonly, nonatomic) BOOL supportsSIMDShufflesAndBroadcast;
@property(readonly, nonatomic) BOOL supportsShaderMinLODClamp;
@property(readonly, nonatomic) BOOL supportsSIMDGroup;
@property(readonly, nonatomic) BOOL supportsFP32TessFactors;
@property(readonly, nonatomic) BOOL supportsStencilFeedback;
@property(readonly, nonatomic) BOOL supportsMSAAStencilResolveFilter;
@property(readonly, nonatomic) BOOL supportsIndirectTessellation;
@property(readonly, nonatomic) BOOL supportsViewportAndScissorArray;
@property(readonly, nonatomic) BOOL supportsLayeredRendering;
@property(readonly, nonatomic) BOOL supports2DLinearTexArraySPI;
@property(readonly, nonatomic) BOOL supportsSeparateVisibilityAndShadingRate;
@property(readonly, nonatomic) BOOL supportsNonSquareTileShaders;
@property(readonly, nonatomic) BOOL supportsLinearTexture2DArray;
@property(readonly, nonatomic) BOOL supportsRasterOrderGroups;
@property(readonly, nonatomic) BOOL supportsRenderPassWithoutRenderTarget;
@property(readonly, nonatomic) BOOL supportsConcurrentComputeDispatch;
@property(readonly, nonatomic) BOOL supportsQuadShufflesAndBroadcast;
@property(readonly, nonatomic) BOOL supportsTextureCubeArray;
@property(readonly, nonatomic) BOOL supportsReadWriteTextureCubeArguments;
@property(readonly, nonatomic) BOOL supportsReadWriteTextureArguments;
@property(readonly, nonatomic) BOOL supportsNonUniformThreadgroupSize;
@property(readonly, nonatomic) BOOL supportsMipLevelsSmallerThanBlockSize;
@property(readonly, nonatomic) BOOL supportsPostDepthCoverage;
@property(readonly, nonatomic) BOOL supportsNativeHardwareFP16;
@property(readonly, nonatomic) BOOL supportsImageBlockSampleCoverageControl;
@property(readonly, nonatomic) BOOL supportsTileShaders;
@property(readonly, nonatomic) BOOL supportsImageBlocks;
@property(readonly, nonatomic) BOOL supportsRenderTextureWrites;
@property(readonly, nonatomic) BOOL supportsQuadGroup;
@property(readonly, nonatomic) BOOL supportsMemoryOrderAtomics;
@property(readonly, nonatomic) BOOL supportsAlphaYUVFormats;
@property(readonly, nonatomic) BOOL supportsTextureSwizzle;
@property(readonly, nonatomic) BOOL supportsTextureOutOfBoundsReads;
@property(readonly, nonatomic) BOOL supportsNorm16BCubicFiltering;
@property(readonly, nonatomic) BOOL supportsIndirectTextures;
@property(readonly, nonatomic) BOOL supportsIndirectStageInRegion;
@property(readonly, nonatomic) BOOL supportsCMPIndirectCommandBuffers;
@property(readonly, nonatomic) BOOL supportsGFXIndirectCommandBuffers;
@property(readonly, nonatomic) BOOL supportsMSAADepthResolveFilter;
@property(readonly, nonatomic) BOOL supportsMSAAStencilResolve;
@property(readonly, nonatomic) BOOL supportsMSAADepthResolve;
@property(readonly, nonatomic) BOOL supportsSamplerCompareFunction;
@property(readonly, nonatomic) BOOL supportsMutableTier1ArgumentBuffers;
@property(readonly, nonatomic) BOOL supportsCombinedMSAAStoreAndResolveAction;
@property(readonly, nonatomic) BOOL supportsArrayOfSamplers;
@property(readonly, nonatomic) BOOL supportsArrayOfTextures;
@property(readonly, nonatomic) BOOL supportsReadWriteBufferArguments;
@property(readonly, nonatomic) BOOL supportsTessellation;
@property(readonly, nonatomic) BOOL supportsIndirectDrawAndDispatch;
@property(readonly, nonatomic) BOOL supportsBaseVertexInstanceDrawing;
@property(readonly, nonatomic) BOOL supportsCountingOcclusionQuery;
@property(readonly, nonatomic) BOOL supportsFragmentBufferWrites;
@property(readonly, nonatomic) BOOL supports3DASTCTextures;
@property(readonly, nonatomic) BOOL supportsPacked32TextureBufferWrites;
@property(readonly, nonatomic) BOOL supportsDepthClipMode;
@property(readonly, nonatomic) BOOL supportsSRGBwrites;
@property(readonly, nonatomic) BOOL supportsPublicXR10Formats;
@property(readonly, nonatomic) BOOL supportsASTCTextureCompression;
@property(readonly, nonatomic) BOOL supportsGPUStatistics;
@property(readonly, nonatomic) BOOL supportsSeparateDepthStencil;
@property(readonly, nonatomic) BOOL supportsRelaxedTextureViewRequirements;
@property(readonly, nonatomic) BOOL supportsShaderLODAverage;
@property(readonly, nonatomic) BOOL supportsInvariantVertexPosition;
@property(readonly, nonatomic) BOOL supportsFastMathInfNaNPropagation;
@property(readonly, nonatomic) BOOL supportsMemorylessRenderTargets;
@property(readonly, nonatomic) BOOL supportsRenderToLinearTextures;
@property(readonly, nonatomic) BOOL supportsProgrammableBlending;
@property(readonly, nonatomic) BOOL supportsBufferWithIOSurface;
@property(readonly, nonatomic) BOOL supportsFragmentOnlyEncoders;
@property(readonly, nonatomic) BOOL supportsPipelineLibraries;
@property(readonly, nonatomic) BOOL supportsLinearTextureFromSharedBuffer;
@property(readonly, nonatomic) BOOL supportsNonPrivateMSAATextures;
@property(readonly, nonatomic) BOOL supportsNonPrivateDepthStencilTextures;
@property(readonly, nonatomic) BOOL supportsOpenCLTextureWriteSwizzles;
@property(readonly, nonatomic) BOOL supportsPlacementHeaps;
@property(readonly, nonatomic) BOOL supportsSamplerReductionMode;
@property(readonly, nonatomic) BOOL supportsQueryTextureLOD;
@property(readonly, nonatomic) BOOL supports32bpcMSAATextures;
@property(readonly, nonatomic) BOOL supportsSamplerAddressModeClampToHalfBorder;
@property(readonly, nonatomic) BOOL supportsCustomBorderColor;
@property(readonly, nonatomic) BOOL supportsLargeFramebufferConfigs;
@property(readonly, nonatomic) BOOL supports3DBCTextures;
@property(readonly, nonatomic) BOOL supportsBCTextureCompression;
@property(readonly, nonatomic) BOOL supportsProgrammableSamplePositions;
@property(readonly, nonatomic) BOOL supportsReadWriteTextureArgumentsTier2;
@property(readonly, nonatomic) BOOL supportsArgumentBuffersTier2;
@property(readonly, nonatomic) BOOL supportsBufferlessClientStorageTexture;
@property(readonly, nonatomic) BOOL supportsQuadReduction;
- (unsigned long long)offsetFromIndirectBufferAddress:(unsigned long long)arg1;
- (unsigned long long)resourceIndexFromIndirectBufferAddress:(unsigned long long)arg1;
- (unsigned long long)indirectBufferAddressForResourceIndex:(unsigned long long)arg1 offset:(unsigned long long)arg2;
- (void)removeResourceFromGlobalResourceTable:(unsigned long long)arg1 resourceType:(unsigned long long)arg2;
- (void)addIndirectCommandBufferToGlobalResourceTable:(id <MTLIndirectCommandBuffer>)arg1;
- (void)addRenderPipelineStateToGlobalResourceTable:(id <MTLRenderPipelineState>)arg1;
- (void)addComputePipelineStateToGlobalResourceTable:(id <MTLComputePipelineState>)arg1;
- (void)addSamplerStateToGlobalResourceTable:(id <MTLSamplerState>)arg1;
- (void)addTextureToGlobalResourceTable:(id <MTLTexture>)arg1;
- (void)addBufferToGlobalResourceTable:(id <MTLBuffer>)arg1;
- (BOOL)requiresIndirectionForAllResourceTypes;
- (id <MTLBuffer>)newBufferWithBytesNoCopy:(void *)arg1 length:(unsigned long long)arg2 options:(unsigned long long)arg3 atResourceIndex:(unsigned long long)arg4 deallocator:(void (^)(void *, unsigned long long))arg5;
- (id <MTLBuffer>)newBufferWithBytes:(const void *)arg1 length:(unsigned long long)arg2 options:(unsigned long long)arg3 atResourceIndex:(unsigned long long)arg4;
- (id <MTLBuffer>)newBufferWithLength:(unsigned long long)arg1 options:(unsigned long long)arg2 atResourceIndex:(unsigned long long)arg3;
- (BOOL)useDeviceResourceTableForType:(unsigned long long)arg1;
- (id <MTLBuffer>)utilityBufferForRenderCommandEncoder:(id <MTLRenderCommandEncoder>)arg1;
- (id <MTLBuffer>)utilityBufferForComputeCommandEncoder:(id <MTLComputeCommandEncoder>)arg1;
- (unsigned long long)createNewUtilityBuffer;
- (BOOL)setResourcesPurgeableState:(id *)arg1 newState:(unsigned long long)arg2 oldState:(unsigned long long *)arg3 count:(int)arg4;
- (id <MTLSharedEvent>)newSharedEventWithMachPort:(unsigned int)arg1;
- (id <MTLIndirectRenderCommandEncoder>)newIndirectRenderCommandEncoderWithBuffer:(id <MTLBuffer>)arg1;
- (id <MTLBuffer>)newIndirectCommandBufferWithDescriptor:(MTLIndirectCommandBufferDescriptor *)arg1 maxCount:(unsigned long long)arg2 options:(unsigned long long)arg3;
- (id <MTLTexture>)newTiledTextureWithBytesNoCopy:(void *)arg1 length:(unsigned long long)arg2 deallocator:(void (^)(void *, unsigned long long))arg3 descriptor:(MTLTextureDescriptor *)arg4 offset:(unsigned long long)arg5 bytesPerRow:(unsigned long long)arg6;
- (id <MTLTexture>)newTiledTextureWithBytesNoCopy:(void *)arg1 length:(unsigned long long)arg2 descriptor:(MTLTextureDescriptor *)arg3 offset:(unsigned long long)arg4 bytesPerRow:(unsigned long long)arg5;
- (BOOL)_registerInterestNotification;
- (void)_wasRemoved;
- (void)_removeRequested;
- (id <MTLArgumentEncoder>)newArgumentEncoderWithLayout:(_MTLIndirectArgumentBufferLayout *)arg1;
- (_MTLIndirectArgumentBufferLayout *)newIndirectArgumentBufferLayoutWithStructType:(MTLStructType *)arg1;
- (id <MTLCommandQueue>)newCommandQueueWithDescriptor:(MTLCommandQueueDescriptor *)arg1;
- (BOOL)supportsSampleCount:(unsigned long long)arg1;
- (CDStruct_c0454aff)pipelineCacheStats;
- (CDStruct_c0454aff)libraryCacheStats;
- (void)unloadShaderCaches;
- (id <MTLTexture>)newTextureWithSurface:(unsigned long long)arg1 buffer:(unsigned long long)arg2;
- (id <MTLTexture>)newTextureWithDescriptor:(MTLTextureDescriptor *)arg1 iosurface:(struct __IOSurface *)arg2 plane:(unsigned long long)arg3;
- (unsigned long long)minLinearTexturePitchAlignmentForDescriptor:(MTLTextureDescriptor *)arg1 mustMatchExactly:(unsigned long long *)arg2;
- (unsigned long long)minLinearTextureBaseAddressAlignmentForDescriptor:(MTLTextureDescriptor *)arg1;
- (unsigned long long)requiredLinearTextureBytesPerRowForDescriptor:(MTLTextureDescriptor *)arg1;
- (unsigned long long)minLinearTextureAlignmentForPixelFormat:(unsigned long long)arg1;
- (BOOL)deviceOrFeatureProfileSupportsFeatureSet:(unsigned long long)arg1;
- (BOOL)deviceSupportsFeatureSet:(unsigned long long)arg1;
- (id <MTLDevice>)_deviceWrapper;
- (void)_setDeviceWrapper:(id <MTLDeviceSPI>)arg1;
- (void)compilerPropagatesThreadPriority:(_Bool)arg1;
- (NSString *)productName;
- (NSString *)familyName;
- (NSString *)vendorName;
- (void)newPrecompiledComputePipelineStateWithDescriptor:(MTLComputePipelineDescriptor *)arg1 options:(unsigned long long)arg2 pipelineCache:(id <MTLPipelineCache>)arg3 completionHandler:(void (^)(NSArray *, NSError *))arg4;
- (MTLMotionEstimatorCapabilities *)motionEstimatorCapabilities;
- (void)allowLibrariesFromOtherPlatforms;

@optional
@property(readonly, getter=isQuadDataSharingSupported) BOOL quadDataSharingSupported;
@property(readonly, getter=isFramebufferReadSupported) BOOL framebufferReadSupported;
@property(readonly, getter=isASTCPixelFormatsSupported) BOOL ASTCPixelFormatsSupported;
@property(readonly, getter=isSystemDefaultDevice) BOOL systemDefaultDevice;
@property(readonly) const struct MTLTargetDeviceArch *targetDeviceInfo;
@property BOOL shaderDebugInfoCaching;
- (id <MTLIndirectArgumentEncoder>)newIndirectArgumentEncoderWithLayout:(_MTLIndirectArgumentBufferLayout *)arg1;
- (id <MTLBuffer>)newBufferWithIOSurface:(struct __IOSurface *)arg1;
- (NSMutableDictionary *)copyIOSurfaceSharedTextureProperties:(MTLTextureDescriptor *)arg1;
- (MTLStructType *)newStructTypeWithSerializedData:(NSObject<OS_dispatch_data> *)arg1;
- (NSObject<OS_dispatch_data> *)serializeStructType:(MTLStructType *)arg1 version:(unsigned int)arg2;
- (NSObject<OS_dispatch_data> *)serializeStructType:(MTLStructType *)arg1;
- (MTLComputePipelineDescriptor *)newComputePipelineDescriptorWithSerializedData:(NSObject<OS_dispatch_data> *)arg1 deserializationContext:(id <MTLDeserializationContext>)arg2;
- (MTLRenderPipelineDescriptor *)newRenderPipelineDescriptorWithSerializedData:(NSObject<OS_dispatch_data> *)arg1 deserializationContext:(id <MTLDeserializationContext>)arg2;
- (NSObject<OS_dispatch_data> *)serializeComputePipelineDescriptor:(MTLComputePipelineDescriptor *)arg1;
- (NSObject<OS_dispatch_data> *)serializeRenderPipelineDescriptor:(MTLRenderPipelineDescriptor *)arg1;
- (NSData *)endCollectingPipelineDescriptors;
- (void)startCollectingPipelineDescriptorsUsingPrefixForNames:(NSString *)arg1;
- (void)startCollectingPipelineDescriptors;
- (id <MTLPipelineLibrarySPI>)newPipelineLibraryWithFilePath:(NSString *)arg1 error:(id *)arg2;
- (id <MTLLibrary>)newLibraryWithCIFiltersForComputePipeline:(NSArray *)arg1 imageFilterFunctionInfo:(const CDStruct_dbc1e4aa *)arg2 error:(id *)arg3;
- (id <MTLLibrary>)newLibraryWithCIFilters:(NSArray *)arg1 imageFilterFunctionInfo:(const CDStruct_dbc1e4aa *)arg2 error:(id *)arg3;
- (id <MTLLibrary>)newLibraryWithImageFilterFunctionsSPI:(NSArray *)arg1 imageFilterFunctionInfo:(const CDStruct_dbc1e4aa *)arg2 error:(id *)arg3;
- (id <MTLComputePipelineState>)newComputePipelineStateWithImageFilterFunctionsSPI:(NSArray *)arg1 imageFilterFunctionInfo:(const CDStruct_dbc1e4aa *)arg2 error:(id *)arg3;
- (id <MTLIndirectArgumentEncoder>)newIndirectArgumentEncoderWithArguments:(NSArray *)arg1;
- (void *)getShaderCacheKeys;
- (id <MTLFunction>)newFunctionWithGLIR:(void *)arg1 inputsDescription:(NSObject<OS_dispatch_data> *)arg2 functionType:(unsigned long long)arg3;
- (id <MTLFunction>)newFunctionWithGLIR:(void *)arg1 functionType:(unsigned long long)arg2;
- (void)newComputePipelineStateWithDescriptor:(MTLComputePipelineDescriptor *)arg1 completionHandler:(void (^)(id <MTLComputePipelineState>, NSError *))arg2;
- (id <MTLComputePipelineState>)newComputePipelineStateWithDescriptor:(MTLComputePipelineDescriptor *)arg1 error:(id *)arg2;
- (void)unmapShaderSampleBuffer;
- (BOOL)mapShaderSampleBufferWithBuffer:(CDStruct_32a7f38a *)arg1 capacity:(unsigned long long)arg2 size:(unsigned long long)arg3;
- (void)reserveResourceIndicesForResourceType:(unsigned long long)arg1 indices:(unsigned long long *)arg2 indexCount:(unsigned long long)arg3;
- (unsigned long long)resourcePatchingTypeForResourceType:(unsigned long long)arg1;
- (void)setupMPSFunctionTable:(struct MPSFunctionTable *)arg1;
- (void)setIndirectArgumentBufferDecodingData:(NSObject<OS_dispatch_data> *)arg1;
- (NSObject<OS_dispatch_data> *)indirectArgumentBufferDecodingData;
- (id <MTLMotionEstimationPipeline>)newMotionEstimationPipelineWithDescriptor:(MTLMotionEstimationPipelineDescriptor *)arg1;
- (BOOL)supportsPrimitiveType:(unsigned long long)arg1;
@end

