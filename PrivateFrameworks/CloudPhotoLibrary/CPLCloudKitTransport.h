//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CloudPhotoLibrary/CPLPlatformObject.h>

#import "CPLCloudKitTaskController.h"
#import "CPLDuetTicketProviderBudgetDelegate.h"
#import "CPLEngineTransportImplementation.h"

@class CKContainer, CKDatabase, CKRecordZone, CPLCloudKitOperationsTracker, CPLEngineLibrary, CPLLibraryInfo, NSDate, NSObject<OS_dispatch_queue>, NSString;

@interface CPLCloudKitTransport : CPLPlatformObject <CPLDuetTicketProviderBudgetDelegate, CPLEngineTransportImplementation, CPLCloudKitTaskController>
{
    NSObject<OS_dispatch_queue> *_workQueue;
    CPLCloudKitOperationsTracker *_operationTracker;
    BOOL _registeredPushSubscription;
    NSDate *_lastPushRegistrationDate;
    CKContainer *_container;
    CPLLibraryInfo *_cachedLibraryInfo;
    NSDate *_lastLibraryInfoCheckDate;
    CKDatabase *_database;
    CKRecordZone *_primaryZone;
    NSDate *_significantWorkBeginDate;
}

+ (id)_errorsByTaskForTasksByRecordId:(id)arg1 fromUnderlyingError:(id)arg2;
+ (id)_betterErrorForRecordId:(id)arg1 recordError:(id)arg2;
+ (long long)qualityOfServiceForForegroundOperation:(BOOL)arg1 upload:(BOOL)arg2 metadata:(BOOL)arg3;
+ (BOOL)allowsSyncOverCellular;
@property(retain, nonatomic) NSDate *significantWorkBeginDate; // @synthesize significantWorkBeginDate=_significantWorkBeginDate;
@property(retain, nonatomic) CKRecordZone *primaryZone; // @synthesize primaryZone=_primaryZone;
@property(retain, nonatomic) CKDatabase *database; // @synthesize database=_database;
@property(readonly, retain, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
@property(readonly, nonatomic) CPLCloudKitOperationsTracker *operationTracker; // @synthesize operationTracker=_operationTracker;
- (void).cxx_destruct;
- (void)handleCKRecord:(id)arg1;
- (void)updateRecordZone:(id)arg1;
- (void)updateZoneState:(id)arg1;
- (void)processTaskErrorIfNeeded:(id)arg1;
- (void)updateCachedLibraryInfo:(id)arg1;
- (id)cachedLibraryInfo;
@property(readonly, nonatomic, getter=isNetworkConnected) BOOL networkConnected;
@property(readonly, nonatomic) CKRecordZone *recordZone;
- (void)getStatusDictionaryWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)getStatusWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)componentName;
- (void)_setZoneStateEnabled:(BOOL)arg1 withDisabledTime:(id)arg2 deleteTime:(id)arg3;
- (id)tempCKAssetURL;
- (void)setupPushIfNecessary;
- (id)createGroupForPruningCheck;
- (id)createGroupForAnalysisDownload;
- (id)createGroupForMovieStreaming;
- (id)createGroupForResourcesDownload;
- (id)createGroupForThumbnailsDownload;
- (id)createGroupForChangeDownload;
- (id)createGroupForChangeUpload;
- (id)createGroupForLibraryStateCheck;
- (id)createGroupForFeedback;
- (id)createGroupForSetup;
- (id)createGroupForThumbnailPrefetch;
- (id)createGroupForPrefetch;
- (id)createGroupForInitialDownload;
- (id)createGroupForResetSync;
- (id)createGroupForInitialUpload;
- (id)createGroupAllowsCellular:(BOOL)arg1 foreground:(BOOL)arg2 upload:(BOOL)arg3 metadata:(BOOL)arg4;
- (void)noteClientIsEndingSignificantWork;
- (void)noteClientIsBeginningSignificantWork;
- (void)setShouldOverride:(BOOL)arg1 forSystemBudgets:(unsigned long long)arg2;
- (void)getSystemBudgetsWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)setIsSignificantWorkPending:(BOOL)arg1;
- (id)simpleDataForSyncAnchor:(id)arg1;
- (id)bestErrorForUnderlyingError:(id)arg1;
- (void)getPushEnvironmentWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)sendFeedbackTaskForMessages:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)inMemoryDownloadTaskForResource:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)resourcesDownloadTaskWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)rampingRequestTaskForResourceType:(unsigned long long)arg1 numRequested:(unsigned long long)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)resourceCheckTaskForResources:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)resourcePublishTaskForResource:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)downloadBatchTaskForSyncAnchor:(id)arg1 progressHandler:(CDUnknownBlockType)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)queryTaskForCursor:(id)arg1 class:(Class)arg2 progressHandler:(CDUnknownBlockType)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (id)getLibraryInfoAndUpdateState:(BOOL)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (id)uploadBatchTaskForBatch:(id)arg1 progressHandler:(CDUnknownBlockType)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)checkRecordsExistenceTaskForRecords:(id)arg1 fetchRecordProperties:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;
- (id)setupTaskCreateLibraryIfNecessary:(BOOL)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)closeAndDeactivate:(BOOL)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)openWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)isBlockedStatusDidChange;
- (void)_updateBudgets;
@property(readonly, retain, nonatomic) CPLEngineLibrary *engineLibrary;
- (id)initWithAbstractObject:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

