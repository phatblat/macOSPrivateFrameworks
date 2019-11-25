//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UXView.h"

#import "PXChangeObserver.h"

@class NSString, PXCMMImageView, PXCMMPosterHeaderViewModel, PXCMMPosterHeaderViewSpec, PXGradientView, UXImageView, UXLabel;

@interface PXCMMPosterHeaderView : UXView <PXChangeObserver>
{
    PXCMMPosterHeaderViewSpec *_spec;
    PXCMMImageView *_imageView;
    PXGradientView *_topGradientView;
    PXGradientView *_bottomGradientView;
    UXLabel *_titleLabel;
    UXLabel *_subtitleLabel;
    UXLabel *_statusLabel;
    UXImageView *_statusCheckmark;
    PXCMMPosterHeaderViewModel *_viewModel;
    long long _presentationStyle;
}

+ (double)preferredHeightForWidth:(double)arg1 scale:(double)arg2;
@property(readonly, nonatomic) long long presentationStyle; // @synthesize presentationStyle=_presentationStyle;
@property(retain, nonatomic) PXCMMPosterHeaderViewModel *viewModel; // @synthesize viewModel=_viewModel;
- (void).cxx_destruct;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void *)arg3;
- (BOOL)test_showStatusCheckmark;
- (id)test_statusString;
- (id)test_subtitle;
- (id)test_title;
- (void)_updateFonts;
- (void)_updateStatusString;
- (void)_updateSubtitle;
- (void)_updateTitle;
- (void)_performLayoutWithSize:(struct CGSize)arg1;
- (void)layout;
- (BOOL)isFlipped;
- (id)initWithPresentationStyle:(long long)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

