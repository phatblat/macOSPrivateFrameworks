//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <PhotoLibraryServices/PLGenericAlbum.h>

#import "PLAlbumContainer.h"
#import "PLCloudDeletable.h"
#import "PLDeletableManagedObject.h"
#import "PLFileSystemAlbumMetadataPersistence.h"

@class NSOrderedSet, NSString;

@interface PLManagedFolder : PLGenericAlbum <PLAlbumContainer, PLCloudDeletable, PLFileSystemAlbumMetadataPersistence, PLDeletableManagedObject>
{
    BOOL _needsPersistenceUpdate;
    BOOL _needsFixedOrderKeysComplianceUpdate;
}

+ (id)validKindsForPersistence;
+ (id)cloudUUIDKeyForDeletion;
+ (long long)cloudDeletionTypeForTombstone:(id)arg1;
+ (id)localizedRecoveredTitle;
+ (id)childKeyForOrdering;
+ (id)entityName;
@property(nonatomic) BOOL needsFixedOrderKeysComplianceUpdate; // @synthesize needsFixedOrderKeysComplianceUpdate=_needsFixedOrderKeysComplianceUpdate;
@property(nonatomic) BOOL needsPersistenceUpdate; // @synthesize needsPersistenceUpdate=_needsPersistenceUpdate;
- (void)refreshCollections;
- (void)removeChildCollections:(id)arg1;
- (void)addChildCollections:(id)arg1;
- (void)removeChildCollectionsObject:(id)arg1;
- (void)addChildCollectionsObject:(id)arg1;
- (void)moveChildCollectionsAtIndexes:(id)arg1 toIndex:(unsigned long long)arg2;
- (void)replaceChildCollectionsAtIndexes:(id)arg1 withChildCollections:(id)arg2;
- (void)removeChildCollectionsAtIndexes:(id)arg1;
- (void)insertChildCollections:(id)arg1 atIndexes:(id)arg2;
- (void)replaceObjectInChildCollectionsAtIndex:(unsigned long long)arg1 withObject:(id)arg2;
- (void)removeObjectFromChildCollectionsAtIndex:(unsigned long long)arg1;
- (void)insertObject:(id)arg1 inChildCollectionsAtIndex:(unsigned long long)arg2;
@property(readonly, retain, nonatomic) NSString *_typeDescription;
@property(readonly, retain, nonatomic) NSString *_prettyDescription;
- (void)enforceFixedOrderKeyCompliance;
- (void)removePersistedFileSystemDataWithPathManager:(id)arg1;
- (void)persistMetadataToFileSystemWithPathManager:(id)arg1;
- (BOOL)isValidForPersistence;
@property(readonly, nonatomic) unsigned long long unreadAlbumsCount;
@property(readonly, nonatomic) int filter;
- (void)preheatAlbumsAtIndexes:(id)arg1 forProperties:(id)arg2 relationships:(id)arg3;
- (void)preheatAlbumsForProperties:(id)arg1 relationships:(id)arg2;
- (void)updateAlbumsOrderIfNeeded;
- (BOOL)needsReordering;
- (void)setNeedsReordering;
@property(readonly, copy, nonatomic) CDUnknownBlockType albumsSortingComparator;
- (BOOL)albumHasFixedOrder:(struct NSObject *)arg1;
- (BOOL)canEditAlbums;
- (short)albumListType;
- (BOOL)hasAtLeastOneAlbum;
@property(readonly, nonatomic) unsigned long long albumsCount;
- (id)albums;
- (id)identifier;
- (id)containersRelationshipName;
- (BOOL)canEditContainers;
@property(readonly, nonatomic) unsigned long long containersCount;
- (id)containers;
- (BOOL)canPerformDeleteOperation;
- (BOOL)canPerformEditOperation:(unsigned long long)arg1;
- (unsigned long long)videosCount;
- (unsigned long long)photosCount;
- (BOOL)isEmpty;
- (unsigned long long)count;
- (unsigned long long)assetsCount;
- (unsigned long long)approximateCount;
- (id)mutableAssets;
- (id)assets;
@property(readonly, copy) NSString *cloudUUIDForDeletion;
@property(readonly) long long cloudDeletionType;
- (void)prepareForDeletion;
- (void)didSave;
- (void)willSave;
- (id)childKeyForOrdering;
- (id)payloadForChangedKeys:(id)arg1;
- (id)descriptionOfChildCollectionOrderValues;

// Remaining properties
@property(retain, nonatomic) NSOrderedSet *childCollections; // @dynamic childCollections;
@property(nonatomic) short cloudDeleteState;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) BOOL isFolder;
@property(readonly) Class superclass;

@end
