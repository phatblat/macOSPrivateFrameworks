//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "HMFObject.h"

#import "HMBLocalZoneModelObserver.h"
#import "HMDCloudShareParticipantsManagerDataSource.h"
#import "HMDDatabaseZoneManagerDelegate.h"
#import "HMFLogging.h"
#import "HMFMessageReceiver.h"
#import "HMFTimerDelegate.h"

@class HMBCloudZone, HMBLocalZone, HMDCameraClipsQuotaManager, HMDDatabaseZoneManager, HMFMessageDispatcher, HMFTimer, NSHashTable, NSObject<OS_dispatch_queue>, NSString, NSUUID;

@interface HMDCameraClipManager : HMFObject <HMBLocalZoneModelObserver, HMFLogging, HMFMessageReceiver, HMFTimerDelegate, HMDCloudShareParticipantsManagerDataSource, HMDDatabaseZoneManagerDelegate>
{
    BOOL _hasWriteAccess;
    id <HMDCameraClipManagerDelegate> _delegate;
    HMBLocalZone *_localZone;
    NSObject<OS_dispatch_queue> *_workQueue;
    HMDDatabaseZoneManager *_zoneManager;
    HMDCameraClipsQuotaManager *_quotaManager;
    HMFMessageDispatcher *_messageDispatcher;
    NSHashTable *_subscribedClientConnections;
    HMBCloudZone *_cloudZone;
    HMFTimer *_cloudZoneFetchTimer;
    unsigned long long _fetchClipsBatchLimit;
    CDUnknownBlockType _cloudFetchTimerFactory;
}

+ (id)logCategory;
+ (double)maximumClipDuration;
@property(copy) CDUnknownBlockType cloudFetchTimerFactory; // @synthesize cloudFetchTimerFactory=_cloudFetchTimerFactory;
@property unsigned long long fetchClipsBatchLimit; // @synthesize fetchClipsBatchLimit=_fetchClipsBatchLimit;
@property(retain) HMFTimer *cloudZoneFetchTimer; // @synthesize cloudZoneFetchTimer=_cloudZoneFetchTimer;
@property(retain) HMBCloudZone *cloudZone; // @synthesize cloudZone=_cloudZone;
@property(readonly) NSHashTable *subscribedClientConnections; // @synthesize subscribedClientConnections=_subscribedClientConnections;
@property(readonly) HMFMessageDispatcher *messageDispatcher; // @synthesize messageDispatcher=_messageDispatcher;
@property(readonly) HMDCameraClipsQuotaManager *quotaManager; // @synthesize quotaManager=_quotaManager;
@property(readonly) HMDDatabaseZoneManager *zoneManager; // @synthesize zoneManager=_zoneManager;
@property(readonly) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
@property(nonatomic) BOOL hasWriteAccess; // @synthesize hasWriteAccess=_hasWriteAccess;
@property(retain) HMBLocalZone *localZone; // @synthesize localZone=_localZone;
@property __weak id <HMDCameraClipManagerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)zoneManager:(id)arg1 didReceiveMessageWithUserInfo:(id)arg2;
- (void)zoneManagerDidStop:(id)arg1;
- (void)zoneManagerDidStart:(id)arg1;
- (void)_cleanUpClipsLeftInProgress;
- (BOOL)areShareModificationsEnabledForManager:(id)arg1;
- (BOOL)manager:(id)arg1 shouldGrantWriteAccessToUser:(id)arg2;
- (BOOL)manager:(id)arg1 shouldShareWithUser:(id)arg2;
- (id)localZone:(id)arg1 didProcessModelDeletion:(id)arg2;
- (id)localZone:(id)arg1 didProcessModelUpdate:(id)arg2;
- (id)localZone:(id)arg1 didProcessModelCreation:(id)arg2;
- (void)timerDidFire:(id)arg1;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property(readonly, nonatomic) NSUUID *messageTargetUUID;
- (id)logIdentifier;
- (void)handleClientConnectionDidDeactivate:(id)arg1;
- (void)handleClientConnectionDidActivate:(id)arg1;
- (void)handleUserRemoteAccessDidChange:(id)arg1;
- (void)handleUserCamerasAccessLevelDidChange:(id)arg1;
- (void)handleUserPrivilegeDidChange:(id)arg1;
- (void)handleDeleteAllClipsMessage:(id)arg1;
- (void)handleDeleteClipMessage:(id)arg1;
- (void)handleFetchVideoSegmentsAssetContextMessage:(id)arg1;
- (void)handleFetchPosterFramesAssetContextMessage:(id)arg1;
- (void)handleFetchCountOfClipsMessage:(id)arg1;
- (void)handleFetchClipForSignificantEventMessage:(id)arg1;
- (void)handleFetchClipsMessage:(id)arg1;
- (void)handleFetchClipMessage:(id)arg1;
- (void)handleUnsubscribeMessage:(id)arg1;
- (void)handleSubscribeMessage:(id)arg1;
- (void)_handleNewSignificantEventNotificationModel:(id)arg1 withHeroFrameURL:(id)arg2 forClipModel:(id)arg3;
- (void)_handleNewSignificantEventNotificationModel:(id)arg1;
- (void)_handleChangedClipModel:(id)arg1;
- (id)_fetchAssetContextForProperty:(id)arg1 forClipModel:(id)arg2;
- (void)_fetchAssetContextForMessage:(id)arg1 propertyName:(id)arg2;
- (BOOL)_fetchClipsAfterDate:(id)arg1 beforeDate:(id)arg2 error:(id *)arg3 handler:(CDUnknownBlockType)arg4;
- (void)_notifyTransportsOfUpdatedClips:(id)arg1 removedClipUUIDs:(id)arg2;
- (void)_notifyTransport:(id)arg1 ofFetchedClips:(id)arg2 forFetchUUID:(id)arg3 responseHandler:(CDUnknownBlockType)arg4;
- (void)_updateCloudFetchTimer;
- (void)_performCloudPull;
- (id)_significantEventsForClipModel:(id)arg1;
- (id)disableCloudStorage;
- (id)enableCloudStorage;
- (id)remove;
- (id)heroFrameURLForSignificantEventWithUUID:(id)arg1;
- (id)significantEventsWithUUIDs:(id)arg1;
- (void)configureWithHome:(id)arg1;
- (id)initWithZoneManager:(id)arg1 quotaManager:(id)arg2 messageDispatcher:(id)arg3 workQueue:(id)arg4;
- (id)initWithCameraProfile:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
