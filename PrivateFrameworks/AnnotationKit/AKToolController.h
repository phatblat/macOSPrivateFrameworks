//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class AKController;

@interface AKToolController : NSObject
{
    BOOL _allInkEnabled;
    BOOL _pencilInkEnabled;
    BOOL _suppressSuggestedTouchBarChange;
    unsigned long long _toolMode;
    AKController *_controller;
}

+ (void)cascadeAnnotations:(id)arg1 onPageController:(id)arg2 forPaste:(BOOL)arg3;
@property BOOL suppressSuggestedTouchBarChange; // @synthesize suppressSuggestedTouchBarChange=_suppressSuggestedTouchBarChange;
@property __weak AKController *controller; // @synthesize controller=_controller;
@property BOOL pencilInkEnabled; // @synthesize pencilInkEnabled=_pencilInkEnabled;
@property BOOL allInkEnabled; // @synthesize allInkEnabled=_allInkEnabled;
@property unsigned long long toolMode; // @synthesize toolMode=_toolMode;
- (void).cxx_destruct;
- (BOOL)isOptionKeyPressed;
- (unsigned long long)_arrowStyleForToolTag:(long long)arg1;
- (void)_setRectangleToFitTextOnTextAnnotation:(id)arg1;
- (id)_defaultFillColorForAnnotationOfClass:(Class)arg1;
- (id)_defaultHeartTypingAttributesWithFillColor:(id)arg1;
- (id)_defaultTextBoxTypingAttributes;
- (id)_defaultTypingAttributes;
- (struct CGRect)_validatedRect:(struct CGRect)arg1 fitsInVisibleRegionOfOverlayView:(id)arg2 ownedByPageController:(id)arg3 centeredAtPoint:(struct CGPoint)arg4;
- (struct CGRect)_defaultRectangleForNewAnnotation:(id)arg1 centeredAtPoint:(struct CGPoint)arg2;
- (struct CGPoint)_defaultCenterForNewAnnotation;
- (struct CGRect)_centerBounds:(struct CGRect)arg1 atPoint:(struct CGPoint)arg2;
- (id)_strokeColorForNewAnnotation;
- (double)_strokeWidthForNewAnnotation;
- (double)_modelBaseScaleFactorForNewAnnotation;
- (unsigned long long)defaultToolMode;
- (void)resetToDefaultMode;
@property(readonly, nonatomic) BOOL isInDefaultMode;
- (void)updateToolSenderState:(id)arg1 enabled:(BOOL)arg2;
- (BOOL)isToolSenderEnabled:(id)arg1;
- (void)addNewAnnotation:(id)arg1 onPageController:(id)arg2 shouldSelect:(BOOL)arg3 shouldCascade:(BOOL)arg4;
- (id)createAnnotationOfType:(long long)arg1 centeredAtPoint:(struct CGPoint)arg2;
- (void)performToolActionForSender:(id)arg1;
- (void)dealloc;
- (id)initWithController:(id)arg1;

@end

