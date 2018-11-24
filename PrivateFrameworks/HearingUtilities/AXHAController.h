//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "AXIDCControllerBrowserDelegateProtocol.h"

@class HCXPCMessage, NSDictionary, NSString;

@interface AXHAController : NSObject <AXIDCControllerBrowserDelegateProtocol>
{
    BOOL _isListening;
    NSString *_pairedDeviceUUID;
    NSDictionary *_availableDevicesDescription;
    HCXPCMessage *_liveListenMessage;
}

+ (id)sharedController;
@property(retain, nonatomic) HCXPCMessage *liveListenMessage; // @synthesize liveListenMessage=_liveListenMessage;
@property(retain, nonatomic) NSDictionary *availableDevicesDescription; // @synthesize availableDevicesDescription=_availableDevicesDescription;
@property(retain, nonatomic) NSString *pairedDeviceUUID; // @synthesize pairedDeviceUUID=_pairedDeviceUUID;
- (void).cxx_destruct;
- (id)disconnectAndForceSlave:(id)arg1;
- (id)connectToControllerWithID:(id)arg1;
- (id)readAvailableControllers:(id)arg1;
- (id)readAvailableDevices:(id)arg1;
- (id)writeDeviceProperty:(id)arg1;
- (void)sendUpdatesForProperties:(id)arg1 excludingClient:(id)arg2;
- (id)readDeviceProperty:(id)arg1;
- (id)registerForDeviceUpdates:(id)arg1;
- (id)registerForAvailableDevicesUpdates:(id)arg1;
- (void)availableRemoteControllersDidChange;
- (void)passConnectionToController:(id)arg1 withReason:(long long)arg2;
- (void)connectToPairedDevice;
- (void)trustChainAvailabilityDidChange:(id)arg1;
- (void)startSearchCycle;
- (void)setPairedHearingAid:(id)arg1;
- (void)setListenForAvailableDeviceUpdates:(BOOL)arg1;
- (BOOL)hearingAidsPaired;
- (id)currentDeviceController;
- (void)willSwitchUser;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

