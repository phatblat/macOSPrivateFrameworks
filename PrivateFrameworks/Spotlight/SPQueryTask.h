//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SPKQueryDelegate.h"

@class NSArray, NSDictionary, NSMutableArray, NSMutableDictionary, NSMutableOrderedSet, NSObject<OS_dispatch_queue>, NSObject<SPQueryTaskDelegate>, NSString, PRSRankingConfiguration, PRSResult, SFStartLocalSearchFeedback, SPMetadataQuery, SPWebHistoryQuery;

@interface SPQueryTask : NSObject <SPKQueryDelegate>
{
    NSMutableOrderedSet *_cumulativeTopHitSet;
    double _queryStartTime;
    BOOL _canceled;
    BOOL _willSendPerformanceFeedback;
    unsigned int _qosClass;
    BOOL _forceStableResults;
    BOOL _parsecFinished;
    BOOL _metadataFinished;
    BOOL _webHistoryFinished;
    BOOL _finished;
    BOOL _live;
    BOOL _topHitIsInOfLastResponse;
    NSObject<SPQueryTaskDelegate> *_delegate;
    unsigned long long _queryGroupId;
    NSDictionary *_nlpCategoryPreference;
    NSString *_userQueryString;
    NSMutableDictionary *_groupedResults;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    NSArray *_sections;
    NSArray *_suggestions;
    NSString *_rankingDebugLog;
    NSMutableArray *_ioQueries;
    double _timeOfLastResponse;
    unsigned long long _countOfLastResponse;
    SPMetadataQuery *_mainQuery;
    SPWebHistoryQuery *_whQuery;
    NSMutableArray *_auxQueries;
    NSMutableDictionary *_responses;
    NSString *_fbq;
    long long _delta;
    NSString *_shortcutUserQueryString;
    PRSResult *_shortcutResult;
    PRSRankingConfiguration *_rankingConfiguration;
    SFStartLocalSearchFeedback *_startLocalSearchFeedback;
}

+ (void)preheat;
+ (id)_queriesForUserQuery:(id)arg1 queryGroupId:(unsigned long long)arg2 options:(unsigned long long)arg3 keyboardLanguage:(id)arg4;
+ (id)_queriesForUserQuery:(id)arg1 updatedQueries:(id)arg2 otherQueries:(id)arg3 keyboardLanguage:(id)arg4;
+ (id)queryClasses;
+ (void)deactivate;
+ (void)activate;
+ (void)dumpShortcuts;
+ (void)registerModelUpdatingActivity;
+ (void)initialize;
+ (id)createPathToSpotlightPrefFile;
@property(retain) SFStartLocalSearchFeedback *startLocalSearchFeedback; // @synthesize startLocalSearchFeedback=_startLocalSearchFeedback;
@property(retain) PRSRankingConfiguration *rankingConfiguration; // @synthesize rankingConfiguration=_rankingConfiguration;
@property(retain) PRSResult *shortcutResult; // @synthesize shortcutResult=_shortcutResult;
@property(retain) NSString *shortcutUserQueryString; // @synthesize shortcutUserQueryString=_shortcutUserQueryString;
@property long long delta; // @synthesize delta=_delta;
@property(retain) NSString *fbq; // @synthesize fbq=_fbq;
@property(retain) NSMutableDictionary *responses; // @synthesize responses=_responses;
@property(retain) NSMutableArray *auxQueries; // @synthesize auxQueries=_auxQueries;
@property(retain) SPWebHistoryQuery *whQuery; // @synthesize whQuery=_whQuery;
@property(retain) SPMetadataQuery *mainQuery; // @synthesize mainQuery=_mainQuery;
@property BOOL topHitIsInOfLastResponse; // @synthesize topHitIsInOfLastResponse=_topHitIsInOfLastResponse;
@property unsigned long long countOfLastResponse; // @synthesize countOfLastResponse=_countOfLastResponse;
@property double timeOfLastResponse; // @synthesize timeOfLastResponse=_timeOfLastResponse;
@property(retain, nonatomic) NSMutableArray *ioQueries; // @synthesize ioQueries=_ioQueries;
@property BOOL live; // @synthesize live=_live;
@property BOOL finished; // @synthesize finished=_finished;
@property(retain, nonatomic) NSString *rankingDebugLog; // @synthesize rankingDebugLog=_rankingDebugLog;
@property(retain, nonatomic) NSArray *suggestions; // @synthesize suggestions=_suggestions;
@property(retain, nonatomic) NSArray *sections; // @synthesize sections=_sections;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // @synthesize dispatchQueue=_dispatchQueue;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(retain) NSMutableDictionary *groupedResults; // @synthesize groupedResults=_groupedResults;
@property(readonly) BOOL webHistoryFinished; // @synthesize webHistoryFinished=_webHistoryFinished;
@property(readonly) BOOL metadataFinished; // @synthesize metadataFinished=_metadataFinished;
@property(readonly) BOOL parsecFinished; // @synthesize parsecFinished=_parsecFinished;
@property(retain) NSString *userQueryString; // @synthesize userQueryString=_userQueryString;
@property(retain) NSDictionary *nlpCategoryPreference; // @synthesize nlpCategoryPreference=_nlpCategoryPreference;
@property(nonatomic) BOOL forceStableResults; // @synthesize forceStableResults=_forceStableResults;
@property(readonly) unsigned long long queryGroupId; // @synthesize queryGroupId=_queryGroupId;
@property(nonatomic) __weak NSObject<SPQueryTaskDelegate> *delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)sendPerformanceFeedback:(id)arg1 forKey:(id)arg2;
- (void)willSendPerformanceFeedback;
- (void)queryTask:(id)arg1 gotResponse:(id)arg2;
- (void)finishWithResponseKind:(int)arg1 results:(id)arg2 groupedResults:(id)arg3 userQueryString:(id)arg4 topHitIsIn:(BOOL)arg5 suggestions:(id)arg6;
- (void)_processResponse:(id)arg1 toQuery:(id)arg2;
- (void)_addAssistantQueryResults:(id)arg1 toResults:(id)arg2;
- (BOOL)_isInternallyCompleted;
- (BOOL)_topHitIsIn;
- (void)cancel;
@property(readonly) BOOL isCanceled;
- (void)start;
- (double)startTime;
- (void)_startNonMetadata;
- (void)_startMetadata;
- (void)_cleanupAuxQueries;
- (void)_startQueryClass:(Class)arg1;
- (void)setQueryOptions:(unsigned long long)arg1;
- (id)description;
- (id)initWithUserQuery:(id)arg1 queryGroupId:(unsigned long long)arg2 options:(unsigned long long)arg3 keyboardLanguage:(id)arg4;
- (void)markAsUsed:(id)arg1 subItem:(BOOL)arg2;
- (void)markAsEngaged:(id)arg1 forQueryString:(id)arg2 timestamp:(double)arg3 preview:(BOOL)arg4;
- (id)textMatchRankingForChosenResults:(id)arg1 groupOrder:(id)arg2 queryString:(id)arg3 rankingKnobs:(id)arg4 poorTextMatchCategories:(id *)arg5;
- (id)rankAndPrune:(id)arg1 maxResults:(unsigned long long)arg2 parsecResultCategories:(id)arg3 topHitCategory:(id)arg4 totalResultCount:(long long *)arg5 query:(id)arg6;
- (id)findDistinctPathIdentifiers;
- (void)finishResponse:(id)arg1;
- (void)dedupeResults:(id)arg1;
- (void)sendRankingFeedback:(id)arg1;
- (id)sortLocalResults:(id)arg1;
- (id)URLRepresentedByBookmarkResult:(id)arg1;
- (id)deDuplicateResultSetWithResultArray:(id)arg1 dictGroupedResults:(id)arg2 parsecResultCategories:(id)arg3 duplicatedDictResults:(id *)arg4 originalDictResults:(id *)arg5;
- (void)appendParsecSlice:(id)arg1 name:(id)arg2 results:(id)arg3 topHit:(id)arg4;
- (void)addResultsForGroup:(id)arg1 title:(id)arg2 topHit:(id)arg3 toArray:(id)arg4 focusString:(id)arg5;
- (void)setShortcutsDict:(id)arg1 shortcutsDictPath:(id)arg2;
- (void)deleteOldShortcuts;

@end

