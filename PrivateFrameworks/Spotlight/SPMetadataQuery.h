//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Spotlight/SPKQuery.h>

@class NSArray, NSDictionary, NSMapTable, NSMutableDictionary, NSObject<OS_dispatch_queue>, NSObject<OS_dispatch_semaphore>, NSString, SPKResponse, SPMetadataPattern;

@interface SPMetadataQuery : SPKQuery
{
    NSString *_queryString;
    NSArray *_queryTerms;
    _Bool _highConfidenceNL;
    NSDictionary *_NLPRankingTerms;
    NSArray *_bitMasksForNLPRankingTerms;
    int _performanceFeedbackCount;
    NSMutableDictionary *_performanceFeedbackResults;
    id _queryNoteObserver;
    BOOL _isRewrite;
    BOOL _persistent;
    _Bool _definiteLocalQuery;
    NSString *_correctedQuery;
    NSArray *_prefetchedAttributes;
    NSArray *_sortingAttributes;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    struct __MDQuery *_query;
    NSDictionary *_userQueryContentTypeDict;
    id _prefetchedAttributesKeySet;
    NSMapTable *_mapMetadataItemToResult;
    SPKResponse *_lastResponse;
    SPMetadataPattern *_subqueryPattern;
    SPMetadataPattern *_lastProcessedSubqueryPattern;
    NSString *_updatedUserQueryString;
    NSObject<OS_dispatch_semaphore> *_correctionSem;
    NSString *_queryCorrection;
}

+ (id)defaultPrefetchedAttributesKeySet;
+ (id)defaultValuelistAttributes;
+ (id)defaultPrefetchedAttributes;
+ (id)defaultSortingAttributes;
+ (void)preheat;
+ (void)initialize;
@property(retain) NSString *queryCorrection; // @synthesize queryCorrection=_queryCorrection;
@property(retain) NSObject<OS_dispatch_semaphore> *correctionSem; // @synthesize correctionSem=_correctionSem;
@property(retain) NSString *updatedUserQueryString; // @synthesize updatedUserQueryString=_updatedUserQueryString;
@property(retain) SPMetadataPattern *lastProcessedSubqueryPattern; // @synthesize lastProcessedSubqueryPattern=_lastProcessedSubqueryPattern;
@property(retain) SPMetadataPattern *subqueryPattern; // @synthesize subqueryPattern=_subqueryPattern;
@property(retain) SPKResponse *lastResponse; // @synthesize lastResponse=_lastResponse;
@property(readonly) NSMapTable *mapMetadataItemToResult; // @synthesize mapMetadataItemToResult=_mapMetadataItemToResult;
@property(readonly) id prefetchedAttributesKeySet; // @synthesize prefetchedAttributesKeySet=_prefetchedAttributesKeySet;
@property(readonly) NSDictionary *userQueryContentTypeDict; // @synthesize userQueryContentTypeDict=_userQueryContentTypeDict;
@property(readonly) struct __MDQuery *query; // @synthesize query=_query;
@property(readonly) NSObject<OS_dispatch_queue> *dispatchQueue; // @synthesize dispatchQueue=_dispatchQueue;
@property(readonly) NSArray *sortingAttributes; // @synthesize sortingAttributes=_sortingAttributes;
@property(readonly) NSArray *prefetchedAttributes; // @synthesize prefetchedAttributes=_prefetchedAttributes;
@property _Bool definiteLocalQuery; // @synthesize definiteLocalQuery=_definiteLocalQuery;
@property(getter=isPersistent) BOOL persistent; // @synthesize persistent=_persistent;
@property(retain) NSString *correctedQuery; // @synthesize correctedQuery=_correctedQuery;
@property BOOL isRewrite; // @synthesize isRewrite=_isRewrite;
- (void).cxx_destruct;
- (void)sendPerformanceFeedback:(id)arg1 forKey:(id)arg2;
- (void)willSendPerformanceFeedback:(int)arg1;
- (void)updateWithQueryCorrection:(id)arg1;
- (id)waitForQueryCorrection;
- (void)tagNLPResults:(id)arg1;
- (void)updateWithNote:(id)arg1;
- (void)_prepareQuery;
- (void)_setQueryNoteBlock:(CDUnknownBlockType)arg1;
- (id)queryStringForUserQuery:(id)arg1 options:(unsigned long long)arg2;
- (id)_basicTextContentQueryForUserQuery:(id)arg1;
- (id)_scopesForOptions:(unsigned long long)arg1;
- (id)rankedNLCategoryOrderForQuery:(id)arg1;
@property(readonly) NSString *queryString;
- (void)cancel;
- (void)start;
- (void)executeQuery;
- (id)userQueryString;
- (void)_sendResponse:(id)arg1;
- (void)dealloc;
- (id)initWithUserQuery:(id)arg1 queryGroupId:(unsigned long long)arg2 options:(unsigned long long)arg3 keyboardLanguage:(id)arg4;
- (void)initQuery;
- (BOOL)supportsRefinement;
- (BOOL)isDocumentQuery;
- (id)rankingQueries;
- (BOOL)needsIO;

@end

