//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CloudPhotoLibrary/CPLDirectChangeSession.h>

#import "CPLPullChangeSessionImplementation.h"

@class CPLChangeBatch, CPLEngineChangePipe, CPLEngineClientCache, CPLEngineIDMapping, CPLEngineLibrary, CPLEngineScheduler, CPLEngineScopeStorage, CPLEngineStore, NSString;

@interface CPLDirectPullChangeSession : CPLDirectChangeSession <CPLPullChangeSessionImplementation>
{
    BOOL _shouldPullAtLeastOneBatch;
    CPLChangeBatch *_pendingAckForBatch;
    CPLChangeBatch *_expandedCloudBatch;
    CPLChangeBatch *_expandedClientBatch;
    BOOL _pushRepositoryIsEmpty;
    CPLChangeBatch *_scopeChangesBatch;
    NSString *_lastSeenLibraryVersion;
    CPLEngineLibrary *_engineLibrary;
    CPLEngineStore *_store;
    CPLEngineScopeStorage *_scopes;
    CPLEngineChangePipe *_pullQueue;
    CPLEngineIDMapping *_idMapping;
    CPLEngineClientCache *_clientCache;
    CPLEngineScheduler *_scheduler;
}

+ (id)selfCrashResetReason;
- (void).cxx_destruct;
- (void)finalizeWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)acknowledgeChangeBatch:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)getChangeBatchWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)beginSessionWithKnownLibraryVersion:(id)arg1 context:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)clientWorkDescription;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
