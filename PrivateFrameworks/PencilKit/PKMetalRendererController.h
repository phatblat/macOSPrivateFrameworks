//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "PKRendererControllerProtocol.h"

@class CAMetalLayer, NSMutableArray, NSObject<OS_dispatch_queue>, NSObject<OS_dispatch_semaphore>, NSString, PKLinedPaper, PKMetalRenderer, PKStrokeGenerator;

@interface PKMetalRendererController : NSObject <PKRendererControllerProtocol>
{
    NSObject<OS_dispatch_queue> *_renderQueue;
    // Error parsing type: Ai, name: _cancelLongRunningRenderingCount
    // Error parsing type: Ai, name: _cancelAllRendering
    NSObject<OS_dispatch_semaphore> *_canBeginRenderSemaphore;
    // Error parsing type: {atomic_flag="_Value"AB}, name: _readyToBeginRender
    // Error parsing type: Ad, name: _lastFrameDuration
    // Error parsing type: Ai, name: _queuedRenders
    NSMutableArray *_postPresentCallbacks;
    BOOL _isTorndown;
    struct CGSize _pixelSize;
    struct CGSize _actualSize;
    double _presentationCount;
    double _presentationDelay;
    double _presentationDelayGrowth;
    double _presentationMaxDelay;
    CDUnknownBlockType _vSyncTimeoutBlock;
    id <CAMetalDrawable> _currentDrawable;
    PKStrokeGenerator *_inputController;
    PKLinedPaper *_linedPaper;
    CAMetalLayer *_presentationLayer;
    PKMetalRenderer *_renderer;
    double _inputScale;
    struct CGRect _viewScissor;
    struct CGAffineTransform _strokeTransform;
    struct CGAffineTransform _paperTransform;
    struct CGAffineTransform _renderTransform;
}

@property double inputScale; // @synthesize inputScale=_inputScale;
@property struct CGAffineTransform renderTransform; // @synthesize renderTransform=_renderTransform;
@property(retain, nonatomic) PKMetalRenderer *renderer; // @synthesize renderer=_renderer;
@property(nonatomic) __weak CAMetalLayer *presentationLayer; // @synthesize presentationLayer=_presentationLayer;
@property(readonly, nonatomic) struct CGSize pixelSize; // @synthesize pixelSize=_pixelSize;
@property(readonly, nonatomic) struct CGSize actualSize; // @synthesize actualSize=_actualSize;
@property(nonatomic) struct CGAffineTransform paperTransform; // @synthesize paperTransform=_paperTransform;
@property(nonatomic) struct CGRect viewScissor; // @synthesize viewScissor=_viewScissor;
@property(retain, nonatomic) PKLinedPaper *linedPaper; // @synthesize linedPaper=_linedPaper;
@property(readonly, nonatomic) PKStrokeGenerator *inputController; // @synthesize inputController=_inputController;
@property(nonatomic) struct CGAffineTransform strokeTransform; // @synthesize strokeTransform=_strokeTransform;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *renderQueue; // @synthesize renderQueue=_renderQueue;
- (void).cxx_destruct;
- (BOOL)setupCurrentDrawable;
- (BOOL)_renderAheadWithTransform:(struct CGAffineTransform)arg1 at:(double)arg2;
- (void)callBlockAfterPresenting:(CDUnknownBlockType)arg1;
- (void)didFinishRendering:(CDUnknownBlockType)arg1;
- (BOOL)prerenderWithTransform:(struct CGAffineTransform)arg1 inputScale:(double)arg2 at:(double)arg3;
- (void)_renderLiveStrokeAndPresentWithTransform:(struct CGAffineTransform)arg1 at:(double)arg2;
- (void)_present:(double)arg1;
- (void)_renderAndPresent:(BOOL)arg1 withTransform:(struct CGAffineTransform)arg2;
- (void)_renderDrawPoints;
- (void)changeRenderSize;
- (void)drawingCancelledWithCompletion:(CDUnknownBlockType)arg1;
- (void)drawingCancelled;
- (void)drawingEnded:(id)arg1 finishStrokeBlock:(CDUnknownBlockType)arg2;
- (void)drawingBeganWithStroke:(id)arg1;
- (void)drawStrokesAfterClear:(id)arg1 clippedToStrokeSpaceRect:(struct CGRect)arg2 strokeTransform:(struct CGAffineTransform)arg3 useLayerContext:(BOOL)arg4 completion:(CDUnknownBlockType)arg5;
- (void)drawStrokesAfterClear:(id)arg1 clippedToStrokeSpaceRect:(struct CGRect)arg2 completion:(CDUnknownBlockType)arg3;
- (void)drawStrokes:(id)arg1 renderIntermediateSteps:(BOOL)arg2 completion:(CDUnknownBlockType)arg3;
- (void)drawStrokes:(id)arg1 clippedToStrokeSpaceRect:(struct CGRect)arg2 completion:(CDUnknownBlockType)arg3;
- (void)purgeOriginalBackFramebuffer;
- (void)flushMemoryIfPossible;
- (void)clear;
- (struct CGImage *)newCGImageWithClipRect:(struct CGRect)arg1;
- (struct CGImage *)newCGImage;
- (void)drawImage:(struct CGImage *)arg1 andMask:(struct CGImage *)arg2 clippedToStrokeSpaceRect:(struct CGRect)arg3;
- (void)drawImage:(struct CGImage *)arg1 andMask:(struct CGImage *)arg2;
- (void)renderTilesIntoTiles:(id)arg1;
- (void)renderTiles:(id)arg1 tileTransform:(struct CGAffineTransform)arg2;
- (void)_copyIntoTilesFromRenderQueue:(id)arg1 tileTransform:(struct CGAffineTransform)arg2;
- (void)copyIntoTiles:(id)arg1;
- (BOOL)drawStrokes:(id)arg1 intoTile:(id)arg2 renderCount:(long long)arg3;
- (void)didTeardownTile;
@property(nonatomic) double backboardPaperMultiply;
- (void)setBackgroundColor:(struct CGColor *)arg1;
- (void)setBackgroundImage:(struct CGImage *)arg1;
- (void)_drawStrokesAfterClear:(id)arg1 clippedToStrokeSpaceRect:(struct CGRect)arg2 strokeTransform:(struct CGAffineTransform)arg3 useLayerContext:(BOOL)arg4 renderCompletion:(CDUnknownBlockType)arg5;
- (void)buildRenderCacheForStrokes:(id)arg1;
- (void)renderStrokes:(id)arg1 clippedToStrokeSpaceRect:(struct CGRect)arg2 strokeTransform:(struct CGAffineTransform)arg3 imageClipRect:(struct CGRect)arg4 completion:(CDUnknownBlockType)arg5;
- (void)enableRendering;
- (void)disableRendering;
- (BOOL)isAllRenderingCancelled;
- (void)cancelAllRendering;
- (BOOL)isLongRunningRenderingCancelled;
- (void)resumeLongRunningRendersAfterAllWorkIsDone;
- (void)resumeLongRunningRenders;
- (void)cancelLongRunningRenders;
- (void)cancelVSyncTimeoutBlock;
- (void)setup;
- (void)dealloc;
- (void)teardown;
- (void)setPixelSize:(struct CGSize)arg1 actualSize:(struct CGSize)arg2;
- (id)initWithPixelSize:(struct CGSize)arg1 actualSize:(struct CGSize)arg2 renderQueue:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

