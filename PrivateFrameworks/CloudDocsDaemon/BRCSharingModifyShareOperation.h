//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CloudDocsDaemon/_BRCFrameworkOperation.h>

#import "BRCOperationSubclass.h"

@class BRCItemID, BRCServerZone, CKRecord, CKShare, NSString;

__attribute__((visibility("hidden")))
@interface BRCSharingModifyShareOperation : _BRCFrameworkOperation <BRCOperationSubclass>
{
    BRCServerZone *_serverZone;
    CKShare *_share;
    BRCItemID *_itemID;
    CKRecord *_sharingIdentityPreparedRecord;
}

- (void).cxx_destruct;
- (BOOL)shouldRetryForError:(id)arg1;
- (void)main;
- (void)performAfterPreparingSharingIdentityIfNecessary:(CDUnknownBlockType)arg1;
- (void)_performAfterPreparingSharingIdentityIfNecessaryWhenWantRoutingKey:(BOOL)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_performAfterFetchingiWorkSharingIdentityOnItem:(id)arg1 wantRoutingKey:(BOOL)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_performAfterFetchingiWorkRoutingTokenIfNecessary:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_performAfterFetchingSharingIdentityOnDirectoryItem:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_performAfterFetchingSharingIdentityOnDocumentItem:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_performAfterGettingPublicSharingKeyForRecord:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_performAfterCopyingPublicSharingKeyWithRecordID:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_updateDBAndSyncDownIfNeededWithShare:(id)arg1;
- (id)createActivity;
- (id)initWithName:(id)arg1 zone:(id)arg2 share:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

