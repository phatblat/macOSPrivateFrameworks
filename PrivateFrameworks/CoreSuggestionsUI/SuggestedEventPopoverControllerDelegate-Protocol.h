//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class EKEvent, SGRealtimeEvent, SGUISuggestedEventPopoverViewController;

@protocol SuggestedEventPopoverControllerDelegate <NSObject>
- (void)suggestedEventPopoverController:(SGUISuggestedEventPopoverViewController *)arg1 wantsToIgnoreSuggestedEvent:(SGRealtimeEvent *)arg2;
- (void)suggestedEventPopoverController:(SGUISuggestedEventPopoverViewController *)arg1 wantsToCommitSuggestedEvent:(SGRealtimeEvent *)arg2 asEvent:(EKEvent *)arg3;
- (void)cancelSuggestedEventPopoverController:(SGUISuggestedEventPopoverViewController *)arg1;
@end

