//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <MetalTools/MTLToolsObject.h>

#import "MTLArgumentEncoderSPI.h"

@class MTLToolsPointerArray, NSString, _MTLIndirectArgumentBufferLayout;

@interface MTLToolsArgumentEncoder : MTLToolsObject <MTLArgumentEncoderSPI>
{
    MTLToolsPointerArray *_argumentEncoders;
}

@property(readonly, nonatomic) MTLToolsPointerArray *argumentEncoders; // @synthesize argumentEncoders=_argumentEncoders;
- (id)newArgumentEncoderForBufferAtIndex:(unsigned long long)arg1;
- (void)setIndirectCommandBuffers:(const id *)arg1 withRange:(struct _NSRange)arg2;
- (void)setIndirectCommandBuffer:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)setRenderPipelineStates:(const id *)arg1 withRange:(struct _NSRange)arg2;
- (void)setRenderPipelineState:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)setSamplerStates:(const id *)arg1 withRange:(struct _NSRange)arg2;
- (void)setTextures:(const id *)arg1 withRange:(struct _NSRange)arg2;
- (void)setBuffers:(const id *)arg1 offsets:(const unsigned long long *)arg2 withRange:(struct _NSRange)arg3;
- (void)setSamplerState:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)setTexture:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)setBuffer:(id)arg1 offset:(unsigned long long)arg2 atIndex:(unsigned long long)arg3;
- (void)setArgumentBuffer:(id)arg1 startOffset:(unsigned long long)arg2 arrayElement:(unsigned long long)arg3;
- (void)setArgumentBuffer:(id)arg1 offset:(unsigned long long)arg2;
@property(readonly, nonatomic) _MTLIndirectArgumentBufferLayout *layout;
@property(readonly) id <MTLDevice> device;
@property(readonly) unsigned long long alignment;
- (void *)constantDataAtIndex:(unsigned long long)arg1;
@property(readonly) unsigned long long encodedLength;
@property(copy) NSString *label;
- (void)dealloc;
- (id)initWithBaseObject:(id)arg1 parent:(id)arg2;
- (void)acceptVisitor:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

