//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray, NSUUID, PLLocationOfInterestLocation;

@interface PLLocationOfInterest : NSObject
{
    NSUUID *_identifier;
    long long _type;
    double _typeRadius;
    PLLocationOfInterestLocation *_routineLocation;
    PLLocationOfInterestLocation *_mapItemLocation;
    NSMutableArray *_visits;
}

@property(retain, nonatomic) NSMutableArray *visits; // @synthesize visits=_visits;
@property(readonly, nonatomic) PLLocationOfInterestLocation *mapItemLocation; // @synthesize mapItemLocation=_mapItemLocation;
@property(readonly, nonatomic) PLLocationOfInterestLocation *routineLocation; // @synthesize routineLocation=_routineLocation;
@property(readonly, nonatomic) double typeRadius; // @synthesize typeRadius=_typeRadius;
@property(readonly, nonatomic) long long type; // @synthesize type=_type;
@property(readonly, nonatomic) NSUUID *identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)description;
- (double)centerDistanceFromLocation:(id)arg1;
- (double)distanceFromLocation:(id)arg1;
- (void)removeVisit:(id)arg1;
- (void)addVisit:(id)arg1;
- (id)initWithIdentifier:(id)arg1 locationOfInterestType:(long long)arg2 typeRadius:(double)arg3 routineLocation:(id)arg4 mapItemLocation:(id)arg5;

@end

