//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSData, NSDate, NSMutableArray, NSMutableSet, NSSet, NSString, NSURL, WBSHistoryVisit;

@interface WBSHistoryItem : NSObject
{
    WBSHistoryVisit *_lastVisit;
    NSMutableSet *_visitsPendingWriteToDataStore;
    long long _databaseID;
    unsigned long long _visitCount;
    Vector_55b96eea _dailyVisitCountScores;
    Vector_55b96eea _weeklyVisitCountScores;
    NSMutableArray *_redirectSourceItems;
    NSMutableArray *_autocompleteTriggers;
    NSMutableArray *_visits;
    BOOL _shouldRecomputeDerivedVisitCountScores;
    float _cachedTopSitesURLPenalty;
    float _cachedTopSitesVisitScore;
    NSURL *_url;
    NSString *_userVisibleURLString;
    NSString *_urlString;
    unsigned long long _visitCountScore;
    double _lastTimeTopSitesScoreWasComputed;
}

+ (double)timeIntervalForDailyAndWeeklyVisitCountScores;
+ (id)synchronizationQueue;
+ (void)initialize;
@property(nonatomic) double lastTimeTopSitesScoreWasComputed; // @synthesize lastTimeTopSitesScoreWasComputed=_lastTimeTopSitesScoreWasComputed;
@property(nonatomic) float cachedTopSitesVisitScore; // @synthesize cachedTopSitesVisitScore=_cachedTopSitesVisitScore;
@property(nonatomic) float cachedTopSitesURLPenalty; // @synthesize cachedTopSitesURLPenalty=_cachedTopSitesURLPenalty;
@property(readonly, nonatomic) BOOL shouldRecomputeDerivedVisitCountScores; // @synthesize shouldRecomputeDerivedVisitCountScores=_shouldRecomputeDerivedVisitCountScores;
@property(readonly, nonatomic) unsigned long long visitCountScore; // @synthesize visitCountScore=_visitCountScore;
@property(readonly, nonatomic) NSArray *visits; // @synthesize visits=_visits;
@property(readonly, nonatomic) NSString *urlString; // @synthesize urlString=_urlString;
@property(nonatomic) long long databaseID; // @synthesize databaseID=_databaseID;
- (id).cxx_construct;
- (void).cxx_destruct;
- (Vector_f0c0bd1e)_timesForVisits:(unsigned long long)arg1 toSynthesizeBetweenStartTime:(double)arg2 endTime:(double)arg3;
- (Vector_f0c0bd1e)_timesForSynthesizedVisitsPreceedingDailyAndWeeklyRange:(unsigned long long)arg1;
- (Vector_f0c0bd1e)_timesOfVisitsToSynthesizeFromDailyCounts:(const Vector_55b96eea *)arg1 weeklyCounts:(const Vector_55b96eea *)arg2;
- (void)recordSynthesizedRedirectFrom:(id)arg1 to:(id)arg2;
- (void)recordExistingRedirectFrom:(id)arg1 to:(id)arg2;
- (long long)compareWithItemByLastVisitedTimeInterval:(id)arg1;
- (void)recomputeDerivedVisitCountScoresWithVisits:(id)arg1;
@property(readonly, nonatomic) NSData *autocompleteTriggersDataOnSynchronizationQueue;
@property(readonly, nonatomic) NSData *weeklyVisitCountScoresDataOnSynchronizationQueue;
@property(readonly, nonatomic) NSData *dailyVisitCountScoresDataOnSynchronizationQueue;
- (void)clearVisitsPendingWriteToDataStoreFromSynchronizationQueue;
@property(readonly, nonatomic) NSSet *visitsPendingWriteToDataStoreOnSynchronizationQueue;
- (void)visitWasModified:(id)arg1;
- (void)scoreOfVisit:(id)arg1 wasUpdatedFrom:(unsigned long long)arg2 to:(unsigned long long)arg3;
- (void)removeVisitsOnSynchronizationQueue:(id)arg1 candidateLastVisit:(id)arg2;
- (void)removeVisits:(id)arg1 candidateLastVisit:(id)arg2;
- (void)wasRedirectedFrom:(id)arg1 to:(id)arg2;
- (void)_addExistingVisit:(id)arg1;
- (void)_addVisit:(id)arg1;
- (void)_wasVisitedOnSynchronizationQueue:(id)arg1;
- (void)wasVisited:(id)arg1;
- (void)mergeDataFromItem:(id)arg1;
- (BOOL)_addAutocompleteTriggerFromSynchronizationQueue:(id)arg1;
- (BOOL)addAutocompleteTrigger:(id)arg1;
- (id)_autocompleteTriggersFromSynchronizationQueue;
@property(readonly, nonatomic) NSArray *autocompleteTriggers;
- (void)_collapseDailyVisitsToWeekly;
- (void)_padDailyCountsForNewVisitAtTime:(double)arg1 indexOfNewVisit:(int *)arg2;
@property(readonly, nonatomic) WBSHistoryItem *endOfLastVisitRedirectChain;
@property(readonly, nonatomic) WBSHistoryItem *lastVisitRedirectDestinationItem;
- (void)addRedirectSourceItemFromSynchronizationQueue:(id)arg1;
@property(readonly, nonatomic) NSArray *redirectSourceItems;
@property(readonly, nonatomic) NSString *stringForUserTypedDomainExpansionOnSynchronizationQueue;
@property(readonly, nonatomic) NSString *stringForUserTypedDomainExpansion;
@property(readonly, nonatomic) BOOL lastVisitWasHTTPNonGet;
@property(nonatomic) BOOL lastVisitWasFailure;
@property(readonly, nonatomic) const int *weeklyVisitCountScoresPtrOnSynchronizationQueue;
@property(readonly, nonatomic) unsigned long long weeklyVisitCountScoresCountOnSynchronizationQueue;
@property(readonly, nonatomic) const int *dailyVisitCountScoresPtrOnSynchronizationQueue;
@property(readonly, nonatomic) unsigned long long dailyVisitCountScoresCountOnSynchronizationQueue;
@property(readonly, nonatomic) unsigned long long visitCount;
@property(readonly, nonatomic) NSDate *lastVisitedDate;
@property(readonly, nonatomic) double lastVisitedTimeIntervalOnSynchronizationQueue;
@property(readonly, nonatomic) double lastVisitedTimeInterval;
@property(readonly, nonatomic) WBSHistoryVisit *lastVisitOnSynchronizationQueue;
@property(readonly, nonatomic) WBSHistoryVisit *lastVisit;
@property(readonly, nonatomic) NSString *simplifiedUserVisibleURLString;
@property(readonly, nonatomic) NSString *userVisibleURLString; // @synthesize userVisibleURLString=_userVisibleURLString;
@property(readonly, nonatomic) NSURL *urlOnSynchronizationQueue;
@property(readonly, nonatomic) NSURL *url; // @synthesize url=_url;
@property(copy, nonatomic) NSString *title;
- (id)initWithSQLiteRow:(id)arg1;
- (id)initWithURLString:(id)arg1;
- (id)initWithDictionaryRepresentation:(id)arg1;
- (void)updateLastVisitIfNil:(id)arg1;
- (id)initWithHistoryStreamedItem:(const struct _HistoryStreamedItem *)arg1;

@end

