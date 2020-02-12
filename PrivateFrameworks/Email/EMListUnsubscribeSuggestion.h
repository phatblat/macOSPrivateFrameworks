//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SGSuggestion.h"
#import "SGSuggestionCategory.h"

@class EMListUnsubscribeCommand, NSString, SGSuggestionPresenter;

@interface EMListUnsubscribeSuggestion : NSObject <SGSuggestion, SGSuggestionCategory>
{
    id <SGSuggestionDelegate> suggestionDelegate;
    EMListUnsubscribeCommand *_listUnsubscribeCommand;
    SGSuggestionPresenter *_suggestionPresenter;
}

+ (id)unsubscribeMessageAlertString;
+ (id)unsubscribeTitleAlertString;
+ (id)suggestionDismissActionTitle;
+ (id)suggestionPrimaryActionString;
@property(nonatomic) __weak SGSuggestionPresenter *suggestionPresenter; // @synthesize suggestionPresenter=_suggestionPresenter;
@property(retain, nonatomic) EMListUnsubscribeCommand *listUnsubscribeCommand; // @synthesize listUnsubscribeCommand=_listUnsubscribeCommand;
@property(nonatomic) __weak id <SGSuggestionDelegate> suggestionDelegate; // @synthesize suggestionDelegate;
- (void).cxx_destruct;
- (void)ignore;
- (void)unsubscribe;
- (CDUnknownBlockType)suggestionComparator;
- (id)suggestionCategoryTitleForItems:(id)arg1;
- (id)suggestionCategoryTitle;
- (id)suggestionCategorySubtitleForItems:(id)arg1;
- (id)suggestionCategoryLocalizedCountOfItems:(id)arg1;
- (id)suggestionCategoryImage;
- (id)suggestionCategoryId;
- (id)suggestionTitle;
- (id)suggestionDismissAction;
- (id)suggestionPrimaryAction;
- (id)suggestionCategory;
@property(readonly, nonatomic) id <SGSuggestion> suggestion;
@property(readonly) unsigned long long hash;
- (BOOL)isEqual:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end
