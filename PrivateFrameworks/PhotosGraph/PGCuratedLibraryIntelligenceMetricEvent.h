//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "PLMetricEvent.h"

@class NSDate, NSDictionary, NSObject<OS_dispatch_semaphore>, NSString, PGGraph, PGManager;

@interface PGCuratedLibraryIntelligenceMetricEvent : NSObject <PLMetricEvent>
{
    NSObject<OS_dispatch_semaphore> *_semaphore;
    NSDate *_debugDate;
    NSString *_identifier;
    PGGraph *_graph;
    PGManager *_manager;
    NSDictionary *_payload;
    unsigned long long _librarySize;
    long long _librarySizeRange;
    unsigned long long _numberOfDaysWithPhotosInPastYear;
    unsigned long long _numberOfDayHighlights;
    unsigned long long _numberOfDefaultDayHighlights;
    unsigned long long _numberOfDaysInTrips;
    unsigned long long _numberOfDaysInAggregations;
    double _ratioOfDefaultDays;
    double _ratioOfDaysInTrips;
    double _ratioOfDaysInAggregations;
    unsigned long long _numberOfShortTrips;
    unsigned long long _numberOfLongTrips;
    unsigned long long _numberOfAggregations;
    double _averageNumberOfAssetsInDefaultHighlights;
    double _averageNumberOfAssetsInAggregationHighlights;
    double _averageNumberOfAssetsInTripHighlights;
    double _ratioOfAssetsInDefaultHighlights;
    double _ratioOfAssetsInAggregationHighlights;
    double _ratioOfAssetsInTripHighlights;
    double _ratioOfAssetsWithUtilityCurationScore;
    double _ratioOfAssetsWithDefaultCurationScore;
    double _ratioOfAssetsWithImprovedCurationScore;
    double _ratioOfAssetsWithBetterCurationScore;
    double _personalHighAestheticScore;
    double _personalGoodAestheticScore;
    double _topTierAestheticScore;
    double _topTierAestheticScoreForTripKeyAsset;
    double _ratioOfShinyGemAssets;
    double _ratioOfRegularGemAssets;
    double _ratioOfGoldAssets;
    unsigned long long _numberOfMonthHighlights;
    double _averageNumberOfPromotedHighlightsPerMonth;
    double _averageNumberOfPromotedHighlightsPerMonthPastYear;
    double _averageNumberOfCuratedAssetsPerMonth;
    double _ratioOfCuratedAssetsCoveredInMonth;
    unsigned long long _numberOfYearHighlights;
    double _ratioOfHiddenDayHighlights;
    double _ratioOfCurated1siesAmongVisibleHighlights;
    double _ratioOfCurated2siesAmongVisibleHighlights;
    unsigned long long _numberOfCuratedAssets;
    double _ratioOfCuratedAssets;
    double _ratioOfCuratedAssetsInTrips;
    double _ratioOfCuratedAssetsInDefaultHighlights;
    double _ratioOfCuratedAssetsInAggregations;
    double _ratioOfUtilityAssets;
    double _ratioOfUtilityAssetsInTrips;
    double _ratioOfDedupedAssets;
    double _ratioOfDedupedAssetsInTrips;
    unsigned long long _numberOfMoments;
    double _ratioOfPhotoKeyAssets;
    double _ratioOfAutoplayedPhotoKeyAssets;
    double _ratioOfVideoKeyAssets;
    double _ratioOfAutoplayedVideoKeyAssets;
    double _ratioOfProcessedScenes;
    double _ratioOfProcessedFaces;
}

+ (id)librarySizeRangeDescriptionForLibrarySizeRange:(long long)arg1;
@property(nonatomic) double ratioOfProcessedFaces; // @synthesize ratioOfProcessedFaces=_ratioOfProcessedFaces;
@property(nonatomic) double ratioOfProcessedScenes; // @synthesize ratioOfProcessedScenes=_ratioOfProcessedScenes;
@property(nonatomic) double ratioOfAutoplayedVideoKeyAssets; // @synthesize ratioOfAutoplayedVideoKeyAssets=_ratioOfAutoplayedVideoKeyAssets;
@property(nonatomic) double ratioOfVideoKeyAssets; // @synthesize ratioOfVideoKeyAssets=_ratioOfVideoKeyAssets;
@property(nonatomic) double ratioOfAutoplayedPhotoKeyAssets; // @synthesize ratioOfAutoplayedPhotoKeyAssets=_ratioOfAutoplayedPhotoKeyAssets;
@property(nonatomic) double ratioOfPhotoKeyAssets; // @synthesize ratioOfPhotoKeyAssets=_ratioOfPhotoKeyAssets;
@property(nonatomic) unsigned long long numberOfMoments; // @synthesize numberOfMoments=_numberOfMoments;
@property(nonatomic) double ratioOfDedupedAssetsInTrips; // @synthesize ratioOfDedupedAssetsInTrips=_ratioOfDedupedAssetsInTrips;
@property(nonatomic) double ratioOfDedupedAssets; // @synthesize ratioOfDedupedAssets=_ratioOfDedupedAssets;
@property(nonatomic) double ratioOfUtilityAssetsInTrips; // @synthesize ratioOfUtilityAssetsInTrips=_ratioOfUtilityAssetsInTrips;
@property(nonatomic) double ratioOfUtilityAssets; // @synthesize ratioOfUtilityAssets=_ratioOfUtilityAssets;
@property(nonatomic) double ratioOfCuratedAssetsInAggregations; // @synthesize ratioOfCuratedAssetsInAggregations=_ratioOfCuratedAssetsInAggregations;
@property(nonatomic) double ratioOfCuratedAssetsInDefaultHighlights; // @synthesize ratioOfCuratedAssetsInDefaultHighlights=_ratioOfCuratedAssetsInDefaultHighlights;
@property(nonatomic) double ratioOfCuratedAssetsInTrips; // @synthesize ratioOfCuratedAssetsInTrips=_ratioOfCuratedAssetsInTrips;
@property(nonatomic) double ratioOfCuratedAssets; // @synthesize ratioOfCuratedAssets=_ratioOfCuratedAssets;
@property(nonatomic) unsigned long long numberOfCuratedAssets; // @synthesize numberOfCuratedAssets=_numberOfCuratedAssets;
@property(nonatomic) double ratioOfCurated2siesAmongVisibleHighlights; // @synthesize ratioOfCurated2siesAmongVisibleHighlights=_ratioOfCurated2siesAmongVisibleHighlights;
@property(nonatomic) double ratioOfCurated1siesAmongVisibleHighlights; // @synthesize ratioOfCurated1siesAmongVisibleHighlights=_ratioOfCurated1siesAmongVisibleHighlights;
@property(nonatomic) double ratioOfHiddenDayHighlights; // @synthesize ratioOfHiddenDayHighlights=_ratioOfHiddenDayHighlights;
@property(nonatomic) unsigned long long numberOfYearHighlights; // @synthesize numberOfYearHighlights=_numberOfYearHighlights;
@property(nonatomic) double ratioOfCuratedAssetsCoveredInMonth; // @synthesize ratioOfCuratedAssetsCoveredInMonth=_ratioOfCuratedAssetsCoveredInMonth;
@property(nonatomic) double averageNumberOfCuratedAssetsPerMonth; // @synthesize averageNumberOfCuratedAssetsPerMonth=_averageNumberOfCuratedAssetsPerMonth;
@property(nonatomic) double averageNumberOfPromotedHighlightsPerMonthPastYear; // @synthesize averageNumberOfPromotedHighlightsPerMonthPastYear=_averageNumberOfPromotedHighlightsPerMonthPastYear;
@property(nonatomic) double averageNumberOfPromotedHighlightsPerMonth; // @synthesize averageNumberOfPromotedHighlightsPerMonth=_averageNumberOfPromotedHighlightsPerMonth;
@property(nonatomic) unsigned long long numberOfMonthHighlights; // @synthesize numberOfMonthHighlights=_numberOfMonthHighlights;
@property(nonatomic) double ratioOfGoldAssets; // @synthesize ratioOfGoldAssets=_ratioOfGoldAssets;
@property(nonatomic) double ratioOfRegularGemAssets; // @synthesize ratioOfRegularGemAssets=_ratioOfRegularGemAssets;
@property(nonatomic) double ratioOfShinyGemAssets; // @synthesize ratioOfShinyGemAssets=_ratioOfShinyGemAssets;
@property(nonatomic) double topTierAestheticScoreForTripKeyAsset; // @synthesize topTierAestheticScoreForTripKeyAsset=_topTierAestheticScoreForTripKeyAsset;
@property(nonatomic) double topTierAestheticScore; // @synthesize topTierAestheticScore=_topTierAestheticScore;
@property(nonatomic) double personalGoodAestheticScore; // @synthesize personalGoodAestheticScore=_personalGoodAestheticScore;
@property(nonatomic) double personalHighAestheticScore; // @synthesize personalHighAestheticScore=_personalHighAestheticScore;
@property(nonatomic) double ratioOfAssetsWithBetterCurationScore; // @synthesize ratioOfAssetsWithBetterCurationScore=_ratioOfAssetsWithBetterCurationScore;
@property(nonatomic) double ratioOfAssetsWithImprovedCurationScore; // @synthesize ratioOfAssetsWithImprovedCurationScore=_ratioOfAssetsWithImprovedCurationScore;
@property(nonatomic) double ratioOfAssetsWithDefaultCurationScore; // @synthesize ratioOfAssetsWithDefaultCurationScore=_ratioOfAssetsWithDefaultCurationScore;
@property(nonatomic) double ratioOfAssetsWithUtilityCurationScore; // @synthesize ratioOfAssetsWithUtilityCurationScore=_ratioOfAssetsWithUtilityCurationScore;
@property(nonatomic) double ratioOfAssetsInTripHighlights; // @synthesize ratioOfAssetsInTripHighlights=_ratioOfAssetsInTripHighlights;
@property(nonatomic) double ratioOfAssetsInAggregationHighlights; // @synthesize ratioOfAssetsInAggregationHighlights=_ratioOfAssetsInAggregationHighlights;
@property(nonatomic) double ratioOfAssetsInDefaultHighlights; // @synthesize ratioOfAssetsInDefaultHighlights=_ratioOfAssetsInDefaultHighlights;
@property(nonatomic) double averageNumberOfAssetsInTripHighlights; // @synthesize averageNumberOfAssetsInTripHighlights=_averageNumberOfAssetsInTripHighlights;
@property(nonatomic) double averageNumberOfAssetsInAggregationHighlights; // @synthesize averageNumberOfAssetsInAggregationHighlights=_averageNumberOfAssetsInAggregationHighlights;
@property(nonatomic) double averageNumberOfAssetsInDefaultHighlights; // @synthesize averageNumberOfAssetsInDefaultHighlights=_averageNumberOfAssetsInDefaultHighlights;
@property(nonatomic) unsigned long long numberOfAggregations; // @synthesize numberOfAggregations=_numberOfAggregations;
@property(nonatomic) unsigned long long numberOfLongTrips; // @synthesize numberOfLongTrips=_numberOfLongTrips;
@property(nonatomic) unsigned long long numberOfShortTrips; // @synthesize numberOfShortTrips=_numberOfShortTrips;
@property(nonatomic) double ratioOfDaysInAggregations; // @synthesize ratioOfDaysInAggregations=_ratioOfDaysInAggregations;
@property(nonatomic) double ratioOfDaysInTrips; // @synthesize ratioOfDaysInTrips=_ratioOfDaysInTrips;
@property(nonatomic) double ratioOfDefaultDays; // @synthesize ratioOfDefaultDays=_ratioOfDefaultDays;
@property(nonatomic) unsigned long long numberOfDaysInAggregations; // @synthesize numberOfDaysInAggregations=_numberOfDaysInAggregations;
@property(nonatomic) unsigned long long numberOfDaysInTrips; // @synthesize numberOfDaysInTrips=_numberOfDaysInTrips;
@property(nonatomic) unsigned long long numberOfDefaultDayHighlights; // @synthesize numberOfDefaultDayHighlights=_numberOfDefaultDayHighlights;
@property(nonatomic) unsigned long long numberOfDayHighlights; // @synthesize numberOfDayHighlights=_numberOfDayHighlights;
@property(nonatomic) unsigned long long numberOfDaysWithPhotosInPastYear; // @synthesize numberOfDaysWithPhotosInPastYear=_numberOfDaysWithPhotosInPastYear;
@property(nonatomic) long long librarySizeRange; // @synthesize librarySizeRange=_librarySizeRange;
@property(nonatomic) unsigned long long librarySize; // @synthesize librarySize=_librarySize;
@property(retain, nonatomic) PGManager *manager; // @synthesize manager=_manager;
@property(retain, nonatomic) PGGraph *graph; // @synthesize graph=_graph;
@property(readonly, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(retain, nonatomic) NSDate *debugDate; // @synthesize debugDate=_debugDate;
@property(retain, nonatomic) NSObject<OS_dispatch_semaphore> *semaphore; // @synthesize semaphore=_semaphore;
- (void).cxx_destruct;
- (id)_longTripDayGroups;
- (id)_shortTripDayGroups;
- (id)_daysWithinTrips;
- (id)_aggregationGroups;
- (id)_daysWithinAggregations;
- (id)_defaultHightlights;
- (unsigned long long)_numberOfDayHighlights;
- (id)_dayHighlights;
- (double)_ratioFromNumerator:(unsigned long long)arg1 denominator:(unsigned long long)arg2;
- (id)utilityPredicate;
- (id)_assetsStatisticsInHighlights:(id)arg1 photoLibrary:(id)arg2 includeUtility:(BOOL)arg3;
- (unsigned long long)_debugNumberOfAssets;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) NSDictionary *payload; // @synthesize payload=_payload;
- (void)_saveKey:(id)arg1 stringValue:(id)arg2 payload:(id)arg3;
- (void)_saveKey:(id)arg1 integerValue:(unsigned long long)arg2 payload:(id)arg3;
- (void)_saveKey:(id)arg1 doubleValue:(double)arg2 payload:(id)arg3;
- (void)_fillProcessingLevelStatisticsWithGraph:(id)arg1;
- (void)_fillMomentsStatisticsWithGraph:(id)arg1;
- (void)_fillKeyAssetsStatisticsWithGraph:(id)arg1;
- (void)_fillOnesiesHighlightStatisticsWithGraph:(id)arg1;
- (void)_fillHiddenHighlightsStatisticsWithGraph:(id)arg1;
- (void)_fillYearHighlightsStatisticsWithGraph:(id)arg1;
- (void)_fillMonthHighlightsStatisticsWithGraph:(id)arg1;
- (void)_fillAestheticAndBehavioralCurationStatisticsWithGraph:(id)arg1;
- (void)_fillContentScoreStatisticsWithGraph:(id)arg1 withProgressBlock:(CDUnknownBlockType)arg2;
- (void)_fillDayHighlightsStatisticsWithGraph:(id)arg1 withProgressBlock:(CDUnknownBlockType)arg2;
- (void)_fillGenericStatisticsWithGraph:(id)arg1;
- (void)gatherMetricsWithProgressBlock:(CDUnknownBlockType)arg1;
- (id)initWithGraphManager:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
