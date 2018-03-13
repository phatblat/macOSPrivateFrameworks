//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CSAttributeEvaluator, NSMapTable, NSString;

@interface PRSRankingItemRanker : NSObject
{
    BOOL _isInternalDevice;
    BOOL _policyDisabled;
    NSString *_searchString;
    CSAttributeEvaluator *_evaluator;
    NSMapTable *_bundleFeatures;
    double *_bundleFeaturesScratchBuf;
    double _experimentalWeight1;
    double _experimentalWeight2;
    NSString *_meContactIdentifier;
    double _lastIsSpaceFeature;
}

+ (id)importantAttributesForBundle:(id)arg1;
+ (id)appsBundle;
+ (id)musicBundle;
+ (id)calendarBundle;
+ (id)messagesBundle;
+ (id)notesBundle;
+ (id)mailBundle;
+ (CDUnknownBlockType)shouldUpdateFuncForSnippetFeature:(unsigned long long)arg1;
+ (id)contactsBundle;
+ (id)sortedUniqueBundleFeatureValuesFromBundleFeatures:(id)arg1;
+ (id)requiredAttributes;
+ (void)initialize;
@property(nonatomic) double lastIsSpaceFeature; // @synthesize lastIsSpaceFeature=_lastIsSpaceFeature;
@property(nonatomic) BOOL policyDisabled; // @synthesize policyDisabled=_policyDisabled;
@property(retain, nonatomic) NSString *meContactIdentifier; // @synthesize meContactIdentifier=_meContactIdentifier;
@property(nonatomic) double experimentalWeight2; // @synthesize experimentalWeight2=_experimentalWeight2;
@property(nonatomic) double experimentalWeight1; // @synthesize experimentalWeight1=_experimentalWeight1;
@property(nonatomic) double *bundleFeaturesScratchBuf; // @synthesize bundleFeaturesScratchBuf=_bundleFeaturesScratchBuf;
@property(retain, nonatomic) NSMapTable *bundleFeatures; // @synthesize bundleFeatures=_bundleFeatures;
@property BOOL isInternalDevice; // @synthesize isInternalDevice=_isInternalDevice;
@property(retain, nonatomic) CSAttributeEvaluator *evaluator; // @synthesize evaluator=_evaluator;
@property(retain, nonatomic) NSString *searchString; // @synthesize searchString=_searchString;
- (void).cxx_destruct;
- (void)prepareItems:(id)arg1 inBundle:(id)arg2;
- (id)getDateInGMT:(id)arg1;
- (void)resetbundleFeaturesScratchBuf;
- (CDUnknownBlockType)comparatorByJoiningComparator:(CDUnknownBlockType)arg1 withPredicate:(id)arg2;
- (BOOL)wasItemCreatedWithinAWeek:(id)arg1;
- (void)rerankItemsWithPolicyForBundleItems:(id)arg1;
- (void)updateScoresForPreparedItems:(id)arg1;
- (BOOL)updateFeedbackScoresForPreparedItems:(id)arg1 currentL2ModelVersion:(id *)arg2 currentL2ShadowModelVersion:(id *)arg3 currentL3ModelVersion:(id *)arg4;
- (void)hackMusicResultsWithItem:(id)arg1 featureVector:(id)arg2;
- (double *)computeScoresForVectors:(id)arg1 withBundleFeatures:(id)arg2;
- (void)computeRelativeFeatureForContext:(id)arg1 items:(id)arg2;
- (void)relevantResultSetPRSL2FeaturesFromBundleFeature:(unsigned long long)arg1 absRankFeatureOut:(unsigned long long *)arg2 relRankFeatureOut:(unsigned long long *)arg3;
- (void)populateMailContactFeaturesWithMailItems:(id)arg1 contactItems:(id)arg2;
- (void)computeResultSetDependantFeatures:(id)arg1 allItems:(id)arg2;
- (void)populateLocalResultSetDateFeaturesForItems:(id)arg1;
- (void)pickMostRecentDateForItem:(id)arg1 pastItems:(id *)arg2 futureItems:(id *)arg3;
- (void)updateResultSetFeaturesOnItems:(id)arg1 withContext:(struct _resultset_computation_ctx *)arg2 uniqueScores:(id)arg3;
- (void)populateRankResultSetBundleFeaturesWithBundleItems:(id)arg1 withUniqueBundleMaxScores:(id)arg2;
- (void)updateResultSetContext:(struct _resultset_computation_ctx *)arg1 andUniqueScores:(id)arg2 withResultSetItems:(id)arg3;
- (void)deactivate;
- (void)activate;
- (id)rankingConfigurationWithMeContact:(id)arg1 emailAddresses:(id)arg2 phoneFavorites:(id)arg3 vipList:(id)arg4 clientBundle:(id)arg5;
- (id)rankingConfiguration;
- (void)dealloc;
- (id)initWithSearchString:(id)arg1 language:(id)arg2 experimentalWeight1:(double)arg3 experimentalWeight2:(double)arg4;
- (id)initWithSearchString:(id)arg1 language:(id)arg2;
- (id)init;

@end

