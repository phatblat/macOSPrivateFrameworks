//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SFFeedbackListener.h"

@class NSString, NSView, NSViewController, SFCard, SFCardSectionEngagementFeedback;

@protocol SearchUIFeedbackDelegate <SFFeedbackListener>

@optional
- (void)cardSectionViewDidInvalidateSize:(NSView *)arg1;
- (void)cardSectionViewDidSelectPreferredPunchoutIndex:(long long)arg1;
- (void)updateViewControllerTitle:(NSString *)arg1;
- (void)presentViewControllerForCard:(SFCard *)arg1 animate:(BOOL)arg2;
- (void)willDismissViewController:(NSViewController *)arg1;
- (void)presentViewController:(NSViewController *)arg1;
- (void)cardSectionViewDidInvalidateSize:(NSView *)arg1 animate:(BOOL)arg2;
- (BOOL)shouldHandleCardSectionEngagement:(SFCardSectionEngagementFeedback *)arg1;
@end
