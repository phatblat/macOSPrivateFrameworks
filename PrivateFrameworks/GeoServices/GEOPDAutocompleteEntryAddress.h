//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@class GEOLatLng, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDAutocompleteEntryAddress : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;
    double _disambiguationRadiusMeters;
    double _distance;
    unsigned long long _opaqueGeoId;
    GEOLatLng *_center;
    int _placeType;
    struct {
        unsigned int disambiguationRadiusMeters:1;
        unsigned int distance:1;
        unsigned int opaqueGeoId:1;
        unsigned int placeType:1;
    } _has;
}

@property(nonatomic) double disambiguationRadiusMeters; // @synthesize disambiguationRadiusMeters=_disambiguationRadiusMeters;
@property(nonatomic) double distance; // @synthesize distance=_distance;
@property(nonatomic) unsigned long long opaqueGeoId; // @synthesize opaqueGeoId=_opaqueGeoId;
@property(retain, nonatomic) GEOLatLng *center; // @synthesize center=_center;
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
@property(nonatomic) BOOL hasDisambiguationRadiusMeters;
- (int)StringAsPlaceType:(id)arg1;
- (id)placeTypeAsString:(int)arg1;
@property(nonatomic) BOOL hasPlaceType;
@property(nonatomic) int placeType; // @synthesize placeType=_placeType;
@property(nonatomic) BOOL hasDistance;
@property(nonatomic) BOOL hasOpaqueGeoId;
@property(readonly, nonatomic) BOOL hasCenter;

@end

