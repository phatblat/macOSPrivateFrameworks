//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "PGEnrichmentProfile.h"

@class NSDictionary, NSMutableDictionary, NSString, PGCurationOptions, PGDejunkerDeduperOptions, PGKeyAssetCurationOptions, PGManager;

@interface PGDefaultEnrichmentProfile : NSObject <PGEnrichmentProfile>
{
    NSMutableDictionary *_debugInfos;
    BOOL _collectsDebugInfo;
    PGManager *_manager;
    PGDejunkerDeduperOptions *_extendedCurationOptions;
}

+ (long long)cardinalModeForSummary;
+ (unsigned long long)durationForSummary;
@property(retain, nonatomic) PGDejunkerDeduperOptions *extendedCurationOptions; // @synthesize extendedCurationOptions=_extendedCurationOptions;
@property(readonly) NSDictionary *debugInfos; // @synthesize debugInfos=_debugInfos;
@property(nonatomic) BOOL collectsDebugInfo; // @synthesize collectsDebugInfo=_collectsDebugInfo;
@property(readonly, nonatomic) PGManager *manager; // @synthesize manager=_manager;
- (void).cxx_destruct;
- (id)faceInfosWithAsset:(id)arg1;
- (id)sceneInfoWithAsset:(id)arg1;
- (id)debugInfoDictionaryByAddingItemInfosToDebugInfo:(id)arg1;
- (id)curationsWithHighlightTailorContext:(id)arg1 progressBlock:(CDUnknownBlockType)arg2;
- (id)extendedCurationWithHighlightTailorContext:(id)arg1 progressBlock:(CDUnknownBlockType)arg2;
- (id)curationOptionsForForHighlightTailorContext:(id)arg1;
- (id)legacyKeyAssetWithHighlightTailorContext:(id)arg1;
- (id)keyAssetWithHighlightTailorContext:(id)arg1 progressBlock:(CDUnknownBlockType)arg2;
- (unsigned long long)moodWithHighlightTailorContext:(id)arg1;
- (double)promotionScoreWithHighlightTailorContext:(id)arg1;
- (id)momentTitleByMomentUUIDWithHighlightTailorContext:(id)arg1;
- (id)titleWithHighlightTailorContext:(id)arg1 curatedAssets:(id)arg2 keyAsset:(id)arg3 createVerboseTitle:(BOOL)arg4;
- (id)highlightTailorContextForHighlight:(id)arg1;
- (BOOL)canEnrichHighlight:(id)arg1 withOptions:(unsigned long long)arg2;
- (id)keyAssetCurationCriteriaWithHighlightTailorContext:(id)arg1;
@property(readonly, nonatomic) PGKeyAssetCurationOptions *keyAssetCurationOptions;
@property(readonly, nonatomic) PGCurationOptions *curationOptions;
- (BOOL)canUseLocationInformationForHighlightTailorContext:(id)arg1;
- (unsigned short)enrichmentStateWithHighlightTailorContext:(id)arg1;
@property(readonly, nonatomic) unsigned short targetEnrichmentState;
@property(readonly, nonatomic) NSString *identifier;
- (id)initWithManager:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
