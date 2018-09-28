//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CIContext, PKLinedPaper, PKMetalFramebuffer, PKMetalRenderState, PKMetalResourceHandler, PKMetalShader;

@interface PKMetalRenderer : NSObject
{
    PKMetalRenderState *_currentRenderState;
    unsigned long long _currentCacheSize;
    id <MTLDevice> _device;
    id <MTLCommandQueue> _commandQueue;
    PKMetalFramebuffer *_originalBackFramebuffer;
    BOOL _shouldClearOriginalBackFramebuffer;
    PKMetalFramebuffer *_paintFramebuffer;
    PKMetalFramebuffer *_paintFramebufferAccumulator;
    PKMetalResourceHandler *_resourceHandler;
    struct CGSize _drawingPixelSize;
    struct CGColor *_backgroundColor;
    struct CGSize _actualSize;
    double _fromStrokeSpaceScale;
    struct CGAffineTransform _strokeTransform;
    struct CGRect _viewScissor;
    BOOL _lastPointForEraserIsValid;
    struct _PKStrokePoint _lastPointForEraser;
    struct vector<(anonymous namespace)::StrokeVertex, std::__1::allocator<(anonymous namespace)::StrokeVertex>> _strokeBuffer;
    unsigned long long _strokeBufferCount;
    CIContext *_coreImageContext;
    id <MTLTexture> _backgroundImageTexture;
    unsigned long long _pixelFormat;
    unsigned long long _paintAndParticlePixelFormat;
    unsigned long long _stencilPixelFormat;
    struct vector<PKMetalParticleStrokePoint, std::__1::allocator<PKMetalParticleStrokePoint>> _particleStrokePointBuffer;
    struct vector<PKMetalPaintStrokePoint, std::__1::allocator<PKMetalPaintStrokePoint>> _paintStrokePointBuffer;
    struct vector<(anonymous namespace)::AnimatingStroke, std::__1::allocator<(anonymous namespace)::AnimatingStroke>> _animatingStrokes;
    struct CGRect _paintFramebufferDirtyRect;
    PKMetalShader *_paintShader;
    PKMetalShader *_particleShader;
    PKMetalShader *_particleShaderWithAspectRatioSupport;
    id <MTLBuffer> _particleIndexBuffer;
    id <MTLBuffer> _randomNumberBuffer;
    BOOL _solidColorBackboard;
    PKLinedPaper *_linedPaper;
    double _backboardPaperMultiply;
    double _inputScale;
    double _eraserIndicatorAlpha;
    double _latestTimestamp;
    struct CGAffineTransform _paperTransform;
}

+ (id)tileQueue;
+ (BOOL)useBlitEncoder;
@property(readonly, nonatomic) double latestTimestamp; // @synthesize latestTimestamp=_latestTimestamp;
@property(nonatomic) double eraserIndicatorAlpha; // @synthesize eraserIndicatorAlpha=_eraserIndicatorAlpha;
@property(nonatomic) double inputScale; // @synthesize inputScale=_inputScale;
@property(readonly, nonatomic) PKMetalResourceHandler *resourceHandler; // @synthesize resourceHandler=_resourceHandler;
@property(nonatomic) double backboardPaperMultiply; // @synthesize backboardPaperMultiply=_backboardPaperMultiply;
@property(nonatomic) struct CGSize actualSize; // @synthesize actualSize=_actualSize;
@property(nonatomic) struct CGAffineTransform strokeTransform; // @synthesize strokeTransform=_strokeTransform;
@property(nonatomic) struct CGRect viewScissor; // @synthesize viewScissor=_viewScissor;
@property(nonatomic) BOOL solidColorBackboard; // @synthesize solidColorBackboard=_solidColorBackboard;
@property(nonatomic) struct CGColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
@property(nonatomic) struct CGAffineTransform paperTransform; // @synthesize paperTransform=_paperTransform;
@property(retain, nonatomic) PKLinedPaper *linedPaper; // @synthesize linedPaper=_linedPaper;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)renderImage:(struct CGImage *)arg1 andMask:(struct CGImage *)arg2 clippedToStrokeSpaceRect:(struct CGRect)arg3;
- (void)renderImage:(struct CGImage *)arg1 andMask:(struct CGImage *)arg2;
- (void)renderImage:(struct CGImage *)arg1 intoFramebuffer:(id)arg2 clipRect:(struct CGRect)arg3;
- (void)clearNowWithStrokeSpaceClipRect:(struct CGRect)arg1 strokeTransform:(struct CGAffineTransform)arg2;
- (void)clear;
- (void)clearAndRenderTiles:(id)arg1 tileTransform:(struct CGAffineTransform)arg2 waitUntilCompleted:(BOOL)arg3;
- (void)setShouldClearOriginalFramebuffer;
- (void)clearTile:(id)arg1 waitUntilCompleted:(BOOL)arg2;
- (void)renderTile:(id)arg1 intoTile:(id)arg2 waitUntilCompleted:(BOOL)arg3;
- (void)renderTile:(id)arg1 tileTransform:(struct CGAffineTransform)arg2 renderState:(id)arg3;
- (void)copyIntoTile:(id)arg1 tileTransform:(struct CGAffineTransform)arg2 waitUntilCompleted:(BOOL)arg3;
- (id)framebufferForTile:(id)arg1 createIfNeeded:(BOOL)arg2;
- (void)didTeardownTile;
- (void)purgeOriginalBackFramebuffer;
- (void)clearFramebuffer:(id)arg1 waitUntilCompleted:(BOOL)arg2;
- (void)addBufferForRenderCache:(id)arg1 strokeVertices:(StrokeVertex_27fc2c00 *)arg2 numVertices:(unsigned long long)arg3;
- (id)generateCacheForParticleStroke:(struct AnimatingStroke *)arg1 points:(struct _PKStrokePointSlice)arg2 startPt:(BOOL)arg3 endPt:(BOOL)arg4;
- (id)generateCacheForPenStroke:(struct AnimatingStroke *)arg1 points:(struct _PKStrokePointSlice)arg2;
- (id)generateCacheForStroke:(struct AnimatingStroke *)arg1 points:(struct _PKStrokePointSlice)arg2;
- (void)buildRenderCacheForStrokes:(id)arg1;
- (unsigned long long)clearAndRenderStrokes:(id)arg1 clippedToStrokeSpaceRect:(struct CGRect)arg2 strokeTransform:(struct CGAffineTransform)arg3 stopBlock:(CDUnknownBlockType)arg4;
- (unsigned long long)_renderStrokes:(id)arg1 clippedToStrokeSpaceRect:(struct CGRect)arg2 strokeTransform:(struct CGAffineTransform)arg3 stopBlock:(CDUnknownBlockType)arg4;
- (id)renderCommandEncoderForCommandBuffer:(id)arg1 backBufferLoadAction:(unsigned long long)arg2 backBufferStoreAction:(unsigned long long)arg3 paintBufferLoadAction:(unsigned long long)arg4 accumulatorBufferLoadAction:(unsigned long long)arg5 accumulatorBufferStoreAction:(unsigned long long)arg6 destinationLoadAction:(unsigned long long)arg7;
- (unsigned long long)renderParticleStroke:(struct _PKStrokePointSlice)arg1 animatingStroke:(struct AnimatingStroke *)arg2 starts:(BOOL)arg3 ends:(BOOL)arg4 combinedRendering:(BOOL)arg5 renderEncoder:(id)arg6;
- (id)generateParticleCacheForStroke:(struct _PKStrokePointSlice)arg1 animatingStroke:(struct AnimatingStroke *)arg2 starts:(BOOL)arg3 ends:(BOOL)arg4;
- (id)generatePaintCacheForStroke:(struct _PKStrokePointSlice)arg1 animatingStroke:(struct AnimatingStroke *)arg2;
- (void)setupRenderEncoder:(id)arg1 forParticleStroke:(struct AnimatingStroke *)arg2;
- (void)renderParticleStrokeVertices:(const StrokeVertex_27fc2c00 *)arg1 numVertices:(unsigned long long)arg2 renderEncoder:(id)arg3;
- (unsigned long long)renderPenStroke:(struct _PKStrokePointSlice)arg1 animatingStroke:(struct AnimatingStroke *)arg2 combinedRendering:(BOOL)arg3 renderEncoder:(id)arg4;
- (void)setupRenderEncoder:(id)arg1 forPenStroke:(struct AnimatingStroke *)arg2;
- (void)renderPenStrokeVertices:(const StrokeVertex_27fc2c00 *)arg1 numVertices:(unsigned long long)arg2 renderEncoder:(id)arg3;
- (void)setVertexBuffersForVertices:(const StrokeVertex_27fc2c00 *)arg1 numVertices:(unsigned long long)arg2 renderEncoder:(id)arg3;
- (unsigned long long)renderStroke:(struct _PKStrokePointSlice)arg1 animatingStroke:(struct AnimatingStroke *)arg2 accumulating:(BOOL)arg3 combinedRendering:(BOOL)arg4 renderEncoder:(id)arg5 computeEncoder:(id)arg6 renderCache:(id)arg7;
- (unsigned long long)renderParticleRenderCache:(id)arg1 renderEncoder:(id)arg2 computeEncoder:(id)arg3 animatingStroke:(struct AnimatingStroke *)arg4;
- (unsigned long long)renderPaintRenderCache:(id)arg1 renderEncoder:(id)arg2 computeEncoder:(id)arg3 animatingStroke:(struct AnimatingStroke *)arg4;
- (unsigned long long)renderStrokeRenderCache:(id)arg1 renderEncoder:(id)arg2 animatingStroke:(struct AnimatingStroke *)arg3 indexed:(BOOL)arg4;
- (void)renderStroke:(id)arg1 withTransform:(struct CGAffineTransform)arg2 mode:(long long)arg3 flipped:(BOOL)arg4 renderBufferSize:(struct CGSize)arg5 renderEncoder:(id)arg6 currentClipRect:(struct CGRect)arg7;
- (void)renderLinesRenderBufferSize:(struct CGSize)arg1 renderEncoder:(id)arg2;
- (void)renderPaperTransform:(struct CGAffineTransform)arg1 paperTransform:(struct CGAffineTransform)arg2 flipped:(BOOL)arg3 multiply:(double)arg4 renderEncoder:(id)arg5;
- (void)setPaperTextureOnRenderEncoder:(id)arg1 fragmentUniforms:(struct PKMetalUberFragmentUniforms *)arg2;
- (void)clearPaintFramebuffersWithRenderEncoder:(id)arg1;
- (void)clearPaintFramebuffers;
- (void)purgePaintFramebuffers;
- (void)finishRenderingNoTeardownForStroke:(struct AnimatingStroke *)arg1 clippedToPixelSpaceRect:(struct CGRect)arg2 renderEncoder:(id)arg3;
- (void)debugFramebuffers;
- (void)finishRendering;
- (void)finishRenderingClippedToStrokeSpaceRect:(struct CGRect)arg1 forStroke:(struct AnimatingStroke *)arg2 renderEncoder:(id)arg3;
- (void)teardownDrawingFramebuffers;
- (void)renderBrushIndicatorForStroke:(id)arg1 withTransform:(struct CGAffineTransform)arg2 mode:(long long)arg3 flipped:(BOOL)arg4;
- (void)setupDrawingFramebuffersIfNecessaryLiveRendering:(BOOL)arg1;
- (void)setupOriginalBackFramebufferIfNecessary;
- (BOOL)ensureOriginalBackFramebufferHasContents;
- (void)setupCachedResourcesIfNecessary;
- (struct CGRect)clipRectForVertices:(const StrokeVertex_27fc2c00 *)arg1 numVertices:(unsigned long long)arg2;
- (struct CGAffineTransform)strokeRenderTransformForFramebufferSize:(struct CGSize)arg1 flipped:(BOOL)arg2;
- (struct CGAffineTransform)strokeRenderTransform;
- (void)setupStrokeBufferIfNecessary;
- (void)renderFullscreenQuadWithShader:(id)arg1 renderEncoder:(id)arg2;
- (void)setupUberVertexShaderWithTransform:(struct CGAffineTransform)arg1 paperTransform:(struct CGAffineTransform)arg2 renderEncoder:(id)arg3;
- (void)setupForDefaultUberVertexShaderInRenderEncoder:(id)arg1;
- (void)setBackgroundImage:(struct CGImage *)arg1;
- (struct CGImage *)newCGImageWithClipRect:(struct CGRect)arg1;
- (struct CGImage *)newCGImageWithClipRect:(struct CGRect)arg1 copyImage:(BOOL)arg2;
- (struct CGImage *)newCGImageFromTexture:(id)arg1 clipRect:(struct CGRect)arg2 copyImage:(BOOL)arg3;
- (id)CIImageFromTexture:(id)arg1;
- (struct CGImage *)newCGImage;
- (void)renderTexture:(id)arg1 intoFramebuffer:(id)arg2 sourceRect:(struct CGRect)arg3 destinationRect:(struct CGRect)arg4 renderState:(id)arg5;
- (void)renderTexture:(id)arg1 intoFramebuffer:(id)arg2 sourceRect:(struct CGRect)arg3 destinationPosition:(struct CGPoint)arg4 renderState:(id)arg5;
- (void)renderTexture:(id)arg1 intoFramebuffer:(id)arg2 clipRect:(struct CGRect)arg3 renderState:(id)arg4;
- (void)copyIntoPaintFromTexture:(id)arg1 clipRect:(struct CGRect)arg2 renderEncoder:(id)arg3;
- (void)copyFromFramebuffer:(id)arg1 toFramebuffer:(id)arg2 clipRect:(struct CGRect)arg3 renderEncoder:(id)arg4;
- (unsigned long long)colorAttachmentIndexFromFramebuffer:(id)arg1;
- (void)resetPaintFramebufferAccumulate:(BOOL)arg1;
- (BOOL)shouldAccumulateLiveStroke;
- (void)disableClippingForRenderEncoder:(id)arg1;
- (void)renderWithTransform:(struct CGAffineTransform)arg1 animatingStroke:(struct AnimatingStroke *)arg2 mode:(long long)arg3 clipped:(BOOL)arg4 renderBufferSize:(struct CGSize)arg5 renderEncoder:(id)arg6;
- (void)renderAnimatingStrokesWithTransform:(struct CGAffineTransform)arg1 renderBufferSize:(struct CGSize)arg2;
- (void)finishStroke;
@property(readonly, nonatomic) BOOL isFinishedRendering;
- (void)cancelLiveStroke;
- (void)finishLiveStrokeAndPresentDrawable:(id)arg1 waitUntilScheduled:(BOOL)arg2;
- (void)renderLiveStrokeWithTransform:(struct CGAffineTransform)arg1 renderBufferSize:(struct CGSize)arg2;
- (void)renderAheadWithTransform:(struct CGAffineTransform)arg1 onPaper:(BOOL)arg2 renderBufferSize:(struct CGSize)arg3 destinationTexture:(id)arg4;
- (void)teardownRenderStateIfNecessary;
- (void)setupRenderStateForStrokeRendering;
- (void)setupRenderStateForStrokeRenderingNeedPaintBuffer:(BOOL)arg1;
- (void)setupRenderStateForLiveRenderingDestinationTexture:(id)arg1 destinationLoadAction:(unsigned long long)arg2 accumLoadAction:(unsigned long long)arg3 accumStoreAction:(unsigned long long)arg4;
- (unsigned long long)renderStrokes:(id)arg1 stopBlock:(CDUnknownBlockType)arg2;
- (unsigned long long)renderStrokes:(id)arg1 clippedToStrokeSpaceRect:(struct CGRect)arg2 strokeTransform:(struct CGAffineTransform)arg3 stopBlock:(CDUnknownBlockType)arg4;
- (BOOL)applyStrokeSpaceClipRect:(struct CGRect)arg1 strokeTransform:(struct CGAffineTransform)arg2;
- (void)drawNewPointsAt:(double)arg1;
- (void)drawingCancelled;
- (void)drawingEnded:(id)arg1 finishStrokeBlock:(CDUnknownBlockType)arg2;
- (void)getAndRenderNewPoints:(id)arg1;
- (void)drawingBeganWithStroke:(id)arg1;
- (void)flushMemoryIfPossible;
- (void)setup;
- (void)dealloc;
- (id)initWithDrawingPixelSize:(struct CGSize)arg1 actualSize:(struct CGSize)arg2 device:(id)arg3 resourceHandler:(id)arg4;

@end

