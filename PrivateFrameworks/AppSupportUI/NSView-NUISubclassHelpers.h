//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSView.h"

@interface NSView (NUISubclassHelpers)
- (struct CGSize)calculateLayoutSizeFittingSize:(struct CGSize)arg1;
- (BOOL)_nui_wantsAutolayout;
- (void)_didInvalidateIntrinsicContentSize;
- (double)effectiveFirstBaselineOffsetFromContentTop;
- (double)effectiveBaselineOffsetFromContentBottom;
- (id)viewForLastBaselineLayout;
- (id)viewForFirstBaselineLayout;
- (double)effectiveFirstBaselineOffsetFromTop;
- (double)effectiveBaselineOffsetFromBottom;
- (struct NSEdgeInsets)effectiveAlignmentRectInsets;
- (double)effectiveScreenScale;
- (struct CGSize)effectiveMaximumLayoutContentSize;
- (struct CGSize)effectiveMinimumLayoutContentSize;
- (id)contentLayoutSizeCacheDescription;
- (long long)_nui_isUIButtonType;
@property(nonatomic) BOOL neverCacheContentLayoutSize;
@end

