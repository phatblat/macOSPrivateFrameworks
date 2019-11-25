//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSCollectionViewItem.h"

@class BackgroundColorView, GridViewImageView, NSImage, NSImageView, NSLayoutConstraint, NSTextField, WBSForYouLinkRecommendation;

__attribute__((visibility("hidden")))
@interface SiriSuggestionsStartPageExploreViewItem : NSCollectionViewItem
{
    NSImage *_image;
    WBSForYouLinkRecommendation *_recommendation;
    BackgroundColorView *_cardView;
    GridViewImageView *_imageView;
    NSTextField *_titleLabel;
    NSTextField *_addressLabel;
    NSTextField *_footnoteLabel;
    NSImageView *_contactImageView;
    NSLayoutConstraint *_footnoteToTitleLeadingConstraint;
    BackgroundColorView *_badgeView;
    NSImageView *_badgeImageView;
    id <SiriSuggestionsStartPageExploreViewItemDelegate> _delegate;
}

+ (id)_handoffIconForDeviceType:(id)arg1;
@property(nonatomic) __weak id <SiriSuggestionsStartPageExploreViewItemDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) WBSForYouLinkRecommendation *recommendation; // @synthesize recommendation=_recommendation;
@property(retain, nonatomic) NSImage *image; // @synthesize image=_image;
- (void).cxx_destruct;
- (void)_removeBadgeViewIfNecessary;
- (void)_addBadgeViewIfNecessary;
- (void)rightMouseDown:(id)arg1;
- (void)mouseUp:(id)arg1;
- (void)mouseDown:(id)arg1;
- (void)_createContactImageViewIfNecessary;
- (void)_updateContactImage;
- (void)viewDidLoad;
- (void)loadView;
- (void)prepareForReuse;

@end

