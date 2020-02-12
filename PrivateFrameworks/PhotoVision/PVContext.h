//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"
#import "NSSecureCoding.h"

@interface PVContext : NSObject <NSSecureCoding, NSCopying>
{
    BOOL _quarantineTwinsOnAssetEnabled;
    BOOL _faceClusteringDisabled;
    BOOL _personBuildingDisabled;
    BOOL _personBuilderMergeCandidatesDisabled;
    float _faceClusteringThreshold;
    float _faceClusteringJunkThreshold;
    float _faceClusteringAgeThreshold;
    float _faceMergeFaceprintDistanceThreshold;
    float _facePrimarySuggestionsThreshold;
    unsigned int _faceAlgorithmUmbrellaVersion;
    unsigned int _sceneAlgorithmUmbrellaVersion;
    unsigned long long _minimumSuggestionSize;
    unsigned long long _minFaceCountToTriggerClustering;
    unsigned long long _maxFaceCountForClustering;
    unsigned long long _minimumFaceGroupSizeForCreatingMergeCandidates;
}

+ (BOOL)supportsSecureCoding;
@property(nonatomic) unsigned int sceneAlgorithmUmbrellaVersion; // @synthesize sceneAlgorithmUmbrellaVersion=_sceneAlgorithmUmbrellaVersion;
@property(nonatomic) unsigned int faceAlgorithmUmbrellaVersion; // @synthesize faceAlgorithmUmbrellaVersion=_faceAlgorithmUmbrellaVersion;
@property(nonatomic) unsigned long long minimumFaceGroupSizeForCreatingMergeCandidates; // @synthesize minimumFaceGroupSizeForCreatingMergeCandidates=_minimumFaceGroupSizeForCreatingMergeCandidates;
@property(nonatomic) BOOL personBuilderMergeCandidatesDisabled; // @synthesize personBuilderMergeCandidatesDisabled=_personBuilderMergeCandidatesDisabled;
@property(nonatomic) BOOL personBuildingDisabled; // @synthesize personBuildingDisabled=_personBuildingDisabled;
@property(nonatomic) BOOL faceClusteringDisabled; // @synthesize faceClusteringDisabled=_faceClusteringDisabled;
@property(nonatomic) unsigned long long maxFaceCountForClustering; // @synthesize maxFaceCountForClustering=_maxFaceCountForClustering;
@property(nonatomic) unsigned long long minFaceCountToTriggerClustering; // @synthesize minFaceCountToTriggerClustering=_minFaceCountToTriggerClustering;
@property(nonatomic) BOOL quarantineTwinsOnAssetEnabled; // @synthesize quarantineTwinsOnAssetEnabled=_quarantineTwinsOnAssetEnabled;
@property(nonatomic) unsigned long long minimumSuggestionSize; // @synthesize minimumSuggestionSize=_minimumSuggestionSize;
@property(nonatomic) float facePrimarySuggestionsThreshold; // @synthesize facePrimarySuggestionsThreshold=_facePrimarySuggestionsThreshold;
@property(nonatomic) float faceMergeFaceprintDistanceThreshold; // @synthesize faceMergeFaceprintDistanceThreshold=_faceMergeFaceprintDistanceThreshold;
@property(nonatomic) float faceClusteringAgeThreshold; // @synthesize faceClusteringAgeThreshold=_faceClusteringAgeThreshold;
@property(nonatomic) float faceClusteringJunkThreshold; // @synthesize faceClusteringJunkThreshold=_faceClusteringJunkThreshold;
@property(nonatomic) float faceClusteringThreshold; // @synthesize faceClusteringThreshold=_faceClusteringThreshold;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;

@end

