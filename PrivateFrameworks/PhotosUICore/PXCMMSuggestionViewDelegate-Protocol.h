//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMenu, PXCMMSuggestionView;

@protocol PXCMMSuggestionViewDelegate <NSObject>
- (NSMenu *)contextMenuForSuggestionView:(PXCMMSuggestionView *)arg1;
- (void)presentDetailViewForSuggestionView:(PXCMMSuggestionView *)arg1 animated:(BOOL)arg2;

@optional
- (void)suggestionViewSizeThatFitsDidChange:(PXCMMSuggestionView *)arg1;
@end

