//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "CKXPCDaemon.h"

@class CKDClientProxy, NSString;

__attribute__((visibility("hidden")))
@interface CKDClientConnection : NSObject <CKXPCDaemon>
{
    CKDClientProxy *_proxy;
}

@property(retain, nonatomic) CKDClientProxy *proxy; // @synthesize proxy=_proxy;
- (void).cxx_destruct;
- (void)tossConfigWithSetupInfo:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)repairZonePCSWithOperationInfo:(id)arg1 withBlock:(CDUnknownBlockType)arg2;
- (void)getRecordPCSDiagnosticsForZonesWithSetupInfo:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)getPCSDiagnosticsForZonesWithSetupInfo:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)submitClientEventMetric:(id)arg1 withSetupInfo:(id)arg2;
- (void)triggerAutoBugCaptureSnapshot;
- (void)flushOperationMetricsToPowerLog;
- (void)dataclassEnabled:(id)arg1 withSetupInfo:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)updatePushTokens;
- (void)clearPILSCacheForLookupInfos:(id)arg1;
- (void)clearContextFromMetadataCache;
- (void)wipeAllCachesAndDie;
- (void)statusGroupsForApplicationPermission:(unsigned long long)arg1 setupInfo:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)resetAllApplicationPermissionsWithSetupInfo:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)setApplicationPermission:(unsigned long long)arg1 enabled:(BOOL)arg2 setupInfo:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)accountChangedWithID:(id)arg1;
- (void)accountsWillDeleteAccount:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)accountsDidRevokeAccessToBundleID:(id)arg1 containerIdentifiers:(id)arg2;
- (void)accountsDidGrantAccessToBundleID:(id)arg1 containerIdentifiers:(id)arg2;
- (void)getBehaviorOptionForKey:(id)arg1 isContainerOption:(BOOL)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)clearPCSCachesForKnownContextsWithSetupInfo:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)wipeAllCachedLongLivedProxiesWithSetupInfo:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)clearCachesForZoneWithSetupInfo:(id)arg1 zoneID:(id)arg2 databaseScope:(long long)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)clearCachesForRecordWithSetupInfo:(id)arg1 recordID:(id)arg2 databaseScope:(long long)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)clearCachesWithSetupInfo:(id)arg1 options:(unsigned long long)arg2 databaseScope:(long long)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)clearAuthTokensWithSetupInfo:(id)arg1 recordID:(id)arg2 databaseScope:(long long)arg3;
- (void)clearRecordCacheWithSetupInfo:(id)arg1 databaseScope:(long long)arg2;
- (void)showAssetCacheWithSetupInfo:(id)arg1 databaseScope:(long long)arg2;
- (void)clearAssetCacheWithSetupInfo:(id)arg1 databaseScope:(long long)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)setFakeResponseOperationResult:(id)arg1 forNextRequestOfClassName:(id)arg2 forItemID:(id)arg3 withLifetime:(int)arg4 setupInfo:(id)arg5;
- (void)setFakeError:(id)arg1 forNextRequestOfClassName:(id)arg2 setupInfo:(id)arg3;
- (void)dumpAllClientsStatusReportToFileHandle:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)dumpDaemonStatusReportToFileHandle:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)performAggregateZonePCSOperation:(id)arg1 withBlock:(CDUnknownBlockType)arg2;
- (void)displayInfoOnAccountWithSetupInfo:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)currentDeviceIDWithSetupInfo:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)serverEnvironmentWithSetupInfo:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)currentUserBoundaryKeyWithSetupInfo:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)serverPreferredPushEnvironmentWithSetupInfo:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)fetchAllLongLivedOperationIDsWithSetupInfo:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)fetchLongLivedOperationsWithIDs:(id)arg1 setupInfo:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)performCodeFunctionInvokeOperation:(id)arg1 withBlock:(CDUnknownBlockType)arg2;
- (void)performFetchWhitelistedBundleIDsOperation:(id)arg1 withBlock:(CDUnknownBlockType)arg2;
- (void)performFetchWebAuthTokenOperation:(id)arg1 withBlock:(CDUnknownBlockType)arg2;
- (void)performFetchUserQuotaOperation:(id)arg1 withBlock:(CDUnknownBlockType)arg2;
- (void)performInitiateParticipantVettingOperation:(id)arg1 withBlock:(CDUnknownBlockType)arg2;
- (void)decryptPersonalInfoOnShare:(id)arg1 setupInfo:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)performFetchShareParticipantKeyOperation:(id)arg1 withBlock:(CDUnknownBlockType)arg2;
- (void)performFetchShareMetadataOperation:(id)arg1 withBlock:(CDUnknownBlockType)arg2;
- (void)performCompleteParticipantVettingOperation:(id)arg1 withBlock:(CDUnknownBlockType)arg2;
- (void)performAcceptSharesOperation:(id)arg1 withBlock:(CDUnknownBlockType)arg2;
- (void)performMarkNotificationsReadOperation:(id)arg1 withBlock:(CDUnknownBlockType)arg2;
- (void)performFetchNotificationChangesOperation:(id)arg1 withBlock:(CDUnknownBlockType)arg2;
- (void)performModifyBadgeOperation:(id)arg1 withBlock:(CDUnknownBlockType)arg2;
- (void)performFetchDatabaseChangesOperation:(id)arg1 withBlock:(CDUnknownBlockType)arg2;
- (void)performFetchRecordZonesOperation:(id)arg1 withBlock:(CDUnknownBlockType)arg2;
- (void)performModifyRecordZonesOperation:(id)arg1 withBlock:(CDUnknownBlockType)arg2;
- (void)performFetchSubscriptionsOperation:(id)arg1 withBlock:(CDUnknownBlockType)arg2;
- (void)performModifySubscriptionsOperation:(id)arg1 withBlock:(CDUnknownBlockType)arg2;
- (void)performQueryOperation:(id)arg1 withBlock:(CDUnknownBlockType)arg2;
- (void)performModifyRecordAccessOperation:(id)arg1 withBlock:(CDUnknownBlockType)arg2;
- (void)getNewWebSharingIdentityDataWithSetupInfo:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)getNewWebSharingIdentityWithSetupInfo:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)performModifyWebSharingOperation:(id)arg1 withBlock:(CDUnknownBlockType)arg2;
- (void)performPublishAssetsOperation:(id)arg1 withBlock:(CDUnknownBlockType)arg2;
- (void)performArchiveRecordsOperation:(id)arg1 withBlock:(CDUnknownBlockType)arg2;
- (void)performFetchArchivedRecordsOperation:(id)arg1 withBlock:(CDUnknownBlockType)arg2;
- (void)performFetchRecordVersionsOperation:(id)arg1 withBlock:(CDUnknownBlockType)arg2;
- (void)performFetchRecordZoneChangesOperation:(id)arg1 withBlock:(CDUnknownBlockType)arg2;
- (void)performFetchRecordChangesOperation:(id)arg1 withBlock:(CDUnknownBlockType)arg2;
- (void)performModifyRecordsOperation:(id)arg1 withBlock:(CDUnknownBlockType)arg2;
- (void)performFetchRecordsOperation:(id)arg1 withBlock:(CDUnknownBlockType)arg2;
- (void)performFetchShareParticipantsOperation:(id)arg1 withBlock:(CDUnknownBlockType)arg2;
- (void)performDiscoverAllIdentitiesOperation:(id)arg1 withBlock:(CDUnknownBlockType)arg2;
- (void)performDiscoverUserIdentitiesOperation:(id)arg1 withBlock:(CDUnknownBlockType)arg2;
- (void)getSandboxExtensionsWithSetupInfo:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)requestApplicationPermission:(unsigned long long)arg1 setupInfo:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)statusForApplicationPermission:(unsigned long long)arg1 setupInfo:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)importantUserIDsWithSetupInfo:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)accountInfoWithSetupInfo:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)accountStatusWithSetupInfo:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)cancelOperationWithIdentifier:(id)arg1;
- (void)_handlePerformDaemonCallWithOperationInfo:(id)arg1 completionBlock:(CDUnknownBlockType)arg2 forwardingBlock:(CDUnknownBlockType)arg3;
- (void)_addProxyOperationWithInfo:(id)arg1 withBlock:(CDUnknownBlockType)arg2 longlivedProxyPreparationBlock:(CDUnknownBlockType)arg3;
- (id)initWithConnection:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

