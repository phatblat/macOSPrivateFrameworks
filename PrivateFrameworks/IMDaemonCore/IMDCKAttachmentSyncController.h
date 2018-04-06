//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <IMDaemonCore/IMDCKAbstractSyncController.h>

@class CKServerChangeToken, IMDCKAttachmentSyncCKOperationFactory, IMDRecordZoneManager, NSMutableArray, NSMutableDictionary, NSObject<OS_dispatch_queue>, NSObject<OS_xpc_object>;

@interface IMDCKAttachmentSyncController : IMDCKAbstractSyncController
{
    BOOL _assetDownloadInProgress;
    BOOL _shouldCheckDeviceConditions;
    CKServerChangeToken *_latestSyncToken;
    NSObject<OS_dispatch_queue> *_ckQueue;
    IMDRecordZoneManager *_recordZoneManager;
    IMDCKAttachmentSyncCKOperationFactory *_CKOperationFactory;
    id <IMDCKSyncTokenStore> _syncTokenStore;
    NSMutableDictionary *_completionBlocksForAssetFetchOperations;
    NSMutableDictionary *_recordIDToTransferMap;
    CDUnknownBlockType _perTransferProgress;
    NSMutableArray *_downloadAssetsForTransferGUIDs;
    NSObject<OS_xpc_object> *_activity;
}

+ (id)sharedInstance;
@property NSObject<OS_xpc_object> *activity; // @synthesize activity=_activity;
@property(nonatomic) BOOL shouldCheckDeviceConditions; // @synthesize shouldCheckDeviceConditions=_shouldCheckDeviceConditions;
@property(retain, nonatomic) NSMutableArray *downloadAssetsForTransferGUIDs; // @synthesize downloadAssetsForTransferGUIDs=_downloadAssetsForTransferGUIDs;
@property(nonatomic) BOOL assetDownloadInProgress; // @synthesize assetDownloadInProgress=_assetDownloadInProgress;
@property(copy, nonatomic) CDUnknownBlockType perTransferProgress; // @synthesize perTransferProgress=_perTransferProgress;
@property(retain, nonatomic) NSMutableDictionary *recordIDToTransferMap; // @synthesize recordIDToTransferMap=_recordIDToTransferMap;
@property(retain, nonatomic) NSMutableDictionary *completionBlocksForAssetFetchOperations; // @synthesize completionBlocksForAssetFetchOperations=_completionBlocksForAssetFetchOperations;
@property(retain, nonatomic) id <IMDCKSyncTokenStore> syncTokenStore; // @synthesize syncTokenStore=_syncTokenStore;
@property(retain, nonatomic) IMDCKAttachmentSyncCKOperationFactory *CKOperationFactory; // @synthesize CKOperationFactory=_CKOperationFactory;
@property(retain, nonatomic) IMDRecordZoneManager *recordZoneManager; // @synthesize recordZoneManager=_recordZoneManager;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *ckQueue; // @synthesize ckQueue=_ckQueue;
- (void)syncAttachmentDeletesToCloudKit:(CDUnknownBlockType)arg1;
- (void)_deleteAttachmentsWithRecordIDs:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)_copyRecordIDsToDeleteWithLimit:(unsigned long long)arg1;
- (unsigned long long)_attachmentDeleteBatchSize;
- (id)_constructAttachmentRecordIDUsingTombStoneDictionary:(id)arg1;
- (BOOL)__shouldOptimizeAttachmentDefault;
- (id)fileTransferCenter;
- (void)_fetchFileTransfersFromCloudKit:(id)arg1 capturedWithABC:(BOOL)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_processRecordsFetchedForAttachmentPurge:(id)arg1 recordIDsToTransfers:(id)arg2 capturedWithABC:(BOOL)arg3 completion:(CDUnknownBlockType)arg4;
- (void)_validateTransferFromCloudKit:(id)arg1 localTransfer:(id)arg2 validateCompletion:(CDUnknownBlockType)arg3;
- (void)clearLocalSyncState;
- (void)deleteAttachmentZone;
@property(retain, nonatomic) CKServerChangeToken *latestSyncToken; // @synthesize latestSyncToken=_latestSyncToken;
- (void)_migrateSyncToken;
- (void)_resetAttachmentSyncStateForRecord:(id)arg1 toState:(long long)arg2;
- (void)_markTransferAsNotBeingAbleToSyncUsingCKRecord:(id)arg1;
- (void)_kickOffAssetFetchForTransfersIfNeeded;
- (void)_updateTransferUsingCKRecord:(id)arg1 wasFetched:(BOOL)arg2;
- (void)_removeTransferFromiCloudBackupWithGuid:(id)arg1;
- (id)_recordIDsToProcessWithError:(id)arg1 error:(id)arg2;
- (void)_processAssetFetchOperationCompletionBlock:(id)arg1 operationID:(id)arg2 error:(id)arg3;
- (void)_processAssetFetchPerRecordCompletionBlock:(id)arg1 recordID:(id)arg2 error:(id)arg3;
- (void)_processAssetFetchPerRecordProgressBlock:(id)arg1 progress:(double)arg2;
- (void)_processModifyRecordCompletion:(id)arg1 deletedRecordIDs:(id)arg2 error:(id)arg3 completionBlock:(CDUnknownBlockType)arg4;
- (id)_operationErrorForModifyingRecordCompletion:(id)arg1;
- (void)_processRecordZoneChangeTokenUpdated:(id)arg1 zoneID:(id)arg2 clienChangeToken:(id)arg3;
- (void)_processRecordChanged:(id)arg1;
- (void)_processRecordDeletion:(id)arg1;
- (void)_processFetchRecordChangesCompleted:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)_processModifyPerRecordCallBack:(id)arg1 error:(id)arg2;
- (void)_processRecordZoneFetchCompletion:(id)arg1 zoneID:(id)arg2 clientChangeTokenData:(id)arg3 moreComing:(BOOL)arg4 shouldWriteBackChanges:(BOOL)arg5 desiredKeys:(long long)arg6 syncType:(long long)arg7 error:(id)arg8 currentBatchCount:(long long)arg9 maxBatchCount:(long long)arg10 completionBlock:(CDUnknownBlockType)arg11;
- (void)_resetSyncToken;
- (void)deleteAttachmentSyncToken;
- (BOOL)_attachmentZoneCreated;
- (void)_writeCKRecordsToAttachmentZone:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)_fetchAttachmentZoneChangesShouldWriteBackChanges:(BOOL)arg1 desiredKeys:(long long)arg2 syncType:(long long)arg3 currentBatchCount:(long long)arg4 maxBatchCount:(long long)arg5 syncToken:(id)arg6 completionBlock:(CDUnknownBlockType)arg7;
- (void)_fetchAttachmentZoneRecords:(id)arg1 desiredKeys:(long long)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_writeAttachmentsToCloudKit:(CDUnknownBlockType)arg1;
- (unsigned long long)_numberOfAttachmentsToWriteUp;
- (unsigned long long)_numberOfAttachmentsToDownload;
- (void)_scheduleOperation:(id)arg1;
- (id)_attachmentZoneSalt;
- (id)_recordKeyManagerSharedInstance;
- (id)_attachmentZoneID;
- (BOOL)_deviceConditionsAllowsMessageSyncIgnoreFeatureEnabled:(BOOL)arg1;
- (BOOL)_deviceConditionsAllowsMessageSync;
- (id)_ckUtilitiesInstance;
- (id)__databaseRequestForAttachmentsWithAssets;
- (void)downloadAttachmentAssetsWithActivity:(id)arg1 restoringAttachments:(BOOL)arg2 completion:(CDUnknownBlockType)arg3;
- (void)acceptFileTransfer:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)fetchAttachmentDataForTransfers:(id)arg1 highQuality:(BOOL)arg2 perTransferProgress:(CDUnknownBlockType)arg3 completion:(CDUnknownBlockType)arg4;
- (void)syncAttachmentsWithSyncType:(long long)arg1 shouldCheckDeviceConditions:(BOOL)arg2 activity:(id)arg3 completionBlock:(CDUnknownBlockType)arg4;
- (void)_updateAllAttachmentsAsNotNeedingReUpload;
- (BOOL)_shouldMarkAllAttachmentsAsNeedingSync;
- (id)init;
- (id)initWithSyncTokenStore:(id)arg1;
- (void)dealloc;

@end
