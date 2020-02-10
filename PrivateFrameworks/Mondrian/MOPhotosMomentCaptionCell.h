//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Mondrian/MOMediaViewDefaultCell.h>

@class MOPhotosMomentCaptionTextField;

@interface MOPhotosMomentCaptionCell : MOMediaViewDefaultCell
{
    MOPhotosMomentCaptionTextField *_captionTextField;
}

+ (struct CGSize)recommendedCellSizeForThumbnailSize:(struct CGSize)arg1 inMaxSize:(struct CGSize)arg2;
+ (double)captionInterspace;
+ (double)captionHeight;
+ (id)captionCellBackgroundColor;
+ (BOOL)usesCaption;
- (void).cxx_destruct;
- (void)captionTextFieldSetFocus:(BOOL)arg1;
- (struct CGRect)mouseTrackingBounds;
- (BOOL)isAccessibilityElement;
- (void)layoutSubviews;
@property(readonly, nonatomic) struct CGRect captionTextFieldFrame;
- (struct CGRect)thumbnailViewFrame;
- (id)captionAttributes;
- (void)setCaption:(id)arg1;
- (void)_updateCaptionTextField;
@property(readonly, nonatomic) MOPhotosMomentCaptionTextField *captionTextField;
- (void)updateWithMediaItem:(id)arg1;
- (void)updateWithTitle:(id)arg1 filename:(id)arg2;
- (void)setSelected:(BOOL)arg1;
- (void)prepareForRecycling;
- (void)prepareForReuse;
@property(readonly, nonatomic) BOOL usesCaption;
- (void)updateLayer;
- (BOOL)wantsUpdateLayer;
- (BOOL)isOpaque;
- (id)hitTest:(struct CGPoint)arg1;

@end
