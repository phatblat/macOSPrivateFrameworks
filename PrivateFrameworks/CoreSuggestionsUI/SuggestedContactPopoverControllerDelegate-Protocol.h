//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class SGRealtimeContact, SGUISuggestedContactPopoverViewController;

@protocol SuggestedContactPopoverControllerDelegate <NSObject>
- (void)contactPopoverController:(SGUISuggestedContactPopoverViewController *)arg1 didCommitSuggestedContact:(SGRealtimeContact *)arg2;
- (void)contactPopoverController:(SGUISuggestedContactPopoverViewController *)arg1 didIgnoreSuggestedContact:(SGRealtimeContact *)arg2;
@end
