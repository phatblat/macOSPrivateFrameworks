//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@class GEOWaypointID, GEOWaypointLocation, GEOWaypointPlace, PBUnknownFields;

@interface GEOWaypointTyped : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;
    GEOWaypointID *_waypointId;
    GEOWaypointLocation *_waypointLocation;
    GEOWaypointPlace *_waypointPlace;
    int _waypointType;
    BOOL _isCurrentLocation;
    BOOL _isLocationOfInterest;
    struct {
        unsigned int waypointType:1;
        unsigned int isCurrentLocation:1;
        unsigned int isLocationOfInterest:1;
    } _has;
}

@property(nonatomic) BOOL isLocationOfInterest; // @synthesize isLocationOfInterest=_isLocationOfInterest;
@property(nonatomic) BOOL isCurrentLocation; // @synthesize isCurrentLocation=_isCurrentLocation;
@property(retain, nonatomic) GEOWaypointLocation *waypointLocation; // @synthesize waypointLocation=_waypointLocation;
@property(retain, nonatomic) GEOWaypointPlace *waypointPlace; // @synthesize waypointPlace=_waypointPlace;
@property(retain, nonatomic) GEOWaypointID *waypointId; // @synthesize waypointId=_waypointId;
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
@property(nonatomic) BOOL hasIsLocationOfInterest;
@property(nonatomic) BOOL hasIsCurrentLocation;
@property(readonly, nonatomic) BOOL hasWaypointLocation;
@property(readonly, nonatomic) BOOL hasWaypointPlace;
@property(readonly, nonatomic) BOOL hasWaypointId;
- (int)StringAsWaypointType:(id)arg1;
- (id)waypointTypeAsString:(int)arg1;
@property(nonatomic) BOOL hasWaypointType;
@property(nonatomic) int waypointType; // @synthesize waypointType=_waypointType;
- (id)locationForWaypoint;
- (void)clearLocations;

@end

