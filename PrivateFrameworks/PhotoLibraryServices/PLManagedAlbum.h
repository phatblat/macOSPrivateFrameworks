//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <PhotoLibraryServices/_PLManagedAlbum.h>

#import "PLCloudDeletable.h"
#import "PLDeletableManagedObject.h"
#import "PLFileSystemAlbumMetadataPersistence.h"
#import "PLUserEditableAlbumProtocol.h"

@class NSArray, NSDate, NSMutableOrderedSet, NSNumber, NSObject, NSOrderedSet, NSSet, NSString, NSURL, PLManagedAsset, PLPhotoLibrary;

@interface PLManagedAlbum : _PLManagedAlbum <PLUserEditableAlbumProtocol, PLCloudDeletable, PLFileSystemAlbumMetadataPersistence, PLDeletableManagedObject>
{
    BOOL _albumShouldBeAutomaticallyDeleted;
    BOOL _needsPersistenceUpdate;
}

+ (void)clearAssetOrderByAbumUUIDs;
+ (id)validKindsForPersistence;
+ (id)keyPathsForValuesAffectingVideosCount;
+ (id)keyPathsForValuesAffectingPhotosCount;
+ (id)keyPathsForValuesAffectingApproximateCount;
+ (id)cloudUUIDKeyForDeletion;
+ (long long)cloudDeletionTypeForTombstone:(id)arg1;
+ (id)childKeyForOrdering;
+ (id)albumSupportsAssetOrderKeysPredicate;
@property(nonatomic) BOOL needsPersistenceUpdate; // @synthesize needsPersistenceUpdate=_needsPersistenceUpdate;
@property(nonatomic) BOOL albumShouldBeAutomaticallyDeleted; // @synthesize albumShouldBeAutomaticallyDeleted=_albumShouldBeAutomaticallyDeleted;
- (void)refreshAssets;
- (id)filteredIndexesForPredicate:(id)arg1;
- (void)addAssetUsingiTunesAlbumOrder:(id)arg1;
- (void)sortAssetsUsingiTunesAlbumOrder;
- (id)_assetOrderByAssetUUID;
- (id)_orderComparisonValueForAsset:(id)arg1 iTunesLookupOrder:(id)arg2;
- (id)assetOrderByAbumUUIDs;
- (void)removePersistedFileSystemDataWithPathManager:(id)arg1;
- (void)persistMetadataToFileSystemWithPathManager:(id)arg1;
- (BOOL)isValidForPersistence;
- (void)recalculateCachedCounts;
- (void)replaceAssetsAtIndexes:(id)arg1 withAssets:(id)arg2;
- (void)removeAssetsAtIndexes:(id)arg1;
- (void)insertAssets:(id)arg1 atIndexes:(id)arg2;
@property(readonly, nonatomic) unsigned long long videosCount;
@property(readonly, nonatomic) unsigned long long photosCount;
@property(readonly, nonatomic) BOOL isEmpty;
@property(readonly, nonatomic) unsigned long long assetsCount;
@property(readonly, nonatomic) unsigned long long approximateCount;
- (unsigned long long)_albumStandInCount;
- (void)unregisterForChanges;
- (void)registerForChanges;
- (id)_keysToBeObserved;
- (void)_updateKeyAssetsIfNeeded:(id)arg1;
- (void)updateKeyAssetsIfNeeded;
- (id)_expectedKeyAssets:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)removeInternalUserEditableAssetsAtIndexes:(id)arg1;
- (void)insertInternalUserEditableAssets:(id)arg1 atIndexes:(id)arg2 customExportsInfo:(id)arg3 trimmedVideoPathInfo:(id)arg4 commentText:(id)arg5;
- (void)insertInternalUserEditableAssets:(id)arg1 atIndexes:(id)arg2;
- (id)internalUserEditableAssetsAtIndexes:(id)arg1;
- (id)objectInInternalUserEditableAssetsAtIndex:(unsigned long long)arg1;
- (unsigned long long)indexInInternalUserEditableAssetsOfObject:(id)arg1;
- (unsigned long long)countOfInternalUserEditableAssets;
@property(readonly, retain, nonatomic) NSMutableOrderedSet *userEditableAssets;
- (void)didSave;
- (void)willSave;
@property(readonly, copy) NSString *cloudUUIDForDeletion;
@property(readonly) long long cloudDeletionType;
- (void)prepareForDeletion;
@property(readonly, retain, nonatomic) NSMutableOrderedSet *mutableAssets;
- (id)childKeyForOrdering;
- (BOOL)supportsAssetOrderKeys;
- (BOOL)_shouldCopyAssetToCameraRollBeforeAdding:(id)arg1;
- (BOOL)canPerformDeleteOperation;
- (BOOL)canPerformEditOperation:(unsigned long long)arg1;
- (id)descriptionOfAssetOrderValues;
- (id)payloadForChangedKeys:(id)arg1;

// Remaining properties
@property(retain, nonatomic) NSSet *assetOrders; // @dynamic assetOrders;
@property(retain, nonatomic) NSOrderedSet *assets; // @dynamic assets;
@property(nonatomic) unsigned long long batchSize;
@property(readonly, nonatomic) BOOL canContributeToCloudSharedAlbum;
@property(readonly, nonatomic) BOOL canShowAvalancheStacks;
@property(readonly, nonatomic) BOOL canShowComments;
@property(nonatomic) short cloudDeleteState;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, retain, nonatomic) NSDate *endDate;
@property(readonly, retain, nonatomic) NSURL *groupURL;
@property(nonatomic) BOOL hasUnseenContentBoolValue;
@property(readonly) unsigned long long hash;
@property(retain, nonatomic) NSString *importSessionID;
@property(readonly, nonatomic) BOOL isCameraAlbum;
@property(readonly, nonatomic) BOOL isCloudSharedAlbum;
@property(readonly, nonatomic) BOOL isFamilyCloudSharedAlbum;
@property(readonly, nonatomic) BOOL isFolder;
@property(readonly, nonatomic) BOOL isInTrash;
@property(readonly, nonatomic) BOOL isLibrary;
@property(readonly, nonatomic) BOOL isMultipleContributorCloudSharedAlbum;
@property(readonly, nonatomic) BOOL isOwnedCloudSharedAlbum;
@property(readonly, nonatomic) BOOL isPanoramasAlbum;
@property(readonly, nonatomic) BOOL isPendingPhotoStreamAlbum;
@property(readonly, nonatomic) BOOL isPhotoStreamAlbum;
@property(readonly, nonatomic) BOOL isRecentlyAddedAlbum;
@property(readonly, nonatomic) BOOL isStandInAlbum;
@property(readonly, nonatomic) BOOL isUserLibraryAlbum;
@property(retain, nonatomic) PLManagedAsset *keyAsset;
@property(readonly, retain, nonatomic) NSNumber *kind;
@property(readonly, nonatomic) int kindValue;
@property(readonly, copy, nonatomic) NSArray *localizedLocationNames;
@property(readonly, copy, nonatomic) NSString *localizedTitle;
@property(readonly, copy, nonatomic) NSString *name;
@property(nonatomic) int pendingItemsCount;
@property(nonatomic) int pendingItemsType;
@property(readonly, nonatomic) PLPhotoLibrary *photoLibrary;
@property(readonly, retain, nonatomic) NSObject *posterImage;
@property(retain, nonatomic) PLManagedAsset *secondaryKeyAsset;
@property(readonly, nonatomic) BOOL shouldDeleteWhenEmpty;
@property(readonly, copy, nonatomic) CDUnknownBlockType sortingComparator;
@property(readonly, retain, nonatomic) NSDate *startDate;
@property(readonly) Class superclass;
@property(retain, nonatomic) PLManagedAsset *tertiaryKeyAsset;
@property(readonly, retain, nonatomic) NSString *title;
@property(readonly, retain, nonatomic) NSString *uuid;

@end
