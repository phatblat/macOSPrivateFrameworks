//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <TemplateKit/TLKView.h>

#import "NUIContainerViewDelegate.h"

@class NSString, NUIContainerGridView, TLKEmbossedLabel, TLKImage, TLKImageView, TLKLabel, TLKMultilineText;

@interface TLKSplitHeaderView : TLKView <NUIContainerViewDelegate>
{
    BOOL _shouldBadgeSubtitle;
    TLKMultilineText *_title;
    TLKMultilineText *_subtitle1;
    TLKMultilineText *_subtitle2;
    TLKImage *_leadingImage;
    TLKMultilineText *_leadingTitle;
    TLKMultilineText *_leadingSubtitle;
    TLKImage *_trailingImage;
    TLKMultilineText *_trailingTitle;
    TLKMultilineText *_trailingSubtitle;
    TLKImageView *_leadingImageView;
    TLKLabel *_leadingTitleLabel;
    TLKLabel *_leadingSubtitleLabel;
    TLKImageView *_trailingImageView;
    TLKLabel *_trailingTitleLabel;
    TLKLabel *_trailingSubtitleLabel;
    TLKLabel *_titleLabel;
    TLKLabel *_subtitle1Label;
    TLKEmbossedLabel *_subtitle2Label;
}

+ (id)footnoteFont;
@property(retain, nonatomic) TLKEmbossedLabel *subtitle2Label; // @synthesize subtitle2Label=_subtitle2Label;
@property(retain, nonatomic) TLKLabel *subtitle1Label; // @synthesize subtitle1Label=_subtitle1Label;
@property(retain, nonatomic) TLKLabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) TLKLabel *trailingSubtitleLabel; // @synthesize trailingSubtitleLabel=_trailingSubtitleLabel;
@property(retain, nonatomic) TLKLabel *trailingTitleLabel; // @synthesize trailingTitleLabel=_trailingTitleLabel;
@property(retain, nonatomic) TLKImageView *trailingImageView; // @synthesize trailingImageView=_trailingImageView;
@property(retain, nonatomic) TLKLabel *leadingSubtitleLabel; // @synthesize leadingSubtitleLabel=_leadingSubtitleLabel;
@property(retain, nonatomic) TLKLabel *leadingTitleLabel; // @synthesize leadingTitleLabel=_leadingTitleLabel;
@property(retain, nonatomic) TLKImageView *leadingImageView; // @synthesize leadingImageView=_leadingImageView;
@property(retain, nonatomic) TLKMultilineText *trailingSubtitle; // @synthesize trailingSubtitle=_trailingSubtitle;
@property(retain, nonatomic) TLKMultilineText *trailingTitle; // @synthesize trailingTitle=_trailingTitle;
@property(retain, nonatomic) TLKImage *trailingImage; // @synthesize trailingImage=_trailingImage;
@property(retain, nonatomic) TLKMultilineText *leadingSubtitle; // @synthesize leadingSubtitle=_leadingSubtitle;
@property(retain, nonatomic) TLKMultilineText *leadingTitle; // @synthesize leadingTitle=_leadingTitle;
@property(retain, nonatomic) TLKImage *leadingImage; // @synthesize leadingImage=_leadingImage;
@property(nonatomic) BOOL shouldBadgeSubtitle; // @synthesize shouldBadgeSubtitle=_shouldBadgeSubtitle;
@property(retain, nonatomic) TLKMultilineText *subtitle2; // @synthesize subtitle2=_subtitle2;
@property(retain, nonatomic) TLKMultilineText *subtitle1; // @synthesize subtitle1=_subtitle1;
@property(retain, nonatomic) TLKMultilineText *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (id)titleFont;
- (id)trailingImageInView;
- (id)trailingSubtitleText;
- (id)leadingSubtitleText;
- (id)subtitleLabelText;
- (id)titleLabelText;
- (id)leadingImageInView;
- (BOOL)secondRowIsHidden;
- (struct CGSize)containerView:(id)arg1 systemLayoutSizeFittingSize:(struct CGSize)arg2 forArrangedSubview:(id)arg3;
- (void)observedPropertiesChanged;
- (id)footnoteLabel;
- (id)thirdRowOfViews;
- (id)secondRowOfViews;
- (id)firstRowOfViews;
- (id)grid;
- (struct NSEdgeInsets)effectiveAlignmentRectInsets;
- (id)setupContentView;

// Remaining properties
@property(retain, nonatomic) NUIContainerGridView *contentView; // @dynamic contentView;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

