//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CLLocation.h"

@class GEONavigationMatchInfo, GEORoadMatch, GEORouteMatch, NSDate, NSString;

@interface MNLocation : CLLocation
{
    unsigned long long _state;
    GEORouteMatch *_routeMatch;
    GEORoadMatch *_roadMatch;
    CLLocation *_rawLocation;
    struct CLLocationCoordinate2D _rawShiftedCoordinate;
    GEONavigationMatchInfo *_detailedMatchInfo;
    NSString *_roadName;
    NSString *_shieldText;
    long long _shieldType;
    unsigned int _roadLineType;
    unsigned long long _speedLimit;
    BOOL _speedLimitIsMPH;
    long long _speedLimitShieldType;
    BOOL _isDirectional;
    BOOL _locationUnreliable;
    NSDate *_expirationDate;
    NSDate *_originalDate;
    BOOL _isLeeched;
    int _rampType;
}

@property(nonatomic) BOOL isLeeched; // @synthesize isLeeched=_isLeeched;
@property(nonatomic) struct CLLocationCoordinate2D rawShiftedCoordinate; // @synthesize rawShiftedCoordinate=_rawShiftedCoordinate;
@property(retain, nonatomic) NSDate *originalDate; // @synthesize originalDate=_originalDate;
@property(retain, nonatomic) NSDate *expirationDate; // @synthesize expirationDate=_expirationDate;
@property(nonatomic) BOOL locationUnreliable; // @synthesize locationUnreliable=_locationUnreliable;
@property(nonatomic) BOOL isDirectional; // @synthesize isDirectional=_isDirectional;
@property(nonatomic) long long speedLimitShieldType; // @synthesize speedLimitShieldType=_speedLimitShieldType;
@property(nonatomic) BOOL speedLimitIsMPH; // @synthesize speedLimitIsMPH=_speedLimitIsMPH;
@property(nonatomic) unsigned long long speedLimit; // @synthesize speedLimit=_speedLimit;
@property(nonatomic) int rampType; // @synthesize rampType=_rampType;
@property(nonatomic) unsigned int roadLineType; // @synthesize roadLineType=_roadLineType;
@property(nonatomic) long long shieldType; // @synthesize shieldType=_shieldType;
@property(copy, nonatomic) NSString *shieldText; // @synthesize shieldText=_shieldText;
@property(copy, nonatomic) NSString *roadName; // @synthesize roadName=_roadName;
@property(retain, nonatomic) GEONavigationMatchInfo *detailedMatchInfo; // @synthesize detailedMatchInfo=_detailedMatchInfo;
@property(retain, nonatomic) CLLocation *rawLocation; // @synthesize rawLocation=_rawLocation;
@property(retain, nonatomic) GEORoadMatch *roadMatch; // @synthesize roadMatch=_roadMatch;
@property(retain, nonatomic) GEORouteMatch *routeMatch; // @synthesize routeMatch=_routeMatch;
@property(nonatomic) unsigned long long state; // @synthesize state=_state;
- (void).cxx_destruct;
- (id)description;
- (id)_navigation_detailedMatchInfo;
- (struct CLLocationCoordinate2D)_navigation_rawShiftedCoordinate;
- (id)_navigation_routeMatch;
- (BOOL)_navigation_hasValidCourse;
- (BOOL)_navigation_isStale;
- (CDStruct_b82ef747 *)_roadFeature;
@property(readonly, nonatomic) BOOL isProjected;
@property(readonly, nonatomic) unsigned long long stepIndex;
- (id)propagatedLocationForTimeInterval:(double)arg1 shouldProjectAlongRoute:(BOOL)arg2;
- (id)initWithLocationDetails:(id)arg1;
- (id)initWithLocationDetails:(id)arg1 route:(id)arg2;
- (id)initWithRawLocation:(id)arg1;
- (id)initWithRawLocation:(id)arg1 useMatchLocation:(BOOL)arg2;
- (id)initWithRoadMatch:(id)arg1 rawLocation:(id)arg2 useMatchLocation:(BOOL)arg3;
- (id)initWithRouteMatch:(id)arg1 rawLocation:(id)arg2 useMatchLocation:(BOOL)arg3;
- (id)initWithClientLocation:(CDStruct_c2a3997d)arg1;
@property(readonly, nonatomic) int _nav_source;
- (id)initWithGEOLocation:(id)arg1;

@end

