//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UXView.h"

#import "UXCollectionViewDataSource.h"

@class NSArray, NSImage, NSMutableArray, NSString, UXCollectionView, UXImageView, UXLabel;

@interface KHThemeDetailView : UXView <UXCollectionViewDataSource>
{
    NSMutableArray *_contentViewConstraints;
    NSMutableArray *_selfConstraints;
    NSMutableArray *_upperLayoutContainerConstraints;
    NSMutableArray *_lowerLayoutContainerConstraints;
    UXCollectionView *_gridView;
    UXView *_contentView;
    NSArray *_previewImages;
    UXImageView *_themePreviewImageView;
    UXLabel *_themeTitleLabel;
    UXLabel *_themeDescriptionLabel;
    UXView *_upperHalfLayoutContainerView;
    UXView *_lowerHalfLayoutContainerView;
}

@property(retain, nonatomic) UXView *lowerHalfLayoutContainerView; // @synthesize lowerHalfLayoutContainerView=_lowerHalfLayoutContainerView;
@property(retain, nonatomic) UXView *upperHalfLayoutContainerView; // @synthesize upperHalfLayoutContainerView=_upperHalfLayoutContainerView;
@property(retain, nonatomic) UXLabel *themeDescriptionLabel; // @synthesize themeDescriptionLabel=_themeDescriptionLabel;
@property(retain, nonatomic) UXLabel *themeTitleLabel; // @synthesize themeTitleLabel=_themeTitleLabel;
@property(retain, nonatomic) UXImageView *themePreviewImageView; // @synthesize themePreviewImageView=_themePreviewImageView;
@property(retain, nonatomic) NSArray *previewImages; // @synthesize previewImages=_previewImages;
- (void).cxx_destruct;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
@property(retain, nonatomic) NSImage *themePreviewImage;
@property(retain, nonatomic) NSString *themeDescription;
@property(retain, nonatomic) NSString *themeTitle;
- (struct CGSize)intrinsicContentSize;
- (void)updateConstraints;
- (void)setFrame:(struct CGRect)arg1;
- (id)init;
- (void)commonInit;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
