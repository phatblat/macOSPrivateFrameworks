//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSAnimation.h"

@class SCTHelpPointerView;

__attribute__((visibility("hidden")))
@interface SCTPopAnimation : NSAnimation
{
    SCTHelpPointerView *mAnimatedView;
    float mSlope;
    float mScale;
    float mScaleStep;
}

- (void)setCurrentProgress:(float)arg1;
- (void)startAnimation;
- (void)dealloc;
- (id)initWithView:(id)arg1;

@end

