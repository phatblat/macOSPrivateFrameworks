//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <MetalTools/MTLToolsCommandBuffer.h>

@class NSMutableSet, _MTLCommandEncoder;

@interface MTLDebugCommandBuffer : MTLToolsCommandBuffer
{
    _MTLCommandEncoder *_currentEncoder;
    NSMutableSet *_buffersBoundForWrite;
}

@property(readonly, nonatomic) NSMutableSet *buffersBoundForWrite; // @synthesize buffersBoundForWrite=_buffersBoundForWrite;
- (void)commit;
- (id)sampledComputeCommandEncoderWithProgramInfoBuffer:(CDStruct_4af8c268 *)arg1 capacity:(unsigned long long)arg2;
- (id)sampledRenderCommandEncoderWithDescriptor:(id)arg1 programInfoBuffer:(CDStruct_4af8c268 *)arg2 capacity:(unsigned long long)arg3;
- (id)parallelRenderCommandEncoderWithDescriptor:(id)arg1;
- (id)computeCommandEncoder;
- (id)renderCommandEncoderWithDescriptor:(id)arg1;
- (id)blitCommandEncoder;
- (void)waitUntilCompleted;
- (void)waitUntilScheduled;
- (id)initWithCommandBuffer:(id)arg1 commandQueue:(id)arg2;
- (void)dealloc;

@end
