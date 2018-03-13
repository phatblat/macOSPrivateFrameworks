//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@class GEOPDShardedId, PBUnknownFields;

@interface GEOPDMapsIdentifier : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;
    int _placeType;
    GEOPDShardedId *_shardedId;
    struct {
        unsigned int placeType:1;
    } _has;
}

@property(retain, nonatomic) GEOPDShardedId *shardedId; // @synthesize shardedId=_shardedId;
- (void).cxx_destruct;
@property(readonly, nonatomic) PBUnknownFields *unknownFields;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
- (int)StringAsPlaceType:(id)arg1;
- (id)placeTypeAsString:(int)arg1;
@property(nonatomic) BOOL hasPlaceType;
@property(nonatomic) int placeType; // @synthesize placeType=_placeType;
@property(readonly, nonatomic) BOOL hasShardedId;
- (int)placeDisplayType;

@end

