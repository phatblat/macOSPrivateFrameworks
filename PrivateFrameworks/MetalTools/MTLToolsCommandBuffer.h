//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <MetalTools/MTLToolsObject.h>

#import "MTLCommandBufferSPI.h"

@class MTLToolsPointerArray, NSDictionary, NSError, NSMutableDictionary, NSMutableSet, NSString;

@interface MTLToolsCommandBuffer : MTLToolsObject <MTLCommandBufferSPI>
{
    struct {
        unsigned int hasCommit:1;
        unsigned int addedCompletedHandler:1;
        unsigned int addedScheduledHandler:1;
        unsigned int padding:29;
    } _flags;
    NSMutableSet *_retainedObjects;
    MTLToolsPointerArray *_renderCommandEncoders;
    MTLToolsPointerArray *_computeCommandEncoders;
    MTLToolsPointerArray *_blitCommandEncoders;
    MTLToolsPointerArray *_parallelRenderCommandEncoders;
    struct ILayerLockingPolicy *_retainedObjectsLock;
}

@property(nonatomic) struct ILayerLockingPolicy *retainedObjectsLock; // @synthesize retainedObjectsLock=_retainedObjectsLock;
@property(readonly, nonatomic) MTLToolsPointerArray *parallelRenderCommandEncoders; // @synthesize parallelRenderCommandEncoders=_parallelRenderCommandEncoders;
@property(readonly, nonatomic) MTLToolsPointerArray *blitCommandEncoders; // @synthesize blitCommandEncoders=_blitCommandEncoders;
@property(readonly, nonatomic) MTLToolsPointerArray *computeCommandEncoders; // @synthesize computeCommandEncoders=_computeCommandEncoders;
@property(readonly, nonatomic) MTLToolsPointerArray *renderCommandEncoders; // @synthesize renderCommandEncoders=_renderCommandEncoders;
@property(readonly, nonatomic) NSMutableSet *retainedObjects; // @synthesize retainedObjects=_retainedObjects;
@property(nonatomic, getter=getListIndex) unsigned long long listIndex;
@property(readonly, nonatomic) NSMutableDictionary *userDictionary;
@property(readonly) NSDictionary *profilingResults;
@property(getter=isProfilingEnabled) BOOL profilingEnabled;
- (id)sampledComputeCommandEncoderWithProgramInfoBuffer:(CDStruct_4af8c268 *)arg1 capacity:(unsigned long long)arg2;
- (id)sampledRenderCommandEncoderWithDescriptor:(id)arg1 programInfoBuffer:(CDStruct_4af8c268 *)arg2 capacity:(unsigned long long)arg3;
- (id)parallelRenderCommandEncoderWithDescriptor:(id)arg1;
- (id)renderCommandEncoderWithDescriptor:(id)arg1;
- (void)addCompletedHandler:(CDUnknownBlockType)arg1;
- (void)addScheduledHandler:(CDUnknownBlockType)arg1;
- (id)unwrapMTLRenderPassDescriptor:(id)arg1;
- (void)popDebugGroup;
- (void)pushDebugGroup:(id)arg1;
@property(readonly) double kernelEndTime;
@property(readonly) double kernelStartTime;
- (id)computeCommandEncoder;
- (id)blitCommandEncoder;
@property(readonly) NSError *error;
@property(readonly) unsigned long long status;
- (void)waitUntilCompleted;
- (void)waitUntilScheduled;
- (void)presentDrawable:(id)arg1 atTime:(double)arg2;
- (void)presentDrawable:(id)arg1;
- (void)enqueue;
@property(copy) NSString *label;
@property(readonly) double GPUEndTime;
@property(readonly) double GPUStartTime;
@property(readonly) BOOL retainedReferences;
@property(readonly) id <MTLCommandQueue> commandQueue;
- (id)debugCommandEncoder;
- (void)commit;
- (void)clearRetainedObjects;
- (void)addRetainedObject:(id)arg1;
- (void)acceptVisitor:(id)arg1;
- (void)dealloc;
- (id)initWithBaseObject:(id)arg1 parent:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) id <MTLDevice> device;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

