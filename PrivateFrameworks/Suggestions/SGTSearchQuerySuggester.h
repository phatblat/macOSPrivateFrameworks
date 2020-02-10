//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Suggestions/SGTSuggester.h>

#import "SGTSearchQueryCollectorDelegate.h"

@class NSArray, NSString, SGTSearchQuerySuggesterReserved;

@interface SGTSearchQuerySuggester : SGTSuggester <SGTSearchQueryCollectorDelegate>
{
    SGTSearchQuerySuggesterReserved *_reserved2;
}

+ (id)suggesterForMails;
+ (id)suggesterForFiles;
+ (id)defaultSortingAttributeNames;
- (void).cxx_destruct;
- (void)becomesIdle;
- (void)didFinishProcessingResultsForInput:(id)arg1;
- (id)filterSuggestions:(id)arg1 forInput:(id)arg2;
- (id)filterSuggestion:(id)arg1 fromItem:(id)arg2 forInput:(id)arg3;
- (id)additionalSuggestionsForInput:(id)arg1;
- (void)willStartProcessingResultsForInput:(id)arg1;
- (void)willStartSearchingSuggestionsForInput:(id)arg1;
@property(readonly) NSArray *attributeNames;
@property(copy) NSArray *sortingAttributeNames;
@property(copy) NSArray *additionalAttributeNames;
@property BOOL matchesSupportFiles;
@property BOOL matchesFinderFilesOnly;
@property(copy) NSArray *excludeSearchScope;
@property(copy) NSArray *searchScope;
- (void)setInput:(id)arg1 withGroup:(id)arg2;
- (void)setImagesForTags:(id)arg1;
@property(copy) NSString *baseQuery;
- (void)_incrementQueryID;
- (unsigned long long)_queryID;
- (id)_findBestDidYouMeanSuggestionFromSuggestions:(id)arg1 rawInput:(id)arg2;
- (void)searchQueryCollector:(id)arg1 didFailWithError:(id)arg2 context:(id)arg3;
- (void)searchQueryCollector:(id)arg1 processQueryResults:(id)arg2 context:(id)arg3 intermediateResults:(BOOL)arg4;
- (void)setRunWarmingQuery:(BOOL)arg1;
- (void)scheduleWarmingQueryIfNeeded;
- (void)_performBlock:(CDUnknownBlockType)arg1;
- (void)_performBlockOnMainThread:(CDUnknownBlockType)arg1;
- (void)dealloc;
- (id)collector;
- (id)initWithAttributeNames:(id)arg1;
- (id)rankingQueriesForQuery:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
