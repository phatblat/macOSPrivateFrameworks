//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSAccessibilityElement.h"

@class MOMediaItem, MOPhotosAtlasSupplementaryRow;

@interface MOPhotosAtlasLayoutCellAccessibility : NSAccessibilityElement
{
    MOPhotosAtlasSupplementaryRow *_row;
    NSAccessibilityElement *_image;
    long long _indexOfRow;
    id <MOPhotoAtlasLayoutCellAXDelegate> _axDelegate;
    MOMediaItem *_mediaItem;
    struct CGRect _frameInRow;
}

@property(nonatomic) __weak MOMediaItem *mediaItem; // @synthesize mediaItem=_mediaItem;
@property(nonatomic) struct CGRect frameInRow; // @synthesize frameInRow=_frameInRow;
@property(nonatomic) __weak id <MOPhotoAtlasLayoutCellAXDelegate> axDelegate; // @synthesize axDelegate=_axDelegate;
@property(nonatomic) long long indexOfRow; // @synthesize indexOfRow=_indexOfRow;
@property(readonly, nonatomic) NSAccessibilityElement *image; // @synthesize image=_image;
@property(nonatomic) __weak MOPhotosAtlasSupplementaryRow *row; // @synthesize row=_row;
- (void).cxx_destruct;
- (id)_actualIndexPath;
- (id)_layoutSectionAccessibility;
- (BOOL)accessibilityPerformScrollToVisible;
- (void)setAccessibilitySelected:(BOOL)arg1;
- (BOOL)isAccessibilitySelected;
- (BOOL)accessibilityPerformPick;
- (BOOL)accessibilityPerformPress;
- (void)accessibilityPerformAction:(id)arg1;
- (id)accessibilityActionDescription:(id)arg1;
- (id)accessibilityActionNames;
- (id)accessibilityAttributeValue:(id)arg1;
- (id)accessibilityAttributeNames;
- (struct CGRect)accessibilityFrame;
- (id)accessibilityRole;
- (id)accessibilityHelp;
- (id)accessibilityRoleDescription;
- (id)accessibilityLabel;
- (id)accessibilityTitle;
- (id)initWithMediaItem:(id)arg1 row:(id)arg2 frameInRow:(struct CGRect)arg3 indexOfRow:(long long)arg4;

@end

