//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSDictionary, NSString, PGCurationCriteria, PGCurationOptions, PGDejunkerDeduperOptions, PGHighlightTailorContext, PGTitleTuple, PHAsset;

@protocol PGEnrichmentProfile <NSObject>
@property(retain, nonatomic) PGDejunkerDeduperOptions *extendedCurationOptions;
@property(readonly) NSDictionary *debugInfos;
@property(nonatomic) BOOL collectsDebugInfo;
@property(readonly, nonatomic) NSString *identifier;
- (PGCurationCriteria *)keyAssetCurationCriteriaWithHighlightTailorContext:(PGHighlightTailorContext *)arg1;
- (PGCurationOptions *)curationOptionsForForHighlightTailorContext:(PGHighlightTailorContext *)arg1;
- (unsigned short)enrichmentStateWithHighlightTailorContext:(PGHighlightTailorContext *)arg1;
- (NSDictionary *)curationsWithHighlightTailorContext:(PGHighlightTailorContext *)arg1 progressBlock:(void (^)(double, char *))arg2;
- (NSArray *)extendedCurationWithHighlightTailorContext:(PGHighlightTailorContext *)arg1 progressBlock:(void (^)(double, char *))arg2;
- (PHAsset *)keyAssetWithHighlightTailorContext:(PGHighlightTailorContext *)arg1 progressBlock:(void (^)(double, char *))arg2;
- (NSDictionary *)momentTitleByMomentUUIDWithHighlightTailorContext:(PGHighlightTailorContext *)arg1;
- (PGTitleTuple *)titleWithHighlightTailorContext:(PGHighlightTailorContext *)arg1 curatedAssets:(NSArray *)arg2 keyAsset:(PHAsset *)arg3 createVerboseTitle:(BOOL)arg4;
- (unsigned long long)moodWithHighlightTailorContext:(PGHighlightTailorContext *)arg1;
- (double)promotionScoreWithHighlightTailorContext:(PGHighlightTailorContext *)arg1;
- (PGHighlightTailorContext *)highlightTailorContextForHighlight:(id <PGHighlightModel>)arg1;
- (BOOL)canEnrichHighlight:(id <PGHighlightModel>)arg1 withOptions:(unsigned long long)arg2;
- (BOOL)canUseLocationInformationForHighlightTailorContext:(PGHighlightTailorContext *)arg1;

@optional
@property(readonly, nonatomic) unsigned short targetEnrichmentState;
- (PHAsset *)legacyKeyAssetWithHighlightTailorContext:(PGHighlightTailorContext *)arg1;
@end
