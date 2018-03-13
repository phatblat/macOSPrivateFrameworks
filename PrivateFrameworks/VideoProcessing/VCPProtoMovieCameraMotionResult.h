//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"
#import "VCPProtoResultLegacyConversionProtocol.h"

@class VCPProtoTimeRange;

@interface VCPProtoMovieCameraMotionResult : PBCodable <VCPProtoResultLegacyConversionProtocol, NSCopying>
{
    int _motionType;
    VCPProtoTimeRange *_timeRange;
    BOOL _isFast;
}

+ (id)resultFromLegacyDictionary:(id)arg1;
@property(nonatomic) BOOL isFast; // @synthesize isFast=_isFast;
@property(nonatomic) int motionType; // @synthesize motionType=_motionType;
@property(retain, nonatomic) VCPProtoTimeRange *timeRange; // @synthesize timeRange=_timeRange;
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
- (id)exportToLegacyDictionary;

@end

