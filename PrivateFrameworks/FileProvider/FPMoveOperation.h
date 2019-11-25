//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <FileProvider/FPActionOperation.h>

#import "FPDaemonActionOperationClient.h"

@class FPItem, FPMoveInfo, FPProgressManager, NSArray, NSDictionary, NSMutableDictionary, NSMutableSet, NSURL;

@interface FPMoveOperation : FPActionOperation <FPDaemonActionOperationClient>
{
    FPMoveInfo *_info;
    NSArray *__sourceURLs;
    NSArray *__sourceItems;
    NSURL *__destinationURL;
    FPItem *__destinationFolder;
    unsigned long long __lastUsedDatePolicy;
    NSDictionary *__targetFilenamesByURL;
    NSDictionary *__targetFilenamesByItem;
    FPProgressManager *_progressManager;
    BOOL _isScheduledFromThisClient;
    id <NSXPCProxyCreating><FPDaemonActionOperation> _remoteMoveOperation;
    NSMutableSet *_createdOrFailedRoots;
    NSMutableDictionary *_createdItemsByRoot;
    NSMutableDictionary *_placeholderIDsByRoot;
    NSMutableDictionary *_URLByResolvedFPItem;
    NSDictionary *_errorsByItem;
    NSDictionary *_transferResults;
    NSMutableDictionary *_progressByRoot;
    BOOL _shouldBounceOnCollision;
    NSDictionary *_transferLocations;
    NSMutableDictionary *_filenamesByURL;
    CDUnknownBlockType __t_patchActionOperationInfo;
    CDUnknownBlockType __t_remoteOperationWasScheduled;
    CDUnknownBlockType __t_rootCompleted;
}

@property(copy, nonatomic) CDUnknownBlockType _t_rootCompleted; // @synthesize _t_rootCompleted=__t_rootCompleted;
@property(copy, nonatomic) CDUnknownBlockType _t_remoteOperationWasScheduled; // @synthesize _t_remoteOperationWasScheduled=__t_remoteOperationWasScheduled;
@property(copy, nonatomic) CDUnknownBlockType _t_patchActionOperationInfo; // @synthesize _t_patchActionOperationInfo=__t_patchActionOperationInfo;
@property(copy, nonatomic) NSDictionary *progressByRoot; // @synthesize progressByRoot=_progressByRoot;
@property(readonly, nonatomic) NSMutableDictionary *filenamesByURL; // @synthesize filenamesByURL=_filenamesByURL;
@property(readonly, nonatomic) NSDictionary *transferLocations; // @synthesize transferLocations=_transferLocations;
@property(nonatomic) BOOL shouldBounceOnCollision; // @synthesize shouldBounceOnCollision=_shouldBounceOnCollision;
@property(nonatomic) unsigned long long lastUsageUpdatePolicy; // @synthesize lastUsageUpdatePolicy=__lastUsedDatePolicy;
@property(readonly, nonatomic) NSDictionary *transferResults; // @synthesize transferResults=_transferResults;
@property(copy, nonatomic) NSDictionary *targetFilenamesByItem; // @synthesize targetFilenamesByItem=__targetFilenamesByItem;
@property(copy, nonatomic) NSDictionary *targetFilenamesByURL; // @synthesize targetFilenamesByURL=__targetFilenamesByURL;
@property(readonly, nonatomic) NSDictionary *errorsByItem; // @synthesize errorsByItem=_errorsByItem;
- (void).cxx_destruct;
- (id)fp_prettyDescription;
- (void)_scheduleAgainAfterErrorRecovery;
- (void)_t_unblockReader;
- (void)subclassPreflightWithCompletion:(CDUnknownBlockType)arg1;
- (void)_preflightForceBounceIfCopyingOntoSelf;
- (BOOL)_preflightCheckNotMovingIntoSelfWithError:(id *)arg1;
- (BOOL)_preflightCheckProviderCanMoveWithErrors:(id *)arg1;
- (unsigned long long)defaultLastUsedDatePolicy;
@property(readonly, nonatomic) BOOL byCopy;
- (void)presendNotifications;
- (void)_presendNotifications;
- (void)_completedWithResult:(id)arg1 error:(id)arg2;
- (void)completedWithResult:(id)arg1 error:(id)arg2;
- (void)_completedWithResultsByRoot:(id)arg1 errorsByRoot:(id)arg2 error:(id)arg3;
- (void)_recoverFromCollisionError:(id)arg1 withPolicy:(unsigned long long)arg2;
- (void)remoteOperationFinishedSendingPastUpdates;
- (void)remoteOperationCompletedRoot:(id)arg1 resultingItem:(id)arg2 error:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)remoteOperationCreatedRoot:(id)arg1 resultingItem:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)remoteOperationProgressesAreReady;
- (void)cancel;
- (void)_runWithRemoteOperation:(id)arg1;
- (void)actionMain;
- (void)_resolveURLsWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)_recomputeMoveInfoIfNecessary;
- (id)operationDescription;
- (id)initWithSourceURLsAndNames:(id)arg1 destinationFolder:(id)arg2;
- (id)initWithSourceURLs:(id)arg1 destinationFolder:(id)arg2;
- (id)initWithRemoteOperation:(id)arg1 info:(id)arg2;
- (id)initWithItems:(id)arg1 destinationFolder:(id)arg2;
- (id)initWithURLs:(id)arg1 destinationFolder:(id)arg2;
- (id)initWithItems:(id)arg1 destinationURL:(id)arg2;
- (id)initWithSourceItems:(id)arg1 orSourceURLs:(id)arg2 destinationFolder:(id)arg3 orDestinationURL:(id)arg4 action:(id)arg5;
- (void)checkNonEmptyPackage;

@end

