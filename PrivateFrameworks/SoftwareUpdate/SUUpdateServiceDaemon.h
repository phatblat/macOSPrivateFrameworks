//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSXPCListenerDelegate.h"
#import "SUUpdateService.h"

@class NSMutableArray, NSMutableDictionary, NSMutableSet, NSObject<OS_dispatch_queue>, NSObject<OS_dispatch_source>, NSString, NSXPCListener, SUPowerAssertionManager, SUProduct;

@interface SUUpdateServiceDaemon : NSObject <SUUpdateService, NSXPCListenerDelegate>
{
    NSXPCListener *_listener;
    NSMutableArray *_clients;
    NSMutableArray *_availableUpdates;
    SUProduct *_adoptedManualProduct;
    NSMutableSet *_approvedStashingTokens;
    SUPowerAssertionManager *_powerAssertionManager;
    long long _didAutoInstallNotifyCount;
    NSMutableArray *_didAutoInstallNotifyStrings;
    NSMutableArray *_additionalPostLogoutInstallRequests;
    NSMutableDictionary *_productsInstalledAfterPostLogoutInstallDictionary;
    NSMutableDictionary *_additionalPackageDigestsByURL;
    NSObject<OS_dispatch_queue> *_serviceQueue;
    NSObject<OS_dispatch_queue> *_updateInfoQueue;
    NSObject<OS_dispatch_queue> *_clientNotifyQueue;
    NSObject<OS_dispatch_queue> *_backgroundActivityQueue;
    NSObject<OS_dispatch_queue> *_saveStateQueue;
    long long _lastThermalEmergencyCount;
    long long _retriesForBackgroundActivity;
    BOOL _postLogoutInstallWillHaveFLO;
    BOOL _saveStateScheduled;
    NSObject<OS_dispatch_source> *_suspendWatchdogTimer;
}

+ (id)sharedUpdateServiceDaemon;
+ (id)daemonTempDirectoryAppendedWithPath:(id)arg1;
+ (id)daemonCacheDirectoryAppendedWithPath:(id)arg1;
- (BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (void)migratePreferencesWithReply:(CDUnknownBlockType)arg1;
- (void)clearCatalogAndNotifyWithReply:(CDUnknownBlockType)arg1;
- (void)setPreferenceObject:(id)arg1 forKey:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (void)preferenceObjectForKey:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (id)_takeAllValidAdditionalPostLogoutInstallRequests;
- (id)_addAdditionalPostLogoutInstallRequests:(id)arg1;
- (void)_runBackgroundActionsOnCurrentQueueIfAppropriate:(char *)arg1;
- (void)_installStateDidChangeForKeys:(id)arg1;
- (void)_refreshLocalUpdateObjects:(id)arg1 afterScan:(BOOL)arg2;
- (void)authChallengeWasReceived:(id)arg1 handled:(char *)arg2;
- (void)resetServiceWithReply:(CDUnknownBlockType)arg1;
- (void)dumpServiceDebugInfo;
- (void)productsInActiveForegroundTransactions:(CDUnknownBlockType)arg1;
- (void)bridgeOSUpdateIsPreparedWithReply:(CDUnknownBlockType)arg1;
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
- (void)_doTheCredsStashEnablingFLO:(BOOL)arg1 reply:(CDUnknownBlockType)arg2;
- (void)productKeysToInstallAfterLogoutWithReply:(CDUnknownBlockType)arg1;
- (void)registerToInstallAfterLogoutForProductKeys:(id)arg1 nowIsLater:(BOOL)arg2 restartNow:(BOOL)arg3 shouldStashCredentials:(BOOL)arg4 reply:(CDUnknownBlockType)arg5;
- (void)_updateProductForPostLogoutInstallResultsNotification:(id)arg1 withStatus:(id)arg2;
- (void)_setProductsForPostLogoutInstallResultsNotification:(id)arg1 nowIsLater:(BOOL)arg2;
- (void)cancelUpdatesForProductKeys:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)startUpdatesForProductKeys:(id)arg1 usingClientAuthorization:(struct AuthorizationOpaqueRef *)arg2 holdingBoostDuringInstall:(BOOL)arg3 usingForeground:(BOOL)arg4 clientBlocksRestart:(BOOL)arg5 allowOnlyAppleSigned:(BOOL)arg6 packageScriptUserID:(unsigned int)arg7 sendingStatusUpdates:(BOOL)arg8 replyWhenDone:(CDUnknownBlockType)arg9;
- (void)startRootModeUpdatesForProductKeys:(id)arg1 clientBlocksRestart:(BOOL)arg2 replyWhenDone:(CDUnknownBlockType)arg3;
- (void)startUpdatesForProductKeys:(id)arg1 inForeground:(BOOL)arg2 clientBlocksRestart:(BOOL)arg3 replyWhenDone:(CDUnknownBlockType)arg4;
- (void)startInstallingAdminUpdates:(id)arg1 replyWhenDone:(CDUnknownBlockType)arg2;
- (void)startStagingUpdatesForProductKey:(id)arg1 usingForeground:(BOOL)arg2 replyWhenDone:(CDUnknownBlockType)arg3;
- (void)startDownloadingForProductKeys:(id)arg1 replyWhenDone:(CDUnknownBlockType)arg2;
- (void)calculateDiskSpaceRequiredForUpdatesWithProductKeys:(id)arg1 downloadingOnly:(BOOL)arg2 reply:(CDUnknownBlockType)arg3;
- (void)popScanBlockingClient;
- (void)preventFurtherScansWhileConnected:(CDUnknownBlockType)arg1;
- (void)buildTagCacheIfNecessaryWithReply:(CDUnknownBlockType)arg1;
- (void)markRampedUpdatesAsSeenWithReply:(CDUnknownBlockType)arg1;
- (void)clearAllHiddenUpdatesWithReply:(CDUnknownBlockType)arg1;
- (void)setProductProperties:(id)arg1 forProductKeys:(id)arg2 replyWhenDone:(CDUnknownBlockType)arg3;
- (void)overrideDeferralForProductKeys:(id)arg1 replyWhenDone:(CDUnknownBlockType)arg2;
- (void)setHidden:(BOOL)arg1 forProductKeys:(id)arg2 replyWhenDone:(CDUnknownBlockType)arg3;
- (void)progressForRefreshOfAvailableUpdatesWithReply:(CDUnknownBlockType)arg1;
- (void)refreshAvailableUpdatesForCurrentConfigurationLimitedToProductTypes:(id)arg1 distributionEnvironment:(id)arg2 distributionEvalutionMetainfo:(id)arg3 installedPrinters:(id)arg4 mdmInitiated:(BOOL)arg5 preferredLocalizations:(id)arg6 replyWhenDone:(CDUnknownBlockType)arg7;
- (void)refreshAvailableUpdatesForCurrentConfigurationLimitedToProductKeys:(id)arg1 distributionEnvironment:(id)arg2 distributionEvalutionMetainfo:(id)arg3 installedPrinters:(id)arg4 mdmInitiated:(BOOL)arg5 preferredLocalizations:(id)arg6 replyWhenDone:(CDUnknownBlockType)arg7;
- (void)refreshAvailableUpdates:(BOOL)arg1 preferredLocalizations:(id)arg2 limitedToProductTypes:(id)arg3 replyWhenDone:(CDUnknownBlockType)arg4;
- (void)catalogAndScanInformationWithReply:(CDUnknownBlockType)arg1;
- (void)installedUpdateJournalPrunedAndSortedWithReply:(CDUnknownBlockType)arg1;
- (void)installedUpdateJournalWithReply:(CDUnknownBlockType)arg1;
- (void)catalogInformationWithReply:(CDUnknownBlockType)arg1;
- (void)endTransactions;
- (void)takeInstallNotificationsOfType:(id)arg1 withReply:(CDUnknownBlockType)arg2;
- (void)performDownloadAndStageWithProductKeys:(id)arg1 downloadOnly:(BOOL)arg2 stageOnly:(BOOL)arg3 reply:(CDUnknownBlockType)arg4;
- (void)installStatus:(id)arg1 didChangeExternallyForProductKey:(id)arg2;
- (void)currentDevKeyModeWithReply:(CDUnknownBlockType)arg1;
- (void)clearInvalidationForIdentifier:(id)arg1 version:(id)arg2 forReason:(int)arg3;
- (void)fetchMajorOSInfoForProductKey:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)remainingPackageIdentifiersToInstallForProductKey:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)packageReferenceForMatchingIdentifier:(id)arg1 productKey:(id)arg2 invalidatingPrevious:(BOOL)arg3 reply:(CDUnknownBlockType)arg4;
- (void)availableUpdatesOfType:(long long)arg1 withState:(long long)arg2 filteredByState:(unsigned long long)arg3 filterDeferred:(BOOL)arg4 filterDuplicates:(BOOL)arg5 reply:(CDUnknownBlockType)arg6;
- (void)authorizeForManagingDaemonWithExternalFormData:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)authorizeForUpdatingWithExternalFormData:(id)arg1 additionalTransactions:(unsigned long long)arg2 reply:(CDUnknownBlockType)arg3;
- (void)_saveCurrentStateNoDelay:(BOOL)arg1;
- (BOOL)_unarchiveStateFrom:(id)arg1;
- (void)dumpArchiveState;
- (id)_archivedState;
- (id)_currentClients;
- (void)startListeningForConnections;
- (void)schedulePeriodicActions;
- (void)_scheduleTransientBackgroundActionWithDelay:(long long)arg1 grace:(long long)arg2;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

