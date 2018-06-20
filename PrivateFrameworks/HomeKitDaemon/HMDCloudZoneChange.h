//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "HMFObject.h"

@class CKRecordID, HMDCloudGroupChange, HMDCloudZone, NSArray, NSUUID;

@interface HMDCloudZoneChange : HMFObject
{
    BOOL _temporaryCache;
    NSUUID *_identifier;
    HMDCloudZone *_cloudZone;
    HMDCloudGroupChange *_rootGroupChange;
}

+ (id)shortDescription;
@property(retain, nonatomic) HMDCloudGroupChange *rootGroupChange; // @synthesize rootGroupChange=_rootGroupChange;
@property(nonatomic) __weak HMDCloudZone *cloudZone; // @synthesize cloudZone=_cloudZone;
@property(readonly, nonatomic) NSUUID *identifier; // @synthesize identifier=_identifier;
@property(readonly, nonatomic, getter=isTemporaryCache) BOOL temporaryCache; // @synthesize temporaryCache=_temporaryCache;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSArray *objectChanges;
- (id)changeWithRecordName:(id)arg1;
- (id)changeWithObjectID:(id)arg1;
- (void)flushAllChangesToCache;
- (void)setDeleteAsProcessedWithRecordID:(id)arg1;
- (void)resetRecordWithRecordID:(id)arg1;
- (void)setSaveAsProcessedWithRecord:(id)arg1;
- (void)fetchBatchToUpload:(CDUnknownBlockType)arg1;
- (BOOL)moreChangesToProcess;
- (void)setAllChangedAsProcessed;
- (void)loadCloudRecordsAndDetermineDeletesFromCache:(CDUnknownBlockType)arg1;
- (void)cachedCloudRecordWithObjectID:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)cachedCloudRecordWithObjectID:(id)arg1;
- (BOOL)doesRecordExistInCacheWithObjectID:(id)arg1;
- (BOOL)doesRecordExistWithObjectID:(id)arg1;
@property(readonly, nonatomic) BOOL hasValidChanges;
- (void)removeChangeWithObjectID:(id)arg1;
- (void)addChangeWithDeletedRecordID:(id)arg1;
- (void)addChangeWithRecord:(id)arg1;
- (void)addChangeWithObjectChange:(id)arg1;
@property(readonly, nonatomic) NSArray *processedTransactionStoreRowIDs;
@property(readonly, nonatomic) NSArray *allTransactionStoreRowIDs;
@property(readonly, nonatomic) CKRecordID *privateZoneRootRecordID;
@property(readonly, nonatomic) BOOL controllerIdentifierChanged;
@property(readonly, nonatomic) BOOL encryptionFailed;
@property(readonly, nonatomic) BOOL decryptionFailed;
- (id)description;
- (id)shortDescription;
- (id)initWithZone:(id)arg1 temporaryCache:(BOOL)arg2;
- (id)init;

@end

