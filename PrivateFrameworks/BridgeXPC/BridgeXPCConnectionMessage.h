//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSData;

__attribute__((visibility("hidden")))
@interface BridgeXPCConnectionMessage : NSObject
{
    CDUnknownBlockType _barrier_block;
    NSData *_msg_hdr;
    NSData *_msg_body;
}

@property(retain) NSData *msg_body; // @synthesize msg_body=_msg_body;
@property(retain) NSData *msg_hdr; // @synthesize msg_hdr=_msg_hdr;
@property(copy) CDUnknownBlockType barrier_block; // @synthesize barrier_block=_barrier_block;
- (void).cxx_destruct;

@end

