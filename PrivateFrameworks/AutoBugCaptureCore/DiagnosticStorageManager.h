//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "DiagnosticCaseManagerStorageDelegate.h"
#import "SymptomsFileCleanerDelegate.h"

@class ABCPersistentStoreController, NSMutableArray, NSMutableDictionary, NSObject<OS_dispatch_queue>, NSString, SymptomsFileCleaner;

@interface DiagnosticStorageManager : NSObject <SymptomsFileCleanerDelegate, DiagnosticCaseManagerStorageDelegate>
{
    unsigned long long _lastCalculatedDiskUsageSize;
    NSMutableArray *_casesSortedByDate;
    NSMutableDictionary *_payloadsByCaseID;
    NSObject<OS_dispatch_queue> *_queue;
    ABCPersistentStoreController *_storeController;
    NSString *_logArchivePath;
    SymptomsFileCleaner *_abcCleaner;
}

@property(retain) SymptomsFileCleaner *abcCleaner; // @synthesize abcCleaner=_abcCleaner;
- (void).cxx_destruct;
- (void)purgeAttachmentsAtPaths:(id)arg1;
- (void)didSaveDiagnosticCases;
- (void)fileCleanupComplete;
- (void)_inspectAutoBugCaptureDiskUsage:(CDUnknownBlockType)arg1;
- (void)_sortedAutoBugCaptureDiskUsageByCase:(CDUnknownBlockType)arg1;
- (void)_autoBugCaptureDiskUsageSize:(CDUnknownBlockType)arg1;
- (void)purgeDEPayloadForCase:(id)arg1;
- (void)purgeAttachmentsForAllCases;
- (unsigned long long)deleteAttachmentFiles:(id)arg1;
- (void)deleteAttachmentsAtPaths:(id)arg1;
- (void)deleteAttachmentsForCases:(id)arg1;
- (void)removeCaseStorageAndAttachmentsForCasesWithUUIDs:(id)arg1;
- (void)_purgeCasesWithCaseIDs:(id)arg1;
- (void)_calculatePurgableSizeForDiskUsageLimit:(unsigned long long)arg1 caseIDs:(id *)arg2 reply:(CDUnknownBlockType)arg3;
- (void)_performSizedPurge:(unsigned long long)arg1 reply:(CDUnknownBlockType)arg2;
- (unsigned long long)performPurgeToMeetDiskUsageLimit:(unsigned long long)arg1;
- (unsigned long long)calculatePurgableSizeForDiskUsageLimit:(unsigned long long)arg1;
- (unsigned long long)performPeriodicPurge;
- (void)invalidateDiskUsageStatistics;
- (unsigned long long)allowableDiskUsageSize;
- (id)initWithPersistentStoreController:(id)arg1 logArchiveDirectory:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
