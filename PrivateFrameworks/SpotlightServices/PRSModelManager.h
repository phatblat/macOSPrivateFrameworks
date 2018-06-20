//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary, NSNumber;

@interface PRSModelManager : NSObject
{
    BOOL _disablePolicy;
    NSNumber *_modelVersion;
    NSNumber *_shadowVersion;
    NSMutableDictionary *_shadowModels;
    NSMutableDictionary *_models;
    unsigned long long _activeCount;
    void *_modelUpdatingLock;
}

+ (void)loadModelWithURL:(id)arg1 type:(unsigned long long)arg2 directivesPath:(id)arg3 intoModelDict:(id)arg4 error:(id *)arg5;
+ (id)directivesFromFilePath:(id)arg1;
+ (BOOL)loadModelsWithDirectory:(id)arg1 intoModelDict:(id)arg2;
+ (void)pathsFor:(unsigned long long)arg1 withParentPath:(id)arg2 modelPath:(id *)arg3 directivesPath:(id *)arg4;
+ (void)cannedInfoForType:(unsigned long long)arg1 directivesPath:(id *)arg2 modelName:(id *)arg3;
+ (id)errorDomain;
+ (id)sharedModelManager;
@property(nonatomic) void *modelUpdatingLock; // @synthesize modelUpdatingLock=_modelUpdatingLock;
@property(nonatomic) unsigned long long activeCount; // @synthesize activeCount=_activeCount;
@property(retain, nonatomic) NSMutableDictionary *models; // @synthesize models=_models;
@property(retain, nonatomic) NSMutableDictionary *shadowModels; // @synthesize shadowModels=_shadowModels;
@property(retain, nonatomic) NSNumber *shadowVersion; // @synthesize shadowVersion=_shadowVersion;
@property(retain, nonatomic) NSNumber *modelVersion; // @synthesize modelVersion=_modelVersion;
@property(nonatomic) BOOL disablePolicy; // @synthesize disablePolicy=_disablePolicy;
- (void).cxx_destruct;
- (double)testL2WithData:(id)arg1 experimental:(BOOL)arg2;
- (void)computeQualityScores:(float *)arg1 forScores:(float *)arg2 forFeatureCount:(unsigned long long)arg3 withContext:(id)arg4;
- (float *)computeScoresForFeatures:(id)arg1 withBundleFeatures:(id)arg2 serverBundleFeatures:(id)arg3 usingModelContext:(id)arg4 qos:(unsigned int)arg5 shouldCancel:(char *)arg6;
- (float *)computeL2ScoresForVectors:(id)arg1 secondVector:(id)arg2 withQualityScores:(float *)arg3 withServerFeatures:(id)arg4 withBundleFeatures:(id)arg5 experimentalWeight1:(double)arg6 experimentalWeight2:(double)arg7 forShadow:(BOOL)arg8 shouldCancel:(char *)arg9;
- (id)computeFeedbackScoresForVectors:(id)arg1 withBundleFeatures:(id)arg2;
- (void)updateModelsAccordingToHierarchy;
- (void)updateModelsAccordingToHierarchy:(id)arg1 updateEnabled:(BOOL)arg2 disablePendingUpdates:(BOOL)arg3;
- (id)loadIfNecessaryModelOfResourceType:(unsigned long long)arg1 nowTime:(double)arg2 intoModelDict:(id)arg3 currentVersion:(id)arg4;
- (void)loadCannedModels;
- (void)loadCannedModelWithType:(unsigned long long)arg1 error:(id *)arg2;
- (void)triggerUpdate;
- (void)deactivate;
- (void)activate;
- (id)getL2ModelVersion;
- (void)dealloc;
- (id)init;

@end

