//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSDictionary, NSString, WBSCompletionListRankingObserver, WBSCompletionQuery, WBSParsecSearchResult;

@protocol WBSParsecFeedbackDispatcher <NSObject>
- (void)didReceiveLocalResultsForQuery:(WBSCompletionQuery *)arg1;
- (void)didReceiveWebSuggestionsForQuery:(WBSCompletionQuery *)arg1 fromSearchProvider:(NSString *)arg2 responseSize:(long long)arg3 statusCode:(long long)arg4 networkTimingData:(NSDictionary *)arg5;
- (void)userDidCancelSession:(long long)arg1;
- (void)userDidCancelSession;
- (void)userDidEngageWithCardShowingResult:(WBSParsecSearchResult *)arg1 onCardOfType:(NSString *)arg2 actionType:(NSString *)arg3 actionTarget:(NSString *)arg4 destination:(NSString *)arg5;
- (void)didDisplayCompletionListItems:(NSArray *)arg1 forQuery:(WBSCompletionQuery *)arg2 forEvent:(long long)arg3;

@optional
- (void)userTypedGoToSearch:(NSString *)arg1 endpoint:(unsigned long long)arg2;
- (void)didBeginSearchOfType:(long long)arg1 withQuery:(WBSCompletionQuery *)arg2 urlString:(NSString *)arg3 headers:(NSDictionary *)arg4 endpoint:(unsigned long long)arg5;
- (void)didBeginSearchOfType:(long long)arg1 withQuery:(WBSCompletionQuery *)arg2 endpoint:(unsigned long long)arg3;
- (void)searchViewDisappearedBecauseOfEvent:(long long)arg1;
- (void)searchViewAppearedBecauseOfEvent:(unsigned long long)arg1 isSafariReaderAvailable:(BOOL)arg2;
- (void)searchViewAppearedBecauseOfEvent:(unsigned long long)arg1;
- (void)didReceiveParsecResultsAfterTimeout:(NSArray *)arg1;
- (void)didGenerateCompletionListItemsWithRankingObserver:(WBSCompletionListRankingObserver *)arg1;
- (void)userTypedURLDirectly:(NSString *)arg1;
- (void)userDidEngageWithCompletionListItem:(id <WBSCompletionListItem>)arg1 onActionButton:(BOOL)arg2 method:(long long)arg3 doesMatchSiriSuggestion:(BOOL)arg4;
- (void)userDidEngageWithCompletionListItem:(id <WBSCompletionListItem>)arg1 onActionButton:(BOOL)arg2 method:(long long)arg3;
- (void)userDidEngageWithCompletionListItem:(id <WBSCompletionListItem>)arg1 atPosition:(unsigned long long)arg2 withEngagementActionDictionary:(NSDictionary *)arg3;
- (void)userDidEngageWithCompletionListItem:(id <WBSCompletionListItem>)arg1 withCardActionDictionary:(NSDictionary *)arg2;
- (void)userDidSelectCompletionListItem:(id <WBSCompletionListItem>)arg1 atPosition:(unsigned long long)arg2;
- (void)userDidSelectCompletionListItem:(id <WBSCompletionListItem>)arg1;
@end

