//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class GKDiscoveryBonjour, NSMutableDictionary, NSObject<OS_dispatch_queue>, NSString;

@interface GKDiscoveryManager : NSObject
{
    CDUnknownBlockType _playerFoundHandler;
    CDUnknownBlockType _playerLostHandler;
    CDUnknownBlockType _receiveDataHandler;
    NSString *_playerID;
    NSString *_deviceID;
    NSMutableDictionary *_peers;
    GKDiscoveryBonjour *_bonjour;
    NSObject<OS_dispatch_queue> *_peersQueue;
}

+ (id)parseDeviceIDFromServiceName:(id)arg1;
@property(copy, nonatomic) NSString *deviceID; // @synthesize deviceID=_deviceID;
@property(copy, nonatomic) NSString *playerID; // @synthesize playerID=_playerID;
@property(retain, nonatomic) GKDiscoveryBonjour *bonjour; // @synthesize bonjour=_bonjour;
@property(copy, nonatomic) CDUnknownBlockType receiveDataHandler; // @synthesize receiveDataHandler=_receiveDataHandler;
@property(copy, nonatomic) CDUnknownBlockType playerLostHandler; // @synthesize playerLostHandler=_playerLostHandler;
@property(copy, nonatomic) CDUnknownBlockType playerFoundHandler; // @synthesize playerFoundHandler=_playerFoundHandler;
@property(retain, nonatomic) NSMutableDictionary *peers; // @synthesize peers=_peers;
- (void)removeInterface:(unsigned int)arg1 forPeerWithServiceName:(id)arg2;
- (void)didLosePeer:(id)arg1;
- (id)peersList;
- (void)addInterface:(unsigned int)arg1 withDiscoveryInfo:(id)arg2 forPeerWithServiceName:(id)arg3;
- (void)forgetParticipant:(id)arg1 deviceID:(id)arg2;
- (void)sendDataToParticipant:(id)arg1 deviceID:(id)arg2 data:(id)arg3 withCompletionHandler:(CDUnknownBlockType)arg4;
- (void)stopBrowsing;
- (void)startBrowsingLocalPlayer:(id)arg1;
- (void)cleanUpPeersForBrowse;
- (void)stopAdvertising;
- (id)localServiceName;
- (id)serviceNameforDeviceID:(id)arg1 playerID:(id)arg2;
- (id)startAdvertisingLocalPlayer:(id)arg1 discoveryInfo:(id)arg2;
- (void)passDataToGKLayer:(id)arg1 fromPeer:(id)arg2;
- (void)processEvent:(int)arg1 forPeer:(id)arg2 withUserInfo:(id)arg3;
- (void)connectToSockAddr:(struct sockaddr *)arg1 port:(unsigned short)arg2 forPeer:(id)arg3;
- (void)resolveForPeer:(id)arg1;
- (id)generateDeviceID;
- (void)dealloc;
- (id)initWithDomain:(id)arg1 type:(id)arg2;
- (id)init;

@end

