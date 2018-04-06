//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "TUCallCapabilitiesXPCClient.h"
#import "TUCallCapabilitiesXPCServerActions.h"

@class NSObject<OS_dispatch_queue>, NSObject<OS_dispatch_semaphore>, NSString, NSXPCConnection, TUCallCapabilitiesState;

@interface TUCallCapabilitiesXPCClient : NSObject <TUCallCapabilitiesXPCClient, TUCallCapabilitiesXPCServerActions>
{
    int _token;
    NSObject<OS_dispatch_queue> *_queue;
    NSXPCConnection *_xpcConnection;
    id <TUCallCapabilitiesXPCServer> _server;
    TUCallCapabilitiesState *_state;
    NSObject<OS_dispatch_semaphore> *_stateSemaphore;
}

@property(retain, nonatomic) NSObject<OS_dispatch_semaphore> *stateSemaphore; // @synthesize stateSemaphore=_stateSemaphore;
@property(retain, nonatomic) TUCallCapabilitiesState *state; // @synthesize state=_state;
@property(nonatomic) id <TUCallCapabilitiesXPCServer> server; // @synthesize server=_server;
@property(nonatomic) int token; // @synthesize token=_token;
@property(retain, nonatomic) NSXPCConnection *xpcConnection; // @synthesize xpcConnection=_xpcConnection;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
- (void).cxx_destruct;
- (void)_updateState:(id)arg1;
- (void)_retrieveStateForInitialUpdate:(BOOL)arg1;
- (oneway void)capabilityStateUpdated:(id)arg1;
- (oneway void)cancelPinRequestFromPrimaryDevice;
- (oneway void)requestPinFromPrimaryDevice;
- (oneway void)invalidateAndRefreshThumperCallingProvisioningURL;
- (oneway void)invalidateAndRefreshWiFiCallingProvisioningURL;
- (oneway void)endEmergencyCallbackMode;
- (oneway void)setRelayCallingEnabled:(BOOL)arg1 forDeviceWithID:(id)arg2;
- (oneway void)setThumperCallingAllowedOnDefaultPairedDevice:(BOOL)arg1;
- (oneway void)setThumperCallingAllowed:(BOOL)arg1 onSecondaryDeviceWithID:(id)arg2;
- (oneway void)setRelayCallingEnabled:(BOOL)arg1;
- (oneway void)setThumperCallingEnabled:(BOOL)arg1;
- (oneway void)setVoLTECallingEnabled:(BOOL)arg1;
- (oneway void)setWiFiCallingRoamingEnabled:(BOOL)arg1;
- (oneway void)setWiFiCallingEnabled:(BOOL)arg1;
- (id)serverWithErrorHandler:(CDUnknownBlockType)arg1;
- (void)invalidateXPCConnection;
- (void)dealloc;
- (id)initWithServer:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
