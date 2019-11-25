//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "MKSearchCompleterDelegate.h"

@class CUIKiCloudKVStore, CalUILocationSuggestionResult, MKLocalSearchCompleter, MKLocalSearchRequest, NSMutableArray, NSMutableSet, NSObject<OS_dispatch_queue>, NSString;

@interface CalUILocationSuggestionManager : NSObject <MKSearchCompleterDelegate>
{
    NSString *_currentSearchQuery;
    BOOL _searchingTier1;
    BOOL _searchingTier2;
    NSString *_redactedCurrentQuery;
    CalUILocationSuggestionResult *_currentLocation;
    unsigned long long _options;
    NSMutableArray *_meCardResults;
    NSMutableArray *_recentResults;
    NSMutableArray *_abResults;
    NSMutableArray *_mkResults;
    NSMutableArray *_runningQueries;
    NSObject<OS_dispatch_queue> *_runningQueriesQueue;
    NSObject<OS_dispatch_queue> *_resultsAccessQueue;
    NSObject<OS_dispatch_queue> *_recentsResponseQueue;
    NSObject<OS_dispatch_queue> *_contactsLookupQueue;
    MKLocalSearchRequest *_localSearchRequest;
    CUIKiCloudKVStore *_iCloudKVStore;
    NSMutableSet *_pendingSearchTypes;
    NSObject<OS_dispatch_queue> *_resultProcessingQueue;
    MKLocalSearchCompleter *_mkCompleter;
    NSMutableArray *_suggestionsNeedingGeocoding;
    CalUILocationSuggestionResult *_suggestionBeingGeocoded;
    CDUnknownBlockType _suggestionsFoundHandler;
}

+ (void)recordRecentForSuggestion:(id)arg1 withDomain:(id)arg2;
+ (void)findSuggestionsForQuery:(id)arg1 options:(unsigned long long)arg2 withHandler:(CDUnknownBlockType)arg3;
+ (id)mapKitHandleFromMetaData:(id)arg1;
+ (double)radiusFromMetaData:(id)arg1;
+ (id)addressStringsFromMetaData:(id)arg1;
+ (id)locationFromMetaData:(id)arg1;
+ (id)metadataForSuggestion:(id)arg1;
+ (id)currentLocationString;
+ (id)currentLocation;
+ (id)manager;
+ (void)initialize;
@property(copy) CDUnknownBlockType suggestionsFoundHandler; // @synthesize suggestionsFoundHandler=_suggestionsFoundHandler;
@property(retain) CalUILocationSuggestionResult *suggestionBeingGeocoded; // @synthesize suggestionBeingGeocoded=_suggestionBeingGeocoded;
@property(retain) NSMutableArray *suggestionsNeedingGeocoding; // @synthesize suggestionsNeedingGeocoding=_suggestionsNeedingGeocoding;
@property(retain) MKLocalSearchCompleter *mkCompleter; // @synthesize mkCompleter=_mkCompleter;
@property(retain) NSObject<OS_dispatch_queue> *resultProcessingQueue; // @synthesize resultProcessingQueue=_resultProcessingQueue;
@property BOOL searchingTier2; // @synthesize searchingTier2=_searchingTier2;
@property BOOL searchingTier1; // @synthesize searchingTier1=_searchingTier1;
@property(retain, nonatomic) NSMutableSet *pendingSearchTypes; // @synthesize pendingSearchTypes=_pendingSearchTypes;
@property(retain) CUIKiCloudKVStore *iCloudKVStore; // @synthesize iCloudKVStore=_iCloudKVStore;
@property(retain) MKLocalSearchRequest *localSearchRequest; // @synthesize localSearchRequest=_localSearchRequest;
@property(retain) NSObject<OS_dispatch_queue> *contactsLookupQueue; // @synthesize contactsLookupQueue=_contactsLookupQueue;
@property(retain) NSObject<OS_dispatch_queue> *recentsResponseQueue; // @synthesize recentsResponseQueue=_recentsResponseQueue;
@property(retain) NSObject<OS_dispatch_queue> *resultsAccessQueue; // @synthesize resultsAccessQueue=_resultsAccessQueue;
@property(retain) NSObject<OS_dispatch_queue> *runningQueriesQueue; // @synthesize runningQueriesQueue=_runningQueriesQueue;
@property(retain) NSMutableArray *runningQueries; // @synthesize runningQueries=_runningQueries;
@property(retain) NSMutableArray *mkResults; // @synthesize mkResults=_mkResults;
@property(retain) NSMutableArray *abResults; // @synthesize abResults=_abResults;
@property(retain) NSMutableArray *recentResults; // @synthesize recentResults=_recentResults;
@property(retain) NSMutableArray *meCardResults; // @synthesize meCardResults=_meCardResults;
@property unsigned long long options; // @synthesize options=_options;
@property(retain) CalUILocationSuggestionResult *currentLocation; // @synthesize currentLocation=_currentLocation;
@property(retain, nonatomic) NSString *redactedCurrentQuery; // @synthesize redactedCurrentQuery=_redactedCurrentQuery;
- (void).cxx_destruct;
- (void)completerDidFail:(id)arg1 error:(id)arg2;
- (void)geocodeNextLocationSuggestion;
- (void)handleCompletedGeocodeWithPlacemark:(id)arg1 error:(id)arg2;
- (void)geocodeLocationSuggestion:(id)arg1;
- (void)completerDidUpdateResults:(id)arg1 finished:(BOOL)arg2;
- (void)mapSearchFor:(id)arg1;
- (void)clearRunningQueries;
- (void)addRunningQuery:(id)arg1;
- (void)executeSearch:(id)arg1;
- (void)_addResult:(id)arg1 toResults:(id)arg2;
- (void)contactLocationsForSearchString:(id)arg1;
- (id)results;
- (void)_addArray:(id)arg1 toSet:(id)arg2 withKeySet:(id)arg3 withMaxElements:(long long)arg4;
- (void)_addArray:(id)arg1 toArray:(id)arg2 withMaxElements:(long long)arg3;
- (void)resultsUpdated;
- (void)finishSearchType:(id)arg1 withResultCount:(unsigned long long)arg2;
- (id)pendingSearchTypesCopy;
- (void)startSearchType:(id)arg1;
- (BOOL)isFinished;
@property(retain, nonatomic) NSString *currentSearchQuery;
- (BOOL)tier1Finished;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(retain, nonatomic) id <GEOMapServiceCompletionTicket> lastTicket;
@property(readonly) Class superclass;

@end

