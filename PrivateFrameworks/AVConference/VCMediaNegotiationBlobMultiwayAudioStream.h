//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

__attribute__((visibility("hidden")))
@interface VCMediaNegotiationBlobMultiwayAudioStream : PBCodable <NSCopying>
{
    unsigned int _maxMediaBitrate;
    unsigned int _maxNetworkBitrate;
    unsigned int _maxPacketsPerSecond;
    unsigned int _qualityIndex;
    unsigned int _repairedMaxNetworkBitrate;
    unsigned int _repairedStreamID;
    unsigned int _ssrc;
    unsigned int _streamID;
    unsigned int _supportedPayloads;
    struct {
        unsigned int maxMediaBitrate:1;
        unsigned int maxNetworkBitrate:1;
        unsigned int maxPacketsPerSecond:1;
        unsigned int repairedMaxNetworkBitrate:1;
        unsigned int repairedStreamID:1;
        unsigned int supportedPayloads:1;
    } _has;
}

@property(nonatomic) unsigned int repairedMaxNetworkBitrate; // @synthesize repairedMaxNetworkBitrate=_repairedMaxNetworkBitrate;
@property(nonatomic) unsigned int repairedStreamID; // @synthesize repairedStreamID=_repairedStreamID;
@property(nonatomic) unsigned int maxPacketsPerSecond; // @synthesize maxPacketsPerSecond=_maxPacketsPerSecond;
@property(nonatomic) unsigned int maxMediaBitrate; // @synthesize maxMediaBitrate=_maxMediaBitrate;
@property(nonatomic) unsigned int qualityIndex; // @synthesize qualityIndex=_qualityIndex;
@property(nonatomic) unsigned int streamID; // @synthesize streamID=_streamID;
@property(nonatomic) unsigned int supportedPayloads; // @synthesize supportedPayloads=_supportedPayloads;
@property(nonatomic) unsigned int maxNetworkBitrate; // @synthesize maxNetworkBitrate=_maxNetworkBitrate;
@property(nonatomic) unsigned int ssrc; // @synthesize ssrc=_ssrc;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) BOOL hasRepairedMaxNetworkBitrate;
@property(nonatomic) BOOL hasRepairedStreamID;
@property(nonatomic) BOOL hasMaxPacketsPerSecond;
@property(nonatomic) BOOL hasMaxMediaBitrate;
@property(nonatomic) BOOL hasSupportedPayloads;
@property(nonatomic) BOOL hasMaxNetworkBitrate;
- (void)printWithLogFile:(void *)arg1;
- (id)newAudioRuleCollectionWithAudioRuleCollection:(id)arg1;
- (void)setPayloadFlagsWithAudioRuleCollection:(id)arg1;
- (id)initWithMultiwayConfig:(id)arg1;

@end
