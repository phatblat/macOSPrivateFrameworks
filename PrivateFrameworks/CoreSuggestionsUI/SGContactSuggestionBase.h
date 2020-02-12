//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SGSuggestion.h"
#import "SGSuggestionCategory.h"
#import "SGSuggestionExtensions.h"

@class NSString, SGRealtimeContact;

@interface SGContactSuggestionBase : NSObject <SGSuggestion, SGSuggestionCategory, SGSuggestionExtensions>
{
    SGRealtimeContact *_realtimeContact;
    id <SGSuggestionDelegate> _suggestionDelegate;
}

+ (void)confirm:(BOOL)arg1 suggestion:(id)arg2 completion:(CDUnknownBlockType)arg3;
+ (id)contactImage;
@property(nonatomic) __weak id <SGSuggestionDelegate> suggestionDelegate; // @synthesize suggestionDelegate=_suggestionDelegate;
- (void).cxx_destruct;
- (id)suggestionCategoryLocalizedCountOfItems:(id)arg1;
- (id)suggestionCategorySubtitleForItems:(id)arg1;
- (id)suggestionCategoryTitleForItems:(id)arg1;
- (id)suggestionCategoryTitle;
- (id)suggestionCategoryImage;
- (id)suggestionCategoryId;
- (id)suggestionPrimaryAction;
- (id)suggestionCategory;
- (id)suggestionDismissAction;
- (id)primaryActionTitle;
- (id)suggestionSubtitle;
- (id)suggestionTitle;
- (id)realtimeSuggestion;
- (id)initWithRealtimeContact:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

