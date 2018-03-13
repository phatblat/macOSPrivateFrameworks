//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <WirelessProximity/WPClient.h>

@class NSMutableDictionary;

@interface WPContinuity : WPClient
{
    long long _btBandwidthState;
    id <WPContinuityDelegate> _delegate;
    NSMutableDictionary *_transfers;
}

+ (long long)continuityTypeFromClientType:(unsigned char)arg1;
+ (unsigned char)clientTypeFromContinuityType:(long long)arg1;
@property(retain) NSMutableDictionary *transfers; // @synthesize transfers=_transfers;
@property(nonatomic) __weak id <WPContinuityDelegate> delegate; // @synthesize delegate=_delegate;
@property long long btBandwidthState; // @synthesize btBandwidthState=_btBandwidthState;
- (void).cxx_destruct;
- (void)peerTrackingAvailable;
- (void)peerTrackingFull;
- (void)stateDidChange:(long long)arg1;
- (void)bandwidthStateUpdated:(id)arg1;
- (void)central:(id)arg1 subscribed:(BOOL)arg2 toCharacteristic:(id)arg3 inService:(id)arg4;
- (void)receivedData:(id)arg1 forCharacteristic:(id)arg2 inService:(id)arg3 forPeripheral:(id)arg4;
- (void)sentData:(id)arg1 forCharacteristic:(id)arg2 inService:(id)arg3 forPeripheral:(id)arg4 withError:(id)arg5;
- (void)sendData:(id)arg1 toPeer:(id)arg2;
- (void)disconnectedDevice:(id)arg1 withError:(id)arg2;
- (void)disconnectFromPeer:(id)arg1;
- (void)updatedNotificationState:(BOOL)arg1 forCharacteristic:(id)arg2 inService:(id)arg3 withPeripheral:(id)arg4;
- (void)discoveredCharacteristicsAndServices:(id)arg1 forPeripheral:(id)arg2;
- (void)connectedDevice:(id)arg1 withError:(id)arg2 shouldDiscover:(BOOL)arg3;
- (void)connectToPeer:(id)arg1;
- (void)deviceDiscovered:(id)arg1;
- (void)lostPeer:(id)arg1 ofType:(unsigned char)arg2;
- (void)stoppedTrackingPeer:(id)arg1 ofType:(unsigned char)arg2;
- (void)stopTrackingPeer:(id)arg1 forType:(long long)arg2;
- (void)failedToStartTrackingPeer:(id)arg1 error:(id)arg2;
- (void)startedTrackingPeer:(id)arg1 ofType:(unsigned char)arg2;
- (void)startTrackingPeer:(id)arg1 forType:(long long)arg2;
- (void)scanningFailedToStart:(id)arg1 ofType:(unsigned char)arg2;
- (void)scanningStoppedOfType:(unsigned char)arg1;
- (void)scanningStartedOfType:(unsigned char)arg1;
- (void)stopScanningForType:(long long)arg1;
- (void)updateScanningRequest:(id)arg1 withUpdate:(CDUnknownBlockType)arg2;
- (void)startScanningForType:(long long)arg1 withData:(id)arg2 mask:(id)arg3 peers:(id)arg4 boostedScan:(BOOL)arg5 duplicates:(BOOL)arg6;
- (void)startScanningForType:(long long)arg1 withData:(id)arg2 mask:(id)arg3 peers:(id)arg4 boostedScan:(BOOL)arg5;
- (void)startScanningForType:(long long)arg1 withData:(id)arg2 mask:(id)arg3 peers:(id)arg4;
- (void)startScanningForType:(long long)arg1 withData:(id)arg2 peers:(id)arg3;
- (void)startScanningForType:(long long)arg1 withData:(id)arg2;
- (void)advertisingStartedOfType:(unsigned char)arg1;
- (void)advertisingStoppedOfType:(unsigned char)arg1;
- (void)advertisingFailedToStart:(id)arg1 ofType:(unsigned char)arg2;
- (void)advertisingPendingOfType:(unsigned char)arg1;
- (void)stopAdvertisingOfType:(long long)arg1;
- (void)updateAdvertisingRequest:(id)arg1 withUpdate:(CDUnknownBlockType)arg2;
- (void)startAdvertisingOfType:(long long)arg1 withData:(id)arg2;
- (void)populateClientGATT:(CDUnknownBlockType)arg1;
- (void)invalidate;
- (id)clientAsString;
- (id)init;
- (id)initWithDelegate:(id)arg1 queue:(id)arg2;

@end

