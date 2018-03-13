//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class ICDrawingCommandData, NSObject<OS_dispatch_queue>, NSObject<OS_dispatch_semaphore>;

@interface ICDrawingInputController : NSObject
{
    vector_c0e7c5b2 _drawPoints;
    NSObject<OS_dispatch_queue> *_inputQueue;
    NSObject<OS_dispatch_queue> *_outputQueue;
    id <ICDrawingInputControllerDelegate> _delegate;
    ICDrawingCommandData *_currentCommand;
    long long _currentInputType;
    BOOL _ended;
    double _inputScale;
    float _smoothingKernel[7];
    long long _immutableCount;
    vector_c0e7c5b2 _updatedDrawPoints;
    BOOL _drawingEndedButNotFinished;
    NSObject<OS_dispatch_semaphore> *_drawingWaitForFinishSemaphore;
    BOOL _isSnappedToRuler;
    BOOL _useRuler;
    BOOL _isSnappedToRulerTopSide;
    BOOL _canSnapToRuler;
    double _eraserIndicatorAlpha;
    double _rulerWidth;
    double _strokeMaxForce;
    struct ICDrawingPixelSmoothingFilter *_pixelSmoothingFilter;
    struct ICDrawingPointReductionFilter *_pointReductionFilter;
    struct ICDrawingStartHookFilter *_startHookFilter;
    struct ICDrawingEndHookFilter *_endHookFilter;
    struct ICDrawingVelocityCalculationFilter *_velocityFilter;
    struct ICDrawingInputSmoother *_inputSmoother;
    struct ICDrawingInputProviderInitial *_inputProvider;
    struct ICDrawingInputToOutputFilter *_inputToOutputFilter;
    struct ICDrawingAzimuthFilter *_azimuthFilter;
    struct ICDrawingEndCapsFilter *_endCapFilter;
    struct ICDrawingRulerExtremaFilter *_rulerExtremaFilter;
    struct ICDrawingEstimatedAltitudeAndAzimuthFilter *_estimatedAltitudeAndAzimuthFilter;
    struct CGPoint _lastPoint;
    struct CGAffineTransform _rulerTransform;
}

+ (void)loadDefaults;
+ (void)setupDefaults;
+ (void)initialize;
@property(nonatomic) struct ICDrawingEstimatedAltitudeAndAzimuthFilter *estimatedAltitudeAndAzimuthFilter; // @synthesize estimatedAltitudeAndAzimuthFilter=_estimatedAltitudeAndAzimuthFilter;
@property(nonatomic) struct ICDrawingRulerExtremaFilter *rulerExtremaFilter; // @synthesize rulerExtremaFilter=_rulerExtremaFilter;
@property(nonatomic) struct ICDrawingEndCapsFilter *endCapFilter; // @synthesize endCapFilter=_endCapFilter;
@property(nonatomic) struct ICDrawingAzimuthFilter *azimuthFilter; // @synthesize azimuthFilter=_azimuthFilter;
@property(nonatomic) struct ICDrawingInputToOutputFilter *inputToOutputFilter; // @synthesize inputToOutputFilter=_inputToOutputFilter;
@property(nonatomic) struct ICDrawingInputProviderInitial *inputProvider; // @synthesize inputProvider=_inputProvider;
@property(nonatomic) struct ICDrawingInputSmoother *inputSmoother; // @synthesize inputSmoother=_inputSmoother;
@property(nonatomic) struct ICDrawingVelocityCalculationFilter *velocityFilter; // @synthesize velocityFilter=_velocityFilter;
@property(nonatomic) struct ICDrawingEndHookFilter *endHookFilter; // @synthesize endHookFilter=_endHookFilter;
@property(nonatomic) struct ICDrawingStartHookFilter *startHookFilter; // @synthesize startHookFilter=_startHookFilter;
@property(nonatomic) struct ICDrawingPointReductionFilter *pointReductionFilter; // @synthesize pointReductionFilter=_pointReductionFilter;
@property(nonatomic) struct ICDrawingPixelSmoothingFilter *pixelSmoothingFilter; // @synthesize pixelSmoothingFilter=_pixelSmoothingFilter;
@property struct CGPoint lastPoint; // @synthesize lastPoint=_lastPoint;
@property(nonatomic) double strokeMaxForce; // @synthesize strokeMaxForce=_strokeMaxForce;
@property(nonatomic) BOOL canSnapToRuler; // @synthesize canSnapToRuler=_canSnapToRuler;
@property(nonatomic) BOOL isSnappedToRulerTopSide; // @synthesize isSnappedToRulerTopSide=_isSnappedToRulerTopSide;
@property(nonatomic) double rulerWidth; // @synthesize rulerWidth=_rulerWidth;
@property(nonatomic) BOOL useRuler; // @synthesize useRuler=_useRuler;
@property(nonatomic) struct CGAffineTransform rulerTransform; // @synthesize rulerTransform=_rulerTransform;
@property(nonatomic) double eraserIndicatorAlpha; // @synthesize eraserIndicatorAlpha=_eraserIndicatorAlpha;
@property BOOL isSnappedToRuler; // @synthesize isSnappedToRuler=_isSnappedToRuler;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)drawingCancelledWithCompletion:(CDUnknownBlockType)arg1;
- (void)drawingEndedWithPreCompletion:(CDUnknownBlockType)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_drawingAddPoint:(CDStruct_57911ed6)arg1;
- (void)drawingAddPoint:(CDStruct_57911ed6)arg1;
- (void)drawingAddPoints:(vector_c0e7c5b2)arg1;
- (void)removePredictedTouches;
- (void)updateImmutableCount;
- (void)drawingUpdateAllPoints;
- (void)drawingUpdatePoint:(CDStruct_57911ed6)arg1;
- (void)handleMarkerStartCapPoint:(CDStruct_47a7c924 *)arg1 forInput:(CDStruct_57911ed6 *)arg2;
- (CDStruct_47a7c924)outputPoint:(CDStruct_57911ed6)arg1 forCommandType:(unsigned int)arg2 baseValues:(CDStruct_47a7c924)arg3;
- (CDStruct_47a7c924)outputCurrentCommandPoint:(CDStruct_57911ed6)arg1;
- (CDStruct_47a7c924)markerOutputPoint:(CDStruct_57911ed6)arg1 baseValues:(CDStruct_47a7c924)arg2;
- (CDStruct_47a7c924)pencilOutputPoint:(CDStruct_57911ed6)arg1 baseValues:(CDStruct_47a7c924)arg2;
- (CDStruct_47a7c924)eraserOutputPoint:(CDStruct_57911ed6)arg1 baseValues:(CDStruct_47a7c924)arg2;
- (CDStruct_47a7c924)penOutputPoint:(CDStruct_57911ed6)arg1 baseValues:(CDStruct_47a7c924)arg2;
- (CDStruct_57911ed6)calculateVelocityForNewPoint:(CDStruct_57911ed6)arg1 previousPoint:(CDStruct_57911ed6)arg2;
- (CDStruct_57911ed6)calculateVelocityForFirstPoint:(CDStruct_57911ed6)arg1;
- (void)reset;
- (unsigned long long)copyInputUpdatedRangeFromIndex:(unsigned long long)arg1 into:(vector_c0e7c5b2 *)arg2;
- (vector_c0e7c5b2 *)getInputUpdatedRangeFromIndex:(inout unsigned long long *)arg1;
- (vector_d46ea067 *)getUpdatedRangeFromIndex:(inout unsigned long long *)arg1;
- (ICDrawingInputProvider_d48c6870 *)outputFilter;
@property(readonly) BOOL lastPointIsMasked;
- (void)updateRulerSnapping;
- (struct CGPoint)snapPointToRuler:(struct CGPoint)arg1;
- (void)maskToRuler;
- (void)snapToRuler;
- (BOOL)shouldSnapPointToRuler:(struct CGPoint)arg1;
- (double)distanceToRulerCenter:(struct CGPoint)arg1;
- (struct CGPoint)getRulerSnapLineOriginAndTangent:(struct CGPoint *)arg1 andNormal:(struct CGPoint *)arg2;
- (double)rulerOffset;
- (void)snapToRuler:(struct CGAffineTransform)arg1 width:(double)arg2;
- (CDStruct_39925896)parametersforCommandType:(unsigned int)arg1;
- (CDStruct_47a7c924)baseValuesforCommandType:(unsigned int)arg1 inputType:(long long)arg2;
- (double)baseRadiusForCommandType:(unsigned int)arg1 inputType:(long long)arg2;
- (void)drawingBeganWithCommand:(id)arg1 inputType:(long long)arg2 start:(CDUnknownBlockType)arg3;
- (void)setInputScale:(double)arg1;
- (void)dealloc;
- (id)init;
- (id)initWithDelegate:(id)arg1;

@end

