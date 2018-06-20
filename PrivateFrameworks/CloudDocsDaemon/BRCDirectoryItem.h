//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CloudDocsDaemon/BRCLocalItem.h>

#import "BRCTopLevelShareable.h"

@class BRCAliasItem, BRCDocumentItem, NSString;

__attribute__((visibility("hidden")))
@interface BRCDirectoryItem : BRCLocalItem <BRCTopLevelShareable>
{
    long long _mtime;
}

@property(readonly, nonatomic) long long mtime; // @synthesize mtime=_mtime;
- (id)asShareableItem;
- (BOOL)startDownloadInTask:(id)arg1 options:(unsigned long long)arg2 error:(id *)arg3;
- (BOOL)evictInTask:(id)arg1 options:(unsigned long long)arg2 error:(id *)arg3;
- (BOOL)_deleteFromDB:(id)arg1 keepAliases:(BOOL)arg2;
- (BOOL)_updateInDB:(id)arg1 diffs:(unsigned long long)arg2;
- (BOOL)_insertInDB:(id)arg1 dbRowID:(unsigned long long)arg2;
- (void)_retryPostponedIfNeededForDiffs:(unsigned long long)arg1;
- (void)markRemovedFromFilesystemForServerEdit:(BOOL)arg1;
- (void)_markLostDirectoryAsAlmostDead;
- (BOOL)_markChildrenLostForDeadParent;
- (BOOL)markChildrenLost;
- (id)clientZonesChildrenNeedingSyncUpAreIn;
- (BOOL)hasPendingLostChildren;
- (BOOL)hasLostChildren;
- (BOOL)hasLiveChildren;
- (BOOL)hasDeadChildren;
- (BOOL)containsPendingUploadOrSyncUp;
- (BOOL)containsPendingDownload;
- (BOOL)containsFault;
- (BOOL)containsOverQuotaItems;
- (BOOL)changedAtRelativePath:(id)arg1 scanPackage:(BOOL)arg2;
- (void)updateItemMetadataFromServerItem:(id)arg1 appliedSharingPermission:(BOOL)arg2;
- (BOOL)updateLocationAndMetaFromFSAtPath:(id)arg1 parentGlobalID:(id)arg2;
- (BOOL)updateFromFSAtPath:(id)arg1 parentGlobalID:(id)arg2;
- (id)_initWithRelativePath:(id)arg1 parentGlobalID:(id)arg2;
- (id)_initWithServerItem:(id)arg1 dbRowID:(unsigned long long)arg2;
- (id)_initFromPQLResultSet:(id)arg1 session:(id)arg2 db:(id)arg3 error:(id *)arg4;
- (BOOL)hasShareIDAndIsOwnedByMe;
@property(readonly, nonatomic) BRCDirectoryItem *asDirectory;
- (unsigned long long)diffAgainstServerItem:(id)arg1;
- (BOOL)isDirectoryWithPackageName;
- (BOOL)isDirectory;

// Remaining properties
@property(readonly, nonatomic) BRCAliasItem *asBRAlias; // @dynamic asBRAlias;
@property(readonly, nonatomic) BRCDocumentItem *asDocument; // @dynamic asDocument;
@property(readonly, nonatomic) NSString *unsaltedBookmarkData; // @dynamic unsaltedBookmarkData;

@end

