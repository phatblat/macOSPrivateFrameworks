//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray, NSObject<NWRemotePacketProxyDelegate>;

@interface NWRemotePacketProxy : NSObject
{
    unsigned int _receiveWindowPacketCount;
    NSObject<NWRemotePacketProxyDelegate> *_delegate;
    NSMutableArray *_writeRequests;
    struct nw_protocol *_packetProtocol;
    struct nw_protocol *_defaultOutputHandler;
    struct nw_hash_table *_packetHashTable;
}

@property struct nw_hash_table *packetHashTable; // @synthesize packetHashTable=_packetHashTable;
@property struct nw_protocol *defaultOutputHandler; // @synthesize defaultOutputHandler=_defaultOutputHandler;
@property struct nw_protocol *packetProtocol; // @synthesize packetProtocol=_packetProtocol;
@property(retain) NSMutableArray *writeRequests; // @synthesize writeRequests=_writeRequests;
@property __weak NSObject<NWRemotePacketProxyDelegate> *delegate; // @synthesize delegate=_delegate;
@property(nonatomic) unsigned int receiveWindowPacketCount; // @synthesize receiveWindowPacketCount=_receiveWindowPacketCount;
- (void).cxx_destruct;
- (BOOL)receiveRemotePacket:(id)arg1;
- (void)setOutputProtocolHandler:(struct nw_protocol *)arg1 local:(id)arg2 remote:(id)arg3 ipProtocol:(unsigned char)arg4;
- (void)setDefaultOutputProtocolHandler:(struct nw_protocol *)arg1;
- (struct nw_protocol *)outputHandlerForPacket:(id)arg1 inbound:(BOOL)arg2;
@property(readonly, nonatomic) struct nw_protocol *protocol;
- (void)dealloc;
- (id)initWithDelegate:(id)arg1;

@end

