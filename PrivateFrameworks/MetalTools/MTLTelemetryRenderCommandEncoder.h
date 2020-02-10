//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <MetalTools/MTLToolsRenderCommandEncoder.h>

@class MTLTelemetryCommandBuffer, MTLTelemetryDevice, MTLTelemetryRenderPipelineState, NSMutableDictionary, NSMutableSet;

@interface MTLTelemetryRenderCommandEncoder : MTLToolsRenderCommandEncoder
{
    MTLTelemetryDevice *_telemetryDevice;
    MTLTelemetryCommandBuffer *_telemetryCommandBuffer;
    unsigned int _reDraws;
    NSMutableSet *_anisoFragmentSamplers;
    NSMutableDictionary *_clippedMip2DFragmentTextures;
    MTLTelemetryRenderPipelineState *_telemetryPipeline;
}

- (void)setScissorRects:(const CDStruct_33dcf794 *)arg1 count:(unsigned long long)arg2;
- (void)setScissorRect:(CDStruct_33dcf794)arg1;
- (void)accumScissorRectTelemetry:(const CDStruct_33dcf794 *)arg1 count:(unsigned long long)arg2;
- (void)setViewports:(const CDStruct_8727d297 *)arg1 count:(unsigned long long)arg2;
- (void)setViewport:(CDStruct_8727d297)arg1;
- (void)accumViewportTelemetry:(const CDStruct_8727d297 *)arg1 count:(unsigned long long)arg2;
- (void)memoryBarrierWithResources:(const id *)arg1 count:(unsigned long long)arg2 afterStages:(unsigned long long)arg3 beforeStages:(unsigned long long)arg4;
- (void)memoryBarrierWithScope:(unsigned long long)arg1 afterStages:(unsigned long long)arg2 beforeStages:(unsigned long long)arg3;
- (void)textureBarrier;
- (void)setFragmentSamplerStates:(const id *)arg1 lodMinClamps:(const float *)arg2 lodMaxClamps:(const float *)arg3 withRange:(struct _NSRange)arg4;
- (void)setFragmentSamplerState:(id)arg1 lodMinClamp:(float)arg2 lodMaxClamp:(float)arg3 atIndex:(unsigned long long)arg4;
- (void)setFragmentSamplerStates:(const id *)arg1 withRange:(struct _NSRange)arg2;
- (void)setFragmentSamplerState:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)setFragmentTextures:(const id *)arg1 withRange:(struct _NSRange)arg2;
- (void)setFragmentTexture:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)endEncoding;
- (void)drawIndexedPrimitives:(unsigned long long)arg1 indexType:(unsigned long long)arg2 indexBuffer:(id)arg3 indexBufferOffset:(unsigned long long)arg4 indirectBuffer:(id)arg5 indirectBufferOffset:(unsigned long long)arg6;
- (void)drawPrimitives:(unsigned long long)arg1 indirectBuffer:(id)arg2 indirectBufferOffset:(unsigned long long)arg3;
- (void)drawIndexedPrimitives:(unsigned long long)arg1 indexCount:(unsigned long long)arg2 indexType:(unsigned long long)arg3 indexBuffer:(id)arg4 indexBufferOffset:(unsigned long long)arg5 instanceCount:(unsigned long long)arg6 baseVertex:(long long)arg7 baseInstance:(unsigned long long)arg8;
- (void)drawPrimitives:(unsigned long long)arg1 vertexStart:(unsigned long long)arg2 vertexCount:(unsigned long long)arg3;
- (void)drawPrimitives:(unsigned long long)arg1 vertexStart:(unsigned long long)arg2 vertexCount:(unsigned long long)arg3 instanceCount:(unsigned long long)arg4 baseInstance:(unsigned long long)arg5;
- (void)drawIndexedPrimitives:(unsigned long long)arg1 indexCount:(unsigned long long)arg2 indexType:(unsigned long long)arg3 indexBuffer:(id)arg4 indexBufferOffset:(unsigned long long)arg5;
- (void)drawIndexedPrimitives:(unsigned long long)arg1 indexCount:(unsigned long long)arg2 indexType:(unsigned long long)arg3 indexBuffer:(id)arg4 indexBufferOffset:(unsigned long long)arg5 instanceCount:(unsigned long long)arg6;
- (void)accumDrawWithType:(unsigned long long)arg1 indexType:(unsigned long long)arg2 primitiveType:(unsigned long long)arg3 vertexCount:(unsigned long long)arg4 instanceCount:(unsigned long long)arg5;
- (void)setDepthClipMode:(unsigned long long)arg1;
- (void)setDepthStencilState:(id)arg1;
- (void)setRenderPipelineState:(id)arg1;
- (id)initWithRenderCommandEncoder:(id)arg1 parent:(id)arg2 descriptor:(id)arg3;
- (id)initWithRenderCommandEncoder:(id)arg1 parent:(id)arg2 commandBuffer:(id)arg3 descriptor:(id)arg4;
- (void)initTelemetryWithDescriptor:(id)arg1 commandBuffer:(id)arg2;

@end
