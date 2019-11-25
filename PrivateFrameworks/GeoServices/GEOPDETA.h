//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@class GEORouteTrafficDetail, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDETA : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;
    GEORouteTrafficDetail *_routeTrafficDetail;
    unsigned int _distance;
    unsigned int _historicTravelTime;
    unsigned int _time;
    int _transportType;
    struct {
        unsigned int has_distance:1;
        unsigned int has_historicTravelTime:1;
        unsigned int has_time:1;
        unsigned int has_transportType:1;
    } _flags;
}

+ (BOOL)isValid:(id)arg1;
- (void).cxx_destruct;
- (void)clearUnknownFields:(BOOL)arg1;
@property(readonly, nonatomic) PBUnknownFields *unknownFields;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)readAll:(BOOL)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(retain, nonatomic) GEORouteTrafficDetail *routeTrafficDetail;
@property(readonly, nonatomic) BOOL hasRouteTrafficDetail;
@property(nonatomic) BOOL hasHistoricTravelTime;
@property(nonatomic) unsigned int historicTravelTime;
- (int)StringAsTransportType:(id)arg1;
- (id)transportTypeAsString:(int)arg1;
@property(nonatomic) BOOL hasTransportType;
@property(nonatomic) int transportType;
@property(nonatomic) BOOL hasDistance;
@property(nonatomic) unsigned int distance;
@property(nonatomic) BOOL hasTime;
@property(nonatomic) unsigned int time;

@end

