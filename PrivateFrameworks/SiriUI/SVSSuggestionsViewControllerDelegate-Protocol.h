//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSView, SVSSuggestionsViewController;

@protocol SVSSuggestionsViewControllerDelegate <NSObject>
- (double)statusViewHeightForSuggestionsViewController:(SVSSuggestionsViewController *)arg1;

@optional
- (void)minimumHeightDidChangeForSuggestionsViewController:(SVSSuggestionsViewController *)arg1;
- (void)suggestionsViewController:(SVSSuggestionsViewController *)arg1 didHideVibrantView:(NSView *)arg2;
@end

