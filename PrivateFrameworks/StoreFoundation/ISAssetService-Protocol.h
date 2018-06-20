//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ISServiceRemoteObject.h"

@class CKSoftwareProduct, NSArray, NSDictionary, NSNumber, NSString, NSURL, SSDownload, SSPurchase;

@protocol ISAssetService <ISServiceRemoteObject>
- (void)localBookWithIdentifier:(NSNumber *)arg1 reply:(void (^)(CKBook *))arg2;
- (void)localBooksWithReply:(void (^)(NSArray *))arg1;
- (void)hasSampleWithItemIdentifier:(NSNumber *)arg1 replyBlock:(void (^)(BOOL, NSDictionary *))arg2;
- (void)softwareUpdateDidFinishBackgroundScanWithInfo:(NSDictionary *)arg1;
- (void)adoptableBundleIdentifiersWithReplyBlock:(void (^)(NSArray *))arg1;
- (void)adoptionCompletedForBundleIDWithInfo:(NSDictionary *)arg1 replyBlock:(void (^)(NSDictionary *))arg2;
- (void)adoptionEligibilityResponseWithReplyBlock:(void (^)(NSDictionary *))arg1;
- (void)adoptBundleIDsWithInfo:(NSDictionary *)arg1 replyBlock:(void (^)(BOOL, NSDictionary *, NSError *))arg2;
- (void)startAdoptionEligibilityCheckWithReplyBlock:(void (^)(BOOL, NSDictionary *))arg1;
- (void)checkIADownloadStatus:(void (^)(NSDictionary *))arg1;
- (void)downloadInstallAssistantForTags:(NSArray *)arg1 bundleIdentifier:(NSString *)arg2;
- (void)dsidLessDownloadHeartbeat;
- (void)dsidLessDownloadWithItemIdentifier:(unsigned long long)arg1 bundleIdentifier:(NSString *)arg2 externalVersionIdentifier:(long long)arg3 options:(NSDictionary *)arg4 replyBlock:(void (^)(BOOL, long long, NSString *, NSError *))arg5;
- (void)processMDMManifestURL:(NSURL *)arg1 options:(NSDictionary *)arg2 storeClientType:(long long)arg3 replyBlock:(void (^)(BOOL, NSArray *, NSError *))arg4;
- (void)vppManagedAppsWithReplyBlock:(void (^)(NSArray *))arg1;
- (void)reloadAvailableVPPUpdatesWithReplyBlock:(void (^)(NSArray *, BOOL))arg1;
- (void)availableVPPUpdatesWithReplyBlock:(void (^)(NSArray *))arg1;
- (void)redownloadWithItemIdentifier:(long long)arg1 bundleIdentifier:(NSString *)arg2 storeClientType:(long long)arg3 replyBlock:(void (^)(BOOL, long long, NSString *, NSError *))arg4;
- (void)showInvite:(NSURL *)arg1 organizationName:(NSString *)arg2 storeClientType:(long long)arg3;
- (void)laterDidNotOccurWithDueToACPower:(BOOL)arg1;
- (void)nowIsLaterWithMode:(long long)arg1 countdownDeferred:(BOOL)arg2;
- (void)updatesForTags:(NSArray *)arg1 replyBlock:(void (^)(NSArray *))arg2;
- (void)didInteractivelyPurchaseItemIdentifier:(unsigned long long)arg1 success:(BOOL)arg2;
- (void)willInteractivelyPurchaseItemIdentifier:(unsigned long long)arg1 replyBlock:(void (^)(BOOL))arg2;
- (void)managedOSInstallWakeUpReceived;
- (void)majorOSUpdateHasDownloadedToPath:(NSString *)arg1 replyBlock:(void (^)(BOOL))arg2;
- (void)updateAutoInfoWithToken:(NSString *)arg1 replyBlock:(void (^)(NSDictionary *))arg2;
- (void)promptUserToOptInForAutoUpdateWithShowNotification:(BOOL)arg1;
- (void)shouldPromptForAutoUpdateOptInWithReplyBlock:(void (^)(BOOL))arg1;
- (void)isAutoUpdateEnabledWithReplyBlock:(void (^)(BOOL))arg1;
- (void)installedUpdatesJournalWithReplyBlock:(void (^)(NSArray *))arg1;
- (void)cancelUpdatesToBeInstalledLater;
- (void)appUpdatesToInstallLaterWithReplyBlock:(void (^)(NSArray *))arg1;
- (void)queueOSUpdatesForLaterInstall:(NSArray *)arg1 withMode:(long long)arg2 completionHandler:(void (^)(NSError *))arg3;
- (void)installAvailableUpdatesLaterWithMode:(long long)arg1;
- (void)shouldOfferDoItLaterForAvailableUpdatesWithReplyBlock:(void (^)(BOOL))arg1;
- (void)removeUpdateFromInstallLaterWithBundleID:(NSString *)arg1;
- (void)didFinishDownloadForUpdateWithItemIdentifier:(unsigned long long)arg1 didInstall:(BOOL)arg2;
- (void)willStartDownloadForUpdateWithIdentifier:(unsigned long long)arg1;
- (void)removeOSUpdateScanObserver:(id <ISOSUpdateScanObserver>)arg1;
- (void)addOSUpdateScanObserver:(id <ISOSUpdateScanObserver>)arg1;
- (void)startOSUpdateScanWithForceFullScan:(BOOL)arg1 reportProgressImmediately:(BOOL)arg2 launchedFromNotification:(BOOL)arg3 userHasSeenAllUpdates:(BOOL)arg4 checkForOtherUpdates:(BOOL)arg5;
- (void)unhideAllOSUpdatesWithReplyBlock:(void (^)(BOOL))arg1;
- (void)hideOSUpdatesWithProductKeys:(NSArray *)arg1 withReplyBlock:(void (^)(BOOL))arg2;
- (void)osUpdateScanInProgressWithReplyBlock:(void (^)(BOOL))arg1;
- (void)checkForUpdatesWithUserHasSeenUpdates:(BOOL)arg1 replyBlock:(void (^)(BOOL, NSArray *, NSError *))arg2;
- (void)cancelOSUpdatesWithProductKeys:(NSArray *)arg1;
- (void)cancelOSUpdates:(NSArray *)arg1;
- (void)removeOSUpdateProgressObserver:(id <ISOSUpdateProgressObserver>)arg1;
- (void)addOSUpdateProgressObserver:(id <ISOSUpdateProgressObserver>)arg1;
- (void)startAppInstallWithTags:(NSArray *)arg1 fallbackPurchase:(SSPurchase *)arg2 reply:(void (^)(BOOL, NSString *, SSPurchaseResponse *, NSError *))arg3;
- (void)startAppUpdates:(NSArray *)arg1 andOSUpdates:(NSArray *)arg2 withDelegate:(id <ISUpdateDelegate>)arg3 replyBlock:(void (^)(BOOL, NSError *))arg4;
- (void)removeAvailableUpdatesObserver:(id <ISAvailableUpdatesObserver>)arg1;
- (void)addAvailableUpdatesObserver:(id <ISAvailableUpdatesObserver>)arg1;
- (void)incompatibleUpdatesWithReplyBlock:(void (^)(NSArray *))arg1;
- (void)availableUpdateWithItemIdentifier:(unsigned long long)arg1 replyBlock:(void (^)(CKUpdate *))arg2;
- (void)availableUpdatesWithReplyBlock:(void (^)(NSArray *))arg1;
- (void)availableUpdatesBadgeCountWithReplyBlock:(void (^)(unsigned long long))arg1;
- (void)requestVPPReceiptRenewalAtPath:(NSString *)arg1 bundleIdentifier:(NSString *)arg2 sandboxOptions:(NSDictionary *)arg3 replyBlock:(void (^)(BOOL, NSError *))arg4;
- (void)lookupAppleIDForApp:(CKSoftwareProduct *)arg1 replyBlock:(void (^)(NSString *))arg2;
- (void)shouldAllowAutoPushForBundleID:(NSString *)arg1 bundleVersion:(NSString *)arg2 replyBlock:(void (^)(BOOL))arg3;
- (void)renewReceiptForApplicationAtPath:(NSString *)arg1 withAppleID:(NSString *)arg2 password:(NSString *)arg3 forceSandbox:(BOOL)arg4 replyBlock:(void (^)(BOOL, NSError *))arg5;
- (void)renewReceiptForApplicationAtPath:(NSString *)arg1 withAppleID:(NSString *)arg2 password:(NSString *)arg3 forceSandbox:(BOOL)arg4 forceRenewal:(BOOL)arg5 relaunchOnRenewal:(BOOL)arg6 replyBlock:(void (^)(BOOL, NSError *))arg7;
- (void)removeSoftwareMapObserver:(NSString *)arg1;
- (void)addSoftwareMapObserver:(id <ISSoftwareMapObserver>)arg1 reply:(void (^)(NSString *))arg2;
- (void)productAtPath:(NSString *)arg1 willBeUpdatedToBundleVersion:(NSString *)arg2 storeVersion:(NSNumber *)arg3;
- (void)productAtPath:(NSString *)arg1 wasUpdated:(BOOL)arg2 toBundleVersion:(NSString *)arg3 storeVersion:(NSNumber *)arg4;
- (void)httpPostBodyWithInstalledApps:(BOOL)arg1 bundledApps:(BOOL)arg2 conditionally:(BOOL)arg3 replyBlock:(void (^)(NSData *, BOOL, BOOL))arg4;
- (void)iconForApplicationWithBundeID:(NSString *)arg1 replyBlock:(void (^)(NSData *))arg2;
- (void)bundleInfoFromBundleAtPath:(NSString *)arg1 replyBlock:(void (^)(NSDictionary *))arg2;
- (void)productPathToUpgradeForBundleIdentifier:(NSString *)arg1 versionNumberString:(NSString *)arg2 replyBlock:(void (^)(NSString *))arg3;
- (void)isTrialVersionOfBundleIdentifier:(NSString *)arg1 replyBlock:(void (^)(BOOL))arg2;
- (void)receiptFromBundleAtPath:(NSString *)arg1 replyBlock:(void (^)(ISPurchaseReceipt *))arg2;
- (void)createSoftwareProductForAppAtPath:(NSString *)arg1 replyBlock:(void (^)(CKSoftwareProduct *))arg2;
- (void)performVPPReceiptRenewalIfNecessaryForDownload:(SSDownload *)arg1 replyBlock:(void (^)(BOOL, NSError *))arg2;
- (void)allProductsWithReplyBlock:(void (^)(NSArray *))arg1;
- (void)productForItemIdentifier:(unsigned long long)arg1 replyBlock:(void (^)(CKSoftwareProduct *))arg2;
- (void)productForBundleIdentifier:(NSString *)arg1 replyBlock:(void (^)(CKSoftwareProduct *))arg2;
@end

