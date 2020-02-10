//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PHPhotosHighlight.h"

#import "PGHighlightItem.h"
#import "PGHighlightModel.h"

@class NSArray, NSDate, NSString, PHAsset, PHAssetCollection;

@interface PHPhotosHighlight (HighlightItem) <PGHighlightItem, PGHighlightModel>
@property(readonly, nonatomic) NSArray *extendedCuratedAssets;
@property(readonly, nonatomic) PHAsset *keyAsset;
@property(readonly, nonatomic) id modelObject;
@property(readonly, nonatomic) unsigned long long numberOfAssetsInExtended;
- (id)changeRequest;
- (double)nonDefaultCurationScorePercentageForPhotoLibrary:(id)arg1;
- (double)sceneAnalysisProgressForPhotoLibrary:(id)arg1;
- (double)faceAnalysisProgressForPhotoLibrary:(id)arg1;
@property(readonly, nonatomic) BOOL isGroup;
@property(readonly, nonatomic) PHAssetCollection *assetCollection;

// Remaining properties
@property(readonly, copy, nonatomic) NSString *dateDescription;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) NSDate *endDate;
@property(nonatomic) unsigned short enrichmentState;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) unsigned short kind;
@property(readonly, nonatomic) NSDate *localEndDate;
@property(readonly, nonatomic) NSDate *localStartDate;
@property(readonly, nonatomic) double promotionScore;
@property(readonly, nonatomic, getter=isRecent) BOOL recent;
@property(readonly, copy, nonatomic) NSString *smartDescription;
@property(readonly, nonatomic) NSDate *startDate;
@property(readonly) Class superclass;
@property(nonatomic) unsigned short type;
@property(readonly, nonatomic) NSString *uuid;
@property(readonly, nonatomic) unsigned short visibilityState;
@end
