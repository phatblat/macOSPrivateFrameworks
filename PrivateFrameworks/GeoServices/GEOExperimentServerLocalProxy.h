//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "GEOExperimentServerProxy.h"
#import "GEOPListStateCapturing.h"
#import "GEOResourceManifestTileGroupObserver.h"

@class GEOABAssignmentRequest, GEOABAssignmentResponse, GEOXPCActivity, NSString;

@interface GEOExperimentServerLocalProxy : NSObject <GEOResourceManifestTileGroupObserver, GEOPListStateCapturing, GEOExperimentServerProxy>
{
    id <GEOExperimentServerProxyDelegate> _delegate;
    GEOABAssignmentResponse *_experimentsInfo;
    struct os_unfair_lock_s _experimentsInfoLock;
    GEOABAssignmentRequest *_currentRequest;
    struct os_unfair_lock_s _currentRequestLock;
    GEOXPCActivity *_activity;
    unsigned long long _stateCaptureHandle;
}

+ (void)cancelOldActivities;
@property(nonatomic) __weak id <GEOExperimentServerProxyDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)resourceManifestManager:(id)arg1 didChangeActiveTileGroup:(id)arg2 fromOldTileGroup:(id)arg3;
- (void)_deleteExperimentInfoFromDisk;
- (id)captureStatePlistWithHints:(struct os_state_hints_s *)arg1;
- (void)_debug_setBucketIdDictionaryRepresentation:(id)arg1;
- (void)_debug_setActiveExperimentBranchDictionaryRepresentation:(id)arg1;
- (void)_debug_fetchAllAvailableExperiments:(CDUnknownBlockType)arg1;
- (void)_loadExperimentsConfiguration:(CDUnknownBlockType)arg1;
- (void)forceUpdate;
- (void)_writeExperimentInfoToDisk:(id)arg1;
- (void)_updateIfNecessary;
- (void)_notifyExperimentsInfoChanged:(id)arg1 current:(id)arg2;
- (BOOL)_removeOldExperimentsInfoIfNecessary:(BOOL)arg1;
- (void)_debug_setQuerySubstring:(id)arg1 forExperimentType:(long long)arg2 dispatcherRequestType:(int)arg3;
@property(readonly, nonatomic) GEOABAssignmentResponse *experimentsInfo;
- (void)_executeRefreshWithinTime:(double)arg1;
- (void)_setupRefreshActivity;
- (void)abAssignUUIDWithSyncCompletionHandler:(CDUnknownBlockType)arg1;
- (void)abAssignUUIDWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)refreshDatasetABStatus:(id)arg1;
- (void)dealloc;
- (id)initWithDelegate:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

