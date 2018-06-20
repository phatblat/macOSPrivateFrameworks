//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "ACCExternalAccessoryXPCClientProtocol.h"

@class NSDictionary, NSMutableSet, NSString, NSXPCConnection;

@interface ACCExternalAccessoryProvider : NSObject <ACCExternalAccessoryXPCClientProtocol>
{
    int _clientCapabilities;
    id <ACCExternalAccessoryProviderProtocol> _delegate;
    NSXPCConnection *_serverConnection;
    id <ACCExternalAccessoryXPCServerProtocol> _remoteObject;
    NSDictionary *_eaClientRegistrationInfo;
    NSMutableSet *_currentlyConnectedAccessories;
}

+ (id)accessoryDictionaryForLogging:(id)arg1;
@property(retain, nonatomic) NSMutableSet *currentlyConnectedAccessories; // @synthesize currentlyConnectedAccessories=_currentlyConnectedAccessories;
@property(retain, nonatomic) NSDictionary *eaClientRegistrationInfo; // @synthesize eaClientRegistrationInfo=_eaClientRegistrationInfo;
@property(nonatomic) int clientCapabilities; // @synthesize clientCapabilities=_clientCapabilities;
@property(retain, nonatomic) id <ACCExternalAccessoryXPCServerProtocol> remoteObject; // @synthesize remoteObject=_remoteObject;
@property(retain, nonatomic) NSXPCConnection *serverConnection; // @synthesize serverConnection=_serverConnection;
@property(nonatomic) __weak id <ACCExternalAccessoryProviderProtocol> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)updateAccessoryInfo:(id)arg1 forUUID:(id)arg2;
- (void)vehicleStatusUpdate:(id)arg1 forUUID:(id)arg2;
- (id)currentVehicleInfo:(id)arg1;
- (void)destinationSharingStatus:(BOOL)arg1 forDestinationUUID:(id)arg2 supportedParams:(id)arg3 forUUID:(id)arg4;
- (void)stopDestinationSharingForUUID:(id)arg1;
- (void)startDestinationSharingForUUID:(id)arg1;
- (void)sendOutgoingExternalAccessoryData:(id)arg1 forEASessionIdentifier:(id)arg2 withReply:(CDUnknownBlockType)arg3;
- (void)closeExternalAccessorySession:(id)arg1;
- (void)openSocketForAppToAccessory:(id)arg1;
- (void)openSocketForAccessoryToApp:(id)arg1;
- (void)createExternalAccessorySessionForProtocol:(id)arg1 accessoryUUID:(id)arg2 withEASessionReply:(CDUnknownBlockType)arg3;
- (void)enqueueLocationNMEASentence:(id)arg1 forUUID:(id)arg2;
- (void)accessoryCloseExternalAccessorySession:(id)arg1;
- (void)resumeEASessionData:(id)arg1;
- (void)handleIncomingExternalAccessoryData:(id)arg1 forEASessionIdentifier:(id)arg2 withReply:(CDUnknownBlockType)arg3;
- (void)ExternalAccessoryLeft:(id)arg1;
- (void)ExternalAccessoryArrived:(id)arg1;
- (void)_removeAllAccessories;
- (void)_removeAccessoryForPrimaryUUID:(id)arg1;
- (id)_findAccessoryForPrimaryUUID:(id)arg1;
- (void)_constructClientRegistrationInfo;
- (void)stopLocationInformationForAccessoryUUID:(id)arg1;
- (void)sendGPRMCDataStatus:(BOOL)arg1 ValueV:(BOOL)arg2 ValueX:(BOOL)arg3 forAccessoryUUID:(id)arg4;
- (void)sendNMEAFilterList:(id)arg1 forAccessoryUUID:(id)arg2;
- (void)startLocationInformationForAccessoryUUID:(id)arg1;
- (void)destinationInformation:(id)arg1 forUUID:(id)arg2;
- (void)sendDeviceIdentifierNotification:(id)arg1 usbIdentifier:(id)arg2 forUUID:(id)arg3;
- (void)requestAccessoryWifiCredentials:(id)arg1;
- (void)connectToServer:(BOOL)arg1;
- (void)dealloc;
- (id)initWithDelegate:(id)arg1 capabilities:(int)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
