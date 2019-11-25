//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <MetalTools/MTLToolsIndirectCommandBuffer.h>

__attribute__((visibility("hidden")))
@interface MTLGPUDebugIndirectCommandBuffer : MTLToolsIndirectCommandBuffer
{
    id <MTLBuffer> argumentBuffersStorage;
    id <MTLBuffer> argumentLengthsStorage;
    id <MTLBuffer> argumentGPUVAsStorage;
    _Bool _hasRender;
    _Bool _hasCompute;
    unsigned long long _argumentStride;
    unsigned long long _lengthStride;
    unsigned long long _virtualAddressStride;
    struct mutex _setBufferMutex;
    id <MTLArgumentEncoder> _argumentEncoder;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)dealloc;
- (id)indirectRenderCommandAtIndex:(unsigned long long)arg1;
- (void)onExecuteWithComputeEncoder:(id)arg1;
- (void)onExecuteWithRenderEncoder:(id)arg1;
- (void)setBuffer:(id)arg1 offset:(unsigned long long)arg2 atIndex:(unsigned long long)arg3 forStage:(unsigned long long)arg4 commandIndex:(unsigned long long)arg5;
- (id)initWithIndirectCommandBuffer:(id)arg1 descriptor:(id)arg2 maxCommandCount:(unsigned long long)arg3 resourceOptions:(unsigned long long)arg4 device:(id)arg5;

@end

