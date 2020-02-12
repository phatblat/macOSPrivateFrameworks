//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSView.h"

#import "DKInkRendererDelegate.h"

@class DKDrawing, DKDrawingStroke, DKPointSmoothing, NSColor, NSMutableArray, NSString, NSTrackingArea, NSUndoManager, NSView<DKInkRenderer>;

@interface DKInkView : NSView <DKInkRendererDelegate>
{
    DKDrawing *_currentDrawing;
    struct CGPoint _lastPoint;
    double _lastTouchTime;
    struct CGPoint _velocityInWindow;
    id _trackingTouchID;
    BOOL _trackingTouches;
    CDUnknownBlockType _animationCompletionHandler;
    BOOL _isAddingPointWithoutSmoothing;
    BOOL _startedTouchDrawing;
    BOOL _scaleDrawingToFitCanvas;
    BOOL _allowInput;
    BOOL _isRenderingPaused;
    NSColor *_strokeColor;
    double _minPressure;
    double _maxPressure;
    double _minThickness;
    double _maxThickness;
    NSView<DKInkRenderer> *_renderer;
    DKDrawingStroke *_currentBrushStroke;
    NSMutableArray *_currentInterpolatedBrushStroke;
    NSMutableArray *_cachedInterpolatedBrushStrokes;
    double _currentWeight;
    unsigned long long _totalPointsAdded;
    double _strokeStartTime;
    DKPointSmoothing *_inputFIFO;
    unsigned long long _animationType;
    NSMutableArray *_cachedInterpolatedAnimationPoints;
    NSMutableArray *_cachedInterpolatedAnimationStrokes;
    NSMutableArray *_computedAnimationFrames;
    double _drawingScale;
    NSTrackingArea *_trackingArea;
    NSUndoManager *_strokeUndoManager;
    unsigned long long _mode;
    id <DKInkViewRenderDelegate> _renderPreviewDelegate;
    unsigned long long _renderPreviewMode;
    struct CGPoint _strokeStartLocation;
    struct CGPoint _strokeLastLocation;
    // Error parsing type: , name: _lastVectorPoint
    struct CGRect _aggregateInvalid;
    struct CGRect _unionDrawingRect;
}

+ (double)lengthOfVector:(struct CGVector)arg1;
+ (struct CGVector)normalizeVector:(struct CGVector)arg1;
+ (struct CGPoint)normalizeVectorPoint:(struct CGPoint)arg1;
+ (double)windowBackingScaleFactor:(id)arg1;
+ (BOOL)gpuAvailable;
@property(nonatomic) unsigned long long renderPreviewMode; // @synthesize renderPreviewMode=_renderPreviewMode;
@property(nonatomic) __weak id <DKInkViewRenderDelegate> renderPreviewDelegate; // @synthesize renderPreviewDelegate=_renderPreviewDelegate;
@property(readonly, nonatomic) BOOL isRenderingPaused; // @synthesize isRenderingPaused=_isRenderingPaused;
@property(nonatomic) BOOL allowInput; // @synthesize allowInput=_allowInput;
@property(nonatomic) BOOL scaleDrawingToFitCanvas; // @synthesize scaleDrawingToFitCanvas=_scaleDrawingToFitCanvas;
@property(nonatomic) unsigned long long mode; // @synthesize mode=_mode;
@property(retain, nonatomic) NSUndoManager *strokeUndoManager; // @synthesize strokeUndoManager=_strokeUndoManager;
@property BOOL startedTouchDrawing; // @synthesize startedTouchDrawing=_startedTouchDrawing;
@property(retain) NSTrackingArea *trackingArea; // @synthesize trackingArea=_trackingArea;
@property(nonatomic) double drawingScale; // @synthesize drawingScale=_drawingScale;
@property(retain, nonatomic) NSMutableArray *computedAnimationFrames; // @synthesize computedAnimationFrames=_computedAnimationFrames;
@property(retain, nonatomic) NSMutableArray *cachedInterpolatedAnimationStrokes; // @synthesize cachedInterpolatedAnimationStrokes=_cachedInterpolatedAnimationStrokes;
@property(retain, nonatomic) NSMutableArray *cachedInterpolatedAnimationPoints; // @synthesize cachedInterpolatedAnimationPoints=_cachedInterpolatedAnimationPoints;
@property(nonatomic) unsigned long long animationType; // @synthesize animationType=_animationType;
@property(nonatomic) struct CGRect unionDrawingRect; // @synthesize unionDrawingRect=_unionDrawingRect;
@property(nonatomic) struct CGRect aggregateInvalid; // @synthesize aggregateInvalid=_aggregateInvalid;
@property(retain, nonatomic) DKPointSmoothing *inputFIFO; // @synthesize inputFIFO=_inputFIFO;
// Error parsing type for property lastVectorPoint:
// Property attributes: T,N,V_lastVectorPoint

@property BOOL isAddingPointWithoutSmoothing; // @synthesize isAddingPointWithoutSmoothing=_isAddingPointWithoutSmoothing;
@property double strokeStartTime; // @synthesize strokeStartTime=_strokeStartTime;
@property struct CGPoint strokeLastLocation; // @synthesize strokeLastLocation=_strokeLastLocation;
@property struct CGPoint strokeStartLocation; // @synthesize strokeStartLocation=_strokeStartLocation;
@property unsigned long long totalPointsAdded; // @synthesize totalPointsAdded=_totalPointsAdded;
@property(nonatomic) double currentWeight; // @synthesize currentWeight=_currentWeight;
@property(retain, nonatomic) NSMutableArray *cachedInterpolatedBrushStrokes; // @synthesize cachedInterpolatedBrushStrokes=_cachedInterpolatedBrushStrokes;
@property(retain, nonatomic) NSMutableArray *currentInterpolatedBrushStroke; // @synthesize currentInterpolatedBrushStroke=_currentInterpolatedBrushStroke;
@property(retain, nonatomic) DKDrawingStroke *currentBrushStroke; // @synthesize currentBrushStroke=_currentBrushStroke;
@property(retain, nonatomic) NSView<DKInkRenderer> *renderer; // @synthesize renderer=_renderer;
@property(nonatomic) double maxThickness; // @synthesize maxThickness=_maxThickness;
@property(nonatomic) double minThickness; // @synthesize minThickness=_minThickness;
@property(nonatomic) double maxPressure; // @synthesize maxPressure=_maxPressure;
@property(nonatomic) double minPressure; // @synthesize minPressure=_minPressure;
@property(retain, nonatomic) NSColor *strokeColor; // @synthesize strokeColor=_strokeColor;
@property(readonly, nonatomic) BOOL trackingTouches; // @synthesize trackingTouches=_trackingTouches;
- (void).cxx_destruct;
- (BOOL)mouseDownCanMoveWindow;
- (BOOL)acceptsFirstMouse:(id)arg1;
- (BOOL)acceptsFirstResponder;
- (void)_endInkMode;
- (void)_startInkMode;
- (id)_trackedTouchInTouches:(id)arg1 findNewTouch:(BOOL)arg2 isNewTouch:(char *)arg3;
- (struct CGPoint)_pointInView:(id)arg1 withNormalizedDevicePosition:(struct CGPoint)arg2;
- (void)touchesCancelledWithEvent:(id)arg1;
- (void)touchesEndedWithEvent:(id)arg1;
- (void)touchesMovedWithEvent:(id)arg1;
- (void)touchesBeganWithEvent:(id)arg1;
- (void)pressureChangeWithEvent:(id)arg1;
- (double)weightForValue:(double)arg1;
- (void)terminateStroke;
- (void)continueStrokeWithoutSmoothing: /* Error: Ran out of types for this method. */;
- (void)continueStroke: /* Error: Ran out of types for this method. */;
- (void)startStroke: /* Error: Ran out of types for this method. */;
- (void)_undoLastStroke:(id)arg1;
- (void)undoLastStroke;
- (void)inkDidCompleteRender:(id)arg1;
- (void)inkDidRender:(id)arg1;
- (void)_replayAnimationTick:(id)arg1;
- (void)_computeAnimationFramesFittingInMaxDuration:(double)arg1;
- (void)_setDrawingOnRendererWithReplayAnimation:(id)arg1;
- (void)_setDrawingOnRendererWithBleedAnimation:(id)arg1;
- (void)_setDrawingOnRenderer:(id)arg1;
- (void)_display;
- (void)_stopDisplayLink;
- (void)_startDisplayLink;
@property(readonly, nonatomic) BOOL canvasHasInk;
@property(readonly, nonatomic) long long countOfCurrentStroke;
- (void)setFrame:(struct CGRect)arg1;
- (void)clear;
- (double)interfaceScale;
- (void)_postTouchesEndedNotification:(struct CGPoint)arg1;
- (void)_postTouchesBeganNotification:(struct CGPoint)arg1;
- (void)_notifyRenderDelegate;
@property(readonly, nonatomic) struct CGRect inkBounds;
- (id)snapshotRendererState;
@property(copy, nonatomic) DKDrawing *currentDrawing; // @synthesize currentDrawing=_currentDrawing;
- (void)setCurrentDrawing:(id)arg1 scaleDrawingToFitBounds:(BOOL)arg2 withAnimationType:(unsigned long long)arg3 animationCompletionHandler:(CDUnknownBlockType)arg4;
- (void)setAcceptsTouchEvents:(BOOL)arg1;
- (void)resumeRendering;
- (void)pauseRendering;
- (void)teardown;
-     // Error parsing type: v32@0:8^16Q24, name: _renderEmittedPoints:count:
-     // Error parsing type: v44@0:8^16^24Q32c40, name: _addUninterpolatedPoints:controlPoint:count:flushing:
- (void)_commonInit;
- (BOOL)_deviceSupportsGL;
- (void)setupRenderer;
- (void)setHidden:(BOOL)arg1;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

