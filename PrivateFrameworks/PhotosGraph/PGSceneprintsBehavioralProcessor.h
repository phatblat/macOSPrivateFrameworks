//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "PGBehavioralAlgorithm.h"

@class NSMapTable, NSSet;

@interface PGSceneprintsBehavioralProcessor : NSObject <PGBehavioralAlgorithm>
{
    NSSet *_goldAssets;
    NSSet *_goldAssetUUIDs;
    NSMapTable *_goldAssetSceneprintsAndDates;
    double _similarityThreshold;
}

@property(nonatomic) double similarityThreshold; // @synthesize similarityThreshold=_similarityThreshold;
@property(readonly, nonatomic) NSMapTable *goldAssetSceneprintsAndDates; // @synthesize goldAssetSceneprintsAndDates=_goldAssetSceneprintsAndDates;
@property(readonly, nonatomic) NSSet *goldAssetUUIDs; // @synthesize goldAssetUUIDs=_goldAssetUUIDs;
@property(readonly, nonatomic) NSSet *goldAssets; // @synthesize goldAssets=_goldAssets;
- (void).cxx_destruct;
- (id)semanticScoreByAssetUUIDForAssets:(id)arg1;
- (id)dataToPersist;
- (float)semanticScoreForAsset:(id)arg1;
- (void)preprocessWithProgressBlock:(CDUnknownBlockType)arg1;
- (id)initWithGoldAssets:(id)arg1 graph:(id)arg2 persistedData:(id)arg3;
- (id)initWithGoldAssets:(id)arg1 graph:(id)arg2;

@end

