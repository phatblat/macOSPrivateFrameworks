//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class MRTransactionPacketizer, NSMutableArray;

@interface MRTransactionSource : NSObject
{
    unsigned long long _name;
    MRTransactionPacketizer *_packetizer;
    NSMutableArray *_packets;
    void *_playerPath;
    id <MRTransactionSourceDelegate> _delegate;
}

@property(readonly, nonatomic) void *playerPath; // @synthesize playerPath=_playerPath;
@property(readonly, nonatomic) unsigned long long name; // @synthesize name=_name;
- (void)_processMessage:(id)arg1;
- (void)_begin;
- (void)dealloc;
- (id)initWithName:(unsigned long long)arg1 playerPath:(void *)arg2 packets:(id)arg3 delegate:(id)arg4;

@end
