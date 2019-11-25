//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class PKRulerLayer, PKRulerView;

@interface PKRulerController : NSObject
{
    BOOL _isInteractingWithRuler;
    BOOL _rulerSelected;
    BOOL _rulerIsRotating;
    BOOL _rulerWasShownViaGesture;
    BOOL _canRulerSnapToAngle;
    BOOL _lastTouchWasMaskedByRuler;
    id <PKRulerDelegate> _delegate;
    PKRulerView *_rulerView;
    PKRulerLayer *_rulerLayer;
    CDStruct_59a83e79 _rulerState;
    CDStruct_59a83e79 _previousRulerState;
    struct CGAffineTransform _rulerStartTransform;
    struct CGAffineTransform _defaultRulerTransform;
}

+ (id)sharedRulerView;
@property(nonatomic) BOOL lastTouchWasMaskedByRuler; // @synthesize lastTouchWasMaskedByRuler=_lastTouchWasMaskedByRuler;
@property(nonatomic) BOOL canRulerSnapToAngle; // @synthesize canRulerSnapToAngle=_canRulerSnapToAngle;
@property(nonatomic) BOOL rulerWasShownViaGesture; // @synthesize rulerWasShownViaGesture=_rulerWasShownViaGesture;
@property(nonatomic) CDStruct_59a83e79 previousRulerState; // @synthesize previousRulerState=_previousRulerState;
@property(nonatomic) CDStruct_59a83e79 rulerState; // @synthesize rulerState=_rulerState;
@property(retain, nonatomic) PKRulerLayer *rulerLayer; // @synthesize rulerLayer=_rulerLayer;
@property(nonatomic) struct CGAffineTransform defaultRulerTransform; // @synthesize defaultRulerTransform=_defaultRulerTransform;
@property(nonatomic) struct CGAffineTransform rulerStartTransform; // @synthesize rulerStartTransform=_rulerStartTransform;
@property(retain, nonatomic) PKRulerView *rulerView; // @synthesize rulerView=_rulerView;
@property(nonatomic) BOOL rulerIsRotating; // @synthesize rulerIsRotating=_rulerIsRotating;
@property(readonly, nonatomic) BOOL rulerSelected; // @synthesize rulerSelected=_rulerSelected;
@property(nonatomic) BOOL isInteractingWithRuler; // @synthesize isInteractingWithRuler=_isInteractingWithRuler;
@property(nonatomic) __weak id <PKRulerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (struct CGAffineTransform)angleSnapRulerTransform:(struct CGAffineTransform)arg1 aroundOrigin:(struct CGPoint)arg2;
- (struct CGAffineTransform)canvasTransform;
- (double)getRulerCenterTValueOnScreenForTransform:(struct CGAffineTransform)arg1;
- (struct CGAffineTransform)ensureRulerFullyOnscreen:(struct CGAffineTransform)arg1;
- (struct CGAffineTransform)pixelSnapRulerTransform:(struct CGAffineTransform)arg1;
- (BOOL)hitTest:(struct CGPoint)arg1;
- (void)hideUI;
- (void)setupGestures;
- (void)endRulerDrawing;
- (void)cancelNonDrawingGestures;
- (void)startRulerDrawing;
- (void)drawingCancelled:(CDUnknownBlockType)arg1;
- (struct CGPoint)applyTransformToTouchLocation:(struct CGPoint)arg1;
- (void)resetRulerTransform;
- (void)resetRuler;
- (void)hideRulerAnimated:(BOOL)arg1;
- (void)hideRuler;
- (void)showRuler;
- (void)_configureRuler;
- (id)initWithDelegate:(id)arg1;

@end

