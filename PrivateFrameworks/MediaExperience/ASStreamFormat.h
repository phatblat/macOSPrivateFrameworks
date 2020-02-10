//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@class ASChannelLayout;

__attribute__((visibility("hidden")))
@interface ASStreamFormat : PBCodable <NSCopying>
{
    double _sampleRate;
    unsigned int _bitsPerChannel;
    unsigned int _bytesPerFrame;
    unsigned int _bytesPerPacket;
    unsigned int _channelsPerFrame;
    unsigned int _formatFlags;
    unsigned int _formatID;
    unsigned int _framesPerPacket;
    ASChannelLayout *_layout;
}

@property(retain, nonatomic) ASChannelLayout *layout; // @synthesize layout=_layout;
@property(nonatomic) unsigned int bitsPerChannel; // @synthesize bitsPerChannel=_bitsPerChannel;
@property(nonatomic) unsigned int channelsPerFrame; // @synthesize channelsPerFrame=_channelsPerFrame;
@property(nonatomic) unsigned int bytesPerFrame; // @synthesize bytesPerFrame=_bytesPerFrame;
@property(nonatomic) unsigned int framesPerPacket; // @synthesize framesPerPacket=_framesPerPacket;
@property(nonatomic) unsigned int bytesPerPacket; // @synthesize bytesPerPacket=_bytesPerPacket;
@property(nonatomic) unsigned int formatFlags; // @synthesize formatFlags=_formatFlags;
@property(nonatomic) unsigned int formatID; // @synthesize formatID=_formatID;
@property(nonatomic) double sampleRate; // @synthesize sampleRate=_sampleRate;
- (void).cxx_destruct;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;

@end
