//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <PhotoLibraryServices/_PLFetchingAlbum.h>

#import "PLCloudDeletable.h"
#import "PLFileSystemAlbumMetadataPersistence.h"

@class NSArray, NSData, NSFetchRequest, NSOrderedSet, NSPredicate, NSString;

@interface PLFetchingAlbum : _PLFetchingAlbum <PLCloudDeletable, PLFileSystemAlbumMetadataPersistence>
{
    unsigned long long _countForDisplay;
    unsigned long long _photosCount;
    unsigned long long _videosCount;
    int _emptyState;
    NSArray *_cachedKeyAssets;
    BOOL _needsPersistenceUpdate;
    NSPredicate *_ALAssetsGroupFilterPredicate;
    unsigned long long _batchSize;
}

+ (long long)cloudDeletionTypeForTombstone:(id)arg1;
+ (id)cloudUUIDKeyForDeletion;
+ (id)validKindsForPersistence;
+ (id)sortDescriptorsForAlbumKind:(int)arg1;
+ (id)predicateForAlbumKind:(int)arg1;
+ (id)_panoramasAlbumPredicate;
+ (BOOL)contextShouldIgnoreChangesForALAssetsGroupFilterPredicate;
+ (BOOL)contextShouldIgnoreChangesForFetchRequest;
+ (BOOL)contextShouldIgnoreChangesForFetchedAssets;
@property(nonatomic) BOOL needsPersistenceUpdate; // @synthesize needsPersistenceUpdate=_needsPersistenceUpdate;
@property(nonatomic) unsigned long long batchSize; // @synthesize batchSize=_batchSize;
@property(retain, nonatomic) NSPredicate *ALAssetsGroupFilterPredicate; // @synthesize ALAssetsGroupFilterPredicate=_ALAssetsGroupFilterPredicate;
- (void).cxx_destruct;
- (void)prepareForDeletion;
@property(readonly) long long cloudDeletionType;
@property(readonly, copy) NSString *cloudUUIDForDeletion;
- (BOOL)isValidForPersistence;
- (void)removePersistedFileSystemDataWithPathManager:(id)arg1;
- (void)persistMetadataToFileSystemWithPathManager:(id)arg1;
- (void)didSave;
- (void)willSave;
- (BOOL)mayHaveAssetsInCommon:(id)arg1;
- (id)fastPointerAccessSetForAssets:(id)arg1;
@property(readonly, nonatomic) BOOL hasAssetsCache;
- (void)updateSnapshotAndClearCaches:(id)arg1;
- (void)setTertiaryKeyAsset:(id)arg1;
- (void)setSecondaryKeyAsset:(id)arg1;
- (void)setKeyAsset:(id)arg1;
- (id)tertiaryKeyAsset;
- (id)secondaryKeyAsset;
- (id)keyAsset;
- (id)_cachedKeyAssets;
- (id)filteredIndexesForPredicate:(id)arg1;
- (void)batchFetchAssets:(id)arg1;
- (BOOL)canPerformEditOperation:(unsigned long long)arg1;
- (unsigned long long)countForAssetsOfKind:(short)arg1;
- (unsigned long long)_fetchedCountForAssetsOfKind:(short)arg1;
- (BOOL)isEmpty;
- (unsigned long long)approximateCount;
- (unsigned long long)count;
- (id)mutableAssets;
- (void)setAssets:(id)arg1;
- (id)assets;
- (id)_performFetchWithRequest:(id)arg1;
- (id)primitiveAssets;
@property(readonly, nonatomic) NSPredicate *extraFilterPredicate;
@property(retain, nonatomic) NSFetchRequest *fetchRequest;
- (void)setupFetchRequest;
- (void)didTurnIntoFault;
- (void)awakeFromInsert;
- (void)awakeFromFetch;
- (BOOL)validForPersistenceChangedForChangedKeys:(id)arg1;
- (id)payloadForChangedKeys:(id)arg1;

// Remaining properties
@property(nonatomic) short cloudDeleteState;
@property(retain, nonatomic) NSData *customQueryParameters; // @dynamic customQueryParameters;
@property(retain, nonatomic) NSString *customQueryType; // @dynamic customQueryType;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(retain, nonatomic) NSOrderedSet *fetchedAssets; // @dynamic fetchedAssets;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

