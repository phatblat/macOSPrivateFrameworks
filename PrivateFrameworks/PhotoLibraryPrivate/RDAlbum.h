//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <PhotoLibraryPrivate/RDAlbumModel.h>

#import "RDCloudSyncingModel.h"
#import "RDModelAttachments.h"

@class LiRidList, NSString, RDCustomSortOrder;

@interface RDAlbum : RDAlbumModel <RDModelAttachments, RDCloudSyncingModel>
{
    int _spinlock;
    RDCustomSortOrder *_customSortOrder;
    LiRidList *_versionIdsInSearchArea;
    NSString *_themeName;
}

+ (void)prefetchImageDateRanges:(id)arg1;
+ (id)imageDateRangeOfAlbum:(id)arg1 withSortedVersions:(id)arg2;
+ (unsigned long long)countOfAlbumsFromDatabase:(id)arg1 ofType:(long long)arg2;
+ (id)albumsFromDatabase:(id)arg1 ofType:(long long)arg2;
+ (id)albumsOfSubclass:(long long)arg1 inFolder:(id)arg2;
+ (id)albumsFromDatabase:(id)arg1 ofSubclass:(long long)arg2;
+ (id)albumsOfSubclasses:(id)arg1 fromDatabase:(id)arg2;
+ (void)updateKeywordArchiveStringFrom:(id)arg1 to:(id)arg2 inDatabase:(id)arg3;
+ (id)smartAlbumsInFolder:(id)arg1;
+ (id)manualAlbumsForFolder:(id)arg1;
+ (id)manualAlbumIdsForFolder:(id)arg1;
+ (id)filterForAlbumsForFolder:(id)arg1 withSubclass:(long long)arg2;
+ (id)albumsForFolder:(id)arg1;
+ (id)ensureAlbumExistsForFolderRelativePath:(id)arg1 inFolder:(id)arg2 createdContainers:(id)arg3;
+ (void)deleteAlbums:(id)arg1 withReason:(unsigned short)arg2;
+ (void)deleteAlbum:(id)arg1 withReason:(unsigned short)arg2;
+ (id)duplicateAlbums:(id)arg1 newAlbums:(id *)arg2;
+ (id)duplicateAlbum:(id)arg1 newAlbum:(id *)arg2;
+ (id)cpyAlbum:(id)arg1 intoFolder:(id)arg2 newAlbum:(id *)arg3 addVersions:(BOOL)arg4;
+ (id)removeFromTrash:(id)arg1 withReason:(unsigned short)arg2;
+ (id)putInTrash:(id)arg1 withReason:(unsigned short)arg2;
+ (id)allAlbumsFromDatabase:(id)arg1;
+ (id)albumsForFolderUuid:(id)arg1 fromDatabase:(id)arg2;
+ (id)albumsWithType:(long long)arg1 inFolder:(id)arg2;
+ (id)albumWithName:(id)arg1 inFolder:(id)arg2;
+ (id)newPersistedAlbumWithName:(id)arg1 folder:(id)arg2 albumType:(long long)arg3 albumSubclass:(long long)arg4;
+ (void)replaceBuiltinSmartAlbumsForDatabase:(id)arg1;
+ (id)builtInAlbumUUIDs;
+ (id)sortKeyPathFromCloudSortType:(unsigned long long)arg1;
+ (unsigned long long)cloudSortTypeForSortKeyPath:(id)arg1;
+ (long long)albumSubclassFromCloudAlbumType:(unsigned long long)arg1;
+ (unsigned long long)cloudAlbumTypeForAlbumSubclass:(long long)arg1;
+ (id)mutableDictionaryWithPropertyListData:(id)arg1;
+ (id)mutableDictionaryWithData:(id)arg1;
+ (id)dataWithDictionary:(id)arg1;
+ (id)failedUploadsAlbumFromDatabase:(id)arg1;
+ (id)longExposureAlbumFromDatabase:(id)arg1;
+ (id)favoriteMemoriesAlbumFromDatabase:(id)arg1;
+ (id)placesAlbumFromDatabase:(id)arg1;
+ (id)peopleAlbumFromDatabase:(id)arg1;
+ (id)iPhoneFrontCameraAlbumFromDatabase:(id)arg1;
+ (id)photoStreamAlbumFromDatabase:(id)arg1;
+ (id)livePhotoAlbumFromDatabase:(id)arg1;
+ (id)animatedAlbumFromDatabase:(id)arg1;
+ (id)SDOFAlbumFromDatabase:(id)arg1;
+ (id)videoTimelapseAlbumFromDatabase:(id)arg1;
+ (id)videoSloMoAlbumFromDatabase:(id)arg1;
+ (id)screenshotAlbumFromDatabase:(id)arg1;
+ (id)panoramaAlbumFromDatabase:(id)arg1;
+ (id)localPrintAlbumFromDatabase:(id)arg1;
+ (id)trashAlbumFromDatabase:(id)arg1;
+ (id)videoAlbumFromDatabase:(id)arg1;
+ (id)burstsAlbumFromDatabase:(id)arg1;
+ (id)hiddenAlbumFromDatabase:(id)arg1;
+ (id)favoritesAlbumFromDatabase:(id)arg1;
+ (id)recoveredPhotosAlbumFromDatabase:(id)arg1;
+ (id)importHistoryAlbumFromDatabase:(id)arg1;
+ (id)allPhotosAlbumFromDatabase:(id)arg1;
+ (id)queryAlbumFromDatabase:(id)arg1 uuid:(id)arg2 folder:(id)arg3 queryType:(int)arg4 key:(id)arg5 qualifier:(int)arg6 firstValue:(id)arg7 secondValue:(id)arg8 additionalSingleItemQueries:(id)arg9;
+ (id)versionQueryFromDatabase:(id)arg1 uuid:(id)arg2 key:(id)arg3 qualifier:(int)arg4 firstValue:(id)arg5 secondValue:(id)arg6 additionalSingleItemQueries:(id)arg7;
+ (id)specialQueryFromDatabase:(id)arg1 uuid:(id)arg2 specialType:(unsigned char)arg3 mediaType:(unsigned char)arg4;
+ (void)repairCleanUpDeprecatedAlbumsWithRepair:(id)arg1;
+ (void)repairMisplacedBuiltInAlbums:(id)arg1;
+ (void)repairOrphanedAlbumsWithRepair:(id)arg1;
+ (void)repairDuplicateBuiltinAlbumsWithRepair:(id)arg1;
+ (void)registerRepairBlocks:(id)arg1;
@property(retain, nonatomic) NSString *themeName; // @synthesize themeName=_themeName;
- (void).cxx_destruct;
- (id)allPlacesForContainer;
- (unsigned long long)countAllItems;
- (id)totalFileSize;
- (id)imageDateRange;
- (id)changePosterVersionUuid:(id)arg1;
- (BOOL)isDescendantOfFolder:(id)arg1;
- (id)setFolder:(id)arg1;
- (id)folder;
- (void)async_removeAllVersionsWithReason:(unsigned short)arg1;
- (void)removeAllVersionsWithReason:(unsigned short)arg1;
- (id)async_removeVersions:(id)arg1 withReason:(unsigned short)arg2;
- (id)removeVersions:(id)arg1 withReason:(unsigned short)arg2;
- (id)async_addVersions:(id)arg1;
- (id)addVersions:(id)arg1;
- (id)addVersion:(id)arg1;
- (id)calculatePosterVersionUuid;
- (id)sortedVersions;
- (id)versions;
- (id)sortedVersionUuids;
- (id)versionUuids;
- (id)maxImageDate;
- (id)minImageDate;
- (BOOL)isFailedUploadsAlbum;
- (BOOL)isAnimatedAlbum;
- (BOOL)isLongExposureAlbum;
- (BOOL)isLivePhotoAlbum;
- (BOOL)isSDOFAlbum;
- (BOOL)isFavoriteMemoriesAlbum;
- (BOOL)isPlacesAlbum;
- (BOOL)isPeopleAlbum;
- (BOOL)isiPhoneFrontCameraAlbum;
- (BOOL)isPhotoStreamAlbum;
- (BOOL)isLocalPrintAlbum;
- (BOOL)isTimeLapseVideosAlbum;
- (BOOL)isSlowMotionVideosAlbum;
- (BOOL)isVideosAlbum;
- (BOOL)isScreenshotsAlbum;
- (BOOL)isPanoramasAlbum;
- (BOOL)isBurstsAlbum;
- (BOOL)isHiddenAlbum;
- (BOOL)isFavoritesAlbum;
- (BOOL)isAllPhotosAlbum;
- (BOOL)isTrashAlbum;
- (BOOL)isKeepsake;
- (BOOL)isSlideshow;
- (BOOL)isImportHistoryAlbum;
- (BOOL)isLastImportAlbum;
- (BOOL)isPublished;
- (BOOL)isBuiltinSmartAlbum;
- (BOOL)isImplicitSmartAlbum;
- (BOOL)shouldShowTrash;
- (id)albumNotInTrash;
- (void)setIsInTrash:(BOOL)arg1 reason:(unsigned short)arg2;
- (void)setIsInTrash:(BOOL)arg1;
- (BOOL)isMissing;
- (BOOL)shouldShowHiddenVersions;
- (BOOL)isUserSmartAlbum;
- (BOOL)isSmartAlbum;
- (BOOL)isManualAlbum;
- (id)fileSystemSafeName;
- (id)displayName;
- (id)changeName:(id)arg1;
- (void)setName:(id)arg1;
- (void)setAlbumSubclass:(long long)arg1;
- (void)updateRecentUserChangeDate;
- (long long)versionCount;
- (id)attachmentsOfType:(id)arg1;
- (void)updateKeywordArchiveStringFrom:(id)arg1 to:(id)arg2;
- (id)keywordArchiveStringsInUse;
- (id)keywordIdsInUse;
- (id)filterForKeywordIdsInUse;
- (id)importGroups;
- (id)imageDatesInUse;
- (id)customKeysInUse;
- (id)colorLabelIndexesInUse;
- (id)propertiesInUse:(id)arg1 forVersionTable:(id)arg2;
- (id)versionIdsInTrash;
- (void)resetModelDefaultsAfterCopy;
- (void)setModelDefaults;
- (short)modelType;
- (id)assetsPath;
- (id)initWithName:(id)arg1 folder:(id)arg2 albumType:(long long)arg3 albumSubclass:(long long)arg4;
- (id)initWithAddress:(id)arg1 uuid:(id)arg2 name:(id)arg3 folder:(id)arg4 albumType:(long long)arg5 albumSubclass:(long long)arg6;
- (id)initWithAddress:(id)arg1 uuid:(id)arg2 name:(id)arg3 folder:(id)arg4 albumType:(long long)arg5 albumSubclass:(long long)arg6 persist:(BOOL)arg7;
- (id)initWithUuid:(id)arg1 name:(id)arg2 folder:(id)arg3 albumType:(long long)arg4 albumSubclass:(long long)arg5;
- (id)setFolderLegacy:(id)arg1;
- (id)initDetachedWithMomentUuid:(id)arg1 forTable:(id)arg2;
- (id)viewStorageDictionary;
- (BOOL)hasIsHiddenUserQueryCriteria;
- (void)setQueryFolder:(id)arg1;
- (id)queryFolder;
- (void)setQueryFolderUuid:(id)arg1;
- (void)setUserQuery:(id)arg1;
- (id)userQuery;
- (id)userQueryFromData:(id)arg1;
- (void)setFilter:(id)arg1;
- (id)filter;
- (id)filterFromData:(id)arg1;
- (BOOL)isCustomSorted;
- (void)flushCustomSortOrderCache;
- (id)customSortOrder;
- (void)_setCustomSortOrder:(id)arg1;
- (BOOL)_needsCustomSortLoaded;
- (void)setSortAscending:(BOOL)arg1;
- (void)setSortKeyPath:(id)arg1;
- (id)versionIdsInAlbumSearchArea;
- (void)uncacheSearchArea;
- (void)cacheSearchArea;

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

