//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <AVConference/VCMediaNegotiatorMultiwayMediaStream.h>

#import "NSCopying.h"

__attribute__((visibility("hidden")))
@interface VCMediaNegotiatorMultiwayVideoStream : VCMediaNegotiatorMultiwayMediaStream <NSCopying>
{
    struct CGSize _size;
    unsigned int _frameRate;
    unsigned int _keyFrameInterval;
    int _payload;
}

@property(nonatomic) int payload; // @synthesize payload=_payload;
@property(nonatomic) unsigned int keyFrameInterval; // @synthesize keyFrameInterval=_keyFrameInterval;
@property(nonatomic) unsigned int frameRate; // @synthesize frameRate=_frameRate;
@property(nonatomic) struct CGSize size; // @synthesize size=_size;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

