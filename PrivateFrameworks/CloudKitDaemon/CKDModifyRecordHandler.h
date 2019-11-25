//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CKDModifyRecordsOperation, CKDPCSCache, CKDPCSManager, CKDProgressTracker, CKDRecordPCSData, CKDSharePCSData, CKDZonePCSData, CKRecord, CKRecordID, NSDictionary, NSError, NSMutableDictionary, NSObject<OS_dispatch_group>, NSString;

__attribute__((visibility("hidden")))
@interface CKDModifyRecordHandler : NSObject
{
    BOOL _isDelete;
    BOOL _saveCompletionBlockCalled;
    BOOL _needsRefetch;
    BOOL _didAttemptDugongKeyRoll;
    BOOL _didRollRecordPCSMasterKey;
    int _saveAttempts;
    CKDModifyRecordsOperation *_operation;
    CKRecord *_record;
    NSObject<OS_dispatch_group> *_pcsGroup;
    CKDRecordPCSData *_recordPCSData;
    CKDSharePCSData *_sharePCSData;
    CKRecord *_serverRecord;
    NSString *_etag;
    unsigned long long _state;
    NSError *_error;
    NSMutableDictionary *_rereferencedAssetArrayByFieldname;
    CKDProgressTracker *_progressTracker;
    long long _batchRank;
    CKDZonePCSData *_sharedZonePCSData;
    NSDictionary *_assetUUIDToExpectedProperties;
    CKRecordID *_recordID;
}

+ (id)_stringForState:(unsigned long long)arg1;
+ (id)modifyHandlerForDeleteWithRecordID:(id)arg1 operation:(id)arg2;
+ (id)modifyHandlerWithRecord:(id)arg1 operation:(id)arg2;
@property(nonatomic) BOOL didRollRecordPCSMasterKey; // @synthesize didRollRecordPCSMasterKey=_didRollRecordPCSMasterKey;
@property(retain, nonatomic) CKRecordID *recordID; // @synthesize recordID=_recordID;
@property(copy, nonatomic) NSDictionary *assetUUIDToExpectedProperties; // @synthesize assetUUIDToExpectedProperties=_assetUUIDToExpectedProperties;
@property(nonatomic) BOOL didAttemptDugongKeyRoll; // @synthesize didAttemptDugongKeyRoll=_didAttemptDugongKeyRoll;
@property(retain, nonatomic) CKDZonePCSData *sharedZonePCSData; // @synthesize sharedZonePCSData=_sharedZonePCSData;
@property(nonatomic) BOOL needsRefetch; // @synthesize needsRefetch=_needsRefetch;
@property(nonatomic) BOOL saveCompletionBlockCalled; // @synthesize saveCompletionBlockCalled=_saveCompletionBlockCalled;
@property(nonatomic) int saveAttempts; // @synthesize saveAttempts=_saveAttempts;
@property(nonatomic) long long batchRank; // @synthesize batchRank=_batchRank;
@property(retain, nonatomic) CKDProgressTracker *progressTracker; // @synthesize progressTracker=_progressTracker;
@property(retain, nonatomic) NSMutableDictionary *rereferencedAssetArrayByFieldname; // @synthesize rereferencedAssetArrayByFieldname=_rereferencedAssetArrayByFieldname;
@property(retain, nonatomic) NSError *error; // @synthesize error=_error;
@property(nonatomic) unsigned long long state; // @synthesize state=_state;
@property(retain, nonatomic) NSString *etag; // @synthesize etag=_etag;
@property(nonatomic) BOOL isDelete; // @synthesize isDelete=_isDelete;
@property(retain, nonatomic) CKRecord *serverRecord; // @synthesize serverRecord=_serverRecord;
@property(retain, nonatomic) CKDSharePCSData *sharePCSData; // @synthesize sharePCSData=_sharePCSData;
@property(retain, nonatomic) CKDRecordPCSData *recordPCSData; // @synthesize recordPCSData=_recordPCSData;
@property(retain, nonatomic) NSObject<OS_dispatch_group> *pcsGroup; // @synthesize pcsGroup=_pcsGroup;
@property(retain, nonatomic) CKRecord *record; // @synthesize record=_record;
@property(nonatomic) __weak CKDModifyRecordsOperation *operation; // @synthesize operation=_operation;
- (void).cxx_destruct;
- (void)_clearRecordProtectionDataForRecord;
- (void)clearProtectionDataForRecord;
- (void)savePCSDataToCache;
- (BOOL)_wrapEncryptedDataOnRecord:(id)arg1;
- (BOOL)_wrapEncryptedDataForRecordValueStore:(id)arg1 withPCS:(struct _OpaquePCSShareProtection *)arg2;
- (void)_pretendToWrapEncryptedDataForRecordValueStore:(id)arg1;
- (BOOL)_wrapEncryptedData:(id)arg1 withPCS:(struct _OpaquePCSShareProtection *)arg2 forField:(id)arg3 recordID:(id)arg4;
- (void)prepareForSave;
- (void)prepareStreamingAsset:(id)arg1 forUploadWithRecord:(id)arg2;
- (BOOL)_prepareAsset:(id)arg1 recordKey:(id)arg2 record:(id)arg3 error:(id *)arg4;
- (id)prepareAssetsForUploadWithError:(id *)arg1;
- (id)assetsWhichNeedRecordFetch;
- (void)fetchSharePCSData;
- (void)_handlePCSData:(id)arg1 withError:(id)arg2;
- (void)_fetchExistingPCSForProvidedPCSData:(id)arg1;
- (void)_unwrapRecordPCSForParent;
- (void)_unwrapRecordPCSWithShareID:(id)arg1;
- (void)_unwrapRecordPCSForZone;
- (void)_continueCreateAndSavePCSWithZonePCS:(id)arg1 sharePCS:(id)arg2;
- (BOOL)_useZoneishPCS;
- (void)_createAndSavePCS;
- (id)_addParentPCS:(id)arg1 toRecordPCS:(id)arg2;
- (void)_fetchParentPCSForData:(id)arg1 withError:(id)arg2;
- (void)_addShareToPCSData:(id)arg1 withError:(id)arg2;
- (void)_fetchSharePCSForID:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)_fetchParentPCSForID:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)_fetchPCSData;
- (void)_reallyFetchPCSDataWithOptions:(unsigned long long)arg1;
- (void)_loadPCSData;
- (BOOL)_createPublicSharingKeyWithError:(id *)arg1;
- (BOOL)_canSetPreviousProtectionEtag;
- (void)fetchRecordPCSData;
- (void)noteSideEffectRecordPendingDelete:(id)arg1;
- (void)noteSideEffectRecordAbsent:(id)arg1;
- (void)noteSideEffectRecordPendingModify:(id)arg1;
- (id)sideEffectRecordIDs;
- (id)description;
@property(readonly, nonatomic) CKDPCSCache *pcsCache;
@property(readonly, nonatomic) CKDPCSManager *pcsManager;
@property(readonly, nonatomic) BOOL isShare;
- (id)_initForDeleteWithRecordID:(id)arg1 operation:(id)arg2;
- (id)_initWithRecord:(id)arg1 operation:(id)arg2;
- (id)_initCommonWithOperation:(id)arg1;

@end

