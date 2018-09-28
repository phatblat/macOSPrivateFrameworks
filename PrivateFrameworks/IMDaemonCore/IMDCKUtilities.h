//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IMDCKSyncStateDelegate.h"

@class FTDeviceSupport, IDSServerBag, IMDCKSyncState, IMDefaults, IMLockdownManager, NSString;

@interface IMDCKUtilities : NSObject <IMDCKSyncStateDelegate>
{
    BOOL _didKeyRollPendingCheck;
    BOOL _useDeprecatedApi;
    IMDCKSyncState *_syncState;
    IMLockdownManager *_lockdownManager;
    IDSServerBag *_serverBag;
    FTDeviceSupport *_deviceSupport;
    IMDefaults *_imDefaults;
}

+ (id)im_AKSecurityLevelKey;
+ (id)sharedInstance;
+ (id)logHandle;
@property(nonatomic) BOOL useDeprecatedApi; // @synthesize useDeprecatedApi=_useDeprecatedApi;
@property(retain, nonatomic) IMDefaults *imDefaults; // @synthesize imDefaults=_imDefaults;
@property(retain, nonatomic) FTDeviceSupport *deviceSupport; // @synthesize deviceSupport=_deviceSupport;
@property(retain, nonatomic) IDSServerBag *serverBag; // @synthesize serverBag=_serverBag;
@property(retain, nonatomic) IMLockdownManager *lockdownManager; // @synthesize lockdownManager=_lockdownManager;
@property(nonatomic) BOOL didKeyRollPendingCheck; // @synthesize didKeyRollPendingCheck=_didKeyRollPendingCheck;
- (void).cxx_destruct;
- (void)fetchSecurityLevelForAccount:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (id)accountWithDSID:(id)arg1;
- (id)accountDSID:(id)arg1;
- (void)disableAllDevicesWithCompletion:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic) BOOL isInCloudKitDemoMode;
- (void)eligibleForTruthZoneWithCompletion:(CDUnknownBlockType)arg1;
- (void)downgradingFromHSA2AndDisablingMOC;
- (void)enableMOCIfNeeded;
- (BOOL)iCloudAccountMatchesiMessageAccount;
- (unsigned long long)_primaryiCloudAccountSecurityLevel;
- (void)fetchSecurityLevelAndUpdateMiCSwitchEligibilityIfNeededOnImagentLaunch;
- (void)fetchSecurityLevelAndUpdateMiCSwitchEligibility;
- (BOOL)_allowDestructiveMOCFeaturesBasedOnDSID;
- (id)dsid;
- (id)_primaryiCloudAccountAltDSID;
- (id)_primaryiCloudAccount;
- (id)_accountManager;
- (void)submitPCSReportManateeStatuMetricWithPrefix:(id)arg1 andReason:(id)arg2;
- (id)metricForPCSReportManateeStatusWithReason:(id)arg1;
- (BOOL)logDumpIsNecessaryAfterSync;
- (void)noteAllSyncedItemsPriorToSync;
- (id)_ckStatisticCaluclations;
- (void)logDumpAndSendMessageTo:(id)arg1 forHours:(int)arg2 reason:(id)arg3 isInitialSync:(BOOL)arg4 requirePreviousPrompt:(BOOL)arg5 willSendBlock:(CDUnknownBlockType)arg6;
- (void)logDumpAndSendMessageTo:(id)arg1 forHours:(int)arg2 reason:(id)arg3 requirePreviousPrompt:(BOOL)arg4 willSendBlock:(CDUnknownBlockType)arg5;
- (void)logDumpAndSendMessageTo:(id)arg1 forHours:(int)arg2 reason:(id)arg3;
- (void)_showCKLogNotificationWithCompletion:(CDUnknownBlockType)arg1;
- (BOOL)errorIndicateDeviceDoesNotHaveKeysToSync:(id)arg1;
- (BOOL)errorIndicatesIdentityWasLost:(id)arg1;
- (BOOL)_deviceActive;
- (id)deviceActiveString;
- (id)lastDeviceBackUpDate;
- (id)newfilteredArrayRemovingCKRecordIDDupes:(id)arg1;
- (id)newfilteredArrayRemovingCKRecordDupes:(id)arg1;
- (BOOL)deviceConditionsAllowPeriodicSync;
- (id)deviceConditions;
@property(readonly, nonatomic, getter=isKeyRollPending) BOOL keyRollPending;
@property(readonly, nonatomic) BOOL isSyncingPaused;
@property(readonly, nonatomic, getter=isDeviceOnWifi) BOOL deviceOnWifi;
@property(readonly, nonatomic, getter=isDeviceCharging) BOOL deviceCharging;
- (BOOL)_isSyncingPausedOverride;
- (void)primaryAccountHasiCloudBackupEnabledWithCompletion:(CDUnknownBlockType)arg1;
- (id)_personIdFromAccount:(id)arg1;
- (void)fetchiCloudAccountPersonID:(CDUnknownBlockType)arg1;
- (void)_fetchPrimaryAccountWithCompletion:(CDUnknownBlockType)arg1;
- (void)_setiCloudSettingsSwitchEnabled:(BOOL)arg1;
- (void)evalToggleiCloudSettingsSwitch;
- (void)checkCloudkitEnabledStatusAndToggleiCloudSwitchIfNeeded;
- (id)_accountStore;
- (BOOL)errorIndicatesQuotaExceeded:(id)arg1;
- (BOOL)errorIndicatesChatZoneCreationFailed:(id)arg1;
- (void)resetLastSyncDate;
- (BOOL)errorIndicatesUserDeletedZone:(id)arg1;
- (BOOL)errorIndicatesZoneNotCreated:(id)arg1;
- (id)extractRecordIDsDeletedFromCKPartialError:(id)arg1;
- (BOOL)acceptableErrorCodeWhileDeleting:(id)arg1;
- (BOOL)isRecoverableCloudKitError:(id)arg1 withRetryInterval:(id *)arg2;
- (BOOL)errorIndicatesDeviceConditionsDontAllowSync:(id)arg1;
- (BOOL)CKPartialError:(id)arg1 onlyHasErrorCodes:(id)arg2;
- (BOOL)CKPartialErrorOnlyHasQuotaExceededError:(id)arg1;
- (BOOL)CKPartialError:(id)arg1 hasErrorCode:(id)arg2;
- (id)extractServerRecordFromCKServerErrorRecordChanged:(id)arg1;
- (id)_errorsFromPartialError:(id)arg1;
- (BOOL)_isCKErrorPartialFailure:(id)arg1;
- (unsigned long long)_mocEnabledStateFromAccountStatus:(long long)arg1;
- (void)fetchMOCEnabledStateWithCompletionBlock:(CDUnknownBlockType)arg1;
- (id)syncFailureMetricString:(id)arg1 error:(id)arg2;
- (id)recordNameForMessageWithGUID:(id)arg1 usingSalt:(id)arg2;
- (void)_askToTapToRadarWithString:(id)arg1 internalOnly:(BOOL)arg2;
- (void)reportMOCDebuggingErrorWithString:(id)arg1 internalOnly:(BOOL)arg2 initialSync:(BOOL)arg3 sendToHandle:(id)arg4 reasonString:(id)arg5;
- (void)reportMOCDebuggingErrorWithString:(id)arg1 internalOnly:(BOOL)arg2 initialSync:(BOOL)arg3 sendToHandle:(id)arg4;
- (void)reportMOCDebuggingErrorWithString:(id)arg1 internalOnly:(BOOL)arg2 initialSync:(BOOL)arg3;
- (void)reportMOCDebuggingErrorWithString:(id)arg1 internalOnly:(BOOL)arg2;
- (id)logCollectorAddress;
- (BOOL)shouldCollectDailyLogDumpForRestoreFailures;
- (BOOL)shouldCollectDailyLogDump;
- (BOOL)shouldLogDumpOnCloudKitError;
- (BOOL)shouldPresentTTROnCloudKitError;
- (BOOL)_checkIfEnabledByServerBagOrDefault:(id)arg1;
- (void)fetchCloudKitAccountStatusAndCheckForAccountNeedsRepairWithCompletion:(CDUnknownBlockType)arg1;
- (BOOL)shouldRepairAccountWithDeviceAccountSecurityLevel:(unsigned long long)arg1 serverAccountStatus:(long long)arg2;
- (void)fetchLocalAccountSecurityLevel:(CDUnknownBlockType)arg1;
- (BOOL)_accountNeedsRepairOverride;
- (void)fetchCloudKitAccountStatusWithCompletion:(CDUnknownBlockType)arg1;
- (id)_createAccountError:(id)arg1;
- (void)_checkEligibilityWithLoggedInAccountWithCompletion:(CDUnknownBlockType)arg1;
- (BOOL)_accountInfoWithCompletionHandler:(CDUnknownBlockType)arg1;
- (BOOL)_checkEligibilityWithAccountInfo:(id)arg1;
- (id)_authenticationController;
- (BOOL)accountIsVerifiedForMOCAndSafeForCacheDelete;
- (BOOL)removeFromBackUpAllowed;
- (BOOL)_serverAllowsRemovalFromBackUp;
- (BOOL)cacheDeleteEnabled;
- (BOOL)enableAttachmentMetricCollection;
- (BOOL)_serverAllowsCacheDelete;
- (void)_resetKeepMessagesSettingandBroadcastToAllDevices;
- (BOOL)_shouldDisplayPopUpForResettingKeepMessages;
- (id)_getKeepMessagesValue;
- (void)setCloudKitSyncingEnabled:(BOOL)arg1;
- (BOOL)cloudKitSyncDownloadAssetsOnly;
- (BOOL)cloudKitSyncingEnabled;
- (long long)_mininimumServerBagClientValue;
- (BOOL)_shouldiCloudSwitchBeEnabled;
- (BOOL)_mocFeatureEnabled;
- (BOOL)_isInExitState;
- (BOOL)_serverAllowsSync;
- (void)checkiCloudQuota:(CDUnknownBlockType)arg1;
- (unsigned long long)messageDatabaseSize;
- (void)isFirstSyncWithCompletion:(CDUnknownBlockType)arg1;
- (long long)overrideNumberOfChatsToWrite;
- (long long)overrideNumberOfChatsToFetch;
- (BOOL)shouldSyncToSRContainer;
- (BOOL)shouldForceArchivedMessagesSync;
- (BOOL)shouldUseDevContainer;
- (void)keyRollPendingStateDidChange;
- (void)broadcastCloudKitStateAfterClearingErrors;
- (void)broadcastCloudKitState;
- (void)syncStateWillUpdate:(id)arg1;
@property(readonly, nonatomic) IMDCKSyncState *syncState; // @synthesize syncState=_syncState;
- (id)init;
- (id)initWithServerBag:(id)arg1 lockDownmanager:(id)arg2 deviceSupport:(id)arg3 imDefaults:(id)arg4;
- (id)_truthDatabase;
- (id)_truthContainer;
- (id)logHandle;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

