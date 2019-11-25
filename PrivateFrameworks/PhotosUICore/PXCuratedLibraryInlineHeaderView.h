//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UXView.h"

#import "PXAccessibilityView.h"
#import "PXGReusableView.h"

@class NSString, NSVisualEffectView, PXCuratedLibraryInlineHeaderViewConfiguration, UXLabel;

@interface PXCuratedLibraryInlineHeaderView : UXView <PXGReusableView, PXAccessibilityView>
{
    PXCuratedLibraryInlineHeaderViewConfiguration *_configuration;
    NSVisualEffectView *_effectView;
    UXView *_tintView;
    UXLabel *_titleLabel;
    UXLabel *_subtitleLabel;
    PXCuratedLibraryInlineHeaderViewConfiguration *_userData;
    struct CGRect _clippingRect;
}

+ (id)_roundedCornerMaskImageForRadius:(double)arg1 size:(struct CGSize)arg2;
+ (double)_heightForStyle:(unsigned long long)arg1;
+ (struct CGSize)sizeWithConfiguration:(id)arg1;
+ (id)_subtitleFontForStyle:(unsigned long long)arg1;
+ (id)_titleFontForStyle:(unsigned long long)arg1;
@property(copy, nonatomic) PXCuratedLibraryInlineHeaderViewConfiguration *userData; // @synthesize userData=_userData;
@property(nonatomic) struct CGRect clippingRect; // @synthesize clippingRect=_clippingRect;
- (void).cxx_destruct;
- (void)_platformSpecificViewSetup;
- (id)_tintViewBackgroundColor;
- (void)_setEffectViewCornerRadius:(double)arg1;
- (void)_setupBackgroundView;
@property(readonly, copy, nonatomic) NSString *accessibilityRole;
@property(readonly, copy, nonatomic) NSString *accessibilityLabel;
@property(readonly, nonatomic) BOOL isContainedInAsset;
@property(readonly, nonatomic) BOOL isAccessible;
- (void)prepareForReuse;
- (void)becomeReusable;
- (void)layoutSubviews;
- (void)_updateButtonWithConfiguration:(id)arg1;
- (void)_configureViews;
- (void)_setupViews;
- (void)setHidden:(BOOL)arg1;
- (void)_updateConfiguration;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

