//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "PADescriptionEditReceiver.h"

@class CropInteractionContext, NSString, PACanvasItemView, PACropModel, PACropModelEditor, PADescriptionEditController, PAImageItemView, PAImageItemViewController, PAImageItemViewMode, PAItemViewConfiguration;

@interface PACropController : NSObject <PADescriptionEditReceiver>
{
    BOOL _interactive;
    unsigned int _targetArea;
    struct CGRect _beginRect;
    double _beginStraightenAngle;
    PAItemViewConfiguration *_beginConfiguration;
    double _beginScale;
    PACropModel *_model;
    double _autoAngle;
    struct CGRect _autoCrop;
    BOOL _hasAuto;
    PADescriptionEditController *_observedDescriptionEditController;
    PACropModelEditor *_modelEditor;
    BOOL _didBeginEditing;
    BOOL _isActive;
    BOOL _isCurrent;
    PAImageItemViewController *_viewController;
    PAImageItemViewMode *_cropMode;
    PAImageItemViewMode *_normalMode;
    CropInteractionContext *_currentInteractionContext;
    CDStruct_5e758c1a _viewAspectRatio;
    struct CGRect _inputExtent;
}

+ (id)sharedCropZoomContext;
+ (id)sharedCropAspectContext;
+ (id)sharedCropRotationContext;
+ (id)sharedCropInteractionContext;
+ (id)_cropModelWithInputExtent:(struct CGRect)arg1 orientation:(long long)arg2 cropOperation:(id)arg3;
+ (id)_cropModelWithRenderDescription:(id)arg1 inputExtent:(struct CGRect)arg2;
@property(readonly) CropInteractionContext *currentInteractionContext; // @synthesize currentInteractionContext=_currentInteractionContext;
@property(readonly, nonatomic) CDStruct_5e758c1a viewAspectRatio; // @synthesize viewAspectRatio=_viewAspectRatio;
@property(readonly, nonatomic) struct CGRect inputExtent; // @synthesize inputExtent=_inputExtent;
@property(readonly, nonatomic) BOOL isCurrent; // @synthesize isCurrent=_isCurrent;
@property(readonly, nonatomic) BOOL isActive; // @synthesize isActive=_isActive;
@property(readonly, nonatomic) PAImageItemViewMode *normalMode; // @synthesize normalMode=_normalMode;
@property(readonly, nonatomic) PAImageItemViewMode *cropMode; // @synthesize cropMode=_cropMode;
@property(readonly, nonatomic) PAImageItemViewController *viewController; // @synthesize viewController=_viewController;
- (void).cxx_destruct;
- (CDStruct_5e758c1a)originalAspectRatio;
- (CDStruct_5e758c1a)freeFormAspectRatio;
- (BOOL)aspectRatioIsFreeForm;
- (BOOL)aspectRatioIsOriginal;
@property(nonatomic) long long orientation;
@property(readonly, nonatomic) CDStruct_5e758c1a aspectRatio;
- (CDStruct_5e758c1a)_aspectRatioForOrientation:(long long)arg1;
@property(readonly, nonatomic) double autoStraightenAngleWithOrientation;
@property(readonly, nonatomic) double autoStraightenAngle;
@property(readonly, nonatomic) double straightenAngle;
- (double)_straightenAngleForOrientation:(long long)arg1;
- (double)_straightenMultiplierForOrientation:(long long)arg1;
@property(readonly, nonatomic) struct CGAffineTransform straightenTransform;
@property(readonly, nonatomic) struct CGRect integralViewCropRect;
- (void)makeCropRectIntegral;
- (struct CGRect)_contentCropRectForViewCropRect:(struct CGRect)arg1 configuration:(id)arg2;
- (struct CGRect)_viewCropRectForContentCropRect:(struct CGRect)arg1 configuration:(id)arg2;
- (struct CGRect)viewCropRectForViewConfiguration:(id)arg1;
@property(readonly, nonatomic) struct CGRect viewCropRect;
- (struct CGRect)_cropRectForContentCropRect:(struct CGRect)arg1 masterSize:(struct CGSize)arg2 orientation:(long long)arg3;
- (struct CGRect)_contentCropRectForCropRect:(struct CGRect)arg1 masterSize:(struct CGSize)arg2 orientation:(long long)arg3;
@property(readonly, nonatomic) struct CGRect contentCropRect;
@property(readonly, nonatomic) unsigned long long hitVertexId;
@property(readonly, nonatomic) struct CGRect cropRect;
@property(readonly, nonatomic) struct CGSize masterSize;
- (id)model;
- (struct CGVector)_viewOffsetInContentSpace:(struct CGVector)arg1;
- (void)_updateCropOperation:(id)arg1;
- (void)removeAutoCalcSettings:(id)arg1;
- (void)updateRenderDescription:(id)arg1;
- (BOOL)canApplyAutoCropInRenderDescription;
- (BOOL)hasCropInRenderDescription;
- (BOOL)hasCrop;
- (void)_updateTargetAreaWithRect:(struct CGRect)arg1 force:(BOOL)arg2;
- (void)_updateTargetAreaWithRect:(struct CGRect)arg1;
- (void)_resetBeginState;
- (void)reset;
- (void)_updateCropModelIfNeeded:(id)arg1;
- (void)_updateModelFromRenderDescriptionIfNeeded:(id)arg1;
- (void)_setModelEditor:(id)arg1;
- (BOOL)_isAnchorValid:(struct CGPoint)arg1;
- (void)_setAutoValuesWithCropAutoSettings:(id)arg1;
- (void)_setAutoValuesWithCropOperation:(id)arg1;
- (void)_autoComputeStraightenAndCropWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)_didFinishComputingAutoValues;
- (void)computeAutoValues:(CDUnknownBlockType)arg1;
- (void)setAutoValuesIfNeeded;
- (void)setAutoValues;
- (BOOL)hasAutoValues;
- (void)didExit;
- (id)normalConfigurationToLoad;
- (void)_exit;
- (void)willExit:(CDUnknownBlockType)arg1;
- (void)willExit;
- (void)imageViewFrameDidChange;
- (void)_imageViewFrameDidChange:(id)arg1;
- (void)_handleBeginEditing;
- (void)_enter;
- (void)didEnter;
- (id)cropConfigurationToLoad;
- (void)willEnter:(CDUnknownBlockType)arg1;
- (void)willEnter;
- (void)whenReady:(CDUnknownBlockType)arg1;
- (void)makeCurrentFreeFormAspectFixed;
- (void)makeCurrentAspectRatioFreeForm;
- (void)updateAspectRatio:(CDStruct_5e758c1a)arg1;
- (void)rotateCropBy:(double)arg1;
- (double)currentViewZoom;
- (unsigned long long)setViewCropRect:(struct CGRect)arg1 anchor:(struct CGPoint)arg2 configuration:(id)arg3 force:(BOOL)arg4 viewConstraint:(unsigned long long)arg5;
- (unsigned long long)setViewCropRect:(struct CGRect)arg1 anchor:(struct CGPoint)arg2 force:(BOOL)arg3 viewConstraint:(unsigned long long)arg4;
- (BOOL)imageContainsRect:(struct CGRect)arg1 withTol:(double)arg2;
- (struct CGRect)cropRectFromViewRect:(struct CGRect)arg1 anchor:(struct CGPoint)arg2 configuration:(id)arg3;
- (void)zoomIntoCrop:(double)arg1;
- (void)moveCropBy:(struct CGVector)arg1;
- (struct CGRect)_validBeginRect;
- (void)updateViewport;
- (void)conformCrop;
- (void)endInteractive;
- (BOOL)isInteractive;
- (void)beginInteractiveWithContext:(id)arg1;
- (void)orientationChanged:(long long)arg1;
- (void)descriptionEditController:(id)arg1 renderDescriptionOrientationChanged:(id)arg2;
- (void)cropDidChange;
- (void)descriptionEditController:(id)arg1 renderDescription:(id)arg2 operationDidChangeAtIndex:(unsigned long long)arg3 invalidMasterRect:(struct CGRect)arg4;
- (void)operationsChangedForDescriptionController:(id)arg1 renderDescription:(id)arg2;
- (void)descriptionEditController:(id)arg1 compositionChanged:(id)arg2 key:(id)arg3;
- (id)multicaster:(id)arg1 queueForSelector:(SEL)arg2;
- (id)_cropMode;
@property(readonly, nonatomic) PACanvasItemView *canvasView;
@property(readonly, nonatomic) PAImageItemView *imageView;
- (id)initWithItemViewController:(id)arg1 inputExtent:(struct CGRect)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

