//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSAnimation.h"

@class NSLayoutConstraint, NSView;

@interface LUIShakeAnimator : NSAnimation
{
    NSView *_originalView;
    struct CGRect _startViewFrame;
    double _amplitude;
    NSLayoutConstraint *_centerXConstraint;
    double _centerXConstraintConstant;
}

+ (void)shakeView:(id)arg1;
- (void)setCurrentProgress:(float)arg1;
- (void)setView:(id)arg1;
- (id)initWithView:(id)arg1;
- (void)dealloc;

@end
