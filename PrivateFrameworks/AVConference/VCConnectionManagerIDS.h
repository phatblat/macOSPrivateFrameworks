//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <AVConference/VCConnectionManager.h>

@class VCSessionBitrateArbiter;

__attribute__((visibility("hidden")))
@interface VCConnectionManagerIDS : VCConnectionManager
{
    double _lastTimestampForRemoteSendingFromNonPrimary;
    double _lastTimestampPreferredRemoteInterfaceUpdated;
    unsigned int _sentPacketCount[256];
    unsigned int _sentByteCount[256];
    unsigned int _receivedPacketCount[256];
    unsigned int _receivedByteCount[256];
    VCSessionBitrateArbiter *_bitrateArbiter;
    BOOL _isMultiwaySession;
}

- (void)reportConnection:(id)arg1 isInitialConnection:(BOOL)arg2;
- (void)sourceDestinationInfo:(struct tagVCSourceDestinationInfo *)arg1 isSourceOnCellular:(char *)arg2 isSourceIPv6:(char *)arg3;
- (BOOL)addConnectionToConnectionArray:(id)arg1;
- (BOOL)shouldReplaceConnection:(id)arg1 withConnection:(id)arg2;
- (void)resetPacketCountAndByteCountWithConnection:(id)arg1;
- (void)updateConnectionForDuplication;
- (void)updateSessionStats:(unsigned short)arg1;
- (id)copyConnectionWithSourceDestinationInfo:(struct tagVCSourceDestinationInfo *)arg1 isPrimary:(char *)arg2;
- (BOOL)shouldAcceptDataFromSourceDestinationInfo:(struct tagVCSourceDestinationInfo *)arg1;
- (void)setPreferredRemoteInterfaceForDuplication:(int)arg1;
- (void)setPreferredLocalInterfaceForDuplication:(int)arg1;
- (void)updateCellularTech:(int)arg1 forLocalInterface:(BOOL)arg2;
- (void)updateCellularMTU:(int)arg1;
- (id)getSecondaryConnectionToBeCompared;
- (id)getPrimaryConnectionToBeCompared;
- (unsigned int)getByteCountWithIndex:(unsigned char)arg1 isOutgoing:(BOOL)arg2;
- (unsigned int)getPacketCountWithIndex:(unsigned char)arg1 isOutgoing:(BOOL)arg2;
- (void)optOutAllStreamsForNonPrimaryConnections;
- (void)resetParticipantGenerationCounter;
- (void)synchronizeParticipantGenerationCounter:(unsigned char)arg1;
- (void)updatePacketCountAndByteCountWithIndex:(unsigned char)arg1 packetSize:(int)arg2 numOfStreamId:(int)arg3 isPriorityIncluded:(BOOL)arg4 isOutgoing:(BOOL)arg5;
- (int)removeConnection:(id)arg1;
- (void)handleSecondaryConnectionRemoved;
- (void)handlePrimaryConnectionRemoved;
- (int)addConnection:(id)arg1;
- (BOOL)isPrimaryConnectionSameAsConnection:(id)arg1;
- (BOOL)selectPrimaryAndSecondaryWithConnection:(id)arg1;
- (unsigned int)downlinkBitrateCapForConnectionType:(int)arg1;
- (unsigned int)uplinkBitrateCapForConnectionType:(int)arg1;
- (void)updateSecondaryWithConnection:(id)arg1;
- (void)updatePrimaryWithConnection:(id)arg1;
- (void)dealloc;
- (id)initWithMultiwayEnabled:(BOOL)arg1;

@end

