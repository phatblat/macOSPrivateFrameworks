//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSMutableArray, NSObject<OS_dispatch_queue>, NSObject<OS_dispatch_semaphore>, NSObject<PKControllerDelegate>, PKDrawing, PKStrokeGenerator;

@interface PKController : NSObject
{
    BOOL _liveInteraction;
    BOOL _isSuspended;
    BOOL _previewsSuspended;
    NSObject<PKControllerDelegate> *_delegate;
    NSMutableArray *_renderedStrokes;
    id <PKRendererControllerProtocol> _rendererController;
    PKDrawing *_drawing;
    NSObject<OS_dispatch_semaphore> *_interactSemaphore;
    NSObject<OS_dispatch_queue> *_interactQueue;
    NSObject<OS_dispatch_queue> *_suspendQueue;
    NSObject<OS_dispatch_queue> *_previewQueue;
    NSArray *_additionalStrokes;
    NSArray *_hideAdditionalStrokes;
}

+ (void)updatesFrom:(id)arg1 to:(id)arg2 newStrokesToRender:(id *)arg3 redrawAllInRect:(struct CGRect *)arg4;
@property(retain, nonatomic) NSArray *hideAdditionalStrokes; // @synthesize hideAdditionalStrokes=_hideAdditionalStrokes;
@property(retain, nonatomic) NSArray *additionalStrokes; // @synthesize additionalStrokes=_additionalStrokes;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *previewQueue; // @synthesize previewQueue=_previewQueue;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *suspendQueue; // @synthesize suspendQueue=_suspendQueue;
@property(nonatomic) BOOL previewsSuspended; // @synthesize previewsSuspended=_previewsSuspended;
@property(nonatomic) BOOL isSuspended; // @synthesize isSuspended=_isSuspended;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *interactQueue; // @synthesize interactQueue=_interactQueue;
@property(retain, nonatomic) NSObject<OS_dispatch_semaphore> *interactSemaphore; // @synthesize interactSemaphore=_interactSemaphore;
@property(retain, nonatomic) PKDrawing *drawing; // @synthesize drawing=_drawing;
@property BOOL liveInteraction; // @synthesize liveInteraction=_liveInteraction;
@property(retain, nonatomic) id <PKRendererControllerProtocol> rendererController; // @synthesize rendererController=_rendererController;
@property(retain, nonatomic) NSMutableArray *renderedStrokes; // @synthesize renderedStrokes=_renderedStrokes;
@property(nonatomic) __weak NSObject<PKControllerDelegate> *delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)addNewRenderedStroke:(id)arg1 preDrawingChangedBlock:(CDUnknownBlockType)arg2;
- (void)imageWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)_renderAllInStrokeSpaceRect:(struct CGRect)arg1 selectedStrokes:(id)arg2 hideSelected:(BOOL)arg3 completion:(CDUnknownBlockType)arg4;
- (void)_renderAllInStrokeSpaceRect:(struct CGRect)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_renderStrokes:(id)arg1 clippedToStrokeSpaceRect:(struct CGRect)arg2 completion:(CDUnknownBlockType)arg3;
- (void)drawingChanged;
- (void)_drawingChanged;
- (void)_didRenderStrokes:(id)arg1;
- (void)_renderStrokes:(id)arg1 renderIntermediateSteps:(BOOL)arg2 completion:(CDUnknownBlockType)arg3;
- (void)renderStrokes:(id)arg1 intoTile:(id)arg2;
- (void)renderTilesIntoTiles:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)renderTiles:(id)arg1 tileTransform:(struct CGAffineTransform)arg2 completion:(CDUnknownBlockType)arg3;
- (void)renderStrokes:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)renderImage:(struct CGImage *)arg1 andMask:(struct CGImage *)arg2 forRenderedStrokes:(id)arg3 thenRenderStrokes:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (void)renderImage:(struct CGImage *)arg1 andMask:(struct CGImage *)arg2 forRenderedStrokes:(id)arg3 thenRenderStrokes:(id)arg4 inStrokeSpaceClipRect:(struct CGRect)arg5 completion:(CDUnknownBlockType)arg6;
- (void)removeStrokesInRect:(struct CGRect)arg1 from:(id)arg2;
- (void)applyCommands:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)applyCommand:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)_applyCommands:(id)arg1 interactCompletion:(CDUnknownBlockType)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)clearAdditionalStrokes;
- (void)updateDrawing:(BOOL)arg1 withAdditionalStrokes:(id)arg2 hide:(BOOL)arg3 isErasing:(BOOL)arg4;
- (void)updateDrawingFrom:(id)arg1;
- (void)_updateDrawing:(id)arg1 erasedStrokes:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)updateDrawingWithErasedStrokes:(id)arg1;
- (void)updateDrawing;
- (void)updateOrientation:(long long)arg1;
- (void)performAsyncInteractBlock:(CDUnknownBlockType)arg1;
- (void)_renderImage:(struct CGImage *)arg1 andMask:(struct CGImage *)arg2;
- (BOOL)_updateFrom:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_setDrawing:(id)arg1 initialDrawing:(id)arg2 withImage:(struct CGImage *)arg3 andMask:(struct CGImage *)arg4 setupComplete:(CDUnknownBlockType)arg5 completion:(CDUnknownBlockType)arg6;
- (void)setDrawing:(id)arg1 initialDrawing:(id)arg2 withImage:(struct CGImage *)arg3 andMask:(struct CGImage *)arg4 setupComplete:(CDUnknownBlockType)arg5 completion:(CDUnknownBlockType)arg6;
- (void)setDrawing:(id)arg1 tiles:(id)arg2 tileTransform:(struct CGAffineTransform)arg3 setupComplete:(CDUnknownBlockType)arg4 completionBlock:(CDUnknownBlockType)arg5;
- (BOOL)_loadInitialDrawing:(id)arg1 withImage:(struct CGImage *)arg2 andMask:(struct CGImage *)arg3;
- (void)resumeDrawing;
- (void)suspendDrawingImmediately:(BOOL)arg1;
- (void)suspendDrawing;
- (void)resumePreviews;
- (void)suspendPreviews;
- (void)didEndLiveInteraction;
- (void)didStartLiveInteractionWith:(id)arg1;
- (void)cancelLongRunningRenders;
@property(readonly, nonatomic) PKStrokeGenerator *inputController;
- (void)teardown;
- (id)initWithPixelSize:(struct CGSize)arg1 actualSize:(struct CGSize)arg2 renderQueue:(id)arg3;
- (id)init;

@end

