//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

__attribute__((visibility("hidden")))
@interface MTLDebugResourceAccessTracker : NSObject
{
    unsigned int _accessedByGPUFrameCount;
    unsigned int _accessedByCPUFrameCount;
    unsigned int _prevFrameNumGPUAccessed;
    unsigned int _prevFrameNumCPUAccessed;
    unsigned int _firstAccessFrameByCPU;
    unsigned int _stateMask;
}

+ (void)_recordResourceAccessesForRenderTargetTexture:(id)arg1;
+ (void)recordResourceAccessesForAttachment:(const struct MTLRenderPassAttachmentDescriptorPrivate *)arg1 withStoreAction:(unsigned long long)arg2;
+ (void)processDeferredAttachments:(struct ResourceTrackingDeferredAttachments *)arg1;
+ (void)recordResourceAccessesForStencilAttachmentWithDescriptor:(id)arg1 forEndEncoding:(BOOL)arg2 deferredAttachments:(struct ResourceTrackingDeferredAttachments *)arg3;
+ (void)recordResourceAccessesForDepthAttachmentWithDescriptor:(id)arg1 forEndEncoding:(BOOL)arg2 deferredAttachments:(struct ResourceTrackingDeferredAttachments *)arg3;
+ (void)recordResourceAccessesForColorAttachmentsWithDescriptor:(id)arg1 renderPipelineState:(id)arg2 forEndEncoding:(BOOL)arg3 deferredAttachments:(struct ResourceTrackingDeferredAttachments *)arg4;
+ (void)recordRenderTargetAccessesForEndEncoding:(BOOL)arg1 descriptor:(id)arg2 renderPipelineState:(id)arg3 depthStencilState:(id)arg4 deferredAttachments:(struct ResourceTrackingDeferredAttachments *)arg5 viewport:(CDStruct_8727d297 *)arg6 viewportCount:(unsigned int)arg7 scissor:(CDStruct_33dcf794 *)arg8 scissorCount:(unsigned int)arg9;
+ (void)recordWritableBuffersOnCommandBuffer:(id)arg1 reflectionArguments:(id)arg2 bufferFuncArgsPtr:(CDStruct_db34bedf *)arg3 textureFuncArgsPtr:(CDStruct_db34bedf *)arg4;
+ (void)resourceTrackingRecordAccessesToArguments:(id)arg1 bufferFuncArgsPtr:(CDStruct_db34bedf *)arg2 textureFuncArgsPtr:(CDStruct_db34bedf *)arg3;
- (unsigned int)conclude;
- (void)accessedBy:(int)arg1 frame:(unsigned int)arg2 accessTypes:(unsigned int)arg3;
- (void)reset;
- (id)init;

@end

