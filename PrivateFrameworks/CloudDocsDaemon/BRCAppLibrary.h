//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "BRCForegroundClient.h"

@class BRCALRowID, BRCAccountSession, BRCFSEventsMonitor, BRCPQLConnection, BRCPrivateClientZone, BRCRelativePath, BRCSyncContext, BRCZoneRowID, BRContainer, BRMangledID, NSMutableDictionary, NSMutableSet, NSNumber, NSString, NSURL, brc_task_tracker;

__attribute__((visibility("hidden")))
@interface BRCAppLibrary : NSObject <BRCForegroundClient>
{
    // Error parsing type: AQ, name: _activeQueries
    // Error parsing type: AQ, name: _activeRecursiveQueries
    // Error parsing type: AQ, name: _activeAliasQueries
    long long _maxLostStamp;
    NSNumber *_deepScanStamp;
    NSString *_deepScanReason;
    NSMutableDictionary *_pendingFileCoordinators;
    NSMutableSet *_XPCClientsUsingUbiquity;
    BRMangledID *_mangledID;
    BRCAccountSession *_session;
    BRCPrivateClientZone *_defaultClientZone;
    BOOL _activated;
    NSMutableSet *_targetAppLibraries;
    NSMutableSet *_targetSharedServerZones;
    NSMutableSet *_foregroundClients;
    BOOL _needsSave;
    BOOL _containerMetadataNeedsSyncUp;
    unsigned int _state;
    brc_task_tracker *_tracker;
    id <BRCAppLibraryDelegate> _delegate;
    BRCPQLConnection *_db;
    BRCALRowID *_dbRowID;
    BRCZoneRowID *_zoneRowID;
    NSString *_appLibraryID;
    NSNumber *_fileID;
    NSNumber *_generationID;
    BRContainer *_containerMetadata;
    NSString *_containerMetadataEtag;
}

@property(nonatomic) BOOL containerMetadataNeedsSyncUp; // @synthesize containerMetadataNeedsSyncUp=_containerMetadataNeedsSyncUp;
@property(retain, nonatomic) NSString *containerMetadataEtag; // @synthesize containerMetadataEtag=_containerMetadataEtag;
@property(readonly, nonatomic) BRContainer *containerMetadata; // @synthesize containerMetadata=_containerMetadata;
@property(nonatomic) __weak BRCPrivateClientZone *defaultClientZone; // @synthesize defaultClientZone=_defaultClientZone;
@property(retain, nonatomic) NSNumber *deepScanStamp; // @synthesize deepScanStamp=_deepScanStamp;
@property(retain, nonatomic) BRCAccountSession *session; // @synthesize session=_session;
@property(retain, nonatomic) NSNumber *generationID; // @synthesize generationID=_generationID;
@property(retain, nonatomic) NSNumber *fileID; // @synthesize fileID=_fileID;
@property(readonly, nonatomic) BRMangledID *mangledID; // @synthesize mangledID=_mangledID;
@property(readonly, nonatomic) NSString *appLibraryID; // @synthesize appLibraryID=_appLibraryID;
@property(retain, nonatomic) BRCZoneRowID *zoneRowID; // @synthesize zoneRowID=_zoneRowID;
@property(retain, nonatomic) BRCALRowID *dbRowID; // @synthesize dbRowID=_dbRowID;
@property(readonly, nonatomic) unsigned int state; // @synthesize state=_state;
@property(nonatomic) BOOL needsSave; // @synthesize needsSave=_needsSave;
@property(readonly, nonatomic) BRCPQLConnection *db; // @synthesize db=_db;
@property(retain, nonatomic) id <BRCAppLibraryDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) long long maxLostStamp; // @synthesize maxLostStamp=_maxLostStamp;
@property(readonly, nonatomic) brc_task_tracker *tracker; // @synthesize tracker=_tracker;
- (void).cxx_destruct;
- (void)setExcludedFromBackupUsingEvictUploadedItemsState;
- (void)setExcludedFromBackup:(BOOL)arg1;
- (void)setIsOverQuota:(BOOL)arg1;
- (id)createAliasWithTarget:(id)arg1 parentPath:(id)arg2 forceReparent:(BOOL)arg3 error:(id *)arg4;
@property(readonly, nonatomic) NSString *pathRelativeToRoot;
- (void)scheduleContainerMetadataSyncUp;
- (void)_updateIsInCloudDocsZone;
- (void)zoneDidChangeMovedToCloudDocsState;
- (void)recreateDocumentsFolderIfNeeded;
- (id)rootItemGlobalID;
- (id)rootItemID;
- (struct BRCDirectoryItem *)fetchRootItem;
- (struct BRCDirectoryItem *)fetchRootItemInDB:(id)arg1;
- (id)documentsFolderItemID;
@property(readonly, nonatomic) BRCRelativePath *documentsPath;
- (BOOL)shouldSaveContainerMetadataServerside;
- (void)notifyClient:(id)arg1 whenFaultingIsDone:(CDUnknownBlockType)arg2;
- (BOOL)wasMovedToCloudDocs;
- (id)containerMetadataFilledWithTCCInfo;
- (id)aliasByUnsaltedBookmarkData:(id)arg1;
- (struct PQLResultSet *)liveAliasesEnumeratorTargetingThisAppLibrary;
- (id)itemByRowID:(unsigned long long)arg1;
- (id)itemByRowID:(unsigned long long)arg1 db:(id)arg2;
- (id)itemIDByRowID:(unsigned long long)arg1;
- (id)itemIDByRowID:(unsigned long long)arg1 db:(id)arg2;
- (void)_addTargetSharedServerZone:(id)arg1;
- (void)_removeTargetSharedServerZoneForSharedServerZone:(id)arg1;
- (void)_addTargetSharedServerZoneForSharedItem:(id)arg1;
- (void)_removedAliasItemForTargetAppLibrary:(id)arg1;
- (void)_addTargetAppLibrary:(id)arg1;
- (void)_addTargetAppLibraryForAliasItem:(id)arg1;
- (void)_removeAllTargetAppLibrariesAndSharedServerZones;
- (void)_resolveTargetAppLibrariesAndSharedClientZones;
- (BOOL)isStillTargetingSharedServerZone:(id)arg1;
- (BOOL)isStillTargetingAppLibrary:(id)arg1;
- (id)_aliasAppLibraryTargetSQLPrefix;
- (struct PQLResultSet *)_targetSharedServerZonesEnumerator;
- (struct PQLResultSet *)_targetAppLibrariesEnumerator;
@property(readonly, nonatomic) NSString *identifier;
- (void)didReceiveHandoffRequest;
@property(readonly, nonatomic) BRCSyncContext *syncContext;
@property(readonly, nonatomic) BRCSyncContext *syncContextIfExists;
- (void)recomputeShouldEvictState;
@property(readonly, nonatomic) BOOL shouldEvictUploadedItems;
@property(readonly, nonatomic) BOOL isForeground;
- (void)removeForegroundClient:(id)arg1;
- (void)addForegroundClient:(id)arg1;
- (unsigned long long)documentCountWithDB:(id)arg1;
- (void)computeDocumentEvictableSizeUsageWithLowTimeDelta:(double)arg1 medTimeDelta:(double)arg2 highTimeDelta:(double)arg3 db:(id)arg4 reply:(CDUnknownBlockType)arg5;
- (void)computeDocumentEvictableSizeUsageWithDB:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (unsigned long long)documentSizeUsageWithDB:(id)arg1;
- (BOOL)hasLocalChanges;
- (BOOL)hasUbiquitousDocuments;
- (BOOL)hasDocumentsOrDirectory;
- (BOOL)hasInitialFaultsEverLive;
- (BOOL)hasInitialFaultsLive;
- (long long)throttleHashWithItemID:(id)arg1;
- (void)didCreateDataScopedItem;
- (void)didCreateDocumentScopedItem;
- (void)didRemoveDocumentsFolder;
- (void)didFindLostItem:(id)arg1 oldAppLibrary:(id)arg2;
- (void)updateFromFSAtPath:(id)arg1;
- (void)fsrootDidMoveToPath:(id)arg1;
- (void)setRootFileID:(unsigned long long)arg1;
- (void)scheduleDeepScanWithReason:(id)arg1;
- (BOOL)markChildrenLostForItemID:(id)arg1 inZone:(id)arg2 fileID:(id)arg3;
- (void)continueMarkingChildrenLostInZone:(id)arg1;
- (BOOL)markChildrenLostForItemID:(id)arg1 inZone:(id)arg2 fileID:(id)arg3 startingFromRow:(unsigned long long)arg4 hasMoreWork:(char *)arg5;
- (unsigned long long)allocateLostStampAddingBackoff:(BOOL)arg1;
- (BOOL)isCoordinationPendingForItem:(id)arg1;
- (void)freeFileCoordinationSlotsAfterDelayForRead:(BOOL)arg1;
- (id)coordinatorForItem:(id)arg1 forRead:(BOOL)arg2;
- (void)cancelWriteCoordinatorForItem:(id)arg1;
- (struct PQLResultSet *)enumerateUserVisibleChildrenDirectoriesOfItemGlobalID:(id)arg1 db:(id)arg2;
- (struct PQLResultSet *)enumerateUserVisibleChildrenOfItemGlobalID:(id)arg1 sortOrder:(unsigned char)arg2 offset:(unsigned long long)arg3 limit:(unsigned long long)arg4 db:(id)arg5;
- (struct PQLResultSet *)itemsEnumeratorChildOf:(id)arg1 rankMin:(unsigned long long)arg2 rankMax:(unsigned long long)arg3 count:(unsigned long long)arg4 db:(id)arg5;
- (struct PQLResultSet *)itemsEnumeratorWithRankMin:(unsigned long long)arg1 rankMax:(unsigned long long)arg2 namePrefix:(id)arg3 shouldIncludeFolders:(BOOL)arg4 shouldIncludeOnlyFolders:(BOOL)arg5 shouldIncludeDocumentsScope:(BOOL)arg6 shouldIncludeDataScope:(BOOL)arg7 shouldIncludeExternalScope:(BOOL)arg8 shouldIncludeTrashScope:(BOOL)arg9 count:(unsigned long long)arg10 db:(id)arg11;
- (id)descriptionWithContext:(id)arg1;
- (id)_unwrappedDescriptionWithContext:(id)arg1;
@property(readonly, copy) NSString *description;
- (BOOL)isEqual:(id)arg1;
@property(readonly) unsigned long long hash;
- (BOOL)isEqualToAppLibrary:(id)arg1;
@property(readonly, nonatomic) BOOL isGreedy;
- (BOOL)hasUbiquityClientsConnected;
- (void)didUpdateDocumentScopePublic;
- (void)clearStateBits:(unsigned int)arg1;
- (BOOL)setStateBits:(unsigned int)arg1;
- (unsigned int)_activateState:(unsigned int)arg1 origState:(unsigned int)arg2;
- (void)activate;
- (void)removeClientUsingUbiquity:(id)arg1;
- (void)addClientUsingUbiquity:(id)arg1;
- (void)cancelFileCoordinators;
- (void)close;
@property(readonly, nonatomic) NSMutableDictionary *plist;
- (BOOL)supportsSpotlightIndexing;
- (void)associateWithClientZone:(id)arg1;
- (void)updateWithPlist:(id)arg1;
- (id)initWithMangledID:(id)arg1 dbRowID:(id)arg2 zoneRowID:(id)arg3 db:(id)arg4 plist:(id)arg5 session:(id)arg6 initialCreation:(BOOL)arg7 createdRootOnDisk:(BOOL)arg8 createdCZMMoved:(BOOL)arg9 rootFileID:(id)arg10;
- (id)init;
- (void)unregisterQueryWithAliases:(BOOL)arg1 isRecursive:(BOOL)arg2;
- (void)registerQueryWithAliases:(BOOL)arg1 isRecursive:(BOOL)arg2;
@property(readonly) BOOL hasActiveAliasQueries;
@property(readonly) BOOL hasActiveRecursiveQueries;
@property(readonly) BOOL hasActiveQueries;
@property(readonly, nonatomic) NSURL *url;
@property(readonly, nonatomic) BRCFSEventsMonitor *fsEventsMonitor;
@property(readonly, nonatomic) BRCRelativePath *root;
@property(readonly, nonatomic) NSString *absolutePath;
- (BOOL)includesDataScope;
@property(readonly, nonatomic) unsigned long long syncedFolderType;
@property(readonly, nonatomic) BOOL isiCloudDesktopAppLibrary;
- (BOOL)isDocumentsAppLibrary;
- (BOOL)isDesktopAppLibrary;
@property(readonly, nonatomic) BOOL isCloudDocsAppLibrary;
@property(readonly, nonatomic) NSString *logName;
- (void)_updateContainerMetadataFromRecord:(id)arg1 stripIcons:(BOOL)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

