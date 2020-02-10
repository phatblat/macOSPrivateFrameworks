//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSManagedObjectContext.h"

@class NSError, NSMutableDictionary, NSMutableSet, PLChangeHandlingContainer, PLDelayedFiledSystemDeletions, PLDelayedSaveActions, PLMergePolicy, PLPhotoLibrary, PLPhotoLibraryPathManager;

@interface PLManagedObjectContext : NSManagedObjectContext
{
    BOOL _hasMetadataChanges;
    BOOL _isConnectedToChangeHandling;
    BOOL _mergingChanges;
    BOOL _savingDuringMerge;
    BOOL _isInitializingSingletons;
    BOOL _isBackingALAssetsLibrary;
    BOOL _isObservingChangesForPTPNotificationDelegate;
    BOOL _needsBackgroundJobProcessing;
    PLMergePolicy *_mergePolicy;
    PLDelayedFiledSystemDeletions *_delayedDeletions;
    NSMutableSet *_avalancheUUIDsForUpdate;
    NSMutableDictionary *_uuidsForCloudDeletion;
    BOOL _syncChangeMarker;
    NSMutableDictionary *_updatedObjectsAttributes;
    NSMutableDictionary *_updatedObjectsRelationships;
    PLPhotoLibrary *_photoLibrary;
    PLPhotoLibraryPathManager *_pathManager;
    PLDelayedSaveActions *_delayedSaveActions;
    PLChangeHandlingContainer *_changeHandlingContainer;
    struct os_unfair_lock_s _invalidationStateLock;
    NSError *_invalidationReason;
    BOOL _regenerateVideoThumbnails;
    int _changeSource;
    id <PLManagedObjectContextPTPNotificationDelegate> _ptpNotificationDelegate;
}

+ (id)sanitizedErrorFromError:(id)arg1;
+ (BOOL)assetsLibraryLoggingEnabled;
+ (BOOL)_isAssetLibraryFetchingAlbum:(id)arg1;
+ (id)changeNotificationObjectIDKeys;
+ (id)changeNotificationObjectIDMutationKeys;
+ (id)changeNotificationObjectKeys;
+ (id)changeNotificationObjectMutationKeys;
+ (void)recordChangedKeys:(id)arg1 forObjectID:(id)arg2 inAttributesByOID:(id)arg3 relationshipsByOID:(id)arg4;
+ (void)recordChangedProperties:(id)arg1 forObjectID:(id)arg2 inAttributesByOID:(id)arg3 relationshipsByOID:(id)arg4;
+ (id)relationshipNamesForIndexValues:(unsigned long long)arg1 entity:(id)arg2;
+ (unsigned long long)indexValueForRelationshipNames:(id)arg1 entity:(id)arg2;
+ (id)attributeNamesForIndexValues:(unsigned long long)arg1 entity:(id)arg2;
+ (unsigned long long)indexValueForAttributeNames:(id)arg1 entity:(id)arg2;
+ (id)_propertyNamesForIndexValues:(unsigned long long)arg1 entity:(id)arg2 propertyNamesByIndexByEntityNames:(id)arg3;
+ (unsigned long long)_indexValueForPropertyNames:(id)arg1 entityName:(id)arg2 indexesByPropertyNamesByEntityNames:(id)arg3;
+ (id)_indexesByRelationshipNamesByEntityNames;
+ (id)_relationshipNamesByIndexByEntityNames;
+ (id)_indexesByAttributeNamesByEntityNames;
+ (id)_attributeNamesByIndexByEntityNames;
+ (void)__prepareEntityPropertyLookups;
+ (id)__processSubEntityByName:(id)arg1 entity:(id)arg2 withEntityData:(id)arg3;
+ (id)__processEntityByName:(id)arg1 obj:(id)arg2;
+ (id)managedObjectModel;
+ (id)managedObjectModelURL;
+ (void)getPersistentStoreURL:(id *)arg1 options:(id *)arg2 forDatabasePath:(id)arg3;
+ (BOOL)hasConfiguredPhotoLibrary;
+ (BOOL)shouldHavePhotoLibrary;
+ (void)removePhotosDatabaseWithPathManager:(id)arg1;
+ (BOOL)canMergeRemoteChanges;
+ (id)contextForManagedObjectLookupItemCache:(id)arg1 coordinator:(id)arg2;
+ (id)contextForRepairingSingletonObjects:(const char *)arg1 libraryURL:(id)arg2 error:(id *)arg3;
+ (id)contextForPhotoLibrary:(id)arg1 automaticallyMerges:(BOOL)arg2 name:(const char *)arg3;
@property(nonatomic) BOOL isBackingALAssetsLibrary; // @synthesize isBackingALAssetsLibrary=_isBackingALAssetsLibrary;
@property(nonatomic) BOOL isInitializingSingletons; // @synthesize isInitializingSingletons=_isInitializingSingletons;
@property(nonatomic) int changeSource; // @synthesize changeSource=_changeSource;
@property(nonatomic) BOOL regenerateVideoThumbnails; // @synthesize regenerateVideoThumbnails=_regenerateVideoThumbnails;
@property(nonatomic) BOOL hasMetadataChanges; // @synthesize hasMetadataChanges=_hasMetadataChanges;
@property(retain, nonatomic) PLDelayedFiledSystemDeletions *delayedDeletions; // @synthesize delayedDeletions=_delayedDeletions;
@property(readonly, nonatomic) BOOL savingDuringMerge; // @synthesize savingDuringMerge=_savingDuringMerge;
@property(readonly, nonatomic) BOOL mergingChanges; // @synthesize mergingChanges=_mergingChanges;
- (void).cxx_destruct;
- (void)tearDownLocalChangeNotifications;
- (void)setupLocalChangeNotifications;
- (void)appendDelayedDeletionsToXPCMessage:(id)arg1;
- (void)_informPTPDelegateAboutChangesFromRemoteContextSaveNotification:(id)arg1;
- (void)_getInsertedIDs:(id)arg1 deletedIDs:(id)arg2 changedIDs:(id)arg3 adjustedIDs:(id)arg4 ofEntityKind:(id)arg5 fromRemoteContextDidSaveObjectIDsNotification:(id)arg6;
- (BOOL)_adjustmentTimestampChangedChangedAttribute:(id)arg1 from:(id)arg2;
- (void)_mergeChangesFromDidSaveDictionary:(id)arg1 usingObjectIDs:(BOOL)arg2;
- (void)resetAllFetchingAlbums;
- (void)_notifyALAssetsLibraryWithChanges:(id)arg1 usingObjectIDs:(BOOL)arg2;
- (id)pl_fetchObjectsWithIDs:(id)arg1;
- (id)pl_fetchObjectsWithIDs:(id)arg1 rootEntity:(id)arg2;
- (void)recordNeedsBackgroundJobProcessing;
- (BOOL)_tooManyAssetChangesToHandle:(unsigned long long)arg1;
- (void)updateTransactionAuthor;
- (BOOL)getAndClearSyncChangeMarker;
- (void)recordSyncChangeMarker;
- (id)getAndClearRecordedObjectsForCloudDeletion;
- (void)_addCloudUUID:(id)arg1 forDeletionType:(long long)arg2;
- (void)recordCloudDeletionForObject:(id)arg1;
- (id)getAndClearRecordedAvalancheUUIDsForUpdate;
- (void)recordAvalancheUUIDForUpdate:(id)arg1;
- (void)registerFilesystemDeletionInfo:(id)arg1;
- (BOOL)hasPreviouslyMergedDeleteForObject:(id)arg1;
- (void)_destroyDelayedSaveActions;
- (void)_createDelayedSaveActionsWithTransaction:(id)arg1;
@property(readonly, nonatomic) PLDelayedSaveActions *delayedSaveActions;
- (void)getAndClearUpdatedObjectsAttributes:(id *)arg1 relationships:(id *)arg2;
- (void)_recordChangedKeys:(id)arg1 forObjectID:(id)arg2;
- (void)recordChangesFromTriggerModifiedObjectIDs:(id)arg1;
- (void)recordManagedObjectWillSave:(id)arg1;
- (void)disconnectFromChangeHandling;
- (void)connectToChangeHandling;
- (BOOL)pl_performWithOptions:(unsigned long long)arg1 andBlock:(CDUnknownBlockType)arg2;
- (void)performWithOptions:(unsigned long long)arg1 andBlock:(CDUnknownBlockType)arg2;
- (void)performBlockAndWait:(CDUnknownBlockType)arg1;
- (void)performBlock:(CDUnknownBlockType)arg1;
- (void)_simulateCrashIfNotAssetsd;
- (BOOL)obtainPermanentIDsForObjects:(id)arg1 error:(id *)arg2;
- (BOOL)save:(id *)arg1;
- (unsigned long long)countForFetchRequest:(id)arg1 error:(id *)arg2;
- (void)_logFaultForPotentialySlowFetchRequeset:(id)arg1;
- (id)executeRequest:(id)arg1 error:(id *)arg2;
- (id)executeFetchRequest:(id)arg1 error:(id *)arg2;
- (id)existingObjectWithID:(id)arg1 error:(id *)arg2;
- (void)invalidateWithReason:(id)arg1;
- (BOOL)isValidForSelector:(SEL)arg1 error:(id *)arg2;
- (id)libraryBundle;
- (id)pathManager;
- (BOOL)isReadOnly;
- (void)withDispatchGroup:(id)arg1 performBlock:(CDUnknownBlockType)arg2;
- (void)setGlobalValue:(id)arg1 forKey:(id)arg2;
- (id)globalValueForKey:(id)arg1;
- (BOOL)isDatabaseCreationContext;
@property(readonly, nonatomic) BOOL isUserInterfaceContext;
@property(nonatomic) __weak id <PLManagedObjectContextPTPNotificationDelegate> ptpNotificationDelegate; // @synthesize ptpNotificationDelegate=_ptpNotificationDelegate;
@property(nonatomic) __weak PLPhotoLibrary *photoLibrary;
- (void)dealloc;
- (id)initWithConcurrencyType:(unsigned long long)arg1 pathManager:(id)arg2 changeHandlingContainer:(id)arg3 coordinator:(id)arg4;
- (id)initWithConcurrencyType:(unsigned long long)arg1 libraryBundle:(id)arg2;

@end
