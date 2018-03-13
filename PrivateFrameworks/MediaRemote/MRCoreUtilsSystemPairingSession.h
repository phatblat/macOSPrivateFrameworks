//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <MediaRemote/MRCoreUtilsPairingSession.h>

@interface MRCoreUtilsSystemPairingSession : MRCoreUtilsPairingSession
{
}

+ (id)globalPairingQueue;
+ (id)pairingManager;
+ (BOOL)systemPairingAvailable;
- (id)updateMediaRemotePairedDevice:(void *)arg1;
- (id)pairedPeerFromPeerDevice:(void *)arg1;
- (void *)peerDeviceFromPairedPeer:(id)arg1;
- (struct NSMutableDictionary *)mediaRemotePairedDevices;
- (id)pairedPeerDevices;
- (void *)pairedPeerDevice;
- (id)updatePeer;
- (id)removePeer;
- (id)addPeer;
- (BOOL)shouldAutoRetryPairingExchange:(id)arg1;
- (BOOL)shouldRetry;
- (id)initializePairingSession:(struct PairingSessionPrivate *)arg1;

@end

