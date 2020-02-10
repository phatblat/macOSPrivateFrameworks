//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSView.h"

#import "PKMetalRenderLoopDelegate.h"

@class MPSUnaryImageKernel, MTLRenderPassDescriptor, NSArray, NSSet, NSString, PKMetalRenderLoop;

@interface PKCategoryVisualizationCardView : NSView <PKMetalRenderLoopDelegate>
{
    PKMetalRenderLoop *_renderLoop;
    MTLRenderPassDescriptor *_renderPassDescriptor;
    MTLRenderPassDescriptor *_secondRenderPassDescriptor;
    unsigned long long _drawableWidth;
    unsigned long long _drawableHeight;
    id <MTLCommandQueue> _commandQueue;
    id <MTLTexture> _texture;
    id <MTLTexture> _overlayTexture;
    id <MTLTexture> _overlayNormalTexture;
    id <MTLRenderPipelineState> _overlayPipelineState;
    id <MTLRenderPipelineState> _circlePipelineState;
    id <MTLRenderPipelineState> _circleOutlinePipelineState;
    id <MTLBuffer> _vertexCoordsBuffer;
    id <MTLBuffer> _textureCoordsBuffer;
    id <MTLBuffer> _circleUniformsBuffer;
    id <MTLBuffer> _circleDataBuffer;
    id <MTLBuffer> _singleCircleDataBuffer;
    MPSUnaryImageKernel *_blurShader;
    _Bool _hasPendingUpdate;
    long long _pendingUpdateStyle;
    _Bool _invalidated;
    _Bool _effectivePaused;
    _Bool _needsDraw;
    _Bool _emptying;
    // Error parsing type: {?="startTime"d"bucketCount"Q"magnitudeForBucket"^d"colorForBucket"^"uniforms"{?="projectionMatrix"{?="columns"[4]}"motionMatrix"{?="columns"[4]}"data"}"singleCircle"{?="position""velocity""radius"f"scale"f"scaleTarget"f"created"f"color""matrix"{?="columns"[4]}}"circleCount"Q"circles"[88{?="position""velocity""radius"f"scale"f"scaleTarget"f"created"f"color""matrix"{?="columns"[4]}}]"categoryCount"Q"gravity""framesToRender"I"isAnimating"B}, name: _state
    BOOL _motionEnabled;
    _Bool _paused;
    _Bool _blurDisabled;
    NSArray *_bucketColors;
    NSSet *_magnitudes;
}

@property(nonatomic, getter=isBlurDisabled) _Bool blurDisabled; // @synthesize blurDisabled=_blurDisabled;
@property(nonatomic, getter=isPaused) _Bool paused; // @synthesize paused=_paused;
@property(nonatomic, getter=isMotionEnabled) BOOL motionEnabled; // @synthesize motionEnabled=_motionEnabled;
@property(readonly, copy, nonatomic) NSSet *magnitudes; // @synthesize magnitudes=_magnitudes;
@property(copy, nonatomic) NSArray *bucketColors; // @synthesize bucketColors=_bucketColors;
- (void).cxx_destruct;
- (void)_calculateNewCirclePositions;
- (void)_updateCircles;
- (void)_empty;
- (void)_updateTextureAndBlurShader;
- (void)_createMetalResourcesWithTextures:(id)arg1;
- (void)_updateRenderPassDescriptorWithDrawable:(id)arg1;
- (void)renderLoop:(id)arg1 drawAtTime:(double)arg2;
- (void)renderLoop:(id)arg1 drawableSizeDidChange:(struct CGSize)arg2;
- (void)_updatePausedState;
- (void)setMagnitudes:(id)arg1 withStyle:(long long)arg2;
- (void)invalidate;
- (id)rendererState;
- (void)renderWithTextures:(id)arg1 rendererState:(id)arg2;
- (void)layout;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
