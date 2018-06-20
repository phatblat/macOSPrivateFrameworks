//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class MRTransactionPacketizer, NSObject<OS_dispatch_queue>, _MRNowPlayingPlayerPathProtobuf;

@interface MRTransactionDestination : NSObject
{
    MRTransactionPacketizer *_packetizer;
    NSObject<OS_dispatch_queue> *_serialQueue;
    unsigned long long _name;
    _MRNowPlayingPlayerPathProtobuf *_playerPath;
}

@property(readonly, nonatomic) _MRNowPlayingPlayerPathProtobuf *playerPath; // @synthesize playerPath=_playerPath;
@property(readonly, nonatomic) unsigned long long name; // @synthesize name=_name;
- (void).cxx_destruct;
- (void)unpacketize:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)packetsFromMessage:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)initWithName:(unsigned long long)arg1 playerPath:(id)arg2;

@end

