//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSDictionary, NSError, NSObject<OS_dispatch_queue>, NSObject<OS_dispatch_semaphore>, NSObject<OS_dispatch_source>, NSPredicate, NSSet, NSWindow, NSXPCConnection, SUPowerSourceMonitor;

@interface SUSoftwareUpdateController : NSObject
{
    id <SUSoftwareUpdateControllerDelegate> _delegate;
    NSXPCConnection *_connection;
    struct AuthorizationOpaqueRef *_authRef;
    BOOL _destroyAuthRef;
    BOOL _didSendAuth;
    SUPowerSourceMonitor *_powerMonitor;
    BOOL _requireACPower;
    NSDictionary *_installedPrintersPlist;
    NSError *_lastCantStartError;
    NSError *_lastError;
    NSArray *_availableUpdates;
    NSSet *_availableUpdateProductKeys;
    NSObject<OS_dispatch_queue> *_updateQueue;
    double _progressPercentage;
    NSPredicate *_currentPredicate;
    NSArray *_matchingUpdates;
    NSArray *_matchingUpdateKeys;
    long long _currentState;
    double _estimatedTimeForCurrentState;
    double _currentProgressFraction;
    unsigned long long _downloadedSize;
    unsigned long long _totalSize;
    NSObject<OS_dispatch_semaphore> *_runningUpdate;
    NSObject<OS_dispatch_source> *_timerSource;
    BOOL _doingFallbackScan;
    BOOL _didCancel;
    BOOL _usingPredicate;
    BOOL _mdmInitiated;
    NSDictionary *_evaluationMetaInfo;
    NSWindow *_windowForSheet;
}

@property(readonly) unsigned long long totalSize; // @synthesize totalSize=_totalSize;
@property(readonly) unsigned long long downloadedSize; // @synthesize downloadedSize=_downloadedSize;
@property(readonly) long long currentState; // @synthesize currentState=_currentState;
@property(readonly) double estimatedTimeForCurrentState; // @synthesize estimatedTimeForCurrentState=_estimatedTimeForCurrentState;
@property(readonly) double progressPercentage; // @synthesize progressPercentage=_progressPercentage;
@property(copy) NSDictionary *installedPrintersPlist; // @synthesize installedPrintersPlist=_installedPrintersPlist;
@property(retain) NSWindow *windowForSheet; // @synthesize windowForSheet=_windowForSheet;
@property(nonatomic) BOOL requireACPower; // @synthesize requireACPower=_requireACPower;
@property(retain) NSDictionary *evaluationMetaInfo; // @synthesize evaluationMetaInfo=_evaluationMetaInfo;
- (void)updatesQueuedForLaterDidChange;
- (void)hiddenUpdatesDidChange;
- (void)catalogURLDidChange;
- (void)installStateDidChange:(id)arg1 forUpdateWithProductKey:(id)arg2;
- (void)availableUpdatesDidChange;
- (id)_errorWithCode:(long long)arg1 userInfo:(id)arg2 underlyingError:(id)arg3 recoveryAction:(CDUnknownBlockType)arg4;
- (void)_closeNecessaryApplicationsWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)_checkAndInstallMatchingUpdatesWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)_runInstallForProductKey:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)_macBuddyEligibleUpdateProductInfo;
- (void)_scanForMacBuddyEligibleUpdates:(CDUnknownBlockType)arg1;
- (void)_runPredicateInstallWithCompletionHandler:(CDUnknownBlockType)arg1;
- (BOOL)_determineUpdatesToInstallFromAvailable:(id)arg1 filterKey:(id)arg2;
- (void)_notifyUpdateEndedWithError:(id)arg1 didCancel:(BOOL)arg2 signalRunning:(BOOL)arg3;
- (void)_notifyCanUpdateChanged;
- (void)_setAndNotifyEstimatedTimeForCurrentState:(double)arg1;
- (void)_clearAndNotifyProgressPercentage;
- (void)_setAndNotifyProgressPercentage:(double)arg1;
- (void)_setAndNotifyCurrentState:(long long)arg1;
- (BOOL)cancelUpdate;
@property(readonly) BOOL canCancelUpdate;
- (void)_updateProgressParameters;
- (void)startInstallingMacBuddyEligibleUpdates:(id)arg1;
- (void)hasMacBuddyEligibleUpdates:(CDUnknownBlockType)arg1;
- (void)startUpdateForProductWithKey:(id)arg1 replyWhenDone:(CDUnknownBlockType)arg2;
- (void)startUpdateInBackgroundWithPredicate:(id)arg1;
- (void)startUpdateWithPredicate:(id)arg1 replyWhenDone:(CDUnknownBlockType)arg2;
- (id)metadataOfCachedProductsMatchingPredicate:(id)arg1;
- (id)tagsOfCachedProductsMatchingPredicate:(id)arg1;
- (long long)countOfCachedProductsMatchingPredicate:(id)arg1;
- (BOOL)isCacheCurrent;
- (BOOL)_canStartUpdateWithPredicate:(id)arg1 error:(id *)arg2;
- (BOOL)_canStartInstallingMacBuddyEligibleProductKey:(id)arg1 withError:(id *)arg2;
- (BOOL)canStartNonUserInitiatedUpdates;
- (BOOL)canStartUpdateReturningError:(id *)arg1;
@property(readonly) BOOL canStartUpdate;
- (id)_statusForProductKey:(id)arg1;
- (void)suspendBackgroundOperations:(BOOL)arg1 duration:(long long)arg2;
- (BOOL)_authorizeForManagingDaemon;
- (BOOL)_authorizeNowIfNeeded;
- (BOOL)setAuthorization:(struct AuthorizationOpaqueRef *)arg1;
- (BOOL)needsAuthorization;
- (BOOL)_connectToService;
- (void)dealloc;
- (id)initWithDelegate:(id)arg1 localizedProductName:(id)arg2;
- (void)startAdminUpdatesInBackground:(id)arg1 replyWhenDone:(CDUnknownBlockType)arg2;
- (void)overrideDeferralForProductKeys:(id)arg1 replyWhenDone:(CDUnknownBlockType)arg2;
- (void)installOSNotificationBundleIfAvailableReplyWhenDone:(CDUnknownBlockType)arg1;
- (id)getOSNotificationBundleProperties;
- (void)catalogAndScanInfoWithReply:(CDUnknownBlockType)arg1;
- (void)queryForAvailableUpdatesWithReply:(CDUnknownBlockType)arg1;
- (void)initiateBackgroundScanIfNecessary:(BOOL)arg1 replyWhenDone:(CDUnknownBlockType)arg2;
- (void)_queryForAvailableUpdatesWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)_setAvailableUpdates:(id)arg1 currentStatus:(id)arg2;

@end
