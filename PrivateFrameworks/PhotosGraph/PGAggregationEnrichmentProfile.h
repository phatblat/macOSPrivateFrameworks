//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "PGEnrichmentProfile.h"

@class NSDictionary, NSString, PGDejunkerDeduperOptions, PGManager, PLDateRangeTitleGenerator;

@interface PGAggregationEnrichmentProfile : NSObject <PGEnrichmentProfile>
{
    BOOL _collectsDebugInfo;
    PGManager *_manager;
    PGDejunkerDeduperOptions *_extendedCurationOptions;
    PLDateRangeTitleGenerator *_dateRangeTitleGenerator;
}

@property(retain, nonatomic) PLDateRangeTitleGenerator *dateRangeTitleGenerator; // @synthesize dateRangeTitleGenerator=_dateRangeTitleGenerator;
@property(retain, nonatomic) PGDejunkerDeduperOptions *extendedCurationOptions; // @synthesize extendedCurationOptions=_extendedCurationOptions;
@property(nonatomic) BOOL collectsDebugInfo; // @synthesize collectsDebugInfo=_collectsDebugInfo;
@property(readonly, nonatomic) PGManager *manager; // @synthesize manager=_manager;
- (void).cxx_destruct;
- (id)curationsWithHighlightTailorContext:(id)arg1 progressBlock:(CDUnknownBlockType)arg2;
- (id)extendedCurationWithHighlightTailorContext:(id)arg1 progressBlock:(CDUnknownBlockType)arg2;
- (id)keyAssetWithHighlightTailorContext:(id)arg1 progressBlock:(CDUnknownBlockType)arg2;
- (unsigned long long)moodWithHighlightTailorContext:(id)arg1;
- (double)promotionScoreWithHighlightTailorContext:(id)arg1;
- (id)momentTitleByMomentUUIDWithHighlightTailorContext:(id)arg1;
@property(readonly) NSDictionary *debugInfos;
- (id)keyAssetCurationCriteriaWithHighlightTailorContext:(id)arg1;
- (id)curationOptionsForForHighlightTailorContext:(id)arg1;
- (id)titleWithHighlightTailorContext:(id)arg1 curatedAssets:(id)arg2 keyAsset:(id)arg3 createVerboseTitle:(BOOL)arg4;
- (id)highlightTailorContextForHighlight:(id)arg1;
- (BOOL)canUseLocationInformationForHighlightTailorContext:(id)arg1;
- (BOOL)canEnrichHighlight:(id)arg1 withOptions:(unsigned long long)arg2;
- (unsigned short)enrichmentStateWithHighlightTailorContext:(id)arg1;
@property(readonly, nonatomic) NSString *identifier;
- (id)initWithManager:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(readonly, nonatomic) unsigned short targetEnrichmentState;

@end

