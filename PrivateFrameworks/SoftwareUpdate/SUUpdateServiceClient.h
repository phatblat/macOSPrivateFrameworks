//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SUUpdateClient.h"
#import "SUUpdateService.h"

@class NSMutableArray, NSObject<OS_dispatch_queue>, NSString, NSXPCConnection;

@interface SUUpdateServiceClient : NSObject <SUUpdateService, SUUpdateClient>
{
    NSXPCConnection *_connection;
    int _clientPID;
    int _clientAuditIdentifier;
    unsigned int _clientUID;
    NSString *_clientPath;
    struct AuthorizationOpaqueRef *_installAuth;
    NSMutableArray *_acquiredRights;
    unsigned long long _transactionsStarted;
    NSObject<OS_dispatch_queue> *_transactionQueue;
    NSObject<OS_dispatch_queue> *_lockQueue;
}

+ (void)ignoreClientMessagesForConnection:(id)arg1;
+ (void)authorizeForUpdating:(struct AuthorizationOpaqueRef *)arg1 overConnection:(id)arg2 additionalTransactions:(unsigned long long)arg3 reply:(CDUnknownBlockType)arg4;
+ (void)authorizeForDaemonManagement:(struct AuthorizationOpaqueRef *)arg1 overConnection:(id)arg2 reply:(CDUnknownBlockType)arg3;
+ (void)authorizeForUpdating:(struct AuthorizationOpaqueRef *)arg1 overConnection:(id)arg2 reply:(CDUnknownBlockType)arg3;
@property(readonly, retain) NSXPCConnection *connection; // @synthesize connection=_connection;
- (void)hiddenUpdatesDidChange;
- (void)catalogURLDidChange;
- (void)authChallengeWasReceived:(id)arg1 handled:(char *)arg2;
- (void)installStateDidChange:(id)arg1 forUpdateWithProductKey:(id)arg2;
- (void)availableUpdatesDidChange;
- (void)resetServiceWithReply:(CDUnknownBlockType)arg1;
- (void)dumpServiceDebugInfo;
- (void)bridgeOSUpdateIsPreparedWithReply:(CDUnknownBlockType)arg1;
- (void)bridgeOSUpdatePreparedForProductKeys:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)getInstallHistoryWithReply:(CDUnknownBlockType)arg1;
- (void)evaluateProducts:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)suspendBackgroundTasksTemporarily:(BOOL)arg1 desiredDuration:(long long)arg2 reply:(CDUnknownBlockType)arg3;
- (void)preparationRequiredForProductKeys:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)combinedStatusForUpdatesWithProductKeys:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)conditionsMetForNonUserInitiatedUpdatesWithReply:(CDUnknownBlockType)arg1;
- (void)statusForUpdateWithProductKey:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)takeRequestsToInstallAfterPostLogoutUpdatesWithReply:(CDUnknownBlockType)arg1;
- (void)registerRequestsToInstallAfterPostLogoutUpdates:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)productKeysToAutomaticallyInstallLaterWithReply:(CDUnknownBlockType)arg1;
- (void)setAutomaticallyInstallLater:(BOOL)arg1 forProductKeys:(id)arg2 replyWhenDone:(CDUnknownBlockType)arg3;
- (void)consumeUUIDForToken:(id)arg1 replyWithResult:(CDUnknownBlockType)arg2;
- (void)adoptManualProductArchiveByReadingFromFileHandle:(id)arg1 archiveName:(id)arg2 displayName:(id)arg3 displayVersion:(id)arg4 allowDevSigning:(BOOL)arg5 replyWithResult:(CDUnknownBlockType)arg6;
- (void)stringRepresentationOfLongDescriptionForProductKey:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)stashURLCredential:(id)arg1;
- (void)configureProgressPhasesEnablingFLO:(id)arg1 finishBlock:(CDUnknownBlockType)arg2;
- (void)configureProgressPhasesWithFinishBlock:(CDUnknownBlockType)arg1;
- (void)commitLoginCredentialsDisablingFLO:(BOOL)arg1 hasArmedBaseSystemUpdates:(BOOL)arg2 finishBlock:(CDUnknownBlockType)arg3;
- (void)stashLoginCredentialsEnablingFLO:(BOOL)arg1 reply:(CDUnknownBlockType)arg2;
- (void)productKeysToInstallAfterLogoutWithReply:(CDUnknownBlockType)arg1;
- (void)registerToInstallAfterLogoutForProductKeys:(id)arg1 nowIsLater:(BOOL)arg2 restartNow:(BOOL)arg3 shouldStashCredentials:(BOOL)arg4 reply:(CDUnknownBlockType)arg5;
- (void)cancelUpdatesForProductKeys:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)startRootModeUpdatesForProductKeys:(id)arg1 clientBlocksRestart:(BOOL)arg2 replyWhenDone:(CDUnknownBlockType)arg3;
- (void)startUpdatesForProductKeys:(id)arg1 inForeground:(BOOL)arg2 clientBlocksRestart:(BOOL)arg3 replyWhenDone:(CDUnknownBlockType)arg4;
- (void)startInstallingAdminUpdates:(id)arg1 replyWhenDone:(CDUnknownBlockType)arg2;
- (void)startDownloadingForProductKeys:(id)arg1 replyWhenDone:(CDUnknownBlockType)arg2;
- (void)calculateDiskSpaceRequiredForUpdatesWithProductKeys:(id)arg1 downloadingOnly:(BOOL)arg2 reply:(CDUnknownBlockType)arg3;
- (void)buildTagCacheIfNecessaryWithReply:(CDUnknownBlockType)arg1;
- (void)markRampedUpdatesAsSeenWithReply:(CDUnknownBlockType)arg1;
- (void)setProductProperties:(id)arg1 forProductKeys:(id)arg2 replyWhenDone:(CDUnknownBlockType)arg3;
- (void)clearAllHiddenUpdatesWithReply:(CDUnknownBlockType)arg1;
- (void)overrideDeferralForProductKeys:(id)arg1 replyWhenDone:(CDUnknownBlockType)arg2;
- (void)setHidden:(BOOL)arg1 forProductKeys:(id)arg2 replyWhenDone:(CDUnknownBlockType)arg3;
- (void)refreshAvailableUpdatesForCurrentConfigurationLimitedToProductKeys:(id)arg1 distributionEnvironment:(id)arg2 distributionEvalutionMetainfo:(id)arg3 installedPrinters:(id)arg4 mdmInitiated:(BOOL)arg5 preferredLocalizations:(id)arg6 replyWhenDone:(CDUnknownBlockType)arg7;
- (void)progressForRefreshOfAvailableUpdatesWithReply:(CDUnknownBlockType)arg1;
- (void)refreshAvailableUpdates:(BOOL)arg1 preferredLocalizations:(id)arg2 limitedToProductTypes:(id)arg3 replyWhenDone:(CDUnknownBlockType)arg4;
- (void)catalogAndScanInformationWithReply:(CDUnknownBlockType)arg1;
- (void)installedUpdateJournalPrunedAndSortedWithReply:(CDUnknownBlockType)arg1;
- (void)installedUpdateJournalWithReply:(CDUnknownBlockType)arg1;
- (void)catalogInformationWithReply:(CDUnknownBlockType)arg1;
- (void)endTransactions;
- (void)takeInstallNotificationsOfType:(id)arg1 withReply:(CDUnknownBlockType)arg2;
- (void)installStatus:(id)arg1 didChangeExternallyForProductKey:(id)arg2;
- (void)currentDevKeyModeWithReply:(CDUnknownBlockType)arg1;
- (void)clearInvalidationForIdentifier:(id)arg1 version:(id)arg2 forReason:(int)arg3;
- (void)remainingPackageIdentifiersToInstallForProductKey:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)packageReferenceForMatchingIdentifier:(id)arg1 productKey:(id)arg2 invalidatingPrevious:(BOOL)arg3 reply:(CDUnknownBlockType)arg4;
- (void)availableUpdatesOfType:(long long)arg1 withState:(long long)arg2 filteredByState:(unsigned long long)arg3 filterDeferred:(BOOL)arg4 filterDuplicates:(BOOL)arg5 reply:(CDUnknownBlockType)arg6;
- (void)authorizeForManagingDaemonWithExternalFormData:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)authorizeForUpdatingWithExternalFormData:(id)arg1 additionalTransactions:(unsigned long long)arg2 reply:(CDUnknownBlockType)arg3;
- (BOOL)_isAuthorizedToManageDaemon;
- (BOOL)_isAuthorizedForAppleSoftwareAsAdministrator;
- (BOOL)_isAuthorizedForAppleSoftware;
- (void)_noteAuthorizationUsed;
- (void)invalidate;
@property(readonly, copy) NSString *description;
- (void)dealloc;
- (id)initWithConnection:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

