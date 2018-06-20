//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSControl.h"

@class NSDictionary, NSString;

@interface ILMediaBrowserStarRatingControl : NSControl
{
    NSString *mStarString;
    NSString *mBulletString;
    NSDictionary *mTextAttrs;
    NSDictionary *mTextDimAttrs;
    long long mIntValue;
    id mTarget;
    SEL mSelector;
    BOOL mIsTracking;
    struct CGSize mStarSize;
    BOOL mDrawBorder;
    BOOL mDrawBackground;
    long long mMinimumRanking;
    long long mMaximumRanking;
    BOOL mShouldAcceptFirstMouse;
    BOOL mShouldHandleKeyDown;
    double mFontSize;
    double mExtraSpacing;
}

- (BOOL)isTracking;
- (void)mouseDown:(id)arg1;
- (void)setShouldHandleKeyDown:(BOOL)arg1;
- (void)setShouldAcceptFirstMouse:(BOOL)arg1;
- (BOOL)acceptsFirstMouse:(id)arg1;
- (void)setDrawBorder:(BOOL)arg1;
- (void)setDrawBackground:(BOOL)arg1;
- (void)setMinimum:(long long)arg1 maximum:(long long)arg2;
- (long long)constrainedRankingValue:(long long)arg1;
- (void)setRankingValue:(long long)arg1;
- (long long)rankingValue;
- (void)setAction:(SEL)arg1;
- (void)setTarget:(id)arg1;
- (long long)integerValue;
- (void)setIntValue:(long long)arg1;
- (void)setExtraSpacing:(double)arg1;
- (double)extraMargin;
- (double)starWidth;
- (void)setEnabledColor:(id)arg1 disabledColor:(id)arg2 backgroundColor:(id)arg3;
- (void)setEnabledColor:(id)arg1 disabledColor:(id)arg2;
- (void)setFontSize:(double)arg1;
- (void)drawRect:(struct CGRect)arg1;
- (void)adaptToFrame;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1 fontSize:(double)arg2 extraSpacing:(double)arg3;
- (id)initWithFrame:(struct CGRect)arg1 fontSize:(double)arg2;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)_setup:(struct CGRect)arg1;

@end

