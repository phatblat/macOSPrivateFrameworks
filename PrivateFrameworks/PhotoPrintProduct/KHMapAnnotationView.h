//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MKAnnotationView.h"

#import "CAAnimationDelegate.h"
#import "NSTextViewDelegate.h"

@class CAShapeLayer, KHTextView, NSString;

@interface KHMapAnnotationView : MKAnnotationView <CAAnimationDelegate, NSTextViewDelegate>
{
    BOOL _editable;
    int _mapType;
    unsigned long long _dragState;
    NSString *_stringValue;
    KHTextView *_label;
    CAShapeLayer *_annotationDot;
    unsigned long long _keyFrame;
    struct CGPoint _startPoint;
}

@property(readonly, nonatomic) BOOL editable; // @synthesize editable=_editable;
@property unsigned long long keyFrame; // @synthesize keyFrame=_keyFrame;
@property struct CGPoint startPoint; // @synthesize startPoint=_startPoint;
@property(retain) CAShapeLayer *annotationDot; // @synthesize annotationDot=_annotationDot;
@property int mapType; // @synthesize mapType=_mapType;
@property(retain) KHTextView *label; // @synthesize label=_label;
@property(retain) NSString *stringValue; // @synthesize stringValue=_stringValue;
@property(nonatomic) unsigned long long dragState; // @synthesize dragState=_dragState;
- (void).cxx_destruct;
- (void)labelFrameChanged:(id)arg1;
- (void)renderInContext:(struct CGContext *)arg1 environment:(id)arg2 withSnapshot:(id)arg3 scale:(double)arg4;
- (void)setCenter:(struct CGPoint)arg1;
- (void)animationDidStop:(id)arg1 finished:(BOOL)arg2;
- (void)_animateDotLiftAtPoint:(struct CGPoint)arg1;
- (void)_animateDotWithKeyFrameRange:(struct _NSRange)arg1 duration:(double)arg2;
- (struct CGPath *)_dotPathCreateForKeyFrame:(unsigned long long)arg1 scale:(double)arg2;
- (void)updateLabel;
- (void)setLabelText:(id)arg1;
- (BOOL)resignFirstResponder;
- (void)_setupAnnotationLabelAttributesAtScale:(double)arg1;
- (void)_setupAnnotationDotAttributesAtScale:(double)arg1;
- (void)_updateUIForSelection;
- (void)updateTitleColorForMapType:(int)arg1;
- (void)setSelected:(BOOL)arg1 animated:(BOOL)arg2;
- (void)setDragState:(unsigned long long)arg1 animated:(BOOL)arg2;
- (void)showWithText:(id)arg1 atPoint:(struct CGPoint)arg2 animated:(BOOL)arg3;
- (void)showAtPoint:(struct CGPoint)arg1 animated:(BOOL)arg2;
- (void)dealloc;
- (id)initWithAnnotation:(id)arg1 reuseIdentifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
