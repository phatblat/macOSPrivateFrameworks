//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <PencilKit/PKInternalDrawingLightView.h>

#import "PKControllerDelegate.h"
#import "PKOpenGLViewDelegate.h"

@class NSColor, NSString, NSTimer, PKController, PKDisplayLink, PKInk, PKOpenGLView, PKSelectionController;

@interface PKInternalDrawingView : PKInternalDrawingLightView <PKControllerDelegate, PKOpenGLViewDelegate>
{
    PKDisplayLink *_displayLink;
    NSColor *_drawingColor;
    BOOL _shouldPause;
    struct CGAffineTransform _imageTransform;
    BOOL _didCancelSelection;
    BOOL _isSelecting;
    struct CGPoint _drawingBeganLocation;
    BOOL _isErasingObjects;
    struct CGPoint _oldEraseLocation;
    long long _undoGroupCount;
    BOOL _isDrawing;
    BOOL _disableWideGamut;
    BOOL _zooming;
    BOOL _allowLiveInteraction;
    BOOL _editable;
    BOOL _fullySetup;
    BOOL _claimedLiveDrawing;
    BOOL _layerFixedPixelSize;
    id <PKInternalDrawingViewDelegate> _delegate;
    PKInk *_ink;
    PKController *_drawingController;
    PKOpenGLView *_glView;
    id _undoTarget;
    SEL _undoSelector;
    double _minimumZoomScale;
    double _maximumZoomScale;
    double _drawingStartTimestamp;
    NSTimer *_imageTransformTimer;
    double _initialDrawingBoundsYOrigin;
    PKSelectionController *_selectionController;
    struct CGPoint _drawingStartPointInScreenSpace;
    struct CGAffineTransform _strokeTransform;
}

+ (void)setupDefaults;
+ (void)initialize;
@property(nonatomic) BOOL layerFixedPixelSize; // @synthesize layerFixedPixelSize=_layerFixedPixelSize;
@property(readonly, nonatomic) __weak PKSelectionController *selectionController; // @synthesize selectionController=_selectionController;
@property(nonatomic) BOOL didCancelSelection; // @synthesize didCancelSelection=_didCancelSelection;
@property(nonatomic) BOOL claimedLiveDrawing; // @synthesize claimedLiveDrawing=_claimedLiveDrawing;
@property(nonatomic) BOOL fullySetup; // @synthesize fullySetup=_fullySetup;
@property(nonatomic) double initialDrawingBoundsYOrigin; // @synthesize initialDrawingBoundsYOrigin=_initialDrawingBoundsYOrigin;
@property(retain, nonatomic) NSTimer *imageTransformTimer; // @synthesize imageTransformTimer=_imageTransformTimer;
@property double drawingStartTimestamp; // @synthesize drawingStartTimestamp=_drawingStartTimestamp;
@property(nonatomic) BOOL shouldPause; // @synthesize shouldPause=_shouldPause;
@property(nonatomic) struct CGPoint drawingStartPointInScreenSpace; // @synthesize drawingStartPointInScreenSpace=_drawingStartPointInScreenSpace;
@property(nonatomic) double maximumZoomScale; // @synthesize maximumZoomScale=_maximumZoomScale;
@property(nonatomic) double minimumZoomScale; // @synthesize minimumZoomScale=_minimumZoomScale;
@property(nonatomic) SEL undoSelector; // @synthesize undoSelector=_undoSelector;
@property(nonatomic) __weak id undoTarget; // @synthesize undoTarget=_undoTarget;
@property(readonly, nonatomic) PKOpenGLView *glView; // @synthesize glView=_glView;
@property(readonly, nonatomic) PKController *drawingController; // @synthesize drawingController=_drawingController;
@property(nonatomic, getter=isEditable) BOOL editable; // @synthesize editable=_editable;
@property(nonatomic) BOOL allowLiveInteraction; // @synthesize allowLiveInteraction=_allowLiveInteraction;
@property(nonatomic) BOOL zooming; // @synthesize zooming=_zooming;
@property(nonatomic) BOOL disableWideGamut; // @synthesize disableWideGamut=_disableWideGamut;
@property(nonatomic) BOOL isDrawing; // @synthesize isDrawing=_isDrawing;
@property(retain, nonatomic) PKInk *ink; // @synthesize ink=_ink;
@property(nonatomic) struct CGAffineTransform strokeTransform; // @synthesize strokeTransform=_strokeTransform;
@property(nonatomic) __weak id <PKInternalDrawingViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)setDisplayLinkPaused:(BOOL)arg1;
- (void)setIsDrawingForRecap:(BOOL)arg1;
- (void)selectionBegan:(id)arg1;
- (void)mouseUp:(id)arg1;
- (void)mouseDragged:(id)arg1;
- (void)mouseDown:(id)arg1;
- (void)drawingMoved:(id)arg1;
- (void)drawingEnded:(id)arg1;
- (void)drawingBegan:(id)arg1;
- (CDStruct_57911ed6)drawingInputPoint:(struct CGPoint)arg1 forEvent:(id)arg2 predicted:(BOOL)arg3;
- (BOOL)acceptsFirstResponder;
@property(readonly, nonatomic) id pkaxOpenGLView;
- (void)updatePanEdgesForTransform:(struct CGAffineTransform)arg1;
- (struct CGPoint)translationOffsetForTransform:(struct CGAffineTransform)arg1;
- (double)offsetForCenteringRangeMin:(double)arg1 size:(double)arg2 inSize:(double)arg3;
- (struct CGPoint)applyTransformToTouchLocation:(struct CGPoint)arg1;
- (struct CGAffineTransform)fitTransform;
- (void)drawingCancelled;
- (void)drawStrokeWithPath:(struct CGPath *)arg1;
- (void)registerUndoForStroke:(id)arg1;
- (void)eraseStrokesForPoint:(struct CGPoint)arg1 prevPoint:(struct CGPoint)arg2;
- (void)eraseStrokesForPoint:(struct CGPoint)arg1;
@property(readonly, nonatomic) BOOL isRendering;
- (void)setContentHidden:(BOOL)arg1;
- (BOOL)contentHidden;
- (void)setDrawing:(id)arg1 image:(id)arg2 imageDrawing:(id)arg3 completion:(CDUnknownBlockType)arg4 fullyRenderedCompletionBlock:(CDUnknownBlockType)arg5;
- (void)_setDrawing:(id)arg1 tiles:(id)arg2 setupComplete:(CDUnknownBlockType)arg3 completionBlock:(CDUnknownBlockType)arg4;
- (void)setDrawing:(id)arg1;
- (void)delayCompletionBlockUntilPresentation:(CDUnknownBlockType)arg1;
- (void)rotate:(id)arg1;
- (void)rotateIfNeeded;
- (void)updateImageTransform:(id)arg1;
- (void)setImageTransformFrom:(struct CGAffineTransform)arg1 toTransform:(struct CGAffineTransform)arg2 animated:(BOOL)arg3 duration:(double)arg4;
- (void)setupFullScreenTransform:(struct CGAffineTransform)arg1 toViewOrientation:(struct CGAffineTransform)arg2 animated:(BOOL)arg3;
- (void)eraseAll;
- (void)performUndoSelectionCommand:(id)arg1;
- (void)performUndoModifyStrokesCommand:(id)arg1;
- (void)performUndo:(id)arg1;
- (BOOL)canEraseAll;
- (BOOL)canRedo;
- (BOOL)canUndo;
- (BOOL)enableUserActionButton;
- (BOOL)canPerformUserAction;
- (void)setImageTransform:(struct CGAffineTransform)arg1 animated:(BOOL)arg2;
@property(nonatomic) struct CGAffineTransform imageTransform;
- (void)drawingChanged:(id)arg1;
- (void)setupFullScreenTransform;
- (void)setFrame:(struct CGRect)arg1;
- (void)PKOpenGLView:(id)arg1 drawInRect:(struct CGRect)arg2;
- (void)setOpaque:(BOOL)arg1;
- (void)_drawingDisplay:(double)arg1;
- (void)drawNowIfNeeded;
- (void)handleDrawingShouldPause:(BOOL)arg1;
- (void)setNeedsDrawingDisplay;
- (BOOL)isFlipped;
- (void)setupDisplayLink;
- (void)setupOpenGLView;
- (void)setupOpenGLWithPixelSize:(struct CGSize)arg1 drawingSize:(struct CGSize)arg2;
- (void)updateZoomScaleCaps;
- (void)setupGestures;
- (double)layerContentScale;
- (void)resizeBackingBuffersForPixelSize:(struct CGSize)arg1 drawingScale:(double)arg2;
- (void)adjustedPixelSize:(struct CGSize *)arg1 drawingSize:(struct CGSize *)arg2;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1 editable:(BOOL)arg2 pixelSize:(struct CGSize)arg3 drawingScale:(double)arg4 layerFixedPixelSize:(BOOL)arg5 drawingController:(id)arg6 selectionController:(id)arg7;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (CDStruct_57911ed6)drawingInputPoint:(struct CGPoint)arg1 forHIDEvent:(id)arg2 predicted:(BOOL)arg3;
- (void)drawingEndedForHIDPoint:(id)arg1;
- (void)drawingMovedForHIDPoint:(id)arg1;
- (void)drawingBeganForHIDPoint:(id)arg1;
- (void)simulateHIDPoints:(id)arg1;
- (id)accessibilityHint;
- (id)accessibilityLabel;
- (BOOL)isAccessibilityElement;
- (BOOL)accessibilityElementsHidden;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
