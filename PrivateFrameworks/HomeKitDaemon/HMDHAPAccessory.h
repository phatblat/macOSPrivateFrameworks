//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <HomeKitDaemon/HMDAccessory.h>

#import "HAPRelayAccessoryDelegate.h"
#import "HMDAccessoryIdentify.h"
#import "HMDAccessoryMinimumUserPrivilegeCapable.h"
#import "HMDTimeInformationMonitorDelegate.h"
#import "HMFTimerDelegate.h"

@class HAPPairingIdentity, HMDCharacteristic, HMDDataStreamController, HMDTargetControllerManager, HMFTimer, NSArray, NSData, NSDate, NSMapTable, NSMutableArray, NSMutableSet, NSNumber, NSSet, NSString;

@interface HMDHAPAccessory : HMDAccessory <HMDAccessoryMinimumUserPrivilegeCapable, HAPRelayAccessoryDelegate, HMDTimeInformationMonitorDelegate, HMFTimerDelegate, HMDAccessoryIdentify>
{
    NSMutableArray *_transportInformationInstances;
    BOOL _relayEnabled;
    BOOL _timeInformationServiceExists;
    BOOL _supportsTargetController;
    BOOL _keyGenerationInProgress;
    BOOL _supportsRelay;
    unsigned char _keyGenerationType;
    BOOL _systemTimeNeedsUpdate;
    NSString *_relayIdentifier;
    unsigned long long _currentRelayAccessoryState;
    HMDCharacteristic *_currentTimeCharacteristic;
    HMDCharacteristic *_timeUpdateCharacteristic;
    HMDCharacteristic *_dayOfTheWeekCharacteristic;
    NSNumber *_accessoryFlags;
    NSData *_setupHash;
    NSData *_broadcastKey;
    NSNumber *_keyUpdatedStateNumber;
    NSDate *_keyUpdatedTime;
    NSArray *_targetUUIDs;
    HMDTargetControllerManager *_targetControllerManager;
    NSString *_uniqueIdentifier;
    long long _certificationStatus;
    unsigned long long _activationAttempts;
    unsigned long long _pairingAttempts;
    NSNumber *_backedOffStateNumber;
    HMFTimer *_accessoryDiscoveryBackoffTimer;
    HMFTimer *_accessoryKeyRefreshTimer;
    NSMutableArray *_discoveredServices;
    HMDHAPAccessory *_bridge;
    NSMutableSet *_identifiersForBridgedAccessories;
    NSData *_publicKey;
    NSString *_pairingUsername;
    HMFTimer *_timeInformationTimer;
    HMFTimer *_systemTimeInformationTimer;
    NSSet *_cameraProfiles;
    HMDDataStreamController *_dataStreamController;
    NSMapTable *_serverIDToHAPAccessoryTable;
}

+ (BOOL)hasMessageReceiverChildren;
+ (BOOL)supportsSecureCoding;
+ (unsigned long long)getAWDTransportTypeWithLinkType:(long long)arg1;
+ (Class)transactionClass;
@property(retain, nonatomic) NSMapTable *serverIDToHAPAccessoryTable; // @synthesize serverIDToHAPAccessoryTable=_serverIDToHAPAccessoryTable;
@property(retain, nonatomic) HMDDataStreamController *dataStreamController; // @synthesize dataStreamController=_dataStreamController;
@property(retain, nonatomic) NSSet *cameraProfiles; // @synthesize cameraProfiles=_cameraProfiles;
@property(nonatomic) BOOL systemTimeNeedsUpdate; // @synthesize systemTimeNeedsUpdate=_systemTimeNeedsUpdate;
@property(retain, nonatomic) HMFTimer *systemTimeInformationTimer; // @synthesize systemTimeInformationTimer=_systemTimeInformationTimer;
@property(retain, nonatomic) HMFTimer *timeInformationTimer; // @synthesize timeInformationTimer=_timeInformationTimer;
@property(retain, nonatomic) NSString *pairingUsername; // @synthesize pairingUsername=_pairingUsername;
@property(retain, nonatomic) NSData *publicKey; // @synthesize publicKey=_publicKey;
@property(retain, nonatomic) NSMutableSet *identifiersForBridgedAccessories; // @synthesize identifiersForBridgedAccessories=_identifiersForBridgedAccessories;
@property(nonatomic) __weak HMDHAPAccessory *bridge; // @synthesize bridge=_bridge;
@property(retain, nonatomic) NSMutableArray *discoveredServices; // @synthesize discoveredServices=_discoveredServices;
@property unsigned char keyGenerationType; // @synthesize keyGenerationType=_keyGenerationType;
@property(retain, nonatomic) HMFTimer *accessoryKeyRefreshTimer; // @synthesize accessoryKeyRefreshTimer=_accessoryKeyRefreshTimer;
@property(retain, nonatomic) HMFTimer *accessoryDiscoveryBackoffTimer; // @synthesize accessoryDiscoveryBackoffTimer=_accessoryDiscoveryBackoffTimer;
@property(copy, nonatomic) NSNumber *backedOffStateNumber; // @synthesize backedOffStateNumber=_backedOffStateNumber;
@property(nonatomic) unsigned long long pairingAttempts; // @synthesize pairingAttempts=_pairingAttempts;
@property(nonatomic) unsigned long long activationAttempts; // @synthesize activationAttempts=_activationAttempts;
@property(nonatomic) BOOL supportsRelay; // @synthesize supportsRelay=_supportsRelay;
@property(nonatomic) long long certificationStatus; // @synthesize certificationStatus=_certificationStatus;
@property(copy, nonatomic) NSString *uniqueIdentifier; // @synthesize uniqueIdentifier=_uniqueIdentifier;
@property BOOL keyGenerationInProgress; // @synthesize keyGenerationInProgress=_keyGenerationInProgress;
@property(copy, nonatomic) NSDate *keyUpdatedTime; // @synthesize keyUpdatedTime=_keyUpdatedTime;
@property(copy, nonatomic) NSNumber *keyUpdatedStateNumber; // @synthesize keyUpdatedStateNumber=_keyUpdatedStateNumber;
@property(copy, nonatomic) NSData *broadcastKey; // @synthesize broadcastKey=_broadcastKey;
@property(retain, nonatomic) NSString *relayIdentifier; // @synthesize relayIdentifier=_relayIdentifier;
- (void).cxx_destruct;
- (id)messageReceiverChildren;
- (id)backingStoreObjects:(long long)arg1;
- (void)populateModelObject:(id)arg1 version:(long long)arg2;
- (id)modelObjectWithChangeType:(unsigned long long)arg1;
- (id)transactionWithObjectChangeType:(unsigned long long)arg1;
- (void)_updateBridge:(id)arg1;
- (void)transactionObjectRemoved:(id)arg1 message:(id)arg2;
- (BOOL)updateTransportInformation:(id)arg1;
- (id)retrieveUpdatedTransportInfoArray:(id)arg1;
- (id)getTransportInformationArray;
- (void)transactionObjectUpdated:(id)arg1 newValues:(id)arg2 message:(id)arg3;
- (void)readInitialRequiredCharacteristicsForBTLEAccessory:(CDUnknownBlockType)arg1;
- (id)getOrCreateServiceUpdateTransactionForKey:(id)arg1 fromDictionary:(id)arg2;
- (void)requestResource:(id)arg1 queue:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)primaryIPServer;
- (id)dumpSimpleState;
- (id)dumpState;
- (BOOL)isNotificationEnabled;
- (BOOL)isNonClientNotificationEnabled;
- (BOOL)isNotificationEnabledForClientIdentifier:(id)arg1;
- (void)accessory:(id)arg1 didUpdateAccessoryAccessToken:(id)arg2;
- (void)accessory:(id)arg1 didUpdateAccessoryIdentifier:(id)arg2;
- (void)accessory:(id)arg1 didPairRelayWithError:(id)arg2;
- (void)accessory:(id)arg1 didActivateRelayWithError:(id)arg2;
- (void)accessory:(id)arg1 didUpdateRelayState:(unsigned long long)arg2;
- (void)accessory:(id)arg1 didUpdateRelayEnabled:(BOOL)arg2;
- (void)_handleMultipleCharacteristicsUpdated:(id)arg1 message:(id)arg2 completionQueue:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)handleMultipleCharacteristicsUpdated:(id)arg1 message:(id)arg2 completionQueue:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)accessoryDidBecomeUnreachable:(id)arg1;
- (void)accessoryDidBecomeReachable:(id)arg1;
- (void)_handleConfigureTargets:(id)arg1;
- (void)_handleKeyRefreshTimerFired;
- (void)_removeBackedoffAccessoryForStateNumber:(id)arg1;
- (void)backOffAccessoryForStateNumber:(id)arg1;
- (void)_handleDiscoveryBackoffTimerFired;
- (id)characteristicsPassingTest:(CDUnknownBlockType)arg1;
- (void)identifyAccessory:(id)arg1;
@property(readonly) BOOL supportsIdentify;
- (void)_handleUpdateAuthorizationData:(id)arg1;
- (void)_handleUpdateAssociatedServiceType:(id)arg1;
- (void)_handleRenameService:(id)arg1;
- (long long)reachableTransports;
- (void)setReachability:(BOOL)arg1 serverIdentifier:(id)arg2 linkType:(long long)arg3;
- (void)_updateReachability;
- (id)findCharacteristicType:(id)arg1 forServiceType:(id)arg2;
- (id)findCharacteristic:(id)arg1;
- (id)findCharacteristic:(id)arg1 forService:(id)arg2;
- (id)findService:(id)arg1;
- (void)_evaluateLocalOperationWithCompletion:(CDUnknownBlockType)arg1;
- (void)_updateStateForTrackedAccessory:(id)arg1 stateNumber:(id)arg2;
- (void)updateTrackedAccessoryStateNumber:(id)arg1;
- (void)_retrieveStateForTrackedAccessory:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (BOOL)_containsSecureCharacteristic;
- (BOOL)_shouldTrackAccessoryWithPriority:(char *)arg1;
- (void)_updateAccessoryTracking;
- (void)_reenableNotificationsOnWatch;
- (void)reachabilityDidChange:(id)arg1;
- (void)_enableBroadcastNotifications:(BOOL)arg1 hapAccessory:(id)arg2 forCharacteristics:(id)arg3;
- (void)_enableNotification:(BOOL)arg1 forCharacteristics:(id)arg2 hapAccessory:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (BOOL)_enableNotificationOnResident:(BOOL)arg1 characteristic:(id)arg2 clientIdentifier:(id)arg3 ignoreDeviceUnlockRequirement:(BOOL)arg4;
- (void)_enableNotification:(BOOL)arg1 forCharacteristics:(id)arg2 message:(id)arg3 clientIdentifier:(id)arg4;
- (void)enableNotification:(BOOL)arg1 forCharacteristics:(id)arg2 message:(id)arg3 clientIdentifier:(id)arg4;
- (void)enableNotification:(BOOL)arg1 forCharacteristicIDs:(id)arg2 message:(id)arg3 clientIdentifier:(id)arg4;
- (void)_enableNotification:(BOOL)arg1 matchingHAPAccessory:(id)arg2 ignoreDeviceUnlockRequirement:(BOOL)arg3 clientIdentifier:(id)arg4 forCharacteristics:(id)arg5;
- (void)enableNotification:(BOOL)arg1 ignoreDeviceUnlockRequirement:(BOOL)arg2 clientIdentifier:(id)arg3 forCharacteristics:(id)arg4;
- (void)_disableNotificationsForBundleID:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)disableNotificationsForBundleID:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_notifyNotificationChangesForCharacteristics:(id)arg1 errors:(id)arg2 enableNotification:(BOOL)arg3 message:(id)arg4;
- (void)_notifyCharacteristicNotificationChanges:(id)arg1 enableNotification:(BOOL)arg2 message:(id)arg3 clientIdentifier:(id)arg4;
- (void)_notifyCharacteristicNotificationChangedForCharacteristic:(id)arg1 enableNotification:(BOOL)arg2 message:(id)arg3;
- (void)handleRemoteGatewayNotificationRegistration:(id)arg1 enable:(BOOL)arg2 enableTime:(id)arg3;
- (void)resetNotificationEnabledTime;
@property(readonly, getter=isClientRegisteredForNotifications) BOOL clientRegisteredForNotifications;
- (void)updateNotificationEnabled:(BOOL)arg1 forCharacteristics:(id)arg2 onBehalfOf:(id)arg3;
- (void)_readValueForCharacteristic:(id)arg1 hapAccessory:(id)arg2 requestMessage:(id)arg3;
- (void)_handleCharacteristicRead:(id)arg1;
- (void)_parseResponseFromRemotePeer:(id)arg1 message:(id)arg2 forCharacteristic:(id)arg3;
- (void)_relayReadFromCharacteristic:(id)arg1 toResidentForMessage:(id)arg2 viaDevice:(id)arg3;
- (void)_relayWriteToCharacteristic:(id)arg1 toResidentForMessage:(id)arg2 viaDevice:(id)arg3;
- (void)_handleCharacteristicWrite:(id)arg1;
- (void)_handleCharacteristicError:(id)arg1 characteristic:(id)arg2 message:(id)arg3 read:(BOOL)arg4;
- (void)logDuetEventIfNeeded:(id)arg1 clientName:(id)arg2;
- (void)_logDuetEventIfNeeded:(id)arg1 clientName:(id)arg2;
- (id)_prepareMessagePayloadForCharacteristicRemoteWrite:(id)arg1;
- (void)_writeValue:(id)arg1 forCharacteristic:(id)arg2 hapAccessory:(id)arg3 authorizationData:(id)arg4 message:(id)arg5;
- (void)_readCharacteristicValues:(id)arg1 hapAccessory:(id)arg2 source:(unsigned long long)arg3 queue:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)_writeCharacteristicValues:(id)arg1 hapAccessory:(id)arg2 source:(unsigned long long)arg3 queue:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)populateHMDCharacteristicResponses:(id)arg1 hapResponses:(id)arg2 mapping:(id)arg3 overallError:(id)arg4 requests:(id)arg5;
- (id)hapCharacteristicWriteRequests:(id)arg1 hapAccessory:(id)arg2 hmdResponses:(id *)arg3 mapping:(id *)arg4;
- (void)notifyValue:(id)arg1 previousValue:(id)arg2 error:(id)arg3 forCharacteristic:(id)arg4 requestMessage:(id)arg5;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)hmdCharacteristicForInstanceId:(id)arg1;
- (id)hmdCharacteristicFromHapCharacteristic:(id)arg1;
- (void)_readCharacteristicValues:(id)arg1 localOperationRequired:(BOOL)arg2 source:(unsigned long long)arg3 queue:(id)arg4 completionHandler:(CDUnknownBlockType)arg5 errorBlock:(CDUnknownBlockType)arg6;
- (void)autoUpdateCachedCountDownCharacteristics:(id)arg1;
- (void)readCharacteristicValues:(id)arg1 source:(unsigned long long)arg2 queue:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)_writeCharacteristicValues:(id)arg1 localOperationRequired:(BOOL)arg2 source:(unsigned long long)arg3 queue:(id)arg4 completionHandler:(CDUnknownBlockType)arg5 errorBlock:(CDUnknownBlockType)arg6;
- (void)writeCharacteristicValues:(id)arg1 source:(unsigned long long)arg2 queue:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (BOOL)supportsUserManagement;
- (void)_performOperation:(long long)arg1 linkType:(long long)arg2 operationBlock:(CDUnknownBlockType)arg3 errorBlock:(CDUnknownBlockType)arg4;
- (void)performOperation:(long long)arg1 linkType:(long long)arg2 operationBlock:(CDUnknownBlockType)arg3 errorBlock:(CDUnknownBlockType)arg4;
- (BOOL)matchesHAPAccessoryWithServerIdentifier:(id)arg1 linkType:(long long *)arg2;
- (BOOL)matchesHAPAccessory:(id)arg1;
- (id)matchingHAPAccessoryServerIdentifierWithLinkType:(long long)arg1;
- (id)matchingHAPAccessoryWithLinkType:(long long)arg1;
- (id)matchingHAPAccessoryWithServerIdentifier:(id)arg1;
- (id)matchingHAPAccessoryWithServerIdentifier:(id)arg1 linkType:(long long)arg2;
- (id)matchingTransportInformationWithServerIdentifier:(id)arg1;
- (id)matchingTransportInformationWithServerIdentifier:(id)arg1 linkType:(long long)arg2;
- (BOOL)matchesHMDAccessoryTransportInformationWithServerIdentifier:(id)arg1 instanceID:(id)arg2;
- (id)matchingTransportInformation:(id)arg1;
- (void)mergeTransportInformationInstances:(id)arg1;
- (void)unconfigureAccessoryWithServerIdentifier:(id)arg1 linkType:(long long)arg2 updateReachability:(BOOL)arg3;
- (void)unconfigure;
- (void)configureWithAccessory:(id)arg1 homeNotificationsEnabled:(BOOL)arg2 queue:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (id)configureService:(id)arg1;
- (id)tunneledHAPAccessories;
- (id)getPrimaryHAPAccessories;
- (id)preferredHAPAccessoryForOperation:(long long)arg1 linkType:(long long *)arg2;
- (long long)linkSpeed;
- (BOOL)hasBTLELink;
- (BOOL)hasIPLink;
- (void)_addHAPAccessory:(id)arg1;
- (void)_removeHAPAccessoryWithServerIdentifier:(id)arg1 linkType:(long long)arg2 completion:(CDUnknownBlockType)arg3 completionQueue:(id)arg4;
- (void)removeHAPAccessoryWithServerIdentifier:(id)arg1 linkType:(long long)arg2 completion:(CDUnknownBlockType)arg3 completionQueue:(id)arg4;
- (void)removeRelayUser:(id)arg1 queue:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)addRelayUser:(id)arg1 accessToken:(id)arg2 queue:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)startRelayPairingWithPairingClient:(id)arg1;
- (void)startRelayActivationWithActivationClient:(id)arg1;
- (id)relayAccessory;
- (void)_setCurrentRelayAccessoryState:(unsigned long long)arg1;
- (unsigned long long)_currentRelayAccessoryState;
@property(readonly, nonatomic) unsigned long long currentRelayAccessoryState; // @synthesize currentRelayAccessoryState=_currentRelayAccessoryState;
- (void)_updateRelayEnabled:(BOOL)arg1 notifyRelayManager:(BOOL)arg2;
- (void)_setRelayEnabled:(BOOL)arg1;
@property(nonatomic, getter=isRelayEnabled) BOOL relayEnabled; // @synthesize relayEnabled=_relayEnabled;
- (void)_setRelayIdentifier:(id)arg1;
- (void)_setSupportsRelay:(BOOL)arg1;
- (BOOL)containsCameraService;
- (void)removeTransportInformationInstance:(id)arg1;
- (void)addTransportInformationInstances:(id)arg1;
- (void)addTransportInformationInstance:(id)arg1;
- (id)transportInformationInstances;
- (void)removeBridgedAccessory:(id)arg1;
- (void)addBridgedAccessory:(id)arg1;
- (void)updateButtonConfigurationForTarget:(id)arg1;
- (void)acknowledgeTargetControlService:(id)arg1 active:(BOOL)arg2;
- (void)autoConfigureTargetController;
- (void)_autoConfigureTargetController;
- (void)_configureTargetControllerWithCompletion:(CDUnknownBlockType)arg1;
- (void)_notifyClientsOfTargetControlSupportUpdate;
- (unsigned long long)targetControllerTicksPerSecond;
- (id)targetControllerButtonConfiguration;
- (void)updateTarget:(id)arg1 name:(id)arg2 buttonConfiguration:(id)arg3;
- (void)removeTarget:(id)arg1;
- (void)addTarget:(id)arg1 buttonConfiguration:(id)arg2;
- (BOOL)supportsTargetController;
- (BOOL)_supportsMediaAccessControl;
- (void)_handleServiceRemovedTransaction:(id)arg1 message:(id)arg2;
- (void)_handleAddServiceTransaction:(id)arg1 message:(id)arg2;
- (id)serviceWithUUID:(id)arg1;
@property(readonly, copy, nonatomic) NSArray *services;
- (void)pairingsWithCompletionHandler:(CDUnknownBlockType)arg1;
- (BOOL)isSecuritySessionOpen;
- (void)verifyPairingWithCompletionHandler:(CDUnknownBlockType)arg1;
- (BOOL)isPrimary;
- (void)savePublicKeyToKeychain;
@property(readonly, copy, nonatomic) HAPPairingIdentity *pairingIdentity;
- (void)setPairingUsername:(id)arg1 publicKey:(id)arg2;
- (void)handlePairedStateChange:(BOOL)arg1;
@property(readonly, nonatomic, getter=isPaired) BOOL paired;
- (void)timeInformationMonitorDidChangeTime;
- (void)_registerForTimeMonitor;
- (void)registerForTimeMonitor;
- (void)_deRegisterForTimeMonitor;
- (void)deRegisterForTimeMonitor;
- (void)writeTimeInformationCharacteristicsForAccessory:(id)arg1;
- (BOOL)updateTimeInformationCharacteristicsForAccessory:(id)arg1;
- (void)_writeTimeInformationCharacteristicsForAccessory;
- (void)_readandWriteToCurrentTime:(id)arg1 errorBlock:(CDUnknownBlockType)arg2;
- (void)_readAndWriteTimeInformationCharacteristic:(id)arg1;
- (void)timerDidFire:(id)arg1;
- (void)_startSystemTimeWriteTimeInformationTimer;
- (void)_stopSystemTimeWriteTimeInformationTimer;
- (void)_startWriteTimeInformationTimer;
- (void)_stopWriteTimeInformationTimer;
- (id)updateAccessoryFlagsAndNotifyClients:(id)arg1;
- (id)namesOfServicesShowingTilesInHomeApp;
- (BOOL)updateAccessoryInformation:(id)arg1;
- (BOOL)isReadingRequiredForBTLEAccessoryCharacteristic:(id)arg1 forceReadFWVersion:(BOOL)arg2;
- (void)_handleCharacteristicsChangedNotification:(id)arg1;
- (void)_setSystemTimeNeedsUpdate:(BOOL)arg1;
- (void)_setTimeInformationServiceExists:(BOOL)arg1;
- (void)setTimeInformationServiceExists:(BOOL)arg1;
- (BOOL)_timeInformationServiceExists;
@property(readonly, nonatomic) BOOL timeInformationServiceExists; // @synthesize timeInformationServiceExists=_timeInformationServiceExists;
- (void)_setTimeUpdateCharacteristic:(id)arg1;
- (void)setTimeUpdateCharacteristic:(id)arg1;
- (id)_timeUpdateCharacteristic;
@property(readonly, nonatomic) __weak HMDCharacteristic *timeUpdateCharacteristic; // @synthesize timeUpdateCharacteristic=_timeUpdateCharacteristic;
- (void)_setDayOfTheWeekCharacteristic:(id)arg1;
- (void)setDayOfTheWeekCharacteristic:(id)arg1;
- (id)_dayOfTheWeekCharacteristic;
@property(readonly, nonatomic) __weak HMDCharacteristic *dayOfTheWeekCharacteristic; // @synthesize dayOfTheWeekCharacteristic=_dayOfTheWeekCharacteristic;
- (void)_setCurrentTimeCharacteristic:(id)arg1;
- (void)setCurrentTimeCharacteristic:(id)arg1;
- (id)_currentTimeCharacteristic;
@property(readonly, nonatomic) __weak HMDCharacteristic *currentTimeCharacteristic; // @synthesize currentTimeCharacteristic=_currentTimeCharacteristic;
- (void)handleUpdatedPassword:(id)arg1;
- (void)handleUpdatedMinimumUserPrivilege:(long long)arg1;
- (BOOL)supportsMinimumUserPrivilege;
- (BOOL)providesHashRouteID;
- (void)updateTargetUUIDs:(id)arg1;
- (void)_saveTargetUUIDs:(id)arg1;
- (void)saveTargetUUIDs:(id)arg1;
@property(retain, nonatomic) HMDTargetControllerManager *targetControllerManager; // @synthesize targetControllerManager=_targetControllerManager;
@property(retain, nonatomic) NSArray *targetUUIDs; // @synthesize targetUUIDs=_targetUUIDs;
- (BOOL)_doesAccessoryProvideServiceOfType:(id)arg1;
@property(copy, nonatomic) NSData *setupHash; // @synthesize setupHash=_setupHash;
- (void)setBroadcastKey:(id)arg1 keyUpdatedStateNumber:(id)arg2 keyUpdatedTime:(id)arg3;
- (void)_updateBroadcastKey:(id)arg1 keyUpdatedStateNumber:(id)arg2 keyUpdatedTime:(double)arg3;
@property(copy, nonatomic) NSNumber *accessoryFlags; // @synthesize accessoryFlags=_accessoryFlags;
- (void)updateAccessoryFlags:(id)arg1;
- (void)configureBulletinNotification:(CDUnknownBlockType)arg1;
- (void)configure:(id)arg1 msgDispatcher:(id)arg2 accessoryConfigureGroup:(id)arg3;
- (BOOL)shouldEnableDaemonRelaunch;
- (void)takeOwnershipOfAppData:(id)arg1;
- (void)_registerForMessages;
@property(readonly, nonatomic) NSString *serializedIdentifier;
@property(readonly, copy) NSString *description;
- (BOOL)isEqual:(id)arg1;
@property(readonly) unsigned long long hash;
- (void)dealloc;
- (id)initWithTransaction:(id)arg1 home:(id)arg2;
- (id)init;
- (void)addDataStreamBulkSendListener:(id)arg1;
- (void)_removeDataStreamController:(id)arg1;
- (void)_createDataStreamController:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

