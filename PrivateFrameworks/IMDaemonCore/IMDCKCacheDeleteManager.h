//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface IMDCKCacheDeleteManager : NSObject
{
    BOOL _alreadyCapturedErrorWithAutoBugCapture;
    BOOL _allowsWritingToDisk;
    BOOL _deviceLowOnDiskSpace;
    unsigned long long _successfullyFetchedAttachments;
    unsigned long long _totalNumberOfAttachmentsToFetch;
    unsigned long long _successfullyValidatedAttachments;
    unsigned long long _totalNumberOfTransfersToValidate;
}

+ (id)sharedInstance;
@property(nonatomic, getter=isDeviceLowOnDiskSpace) BOOL deviceLowOnDiskSpace; // @synthesize deviceLowOnDiskSpace=_deviceLowOnDiskSpace;
@property(nonatomic) BOOL allowsWritingToDisk; // @synthesize allowsWritingToDisk=_allowsWritingToDisk;
@property(nonatomic) BOOL alreadyCapturedErrorWithAutoBugCapture; // @synthesize alreadyCapturedErrorWithAutoBugCapture=_alreadyCapturedErrorWithAutoBugCapture;
@property(nonatomic) unsigned long long totalNumberOfTransfersToValidate; // @synthesize totalNumberOfTransfersToValidate=_totalNumberOfTransfersToValidate;
@property(nonatomic) unsigned long long successfullyValidatedAttachments; // @synthesize successfullyValidatedAttachments=_successfullyValidatedAttachments;
@property(nonatomic) unsigned long long totalNumberOfAttachmentsToFetch; // @synthesize totalNumberOfAttachmentsToFetch=_totalNumberOfAttachmentsToFetch;
@property(nonatomic) unsigned long long successfullyFetchedAttachments; // @synthesize successfullyFetchedAttachments=_successfullyFetchedAttachments;
- (void)_clearMetrics;
- (void)_recordMetrics;
- (void)_fetchTransfersFromCloudKit:(id)arg1 indexOfTransfers:(unsigned long long)arg2 numberOfBatchesToFetch:(unsigned long long)arg3;
- (BOOL)_shouldFetchNextBatch:(unsigned long long)arg1 totalTransfers:(id)arg2;
- (unsigned long long)_indexOfNextBatch:(id)arg1 totalTransfers:(id)arg2 indexOfTransfers:(unsigned long long)arg3;
- (id)_getIndexSetForBatch:(id)arg1 indexOfTransfers:(unsigned long long)arg2;
- (void)_fetchTransfersFromCloudKit:(id)arg1;
- (id)_fileTransfersToValidate:(struct __CFArray *)arg1;
- (void)metricAttachmentsToPurge:(long long)arg1;
- (void)_postTransferInfoOfDeletedTransfers:(id)arg1;
- (long long)_deleteFilesOnDiskAndUpdateTransfers:(id)arg1;
- (id)_fileTransfersToDelete:(struct __CFArray *)arg1;
- (long long)purgeAttachments:(long long)arg1;
- (long long)purgeableAttachmentSize;
- (id)__wrapperAroundCacheDeletePurgingCallback:(id)arg1 urgency:(int)arg2;
- (id)__wrapperAroundCacheDeletePurgeableCallback:(id)arg1 urgency:(int)arg2;
- (long long)_deleteAttachmentsAndReturnBytesDeleted:(int)arg1;
- (long long)_purgeableSpaceGivenUrgency:(int)arg1;
- (id)createDictionaryForNotDeletingAnyAttachments:(id)arg1 urgency:(int)arg2;
- (id)deleteAttachmentsAndReturnBytesDeleted:(id)arg1 urgency:(int)arg2;
- (id)reportAvailableSpaceToBeDeleted:(id)arg1 urgency:(int)arg2;
- (BOOL)canWriteFileOfEstimatedSize:(unsigned long long)arg1 refreshCachedValue:(BOOL)arg2;
- (void)_cacheDeleteSetUp;
- (void)registerWithCacheDelete;
- (id)_ckUtilitiesSharedInstance;

@end

