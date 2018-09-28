//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <PhotoLibraryPrivate/RDVersionModel.h>

#import "LiSqliteBufferStringMapper.h"
#import "RDCloudSyncingModel.h"
#import "RDModelAttachments.h"

@class CLLocation, NSArray, NSDictionary, NSString, NSTimeZone, RDImageProxyState, RDMaster, RDPlaceAnnotation, RDVersionLocationAddress;

@interface RDVersion : RDVersionModel <LiSqliteBufferStringMapper, RDModelAttachments, RDCloudSyncingModel>
{
    RDMaster *_master;
    RDImageProxyState *_imageProxyStateCache;
}

+ (id)mediaTypesCountedAsImagesForSummaryPurposes;
+ (long long)hdrTypeForCustomRenderedType:(long long)arg1;
+ (id)versionWithName:(id)arg1 fromDatabase:(id)arg2;
+ (id)unadjustedAdjustmentUuids;
+ (void)toggleIsEditableOnVersions:(id)arg1;
+ (void)toggleFlagOnVersions:(id)arg1;
+ (id)xmpSidecarFilePathDictForUuids:(id)arg1 fromDatabase:(id)arg2;
+ (void)dateRangeOfVersions:(id)arg1 minDate:(id *)arg2 maxDate:(id *)arg3;
+ (void)cacheCanonicalCloudSyncMasterForVersions:(id)arg1;
+ (id)maxVersionNumberForMasterUuids:(id)arg1 fromDatabase:(id)arg2;
+ (void)loadMasterForReadOnlyVersions:(id)arg1 count:(unsigned long long)arg2 database:(id)arg3 withProperties:(id)arg4 completion:(CDUnknownBlockType)arg5;
+ (void)loadImageProxyStateForReadOnlyVersions:(id)arg1 count:(unsigned long long)arg2 database:(id)arg3 withProperties:(id)arg4 completion:(CDUnknownBlockType)arg5;
+ (id)loadAspectRatiosForVersionIdArray:(id)arg1 database:(id)arg2;
+ (id)sortVersions:(id)arg1 byKeyPath:(id)arg2 ascending:(BOOL)arg3;
+ (id)sortDescriptorsForKeyPath:(id)arg1 ascending:(BOOL)arg2 prefetchColumns:(id)arg3 fromDatabase:(id)arg4;
+ (id)sortKeyPathsForApertureStyleSortPath:(id)arg1 forDatabase:(id)arg2;
+ (id)sortDescriptorsForKeyPath:(id)arg1 ascending:(BOOL)arg2 fromDatabase:(id)arg3;
+ (id)normalizeSortKeyPath:(id)arg1;
+ (id)overridePlacesForVersionIds:(id)arg1 fromDatabase:(id)arg2;
+ (id)versionsShownForLibraryWithLocationFromDatabase:(id)arg1 loadingProperties:(id)arg2;
+ (id)versionsShownForLibraryIgnoringTrashFromDatabase:(id)arg1;
+ (id)versionsShownForLibraryFromDatabase:(id)arg1 loadingProperties:(id)arg2;
+ (id)versionsForLibraryFromDatabase:(id)arg1;
+ (id)versionIdListForMasterIdList:(id)arg1 fromDatabase:(id)arg2;
+ (void)versionsForMasterId:(id)arg1 fromDatabase:(id)arg2 loadingProperties:(id)arg3 resultsHandler:(CDUnknownBlockType)arg4;
+ (id)versionsForMasterUuids:(id)arg1 fromDatabase:(id)arg2;
+ (id)versionsForMoment:(id)arg1;
+ (id)versionsForMomentUuids:(id)arg1 fromDatabase:(id)arg2;
+ (id)versionsForMomentUuid:(id)arg1 fromDatabase:(id)arg2;
+ (id)versionForAddress:(id)arg1;
+ (BOOL)versionsInUseForMasters:(id)arg1 outsideAlbum:(id)arg2;
+ (unsigned long long)deleteStaleModelsReferencingMissingVersionsWithReason:(unsigned short)arg1 database:(id)arg2;
+ (void)deleteVersions:(id)arg1 deleteMode:(unsigned char)arg2 withReason:(unsigned short)arg3;
+ (void)deleteVersions:(id)arg1 withReason:(unsigned short)arg2;
+ (id)removeFromTrash:(id)arg1 withReason:(unsigned short)arg2;
+ (id)putInTrash:(id)arg1 withReason:(unsigned short)arg2;
+ (id)setIsInTrashForVersions:(id)arg1 withReason:(unsigned short)arg2;
+ (id)masterUuidsToPutInTrashForVersions:(id)arg1;
+ (id)versionIdListForPreviewsNeedingWorkFromDatabase:(id)arg1 withVersionList:(id)arg2;
+ (id)timeZoneForName:(id)arg1;
+ (id)stringForUT8String:(const char *)arg1 length:(unsigned long long)arg2;
+ (Class)stringMapper;
+ (void)initialize;
+ (void)repairNullFileNameWithRepair:(id)arg1;
+ (void)repairInvalidAdjustmentUuidWithRepair:(id)arg1;
+ (void)repairAnalysisTableEntries:(id)arg1;
+ (void)repairNullSpecialType:(id)arg1;
+ (void)repairLivePhotoSpecialType:(id)arg1;
+ (void)repairRAWPlusJPEGSpecialType:(id)arg1;
+ (void)repairDuplicateUuidWithReplacementRepair:(id)arg1;
+ (void)repairDuplicateUuidWithDeletionRepair:(id)arg1;
+ (void)repairBurstWithRepair:(id)arg1;
+ (void)resetUnsupportedStatusWithRepair:(id)arg1;
+ (void)registerRepairBlocks:(id)arg1;
+ (BOOL)cleanupInvalidIgnoreUntilDateValuesInDatabase:(id)arg1 error:(id *)arg2;
+ (BOOL)markAnalysisStatesProcessedForWorkerType:(short)arg1 database:(id)arg2 error:(id *)arg3;
+ (BOOL)resetPendingAnalysisStatesInDatabase:(id)arg1 error:(id *)arg2;
+ (BOOL)_setAnalysisStatesTo:(int)arg1 usingFilter:(id)arg2 reason:(unsigned short)arg3 error:(id *)arg4;
+ (void)removeAnalysisRecordsForDeletedAssetUUIDs:(id)arg1 database:(id)arg2 workerType:(short)arg3;
+ (id)deletedAssetUUIDsForAnalysisInDatabase:(id)arg1 workerType:(short)arg2 fetchLimit:(unsigned long long)arg3 error:(id *)arg4;
+ (id)analysisRecordsForDeletedAssetsInDatabase:(id)arg1 workerType:(short)arg2 fetchLimit:(unsigned long long)arg3 error:(id *)arg4;
+ (void)requestCountOfAnalysisRecordsForDeletedAssetsInDatabase:(id)arg1 completion:(CDUnknownBlockType)arg2;
+ (void)requestAnalysisVersionIdListForDeletedAssetsInDatabase:(id)arg1 workerType:(id)arg2 queue:(id)arg3 completion:(CDUnknownBlockType)arg4;
+ (id)versionsForAnalysisWithWorkerType:(short)arg1 additionalStatesToExclude:(id)arg2 fetchLimit:(unsigned long long)arg3 database:(id)arg4 error:(id *)arg5;
+ (id)filtersForAnalysisInDatabase:(id)arg1;
+ (void)requestAnalysisJobConstraintsForDatabase:(id)arg1 completion:(CDUnknownBlockType)arg2;
+ (void)requestAnalysisProgressCountsForDatabase:(id)arg1 completion:(CDUnknownBlockType)arg2;
+ (void)requestTotalProgressCountsForWorkerType:(short)arg1 states:(id)arg2 database:(id)arg3 completion:(CDUnknownBlockType)arg4;
+ (void)requestAnalysisProgressForDatabase:(id)arg1 completion:(CDUnknownBlockType)arg2;
+ (id)_countOfAnalysisStatesByWorkerTypeForAnalysisState:(int)arg1 orIgnoreUntilDate:(id)arg2 database:(id)arg3;
+ (id)_workerTypesPersistingAnalysisState;
+ (id)descriptionForAnalysisState:(id)arg1;
+ (void)scheduleVisionWorkersForUuids:(id)arg1 database:(id)arg2;
+ (BOOL)isSDOFForCustomRenderType:(long long)arg1;
+ (BOOL)isCompositeHDRForHDRType:(long long)arg1;
+ (BOOL)isCompositeHDRForCustomRenderType:(long long)arg1;
+ (BOOL)isSloMoForType:(unsigned char)arg1 exifAVFPS:(id)arg2;
+ (BOOL)isSpecialTypePhotoWithVideoComplement:(unsigned char)arg1;
+ (id)keyPathForBasicPropertyName:(id)arg1 withBasicPrefix:(BOOL)arg2 withTable:(id)arg3;
+ (id)keyPathForIPTCPropertyName:(id)arg1 withTable:(id)arg2;
+ (id)keyPathForExifPropertyName:(id)arg1 withTable:(id)arg2;
+ (void)initializeProperties;
+ (id)versionForMasterPath:(id)arg1 forDatabase:(id)arg2;
+ (id)relativeProxyDirectoryPathForImportGroup:(id)arg1 andUuid:(id)arg2;
+ (id)findBestAvailableStackPickFromVersions:(id)arg1;
+ (id)sortBurstVersions:(id)arg1;
+ (void)updateBestAvailableStackPickForBurstUuids:(id)arg1 inDatabase:(id)arg2;
+ (id)updateVersionsToDeleteWithBurst:(id)arg1 withReason:(unsigned short)arg2;
+ (id)_ingestBurstVersions:(id)arg1 withReason:(unsigned short)arg2 fromImport:(BOOL)arg3;
+ (id)ingestBurstVersions:(id)arg1 withReason:(unsigned short)arg2;
+ (id)importBurstVersions:(id)arg1 withReason:(unsigned short)arg2;
+ (BOOL)photoGroupingVisibilityEnabled;
+ (id)versionsInGroup:(id)arg1 fromDatabase:(id)arg2;
+ (id)autoPickPrimaryGroupingStateForVersions:(id)arg1;
+ (id)_ingestGroupedVersions:(id)arg1 withReason:(unsigned short)arg2 fromImport:(BOOL)arg3;
+ (id)ingestGroupedVersions:(id)arg1 withReason:(unsigned short)arg2;
+ (id)importGroupedVersions:(id)arg1 withReason:(unsigned short)arg2;
@property(retain) RDImageProxyState *imageProxyStateCache; // @synthesize imageProxyStateCache=_imageProxyStateCache;
@property(retain) RDMaster *masterCache; // @synthesize masterCache=_master;
- (void).cxx_destruct;
- (void)prepareForDeleteInTransactionContext:(id)arg1;
- (void)didInsertIntoTransactionContext:(id)arg1;
- (BOOL)persistWithCompletionHandler:(CDUnknownBlockType)arg1;
- (long long)hdrType;
- (BOOL)isSDOF;
- (BOOL)isHDR;
- (id)checkedPlace;
- (id)mostSpecificPlaceLimitedByOverridePlace:(BOOL)arg1;
- (id)mostSpecificPlace;
- (id)smallestPlace;
- (void)verifyOverridePlace;
- (BOOL)fullSizeOutputCanBeLoaded;
- (void)_cleanupAdjustmentDataWithPreviousAdjustmentUuid:(id)arg1;
- (void)cleanupAdjustmentDataWithPreviousAdjustmentUuid:(id)arg1;
- (void)setAdjustmentData:(id)arg1;
- (void)setSceneAdjustmentUuid:(id)arg1;
- (void)setFaceAdjustmentUuid:(id)arg1;
- (BOOL)setProperty:(id)arg1 forKeyPath:(id)arg2 options:(unsigned int)arg3;
- (void)setAdjustmentUuid:(id)arg1;
- (id)unadjustedAdjustmentUuidForCurrentMaster;
- (BOOL)hasUnadjustedAdjustmentUuid;
- (long long)adjustmentDataEditSourceInitialValue;
- (id)adjustmentData;
- (id)originalFileName;
- (id)originalFilePath;
- (id)fileSize;
- (id)importGroupName;
- (id)importGroup;
- (id)attachments;
- (BOOL)hasAttachments;
- (void)setHasKeywordsToUnknown;
- (void)changeIsEditable:(BOOL)arg1;
- (void)changeFlagged:(BOOL)arg1;
- (void)setIsFlagged:(BOOL)arg1;
- (BOOL)isNotEditable;
- (BOOL)isSharingAsset;
- (id)xmpSidecarFilePath;
- (BOOL)isLikelyEditable;
- (BOOL)canBeUsedAsImage;
- (BOOL)isSpecialType:(unsigned char)arg1;
- (BOOL)isSubType:(unsigned short)arg1;
- (BOOL)isType:(unsigned char)arg1;
- (BOOL)isAnimatedImage;
- (BOOL)isMovieOrAudio;
- (BOOL)isAudio;
- (BOOL)isMovie;
- (BOOL)isImage;
- (BOOL)isMasterRAW;
- (BOOL)isMissing;
- (BOOL)isFileOffline;
- (BOOL)isFileAvailable;
- (BOOL)isFileReference;
@property(retain, nonatomic) NSDictionary *legacyEditedIPTCDictionary;
@property(retain) NSTimeZone *imageTimeZone;
- (void)setShowInLibrary:(BOOL)arg1;
- (void)setImageTimeZoneOffsetSeconds:(id)arg1;
- (void)setImageTimeZoneName:(id)arg1;
- (void)setImageDate:(id)arg1;
- (void)invalidateAndReloadForGraphWorker;
- (void)invalidateForGraphWorker;
- (void)incrementStatViewCount:(unsigned long long)arg1 statPlayCount:(unsigned long long)arg2 statShareCount:(unsigned long long)arg3;
- (void)setStatShareCount:(id)arg1;
- (void)setStatPlayCount:(id)arg1;
- (void)setStatViewCount:(id)arg1;
- (void)setIsFavorite:(BOOL)arg1;
- (void)setIsHidden:(BOOL)arg1;
- (id)versionNotInTrash;
- (void)setIsInTrash:(BOOL)arg1 reason:(unsigned short)arg2;
- (void)setIsInTrash:(BOOL)arg1;
- (void)setMainRating:(long long)arg1;
- (void)setOverridePlace:(id)arg1;
- (id)overridePlace;
- (void)setExtendedDescription:(id)arg1;
- (void)setMomentTitle:(id)arg1;
- (void)setName:(id)arg1;
- (void)setFileName:(id)arg1;
- (id)manualAlbums;
- (void)setMaster:(id)arg1;
- (id)loadAndCacheMasterWithPropertyKeys:(id)arg1 readOnly:(BOOL)arg2;
- (id)mutableMasterWithPropertyKeys:(id)arg1;
- (id)mutableMaster;
- (id)masterWithPropertyKeys:(id)arg1;
- (id)master;
- (id)masterAddress;
- (void)makeReadOnly;
- (BOOL)isJpegPrimary;
- (BOOL)isRawPrimary;
- (BOOL)hasRawPlusJpegUuids;
- (id)alternateMaster;
- (id)alternateMasterUuid;
- (id)alternateMasterAddress;
- (void)cacheCanonicalCloudSyncMaster:(id)arg1;
- (id)canonicalCloudSyncMaster;
- (id)canonicalCloudSyncMasterId;
- (id)canonicalCloudSyncMasterUuid;
- (id)nonRawMaster;
- (id)rawMaster;
- (id)momentForVersion;
- (id)makeImageProxyState;
- (void)setImageProxyState:(id)arg1;
- (id)loadAndCacheImageProxyStateWithPropertyKeys:(id)arg1 readOnly:(BOOL)arg2;
- (id)mutableImageProxyStateWithPropertyKeys:(id)arg1;
- (id)mutableImageProxyState;
- (id)imageProxyStateWithPropertyKeys:(id)arg1;
- (id)imageProxyState;
- (BOOL)reloadWithOptions:(id)arg1 dirtyPropertyChanged:(char *)arg2;
- (id)readOnlyCopyLoadedWithOptions:(id)arg1;
- (void)cacheMaster:(id)arg1;
- (void)setValue:(id)arg1 forUndefinedKey:(id)arg2;
- (void)changeValue:(id)arg1 forKeyPath:(id)arg2;
- (void)setValue:(id)arg1 forKeyPath:(id)arg2;
- (void)changeValue:(id)arg1 forKey:(id)arg2 type:(unsigned short)arg3;
- (void)setValue:(id)arg1 forKey:(id)arg2 type:(unsigned short)arg3;
- (id)valueForUndefinedKey:(id)arg1;
- (id)valueForKeyPath:(id)arg1;
- (id)valueForKey:(id)arg1 type:(unsigned short)arg2;
- (id)versionFromMaster;
- (void)resetModelDefaultsAfterCopy;
- (void)setModelDefaults;
- (short)modelType;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)videoComplementResource;
- (void)obtainVideoComplementAccess:(unsigned char)arg1 toURLWithHandler:(CDUnknownBlockType)arg2;
- (BOOL)hasUpToDateVideoComplement;
- (BOOL)hasVideoComplementModel;
- (BOOL)hasVideoComplement;
@property(readonly) struct CGSize videoComplementSize;
- (id)versionOutputVideoComplementResource;
- (void)setVideoComplementMetadata:(id)arg1;
@property(readonly, nonatomic) BOOL videoComplementVisibilityStateFullEditingSupport;
@property(readonly, nonatomic) BOOL videoComplementVisibilityStateExplicit;
@property(readonly, nonatomic) BOOL videoComplementVisibilityStateEvaluated;
@property(readonly, nonatomic) BOOL videoComplementVisibilityStateHidden;
- (void)setPropertiesFromAdditionalProperties;
- (void)setPropertiesFromRenderTypes:(long long)arg1;
- (unsigned char)fallbackPlaybackStyle;
@property(readonly, nonatomic, getter=isRenderEffectPortrait) BOOL renderEffectPortrait;
@property(readonly, nonatomic, getter=isRenderEffectNone) BOOL renderEffectNone;
- (BOOL)isRenderEffect:(unsigned char)arg1;
@property(readonly, nonatomic, getter=isPlaybackVariationLongExposure) BOOL playbackVariationLongExposure;
@property(readonly, nonatomic, getter=isPlaybackVariationMirror) BOOL playbackVariationMirror;
@property(readonly, nonatomic, getter=isPlaybackVariationAutoloop) BOOL playbackVariationAutoloop;
@property(readonly, nonatomic, getter=isPlaybackVariationNone) BOOL playbackVariationNone;
- (BOOL)isPlaybackVariation:(unsigned char)arg1;
@property(readonly, nonatomic, getter=isPlaybackStyleLoopingVideo) BOOL playbackStyleLoopingVideo;
@property(readonly, nonatomic, getter=isPlaybackStyleVideo) BOOL playbackStyleVideo;
@property(readonly, nonatomic, getter=isPlaybackStyleLivePhoto) BOOL playbackStyleLivePhoto;
@property(readonly, nonatomic, getter=isPlaybackStyleAnimatedImage) BOOL playbackStyleAnimatedImage;
@property(readonly, nonatomic, getter=isPlaybackStyleImage) BOOL playbackStyleImage;
@property(readonly, nonatomic, getter=isPlaybackStyleUnsupported) BOOL playbackStyleUnsupported;
- (BOOL)isPlaybackStyle:(unsigned char)arg1;
@property(retain) NSArray *searchTokenData;
- (BOOL)hasLoadedProperties:(id)arg1;
@property(readonly, nonatomic) BOOL allowedForAnalysis;
- (void)insertAnalysisState:(int)arg1 lastIgnoredDate:(id)arg2 ignoreUntilDate:(id)arg3 workerType:(short)arg4 workerFlags:(int)arg5 context:(id)arg6;
- (void)insertAnalysisStatesIntoContext:(id)arg1;
- (void)setAnalysisState:(int)arg1 lastIgnoredDate:(id)arg2 ignoreUntilDate:(id)arg3 workerType:(short)arg4 workerFlags:(int)arg5 allowUnsafeSetProcessed:(BOOL)arg6;
- (int)analysisStateForWorkerType:(short)arg1 outLastIgnoreDate:(id *)arg2 outIgnoreUntilDate:(id *)arg3 outWorkerFlags:(int *)arg4;
- (id)versionAnalysisStateForWorkerType:(short)arg1;
- (id)descriptionForAnalysisStates;
- (id)analysisStates;
- (void)_scheduleUserInitiatedAnalysisJobIfPossibleForWorkerType:(short)arg1 workerFlags:(int)arg2;
- (void)scheduleVisionWorkers;
- (void)incrementStatShareCountCoalesced;
- (void)incrementStatPlayCountCoalesced;
- (void)incrementStatViewCountCoalesced;
- (id)copyImageFileWithoutVideoComplementMetadataFromURL:(id)arg1 subType:(unsigned short)arg2 error:(id *)arg3;
- (void)nullOutGroupingProperties;
- (void)nullOutVideoComplementProperties;
- (void)setPropertiesFromSourceVersion:(id)arg1;
- (id)copyAsStillPhoto;
- (void)duplicateVersionWithCompletedVersion:(id)arg1;
- (void)defaultCopyToVersion:(id)arg1 persist:(BOOL)arg2 reload:(BOOL)arg3;
- (id)duplicateVersionNameWithName:(id)arg1 versionNumber:(long long)arg2;
- (id)defaultCopyAndPersist;
- (void)deepCopyToNewVersion:(id)arg1 defaultCopy:(BOOL)arg2 copyAlbumAssociation:(BOOL)arg3 excludeResourceTypes:(id)arg4;
- (id)deepCopyVersion;
- (unsigned char)generateSpecialTypeWithVideoComplementCheckHandler:(CDUnknownBlockType)arg1;
- (unsigned char)generateSpecialType;
- (unsigned char)generateSpecialTypeForPhotoVideoComplement;
- (BOOL)hasSelfPortraitEXIFAndDimensions;
- (BOOL)hasEmbeddedScreenshotDimensions;
- (BOOL)hasPanoramaDimensions;
- (BOOL)isPhotoWithVideoComplement;
- (BOOL)isTimelapse;
- (BOOL)isSloMo;
- (BOOL)isPanoramic;
- (BOOL)isRawPlusJpeg;
- (BOOL)isNonSpecialMovie;
- (BOOL)isNonSpecialImage;
- (void)setSpecialType:(long long)arg1;
- (id)sceneClassifications;
- (void)mergeSceneClassifications:(id)arg1 algorithmVersion:(unsigned long long)arg2 adjustmentUuid:(id)arg3;
- (void)setSearchablePropertyForKey:(id)arg1 withType:(unsigned short)arg2 withPropertyValue:(id)arg3;
@property(readonly, nonatomic) struct PFIntSize_st masterSize;
- (void)rewriteCustomPropertiesWithMetadata:(id)arg1;
@property(readonly, nonatomic) NSString *formattedPixelSize;
- (id)changeIptcPropertiesFromDictionary:(id)arg1;
- (void)rewriteIptcPropertiesWithMetadata:(id)arg1 clearExistingIptc:(BOOL)arg2 skipKeywords:(BOOL)arg3;
- (void)rewriteIptcPropertiesWithMetadata:(id)arg1 clearExistingIptc:(BOOL)arg2;
- (void)rewriteIptcPropertiesWithMetadata:(id)arg1;
- (void)copyExifIptcPropertiesFromVersion:(id)arg1;
- (id)whiteBalance;
- (BOOL)flashFired;
- (BOOL)hasFlashExifMetadata;
@property(readonly, nonatomic) RDPlaceAnnotation *placeAnnotation;
@property(readonly, nonatomic) BOOL canUseLocation;
- (id)localizedGeoDescriptionIsHome:(char *)arg1;
@property(readonly, nonatomic) RDVersionLocationAddress *locationAddress;
@property(readonly, nonatomic) CLLocation *location;
@property(readonly, nonatomic) CLLocation *exifLocation;
- (void)removeLocation;
- (BOOL)hasLocation;
- (void)changeLocation:(id)arg1 placeAnnotation:(id)arg2;
- (BOOL)_isEqualLocation:(id)arg1 placeAnnotation:(id)arg2;
- (BOOL)_isEqualLatitude:(id)arg1 longitude:(id)arg2;
- (id)cameraModelFromExif;
- (void)rewriteExifPropertiesWithMetadata:(id)arg1 withRewriteFlags:(unsigned short)arg2;
- (id)keyPathForBasicPropertyName:(id)arg1;
- (id)keyPathForIPTCPropertyName:(id)arg1;
- (id)keyPathForExifPropertyName:(id)arg1;
- (void)setSearchablePropertiesForFile:(id)arg1;
- (void)setPropertiesForImageDate:(id)arg1;
- (BOOL)fullSizePreviewUpToDate;
- (void)setFullSizePreviewUpToDate:(BOOL)arg1;
- (void)setProcessedWidth:(id)arg1 height:(id)arg2;
- (void)setMasterWidth:(id)arg1 height:(id)arg2;
- (unsigned char)supportedStatus;
- (long long)renderVersion;
- (BOOL)hasPlaces;
- (id)places;
- (id)placeIds;
- (void)removePlaces:(id)arg1 withReason:(unsigned short)arg2;
- (void)addPlaces:(id)arg1;
- (void)updateKeywordsUsingFlatList:(id)arg1 obeyKeywordLock:(BOOL)arg2;
- (void)updateKeywordsUsingFlatList:(id)arg1;
- (id)keywordNamesWithTruncation:(BOOL)arg1 includeParents:(BOOL)arg2;
- (id)keywordNamesAsString;
- (id)keywordNames;
- (void)setKeywords:(id)arg1;
- (void)loadIptcKeywords;
- (id)sortedKeywords;
- (id)keywords;
- (void)removeKeyword:(id)arg1 withReason:(unsigned short)arg2;
- (void)removeKeywords:(id)arg1 withReason:(unsigned short)arg2;
- (void)addKeywords:(id)arg1;
- (void)addKeyword:(id)arg1;
- (BOOL)isResourceAvailableForImageStyle:(unsigned short)arg1;
- (BOOL)safeDeleteProxyItemAtUrl:(id)arg1;
- (void)safeDeleteFolderPathsWithModelId:(long long)arg1;
- (void)obtainFaceTileAccess:(unsigned char)arg1 faceModel:(id)arg2 toURLWithHandler:(CDUnknownBlockType)arg3;
- (void)obtainFaceTileAccess:(unsigned char)arg1 faceId:(long long)arg2 toURLWithHandler:(CDUnknownBlockType)arg3;
- (void)obtainFaceTileAccess:(unsigned char)arg1 faceLocalIdentifier:(id)arg2 toURLWithHandler:(CDUnknownBlockType)arg3;
- (void)obtainAccess:(unsigned char)arg1 imageStyle:(unsigned short)arg2 adjustmentUuid:(id)arg3 toURLWithHandler:(CDUnknownBlockType)arg4;
- (void)obtainWriteAccessForImageStyle:(unsigned short)arg1 adjustmentUuid:(id)arg2 toURLWithHandler:(CDUnknownBlockType)arg3;
- (void)obtainReadAccessForImageStyle:(unsigned short)arg1 toURLWithHandler:(CDUnknownBlockType)arg2;
- (id)urlWithMode:(unsigned char)arg1 imageStyle:(unsigned short)arg2 adjustmentUuid:(id)arg3 error:(id *)arg4;
- (void)deleteGeneratedImageForStyle:(unsigned short)arg1;
- (void)deleteGeneratedImages;
- (void)deletePreviewImage;
- (id)fileSystemSafeName;
- (BOOL)canUseMasterAsPreview;
- (id)baseProxyPath;
- (void)finalizeTransactionProxies;
- (void)makeStaleProxyForImageStyle:(unsigned short)arg1;
- (void)removeStaleProxyForImageStyle:(unsigned short)arg1 writeUrl:(id)arg2;
- (id)proxyDirPathWithModelId:(long long)arg1;
- (id)proxyDirPath;
- (id)fileNameFromStyle:(unsigned short)arg1 prepend:(id)arg2;
- (void)migrateLegacyProxies;
- (id)legacyAbsoluteFaceTileReadPath:(long long)arg1;
- (id)legacyNonMasterAbsoluteProxyReadPath:(unsigned short)arg1;
- (id)legacyProxyReadPath:(unsigned short)arg1;
- (id)relativeProxyDirectoryPath;
- (void)makeBurstVersionConsistentWithMaster:(id)arg1;
- (void)setRawBurstPickType:(long long)arg1;
- (void)migrationValidateBurstStack;
- (void)findBestAvailableStackPick;
@property(readonly) BOOL isBurstVisible;
- (id)associatedBurstStackPick;
- (id)nonVisibileAssociatedVersions;
- (id)associatedBurstVersions;
- (void)setNotInBurst;
- (void)setBurstUnfavorite;
- (void)setBurstFavorite;
@property(readonly) BOOL isBurstVersion;
@property(readonly) BOOL isBurstFavoritePick;
@property(readonly) BOOL isBurstAutoPick;
@property(readonly) BOOL isBurstStackPick;
- (void)setBurstPickType:(long long)arg1;
- (void)setGroupingState:(long long)arg1;
@property(readonly, nonatomic) BOOL isPrimaryInGroup;
- (void)enumerateVersionsInGroupWithBlock:(CDUnknownBlockType)arg1;
- (BOOL)hideNonPrimaryAssetsInAssetGroup:(id *)arg1;
- (BOOL)revealNonPrimaryAssetsInAssetGroup:(id *)arg1;
- (BOOL)_setVisibilityOnNonPrimaryAssetsInGroup:(BOOL)arg1 error:(id *)arg2;
- (BOOL)makePrimaryAssetInGroup:(id *)arg1;
- (BOOL)makePrimaryVersionForGroupedVersions:(id)arg1 makeAllVisible:(BOOL)arg2 error:(id *)arg3;
- (id)versionsForSearchIndex;
- (void)invalidateSearchIndexForKeyPath:(id)arg1;

// Remaining properties
@property(copy, nonatomic) NSString *cloudIdentifier;
@property(nonatomic) long long cloudLibraryState;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(nonatomic) BOOL hasBeenSynced;
@property(readonly) unsigned long long hash;
@property(nonatomic) BOOL isCloudQuarantined;
@property(readonly) Class superclass;

@end

