//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CoreSuggestionsUI/SGContactSuggestionBase.h>

#import "SuggestedContactPopoverControllerDelegate.h"

@class NSString;

@interface SGContactSuggestion : SGContactSuggestionBase <SuggestedContactPopoverControllerDelegate>
{
    id <SGContactSuggestionDelegate> _delegate;
}

+ (id)contactImage;
@property(nonatomic) __weak id <SGContactSuggestionDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)contactPopoverController:(id)arg1 didIgnoreSuggestedContact:(id)arg2;
- (void)contactPopoverController:(id)arg1 didCommitSuggestedContact:(id)arg2;
- (id)suggestionPrimaryAction;
- (id)suggestionPrimaryActionViewController;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
