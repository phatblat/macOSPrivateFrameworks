//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WBSForYouRecommendationMediatorDataSource.h"

@class ReadingListController;

__attribute__((visibility("hidden")))
@interface SiriSuggestionsStartPageReadingListDataSource : WBSForYouRecommendationMediatorDataSource
{
    ReadingListController *_readingListController;
}

- (void).cxx_destruct;
- (id)_previewTextMatchPredicateForString:(id)arg1;
- (id)_titleMatchPredicateForString:(id)arg1;
- (void)_readingListItemsDidChange:(id)arg1;
- (id)_validLinkRecommendationsForTopic:(id)arg1 fromReadingListItems:(id)arg2;
- (void)retrieveRecommendationsMatchingTopic:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)dealloc;
- (id)init;

@end

