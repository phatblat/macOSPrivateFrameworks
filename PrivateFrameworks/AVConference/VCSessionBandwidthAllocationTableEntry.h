//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

__attribute__((visibility("hidden")))
@interface VCSessionBandwidthAllocationTableEntry : NSObject
{
    id <VCSessionDownlinkBandwidthAllocatorClient> _client;
    unsigned int _maxNetworkBitrate;
    unsigned int _maxMediaBitrate;
    unsigned int _qualityIndex;
    BOOL _isLowestQualityAudio;
    unsigned char _type;
    unsigned int _streamID;
    unsigned int _actualNetworkBitrate;
    BOOL _hasRepairStreamID;
    unsigned int _repairStreamID;
    unsigned int _repairMaxNetworkBitrate;
    BOOL _enabled;
}

+ (long long)compareAudioEntry:(id)arg1 videoEntry:(id)arg2;
+ (long long)compareVideoEntry:(id)arg1 videoEntry:(id)arg2;
+ (long long)compareAudioEntry:(id)arg1 audioEntry:(id)arg2;
@property(getter=isEnabled) BOOL enabled; // @synthesize enabled=_enabled;
@property(readonly) BOOL hasRepairStreamID; // @synthesize hasRepairStreamID=_hasRepairStreamID;
@property(readonly) unsigned int repairMaxNetworkBitrate; // @synthesize repairMaxNetworkBitrate=_repairMaxNetworkBitrate;
@property(readonly) unsigned int repairStreamID; // @synthesize repairStreamID=_repairStreamID;
@property unsigned int actualNetworkBitrate; // @synthesize actualNetworkBitrate=_actualNetworkBitrate;
@property(readonly) unsigned int streamID; // @synthesize streamID=_streamID;
@property(readonly) unsigned char type; // @synthesize type=_type;
@property BOOL isLowestQualityAudio; // @synthesize isLowestQualityAudio=_isLowestQualityAudio;
@property(readonly) unsigned int qualityIndex; // @synthesize qualityIndex=_qualityIndex;
@property(readonly) unsigned int maxMediaBitrate; // @synthesize maxMediaBitrate=_maxMediaBitrate;
@property(readonly) unsigned int maxNetworkBitrate; // @synthesize maxNetworkBitrate=_maxNetworkBitrate;
@property(readonly) id <VCSessionDownlinkBandwidthAllocatorClient> client; // @synthesize client=_client;
- (long long)compare:(id)arg1;
- (id)description;
- (void)dealloc;
- (id)initWithClient:(id)arg1 type:(unsigned char)arg2 networkBitrate:(unsigned int)arg3 mediaBitrate:(unsigned int)arg4 qualityIndex:(unsigned int)arg5 streamID:(unsigned int)arg6 hasRepairStreamID:(BOOL)arg7 repairStreamID:(unsigned int)arg8 repairMaxNetworkBitrate:(unsigned int)arg9 enabled:(BOOL)arg10;
- (id)initWithClient:(id)arg1 type:(unsigned char)arg2 networkBitrate:(unsigned int)arg3 mediaBitrate:(unsigned int)arg4 qualityIndex:(unsigned int)arg5 streamID:(unsigned int)arg6;

@end

