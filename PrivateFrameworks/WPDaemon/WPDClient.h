//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "WPDClientProtocol.h"
#import "WPXPCDaemonProtocol.h"

@class NSMutableDictionary, NSMutableSet, NSObject<OS_dispatch_queue>, NSString, NSUUID, NSXPCConnection, WPDAdvertisingManager, WPDObjectDiscoveryManager, WPDPipeManager, WPDScanManager, WPDZoneManager, WPDaemonServer;

@interface WPDClient : NSObject <WPXPCDaemonProtocol, WPDClientProtocol>
{
    BOOL _isTestModeClient;
    BOOL _canDisableScans;
    BOOL _registered;
    BOOL _portTickled;
    BOOL _holdVoucher;
    BOOL _listeningToBluetoothBandwdith;
    BOOL _entitledForZones;
    BOOL _entitledForObjectDiscovery;
    BOOL _entitledForRanging;
    BOOL _pendingSent;
    BOOL _scanBlacklisted;
    BOOL _scansOff;
    BOOL _isObjectDiscovery;
    BOOL _supportsObjectDiscovery;
    BOOL _supportsRanging;
    int _processID;
    id <WPDClientDelegate> _delegate;
    NSUUID *_clientUUID;
    NSString *_clientTypeString;
    NSString *_processName;
    NSMutableSet *_endpointsSet;
    NSXPCConnection *_conn;
    NSObject<OS_dispatch_queue> *_messageQueue;
    WPDaemonServer *_server;
    NSObject<OS_dispatch_queue> *_serverQueue;
    NSString *_machName;
    WPDScanManager *_scanManager;
    WPDAdvertisingManager *_advertisingManager;
    WPDZoneManager *_zoneManager;
    WPDPipeManager *_pipeManager;
    WPDObjectDiscoveryManager *_objectDiscoveryManager;
    NSMutableDictionary *_connections;
    NSUUID *_identifier;
    NSMutableDictionary *_advertTimers;
    NSMutableDictionary *_advertTimerState;
    NSMutableDictionary *_scanTimers;
    NSMutableDictionary *_connectionTimer;
    NSMutableSet *_lePipePeersSet;
}

@property(readonly) BOOL supportsRanging; // @synthesize supportsRanging=_supportsRanging;
@property(readonly) BOOL supportsObjectDiscovery; // @synthesize supportsObjectDiscovery=_supportsObjectDiscovery;
@property BOOL isObjectDiscovery; // @synthesize isObjectDiscovery=_isObjectDiscovery;
@property(retain) NSMutableSet *lePipePeersSet; // @synthesize lePipePeersSet=_lePipePeersSet;
@property BOOL scansOff; // @synthesize scansOff=_scansOff;
@property BOOL scanBlacklisted; // @synthesize scanBlacklisted=_scanBlacklisted;
@property(retain) NSMutableDictionary *connectionTimer; // @synthesize connectionTimer=_connectionTimer;
@property(retain) NSMutableDictionary *scanTimers; // @synthesize scanTimers=_scanTimers;
@property(retain) NSMutableDictionary *advertTimerState; // @synthesize advertTimerState=_advertTimerState;
@property(retain) NSMutableDictionary *advertTimers; // @synthesize advertTimers=_advertTimers;
@property BOOL pendingSent; // @synthesize pendingSent=_pendingSent;
@property BOOL entitledForRanging; // @synthesize entitledForRanging=_entitledForRanging;
@property BOOL entitledForObjectDiscovery; // @synthesize entitledForObjectDiscovery=_entitledForObjectDiscovery;
@property BOOL entitledForZones; // @synthesize entitledForZones=_entitledForZones;
@property(retain) NSUUID *identifier; // @synthesize identifier=_identifier;
@property(retain) NSMutableDictionary *connections; // @synthesize connections=_connections;
@property __weak WPDObjectDiscoveryManager *objectDiscoveryManager; // @synthesize objectDiscoveryManager=_objectDiscoveryManager;
@property __weak WPDPipeManager *pipeManager; // @synthesize pipeManager=_pipeManager;
@property __weak WPDZoneManager *zoneManager; // @synthesize zoneManager=_zoneManager;
@property __weak WPDAdvertisingManager *advertisingManager; // @synthesize advertisingManager=_advertisingManager;
@property __weak WPDScanManager *scanManager; // @synthesize scanManager=_scanManager;
@property BOOL listeningToBluetoothBandwdith; // @synthesize listeningToBluetoothBandwdith=_listeningToBluetoothBandwdith;
@property BOOL holdVoucher; // @synthesize holdVoucher=_holdVoucher;
@property BOOL portTickled; // @synthesize portTickled=_portTickled;
@property(retain) NSString *machName; // @synthesize machName=_machName;
@property(readonly) __weak NSObject<OS_dispatch_queue> *serverQueue; // @synthesize serverQueue=_serverQueue;
@property(readonly) __weak WPDaemonServer *server; // @synthesize server=_server;
@property BOOL registered; // @synthesize registered=_registered;
@property(retain) NSObject<OS_dispatch_queue> *messageQueue; // @synthesize messageQueue=_messageQueue;
@property(retain) NSXPCConnection *conn; // @synthesize conn=_conn;
@property(retain) NSMutableSet *endpointsSet; // @synthesize endpointsSet=_endpointsSet;
@property BOOL canDisableScans; // @synthesize canDisableScans=_canDisableScans;
@property BOOL isTestModeClient; // @synthesize isTestModeClient=_isTestModeClient;
@property(retain) NSString *processName; // @synthesize processName=_processName;
@property int processID; // @synthesize processID=_processID;
@property(retain) NSString *clientTypeString; // @synthesize clientTypeString=_clientTypeString;
@property(retain) NSUUID *clientUUID; // @synthesize clientUUID=_clientUUID;
@property(readonly) __weak id <WPDClientDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)receivedTestResponse:(id)arg1;
- (void)sendTestRequest:(id)arg1;
- (void)stopScans;
- (void)sendDatatoLePipe:(id)arg1 forPeer:(id)arg2;
- (void)unregisterEndpoint:(id)arg1;
- (void)registerEndpoint:(id)arg1 requireAck:(BOOL)arg2 requireEncryption:(BOOL)arg3;
- (void)dumpDaemonState;
- (void)disableScanning;
- (void)getPowerLogStats:(CDUnknownBlockType)arg1;
- (void)enableTestMode;
- (void)readyForDataTransfer;
- (id)connectionForUUID:(id)arg1;
- (id)getManager;
- (void)bandwidthStateUpdated:(id)arg1;
- (void)listenToBandwidthNotifications;
- (void)checkAllowDuplicates:(CDUnknownBlockType)arg1;
- (void)rangingEnabled:(BOOL)arg1 withError:(id)arg2;
- (void)isRangingEnabledReply:(CDUnknownBlockType)arg1;
- (void)enableRanging:(BOOL)arg1 reply:(CDUnknownBlockType)arg2;
- (void)receivedData:(id)arg1 fromEndpoint:(id)arg2 forPeripheral:(id)arg3;
- (void)receivedData:(id)arg1 fromCharacteristic:(id)arg2 inService:(id)arg3 forPeripheral:(id)arg4;
- (void)sentData:(id)arg1 toEndpoint:(id)arg2 forPeripheral:(id)arg3 withError:(id)arg4;
- (void)sentData:(id)arg1 forCharacteristic:(id)arg2 inService:(id)arg3 forPeripheral:(id)arg4 withError:(id)arg5;
- (void)sendDataToCharacteristic:(id)arg1 inService:(id)arg2 forPeer:(id)arg3;
- (void)discoveredCharacteristicsAndServices:(id)arg1 forPeripheral:(id)arg2;
- (void)discoverCharacteristicsAndServices:(id)arg1 forPeripheral:(id)arg2;
- (void)central:(id)arg1 subscribed:(BOOL)arg2 toCharacteristic:(id)arg3 inService:(id)arg4;
- (void)updatedNotificationState:(BOOL)arg1 forCharacteristic:(id)arg2 inService:(id)arg3 withPeripheral:(id)arg4;
- (void)shouldSubscribe:(BOOL)arg1 toPeer:(id)arg2 withCharacteristic:(id)arg3 inService:(id)arg4;
- (void)cancelConnectionTimer:(id)arg1;
- (void)createdConnection:(id)arg1;
- (void)disconnectedDeviceOverLEPipe:(id)arg1 withError:(id)arg2;
- (void)disconnectedPeer:(id)arg1 error:(id)arg2;
- (void)disconnectFromPeer:(id)arg1;
- (void)connectedDeviceOverLEPipe:(id)arg1;
- (void)connectedDevice:(id)arg1 withError:(id)arg2 shouldDiscover:(BOOL)arg3;
- (void)connectToPeer:(id)arg1 withOptions:(id)arg2;
- (void)exitedZone:(id)arg1;
- (void)enteredZone:(id)arg1 manufacturerData:(id)arg2;
- (void)getAllTrackedZones;
- (void)stopTrackingAllZones;
- (void)stopTrackingZones:(id)arg1;
- (void)startTrackingZone:(id)arg1;
- (void)peerTrackingFull;
- (void)peerTrackingAvailable;
- (void)lostPeer:(id)arg1 ofType:(unsigned char)arg2;
- (void)foundPeer:(id)arg1 ofType:(unsigned char)arg2;
- (void)stoppedTrackingPeer:(id)arg1 ofType:(unsigned char)arg2;
- (void)stopTrackingPeerWithRequest:(id)arg1;
- (void)startTrackingPeerWithRequest:(id)arg1;
- (void)stopScanning_async:(id)arg1;
- (void)stopScanning:(id)arg1;
- (void)startScanning_async:(id)arg1;
- (void)startScanning:(id)arg1;
- (void)registerForAnyScanResults:(BOOL)arg1;
- (void)resetConnection;
- (void)anyDiscoveredDevice:(id)arg1;
- (void)discoveredDevices:(id)arg1;
- (void)discoveredDevice:(id)arg1;
- (void)notifyClientStateChange:(long long)arg1 Restricted:(BOOL)arg2;
- (void)advertisingStoppedOfType:(unsigned char)arg1 withError:(id)arg2;
- (void)advertisingPendingOfType:(unsigned char)arg1;
- (void)advertisingFailedToStart:(id)arg1 ofType:(unsigned char)arg2;
- (void)advertisingStartedOfType:(unsigned char)arg1;
- (void)stopAdvertising_async:(id)arg1;
- (void)stopAdvertising:(id)arg1;
- (void)startAdvertising_async:(id)arg1;
- (void)startAdvertising:(id)arg1;
- (void)addCharacteristic:(id)arg1 forService:(id)arg2;
- (void)queueBlock:(CDUnknownBlockType)arg1;
- (void)destroy_async;
- (void)destroy;
- (void)setupConnection;
- (void)endTestMode;
- (void)checkEntitlements;
- (void)resumeCommunicationWithConnection:(id)arg1 andProcessID:(int)arg2;
- (void)tickleMachPort;
- (void)sendRegisteredWithDaemonAndContinuingSession:(BOOL)arg1;
- (void)registerWithDaemon:(id)arg1 forProcess:(id)arg2 machName:(id)arg3 shouldHoldVoucherForConnections:(BOOL)arg4;
- (id)xpcConnectionForClient;
- (id)generateStateDump;
@property(readonly, copy) NSString *description;
- (void)dealloc;
- (id)initWithXPCConnection:(id)arg1 server:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
