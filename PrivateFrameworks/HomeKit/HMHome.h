//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "HMFLogging.h"
#import "HMFMessageReceiver.h"
#import "HMMutableApplicationData.h"
#import "HMObjectMerge.h"
#import "NSSecureCoding.h"

@class CLLocation, HMApplicationData, HMFMessageDestination, HMFUnfairLock, HMHomeManager, HMMutableArray, HMRoom, HMSetupViewController, HMUser, NSArray, NSDate, NSObject<OS_dispatch_queue>, NSOperationQueue, NSSet, NSString, NSUUID, _HMContext;

@interface HMHome : NSObject <HMFLogging, NSSecureCoding, HMFMessageReceiver, HMObjectMerge, HMMutableApplicationData>
{
    BOOL _automaticSoftwareUpdateEnabled;
    long long _minimumMediaUserPrivilege;
    BOOL _mediaPeerToPeerEnabled;
    NSString *_mediaPassword;
    long long _protectionMode;
    HMFUnfairLock *_lock;
    BOOL _primary;
    BOOL _notificationsEnabled;
    BOOL _multiUserEnabled;
    BOOL _hasAnyUserAcknowledgedCameraRecordingOnboarding;
    BOOL _ownerUser;
    BOOL _adminUser;
    BOOL _notificationEnableRequested;
    int _locationAuthorization;
    NSUUID *_uniqueIdentifier;
    id <HMHomeDelegate> _delegate;
    CLLocation *_homeLocation;
    NSString *_name;
    HMUser *_currentUser;
    HMApplicationData *_applicationData;
    NSDate *_notificationsUpdatedTime;
    long long _homeLocationStatus;
    unsigned long long _networkRouterSupport;
    unsigned long long _networkRouterSupportDisableReason;
    NSSet *_supportedFeatures;
    unsigned long long _homeHubState;
    HMSetupViewController *_setupViewController;
    id <HMSetupRemoteService> _setupRemoteViewController;
    HMMutableArray *_currentRooms;
    HMMutableArray *_currentZones;
    HMMutableArray *_currentServiceGroups;
    HMMutableArray *_currentTriggerOwnedActionSets;
    HMMutableArray *_currentActions;
    HMMutableArray *_currentTriggers;
    HMMutableArray *_currentUsers;
    HMMutableArray *_currentResidentDevices;
    HMMutableArray *_currentOutgoingInvitations;
    NSOperationQueue *_shareWithHomeOwnerOperationQueue;
    HMMutableArray *_currentAccessoryProtectionGroups;
    _HMContext *_context;
    HMHomeManager *_homeManager;
    NSUUID *_uuid;
    HMRoom *_homeAsRoom;
    HMMutableArray *_currentActionSets;
    HMMutableArray *_currentMediaSystems;
    HMMutableArray *_currentAccessories;
}

+ (id)logCategory;
+ (BOOL)supportsSecureCoding;
+ (BOOL)isValidMediaPassword:(id)arg1 error:(id *)arg2;
+ (id)generateMediaPasswordWithError:(id *)arg1;
+ (BOOL)accessorySupportsMediaAccessControl:(id)arg1;
@property(retain, nonatomic) HMMutableArray *currentAccessories; // @synthesize currentAccessories=_currentAccessories;
@property(retain, nonatomic) HMMutableArray *currentMediaSystems; // @synthesize currentMediaSystems=_currentMediaSystems;
@property(retain, nonatomic) HMMutableArray *currentActionSets; // @synthesize currentActionSets=_currentActionSets;
@property(retain, nonatomic) HMRoom *homeAsRoom; // @synthesize homeAsRoom=_homeAsRoom;
@property(readonly, nonatomic) NSUUID *uuid; // @synthesize uuid=_uuid;
@property(nonatomic) __weak HMHomeManager *homeManager; // @synthesize homeManager=_homeManager;
@property(retain, nonatomic) _HMContext *context; // @synthesize context=_context;
@property(retain, nonatomic) HMMutableArray *currentAccessoryProtectionGroups; // @synthesize currentAccessoryProtectionGroups=_currentAccessoryProtectionGroups;
@property(retain, nonatomic) NSOperationQueue *shareWithHomeOwnerOperationQueue; // @synthesize shareWithHomeOwnerOperationQueue=_shareWithHomeOwnerOperationQueue;
@property(nonatomic) BOOL notificationEnableRequested; // @synthesize notificationEnableRequested=_notificationEnableRequested;
@property(nonatomic) int locationAuthorization; // @synthesize locationAuthorization=_locationAuthorization;
@property(nonatomic, getter=isAdminUser) BOOL adminUser; // @synthesize adminUser=_adminUser;
@property(nonatomic, getter=isOwnerUser) BOOL ownerUser; // @synthesize ownerUser=_ownerUser;
@property(retain, nonatomic) HMMutableArray *currentOutgoingInvitations; // @synthesize currentOutgoingInvitations=_currentOutgoingInvitations;
@property(retain, nonatomic) HMMutableArray *currentResidentDevices; // @synthesize currentResidentDevices=_currentResidentDevices;
@property(retain, nonatomic) HMMutableArray *currentUsers; // @synthesize currentUsers=_currentUsers;
@property(retain, nonatomic) HMMutableArray *currentTriggers; // @synthesize currentTriggers=_currentTriggers;
@property(retain, nonatomic) HMMutableArray *currentActions; // @synthesize currentActions=_currentActions;
@property(retain, nonatomic) HMMutableArray *currentTriggerOwnedActionSets; // @synthesize currentTriggerOwnedActionSets=_currentTriggerOwnedActionSets;
@property(retain, nonatomic) HMMutableArray *currentServiceGroups; // @synthesize currentServiceGroups=_currentServiceGroups;
@property(retain, nonatomic) HMMutableArray *currentZones; // @synthesize currentZones=_currentZones;
@property(retain, nonatomic) HMMutableArray *currentRooms; // @synthesize currentRooms=_currentRooms;
@property(nonatomic) __weak id <HMSetupRemoteService> setupRemoteViewController; // @synthesize setupRemoteViewController=_setupRemoteViewController;
@property(nonatomic) __weak HMSetupViewController *setupViewController; // @synthesize setupViewController=_setupViewController;
@property(readonly, nonatomic) unsigned long long homeHubState; // @synthesize homeHubState=_homeHubState;
@property(nonatomic) BOOL multiUserEnabled; // @synthesize multiUserEnabled=_multiUserEnabled;
- (void).cxx_destruct;
- (id)logIdentifier;
- (void)_updateApplicationData:(id)arg1 forAppDataContainer:(id)arg2 appDataContainerUUIDKeyName:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)updateApplicationData:(id)arg1 forAppDataContainer:(id)arg2 appDataContainerUUIDKeyName:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)updateApplicationData:(id)arg1 forActionSet:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)updateApplicationData:(id)arg1 forServiceGroup:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)updateApplicationData:(id)arg1 forRoom:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)updateApplicationData:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property(readonly, copy, nonatomic) HMFMessageDestination *messageDestination;
@property(readonly, nonatomic) NSUUID *messageTargetUUID;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
@property(readonly, copy) NSUUID *applicationDataIdentifier;
- (void)_notifyDelegateOfUpdatedHomeLocationStatus;
- (void)_notifyDelegateOfRemovedMediaSystem:(id)arg1;
- (void)_notifyDelegateOfAddedMediaSystem:(id)arg1;
- (void)_removeIncompatibleTrigger:(id)arg1;
- (void)_notifyDelegateOfHomeHubStateUpdate;
- (void)_notifyDelegateOfTriggerUpdated:(id)arg1;
- (void)_notifyDelegateOfTriggerRemoved:(id)arg1;
- (void)_notifyDelegateOfTriggerAdded:(id)arg1;
- (void)_notifyDelegateOfAccesoryInvitationsUpdateForUser:(id)arg1;
- (void)notifyDelegateOfAccesoryInvitationsUpdateForUser:(id)arg1;
- (void)_notifyDelegateOfAccessControlUpdateForUser:(id)arg1;
- (void)notifyDelegateOfAccessControlUpdateForUser:(id)arg1;
- (void)_invokeDelegateForAppData:(id)arg1;
- (void)_notifyDelegateOfAppDataUpdate;
- (void)_notifyDelegateOfAppDataUpdateForActionSet:(id)arg1;
- (void)notifyDelegateOfAppDataUpdateForActionSet:(id)arg1;
- (void)_notifyDelegateOfAppDataUpdateForServiceGroup:(id)arg1;
- (void)notifyDelegateOfAppDataUpdateForServiceGroup:(id)arg1;
- (void)_notifyDelegateOfAppDataUpdateForRoom:(id)arg1;
- (void)notifyDelegateOfAppDataUpdateForRoom:(id)arg1;
- (id)_getContainerForAppData:(id)arg1;
- (void)_handleHomeHubStateUpdatedNotification:(id)arg1;
- (void)_handleHomeLocationStatusUpdateNotification:(id)arg1;
- (void)_handleRequestAccessorySetupCodeRequestKey:(id)arg1;
- (void)_handleRuntimeStateUpdate:(id)arg1;
- (void)handleRuntimeStateUpdate:(id)arg1;
- (void)_handleMediaSystemRemovedNotification:(id)arg1;
- (void)_handleAccessoryInfoUpdatedNotification:(id)arg1;
- (void)_handleNotificationsEnabled:(id)arg1;
- (void)_handleUpdatedResidentDevice:(id)arg1;
- (void)_enableNotification:(BOOL)arg1 forCharacteristics:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)enableNotification:(BOOL)arg1 forCharacteristics:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)reEnableNotifications;
- (void)_enableNotifications:(BOOL)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)enableNotifications:(BOOL)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_updateInvitation:(id)arg1 invitationState:(long long)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)_acceptInvitation:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_cancelInvitation:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)__locationAuthorizationUpdated:(id)arg1;
- (void)__updateLocation:(id)arg1 mergeOperations:(id)arg2;
- (void)_retrieveLocation;
- (void)_updateAccessForUser:(id)arg1 camerasAccessLevel:(unsigned long long)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)updateAccessForUser:(id)arg1 camerasAccessLevel:(unsigned long long)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)updateForUser:(id)arg1 presenceAuthorizationStatus:(unsigned long long)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)updateAccessForUser:(id)arg1 remoteAccess:(BOOL)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)updateAccessForUser:(id)arg1 administrator:(BOOL)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)_handleMultipleCharacteristicValuesUpdated:(id)arg1;
- (void)_handleAccessoryErrorNotification:(id)arg1;
- (void)_handleUserRemovedNotification:(id)arg1;
- (void)_handleUpdatedPresenceComputeNotification:(id)arg1;
- (void)_handleUpdatedPresenceAuthNotification:(id)arg1;
- (void)_handleUpdatedUserAccessNotification:(id)arg1;
- (id)_findUserWithID:(id)arg1;
- (void)_handleUserAddedNotification:(id)arg1;
- (void)_handleUserInvitationsUpdatedNotification:(id)arg1;
- (id)outgoingInvitations;
- (void)_notifyUpdatedSupportedFeatures;
- (void)_handleAccessoryReprovisionedNotification:(id)arg1;
- (void)_reprovisionAccessory:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)reprovisionAccessory:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_handleAccessoryReprovisionStateUpdate:(id)arg1;
- (void)handleStartWithError:(id)arg1 response:(id)arg2;
- (void)_startSearchForAccessoriesNeedingReprovisioning;
- (void)startSearchForAccessoriesNeedingReprovisioning;
- (void)_removeIdentifier:(id)arg1 bridgeUUID:(id)arg2;
- (void)_addIdentifier:(id)arg1 bridgeUUID:(id)arg2;
- (void)_removeServices:(id)arg1;
- (void)removeServices:(id)arg1;
- (void)_handleAccessoryRemovedNotification:(id)arg1;
- (void)_handleAddAccessoryProgressNotification:(id)arg1;
- (void)_callProgressHandler:(CDUnknownBlockType)arg1 updatingAccessoryDescription:(id)arg2 fromMessage:(id)arg3;
- (void)_handleAccessoryAddedNotification:(id)arg1;
- (void)_handleTriggerRemovedNotification:(id)arg1;
- (void)_addTrigger:(id)arg1 triggerUUID:(id)arg2 message:(id)arg3;
- (void)_handleTimerTriggerAddedNotification:(id)arg1;
- (void)_handleEventTriggerOwnerUserNotification:(id)arg1;
- (void)_handleEventTriggerOwnerDeviceNotification:(id)arg1;
- (void)_handleEventTriggerAddedNotification:(id)arg1;
- (void)notifyDelegatesOfExecution:(id)arg1 actionSet:(id)arg2;
- (void)_handleActionSetRemovedNotification:(id)arg1;
- (void)_handleActionSetAddedNotification:(id)arg1;
- (void)_handleServiceGroupRemovedNotification:(id)arg1;
- (void)_handleServiceGroupAddedNotification:(id)arg1;
- (void)_handleZoneRemovedNotification:(id)arg1;
- (void)_handleZoneAddedNotification:(id)arg1;
- (void)_handleHomeLocationUpdateNotificaton:(id)arg1;
- (void)_handleHomeRenamedNotification:(id)arg1;
- (id)profileWithUniqueIdentifier:(id)arg1;
- (id)mediaProfileWithProfileUUID:(id)arg1;
- (id)mediaProfileWithUUID:(id)arg1;
- (id)accessoryWithUniqueIdentifier:(id)arg1;
- (id)accessoryWithUUID:(id)arg1;
- (id)triggerWithName:(id)arg1;
- (id)triggerWithUUID:(id)arg1;
- (id)actionSetWithName:(id)arg1;
- (id)triggerOwnedActionSetWithUUID:(id)arg1;
- (id)actionSetWithUUID:(id)arg1;
- (id)serviceGroupWithName:(id)arg1;
- (id)serviceGroupWithUUID:(id)arg1;
- (id)zoneWithName:(id)arg1;
- (id)zoneWithUUID:(id)arg1;
- (id)roomWithName:(id)arg1;
- (id)roomWithUUID:(id)arg1;
- (void)_invalidate;
- (void)invalidate;
- (void)_registerNotificationHandlers;
- (id)_privateDelegate;
- (void)_handleHasAnyUserAcknowledgedCameraRecordingOnboardingChangeNotification:(id)arg1;
- (void)_setHasAnyUserAcknowledgedCameraRecordingOnboardingWithCompleteionHandler:(CDUnknownBlockType)arg1;
- (void)setHasAnyUserAcknowledgedCameraRecordingOnboardingWithCompletionHandler:(CDUnknownBlockType)arg1;
@property(nonatomic) BOOL hasAnyUserAcknowledgedCameraRecordingOnboarding; // @synthesize hasAnyUserAcknowledgedCameraRecordingOnboarding=_hasAnyUserAcknowledgedCameraRecordingOnboarding;
- (void)_handleMultiUserEnabledChangeNotification:(id)arg1;
- (void)_enableMultiUserWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)enableMultiUserWithCompletionHandler:(CDUnknownBlockType)arg1;
- (BOOL)isMultiUserEnabled;
- (void)_updateName:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)updateName:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
@property(readonly, copy) NSString *description;
- (unsigned long long)_mergeCurrentHomeAccessoryNetworkProtectionGroupsWithNewAccessoryNetworkProtectionGroups:(id)arg1 operations:(id)arg2;
- (unsigned long long)_mergeCurrentHomeMediaSystemsWithNewMediaSystems:(id)arg1 operations:(id)arg2;
- (unsigned long long)_mergeCurrentHomeInvitationsWithNewHomeInvitations:(id)arg1 operations:(id)arg2;
- (void)_configureOutgoingInvitiation:(id)arg1;
- (unsigned long long)_mergeCurrentHomeResidentDevicesWithNewHomeResidentDevices:(id)arg1 operations:(id)arg2;
- (unsigned long long)_mergeCurrentHomeUsersWithNewHomeUsers:(id)arg1 operations:(id)arg2;
- (unsigned long long)_mergeCurrentHomeTriggersWithNewHomeTriggers:(id)arg1 operations:(id)arg2;
- (unsigned long long)_mergeCurrentHomeTriggerOwnedActionSetsWithNewHomeActionSets:(id)arg1 operations:(id)arg2;
- (unsigned long long)_mergeCurrentHomeActionSetsWithNewHomeActionSets:(id)arg1 operations:(id)arg2;
- (unsigned long long)_mergeCurrentHomeServiceGroupsWithNewHomeServiceGroups:(id)arg1 operations:(id)arg2;
- (unsigned long long)_mergeAccessoriesForMergeCollection:(id)arg1 currentAccessories:(id)arg2;
- (unsigned long long)_mergeCurrentHomeAccessoriesWithNewHomeAccessories:(id)arg1 operations:(id)arg2;
- (unsigned long long)_mergeCurrentHomeZonesWithNewHomeZones:(id)arg1 operations:(id)arg2;
- (unsigned long long)_mergeRoomsForMergeCollection:(id)arg1 currentRooms:(id)arg2;
- (unsigned long long)_mergeCurrentHomeRoomsWithNewHomeRooms:(id)arg1 operations:(id)arg2;
- (BOOL)_mergeWithNewObject:(id)arg1 operations:(id)arg2;
- (void)mergeWithNewObjectNoMergeCount:(id)arg1;
- (void)_unconfigureHome;
- (void)unconfigureHome;
- (void)_setupBuiltinActionSets:(id)arg1;
- (id)createActionSetWithName:(id)arg1 type:(id)arg2 uuid:(id)arg3;
- (id)createAndAddActionSetWithName:(id)arg1 type:(id)arg2 uuid:(id)arg3;
- (void)sendConfigureBulletinNotification;
@property unsigned long long networkRouterSupportDisableReason; // @synthesize networkRouterSupportDisableReason=_networkRouterSupportDisableReason;
@property unsigned long long networkRouterSupport; // @synthesize networkRouterSupport=_networkRouterSupport;
@property long long protectionMode; // @synthesize protectionMode=_protectionMode;
@property(copy, nonatomic) NSDate *notificationsUpdatedTime; // @synthesize notificationsUpdatedTime=_notificationsUpdatedTime;
@property(nonatomic, getter=areNotificationsEnabled) BOOL notificationsEnabled; // @synthesize notificationsEnabled=_notificationsEnabled;
- (id)targetControllers;
- (id)controlTargets;
- (id)mediaSystems;
@property(readonly, nonatomic) BOOL supportsAddingNetworkRouter;
- (BOOL)_setSupportedFeature:(long long)arg1 enabled:(BOOL)arg2;
@property(copy, nonatomic) NSSet *supportedFeatures; // @synthesize supportedFeatures=_supportedFeatures;
- (void)setApplicationData:(id)arg1;
@property(readonly, nonatomic) HMApplicationData *applicationData;
@property(retain, nonatomic) HMUser *currentUser; // @synthesize currentUser=_currentUser;
@property(readonly) CLLocation *homeLocation; // @synthesize homeLocation=_homeLocation;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property long long homeLocationStatus; // @synthesize homeLocationStatus=_homeLocationStatus;
@property(nonatomic, getter=isPrimary) BOOL primary; // @synthesize primary=_primary;
@property(nonatomic) __weak id <HMHomeDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, copy, nonatomic) NSUUID *uniqueIdentifier; // @synthesize uniqueIdentifier=_uniqueIdentifier;
- (void)__configureWithContext:(id)arg1 homeManager:(id)arg2;
- (void)dealloc;
- (id)initWithName:(id)arg1 uuid:(id)arg2 homeAsRoomUUID:(id)arg3 homeAsRoomName:(id)arg4 actionSets:(id)arg5;
- (id)initWithName:(id)arg1 uuid:(id)arg2;
- (id)init;
- (void)_performBatchCharacteristicRequest:(id)arg1;
- (void)performBatchCharacteristicRequest:(id)arg1;
- (void)unblockAccessory:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)servicesWithTypes:(id)arg1;
- (void)_assignAccessory:(id)arg1 toRoom:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)assignAccessory:(id)arg1 toRoom:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)_removeAccessory:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)removeAccessory:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_cancelPairingForAccessoryWithDescription:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)cancelPairingForAccessoryWithDescription:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)userDidRespondToConsentRequestForSetupAccessoryDescription:(id)arg1 withResponse:(long long)arg2;
- (void)_startPairingWithAccessoryDescription:(id)arg1 setupRemoteViewController:(id)arg2 progressHandler:(CDUnknownBlockType)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)startPairingWithAccessoryDescription:(id)arg1 setupRemoteViewController:(id)arg2 progress:(CDUnknownBlockType)arg3 completion:(CDUnknownBlockType)arg4;
- (void)startPairingWithAccessoryDescription:(id)arg1 setupRemoteViewController:(id)arg2 progressHandler:(CDUnknownBlockType)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)stopDiscoveringSymptomsForNearbyDevices;
- (void)startDiscoveringSymptomsForNearbyDevices;
- (void)_addAndSetupAccessoriesWithSetupPayloadURL:(id)arg1 browseRequest:(id)arg2 suggestedRoomName:(id)arg3 ownershipToken:(id)arg4 addRequest:(id)arg5 legacyAPI:(BOOL)arg6 trustedOrigin:(BOOL)arg7 completionHandler:(CDUnknownBlockType)arg8;
- (void)addAndSetupAccessoriesWithSetupPayload:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)addAccessoryWithSetupPayload:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)addAccessoryWithPayload:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (CDUnknownBlockType)__defaultProgressHandlerForAddAccessory;
- (void)addAccessoryWithAccessorySetupPayload:(id)arg1 progress:(CDUnknownBlockType)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)establishShareWithHomeOwner:(id)arg1 container:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)shareWithHomeOwner:(id)arg1 container:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)addAndSetUpNewAccessoriesWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)addAndSetupAccessoriesWithPayload:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)addAndSetupAccessoriesWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)_continuePairingForAccessoryWithUUID:(id)arg1 setupCode:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)continuePairingForAccessoryWithUUID:(id)arg1 setupCode:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)_cancelPairingForAccessoryWithUUID:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)cancelPairingForAccessoryWithUUID:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_addAccessory:(id)arg1 accessoryDescription:(id)arg2 password:(id)arg3 setupCodeDeferred:(BOOL)arg4 progress:(CDUnknownBlockType)arg5 completionHandler:(CDUnknownBlockType)arg6;
- (void)startPairingWithAccessory:(id)arg1 accessorySetupDescription:(id)arg2 setupRemoteViewController:(id)arg3 progress:(CDUnknownBlockType)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)addAccessory:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)addAccessory:(id)arg1 password:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)addAccessory:(id)arg1 password:(id)arg2 progress:(CDUnknownBlockType)arg3 completionHandler:(CDUnknownBlockType)arg4;
@property(readonly, copy, nonatomic) NSArray *accessories;
- (id)roomForEntireHome;
- (void)_removeRoom:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)removeRoom:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_addRoomWithName:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)addRoomWithName:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
@property(readonly, copy, nonatomic) NSArray *rooms;
- (void)_removeZone:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)removeZone:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_addZoneWithName:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)addZoneWithName:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
@property(readonly, copy, nonatomic) NSArray *zones;
- (void)_removeServiceGroup:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)removeServiceGroup:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_addServiceGroupWithName:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)addServiceGroupWithName:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
@property(readonly, copy, nonatomic) NSArray *serviceGroups;
- (void)removeUserWithoutConfirmation:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)inviteUsers:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)addUser:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)addUserWithoutConfirmation:(id)arg1 privilege:(long long)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)addUserWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)addUsersWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)owner;
- (id)administrator;
- (id)location;
- (id)residentDevices;
- (id)_createFailedAccessoriesListFromError:(id)arg1;
- (void)_removeUser:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)removeUser:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_inviteWithUserInformation:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)inviteUsersWithInviteInformation:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)homeAccessControlForUser:(id)arg1;
- (void)_addUsersWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)_manageUsersWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)manageUsersWithCompletionHandler:(CDUnknownBlockType)arg1;
@property(readonly, copy, nonatomic) NSArray *users;
- (void)_executeActionSet:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)executeActionSet:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_removeActionSet:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)removeActionSet:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_addActionSetWithName:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)addActionSetWithName:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)builtinActionSetOfType:(id)arg1;
@property(readonly, copy, nonatomic) NSArray *triggerOwnedActionSets; // @dynamic triggerOwnedActionSets;
@property(readonly, copy, nonatomic) NSArray *actionSets;
- (void)_removeMediaSystem:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)removeMediaSystem:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_userDidConfirmExecution:(BOOL)arg1 ofTriggerWithIdentifier:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)userDidConfirmExecution:(BOOL)arg1 ofTriggerWithIdentifier:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)userDidConfirmExecution:(BOOL)arg1 ofTrigger:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)_removeTrigger:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)removeTrigger:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_addTrigger:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)addTrigger:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
@property(readonly, copy, nonatomic) NSArray *triggers;
- (void)_enableRemoteAccess:(BOOL)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)enableRemoteAccess:(BOOL)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_queryRemoteAccessWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)queryRemoteAccessWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)updateAutomaticSoftwareUpdateEnabled:(BOOL)arg1 completionHandler:(CDUnknownBlockType)arg2;
@property(getter=isAutomaticSoftwareUpdateEnabled) BOOL automaticSoftwareUpdateEnabled; // @dynamic automaticSoftwareUpdateEnabled;
- (void)updateMediaPassword:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
@property(copy) NSString *mediaPassword; // @dynamic mediaPassword;
- (void)updateMediaPeerToPeerEnabled:(BOOL)arg1 completionHandler:(CDUnknownBlockType)arg2;
@property(getter=isMediaPeerToPeerEnabled) BOOL mediaPeerToPeerEnabled; // @dynamic mediaPeerToPeerEnabled;
- (void)updateMinimumMediaUserPrivilege:(long long)arg1 completionHandler:(CDUnknownBlockType)arg2;
@property long long minimumMediaUserPrivilege; // @dynamic minimumMediaUserPrivilege;
- (void)setAccessoryNetworkProtectionChangeSupportMinHomeKitVersion:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)setNetworkRouterSupportMinimumHomeKitVersion:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_didUpdateNetworkRouterSupport;
- (void)_handleHomeNetworkRouterSupportUpdated:(id)arg1;
- (void)_didUpdateAccessoryNetworkProtectionGroup:(id)arg1;
- (void)_didRemoveAccessoryNetworkProtectionGroup:(id)arg1;
- (void)_didAddAccessoryNetworkProtectionGroup:(id)arg1;
- (void)_handleAccessoryNetworkProtectionGroupRemovedNotification:(id)arg1;
- (void)_handleAccessoryNetworkProtectionGroupAddedNotification:(id)arg1;
- (void)updateAccessoryNetworkProtectionGroup:(id)arg1 protectionMode:(long long)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_handleHomeNetworkProtectionModeUpdatedNotification:(id)arg1;
- (void)updateNetworkProtection:(long long)arg1 completionHandler:(CDUnknownBlockType)arg2;
@property(readonly, copy) NSArray *accessoryProtectionGroups;
- (void)executeActions:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

