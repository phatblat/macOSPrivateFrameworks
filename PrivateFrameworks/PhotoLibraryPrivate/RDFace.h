//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <PhotoLibraryPrivate/RDFaceModel.h>

#import "PFPhotosFaceRepresentation.h"

@class RDVersion;

@interface RDFace : RDFaceModel <PFPhotosFaceRepresentation>
{
    RDVersion *_versionCache;
}

+ (BOOL)isANonZeroCoordinatePair:(double)arg1 and:(double)arg2;
+ (struct CGRect)faceTileCropRectForFace:(id)arg1 andVersion:(id)arg2;
+ (struct CGRect)faceTileCropRectForFaceWithLocalIdentifier:(id)arg1 andVersionWithLocalIdentifier:(id)arg2 database:(id)arg3;
+ (struct CGRect)unconstrainedFaceTileCropRectForFace:(id)arg1 andVersion:(id)arg2;
+ (struct CGRect)ensureRect:(struct CGRect)arg1 isWithinLimits:(struct PFIntSize_st)arg2;
+ (struct CGRect)scaleFaceRect:(struct CGRect)arg1;
+ (struct CGRect)cropRectForSize:(struct PFIntSize_st)arg1 andFace:(id)arg2;
+ (struct CGRect)unitCropRectForFace:(id)arg1;
+ (id)bestMatchingFaceForFace:(id)arg1 withinFaces:(id)arg2 overlapRatioThreshold:(double)arg3;
+ (id)filterForNonvisibleFacesInDatabase:(id)arg1;
+ (id)filterForVisibleFacesInDatabase:(id)arg1;
+ (id)trainingTypeStringFromTrainingType:(int)arg1;
+ (id)faceTypeStringFromFaceType:(unsigned char)arg1;
+ (id)filterFacesWithPersonsForImageModelIds:(id)arg1 fromLibrary:(id)arg2;
+ (void)setIsHidden:(BOOL)arg1 forAllFacesInImage:(long long)arg2 inLibrary:(id)arg3 withReason:(unsigned short)arg4;
+ (void)deleteForVersionIdList:(id)arg1 fromLibrary:(id)arg2 withReason:(unsigned short)arg3;
+ (id)mostRecentFaceSyncPropertyModifiedDateForVersion:(id)arg1;
+ (id)keyPathsThatTickleSyncDateForLibrary:(id)arg1;
+ (id)keyPathsForCheckingShouldSyncWithCloudForLibrary:(id)arg1;
+ (id)faceFilterForSyncForVersionIdList:(id)arg1 library:(id)arg2;
+ (BOOL)tickleSyncDateForFacesInLibrary:(id)arg1 error:(id *)arg2;
+ (id)filterForFacesForTraining:(BOOL)arg1 inLibrary:(id)arg2;
+ (void)repairQualityMeasureWithRepair:(id)arg1;
+ (void)repairManualFacesWithRepair:(id)arg1;
+ (void)registerRepairBlocks:(id)arg1;
@property(retain) RDVersion *versionCache; // @synthesize versionCache=_versionCache;
- (void).cxx_destruct;
- (id)photosFaceRepresentationLocalIdentifier;
- (long long)photosFaceRepresentationClusterSequenceNumber;
- (long long)photosFaceRepresentationQualityMeasure;
- (BOOL)photosFaceRepresentationIsRightEyeClosed;
- (BOOL)photosFaceRepresentationIsLeftEyeClosed;
- (BOOL)photosFaceRepresentationHasSmile;
- (double)photosFaceRepresentationBlurScore;
- (double)photosFaceRepresentationSize;
- (double)photosFaceRepresentationCenterY;
- (double)photosFaceRepresentationCenterX;
- (long long)photosFaceRepresentationSourceHeight;
- (long long)photosFaceRepresentationSourceWidth;
- (void)setFaceprint:(id)arg1;
- (id)faceprint;
- (id)person;
- (CDUnknownBlockType)willBeDeleted:(BOOL)arg1;
- (void)prepareForDeleteInTransactionContext:(id)arg1;
- (void)deleteRelatedModelsWithTransactionContext:(id)arg1 faceModelId:(long long)arg2 personId:(long long)arg3 resourceModelIdList:(id)arg4;
- (void)relateToPerson:(id)arg1 requiresSearchIndexUpdate:(BOOL)arg2;
- (void)setNameSource:(long long)arg1;
- (void)setNameSource:(long long)arg1 isLocal:(BOOL)arg2;
- (BOOL)canGenerateClusterFaceCrop;
- (BOOL)shouldScheduleFaceCropForNewNameSource:(long long)arg1;
- (void)setManual:(BOOL)arg1;
- (void)setImageModelId:(long long)arg1;
- (void)setPersonId:(long long)arg1;
- (BOOL)setProperty:(id)arg1 forKeyPath:(id)arg2 options:(unsigned int)arg3;
- (short)modelType;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)initWithModel:(id)arg1 forTable:(id)arg2;
- (void)setModelDefaults;
- (BOOL)shouldSyncAsKeyFaceForPerson:(id)arg1;
- (BOOL)shouldSyncWithCloudForPerson:(id)arg1;
- (BOOL)localStateCanSync;
- (BOOL)shouldProcessForCloud;
@property(readonly, nonatomic, getter=isTrainingFace) BOOL trainingFace;
- (id)versionsForSearchIndex;

@end

