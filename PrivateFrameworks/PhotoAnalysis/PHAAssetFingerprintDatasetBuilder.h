//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSNumber, NSString, PHACoreDuetDatasetStorage, PHPhotoLibrary;

@interface PHAAssetFingerprintDatasetBuilder : NSObject
{
    long long _policy;
    long long _fingerprintVersion;
    NSString *_inputName;
    NSString *_labelName;
    NSString *_positivesDatasetName;
    NSString *_positivesSubsetName;
    NSString *_negativesDatasetName;
    NSString *_negativesSubsetName;
    NSNumber *_totalNumberOfSamples;
    PHPhotoLibrary *_photoLibrary;
    NSArray *_positiveAssetIdentifiers;
    NSArray *_negativeAssetIdentifiers;
    PHACoreDuetDatasetStorage *_datasetStore;
}

+ (long long)datasetBuilderPolicyForPolicyName:(id)arg1;
+ (id)_randomIndicesWithUpperBound:(unsigned long long)arg1 count:(unsigned long long)arg2;
@property(retain, nonatomic) PHACoreDuetDatasetStorage *datasetStore; // @synthesize datasetStore=_datasetStore;
@property(retain, nonatomic) NSArray *negativeAssetIdentifiers; // @synthesize negativeAssetIdentifiers=_negativeAssetIdentifiers;
@property(retain, nonatomic) NSArray *positiveAssetIdentifiers; // @synthesize positiveAssetIdentifiers=_positiveAssetIdentifiers;
@property(readonly, nonatomic) PHPhotoLibrary *photoLibrary; // @synthesize photoLibrary=_photoLibrary;
@property(readonly, nonatomic) NSNumber *totalNumberOfSamples; // @synthesize totalNumberOfSamples=_totalNumberOfSamples;
@property(readonly, nonatomic) NSString *negativesSubsetName; // @synthesize negativesSubsetName=_negativesSubsetName;
@property(readonly, nonatomic) NSString *negativesDatasetName; // @synthesize negativesDatasetName=_negativesDatasetName;
@property(readonly, nonatomic) NSString *positivesSubsetName; // @synthesize positivesSubsetName=_positivesSubsetName;
@property(readonly, nonatomic) NSString *positivesDatasetName; // @synthesize positivesDatasetName=_positivesDatasetName;
@property(readonly, nonatomic) NSString *labelName; // @synthesize labelName=_labelName;
@property(readonly, nonatomic) NSString *inputName; // @synthesize inputName=_inputName;
@property(readonly, nonatomic) long long fingerprintVersion; // @synthesize fingerprintVersion=_fingerprintVersion;
@property(readonly, nonatomic) long long policy; // @synthesize policy=_policy;
- (void).cxx_destruct;
- (id)_assetIdentifiersForCoreDuetDatasetName:(id)arg1 subsetName:(id)arg2;
- (id)_fetchOptionsForCurrentSceneprintVersion;
- (id)_randomAssetsOfCount:(unsigned long long)arg1 error:(id *)arg2;
- (id)_sampleAssetsOfCount:(unsigned long long)arg1 fromAssetIdentifiers:(id)arg2 error:(id *)arg3;
- (id)_datasetWithNumberOfPositiveSamples:(id)arg1 numberOfNegativeSamples:(id)arg2 error:(id *)arg3;
- (id)unbalancedDatasetWithError:(id *)arg1;
- (id)balancedStrictDatasetWithError:(id *)arg1;
- (id)balancedDatasetWithError:(id *)arg1;
- (id)datasetWithError:(id *)arg1;
- (id)initWithPolicy:(long long)arg1 fingerprintVersion:(long long)arg2 inputName:(id)arg3 labelName:(id)arg4 positivesDatasetName:(id)arg5 positivesSubsetName:(id)arg6 negativesDatasetName:(id)arg7 negativesSubsetName:(id)arg8 totalNumberOfSamples:(id)arg9 photoLibrary:(id)arg10;

@end

