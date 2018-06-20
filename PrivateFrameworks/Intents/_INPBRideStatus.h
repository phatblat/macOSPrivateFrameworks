//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "INCodableAttributeAssociating.h"
#import "NSCopying.h"
#import "NSSecureCoding.h"
#import "_INPBRideStatus.h"

@class INCodableAttribute, NSArray, NSString, _INPBDateTimeRangeValue, _INPBLocationValue, _INPBRideCompletionStatus, _INPBRideDriver, _INPBRideOption, _INPBRideVehicle, _INPBTimestamp, _INPBUserActivity;

@interface _INPBRideStatus : PBCodable <_INPBRideStatus, NSSecureCoding, NSCopying, INCodableAttributeAssociating>
{
    struct {
        unsigned int phase:1;
    } _has;
    int _phase;
    NSArray *_additionalActionItems;
    _INPBRideCompletionStatus *_completionStatus;
    _INPBRideDriver *_driver;
    _INPBLocationValue *_dropOffLocation;
    _INPBTimestamp *_estimatedDropOffDate;
    _INPBTimestamp *_estimatedPickupDate;
    _INPBTimestamp *_estimatedPickupEndDate;
    _INPBLocationValue *_pickupLocation;
    NSString *_rideIdentifier;
    _INPBRideOption *_rideOption;
    _INPBDateTimeRangeValue *_scheduledPickupTime;
    _INPBUserActivity *_userActivityForCancelingInApplication;
    _INPBRideVehicle *_vehicle;
    NSArray *_waypoints;
    INCodableAttribute *_associatedCodableAttribute;
}

+ (Class)waypointsType;
+ (Class)additionalActionItemsType;
@property(copy, nonatomic) INCodableAttribute *associatedCodableAttribute; // @synthesize associatedCodableAttribute=_associatedCodableAttribute;
@property(copy, nonatomic) NSArray *waypoints; // @synthesize waypoints=_waypoints;
@property(retain, nonatomic) _INPBRideVehicle *vehicle; // @synthesize vehicle=_vehicle;
@property(retain, nonatomic) _INPBUserActivity *userActivityForCancelingInApplication; // @synthesize userActivityForCancelingInApplication=_userActivityForCancelingInApplication;
@property(retain, nonatomic) _INPBDateTimeRangeValue *scheduledPickupTime; // @synthesize scheduledPickupTime=_scheduledPickupTime;
@property(retain, nonatomic) _INPBRideOption *rideOption; // @synthesize rideOption=_rideOption;
@property(copy, nonatomic) NSString *rideIdentifier; // @synthesize rideIdentifier=_rideIdentifier;
@property(retain, nonatomic) _INPBLocationValue *pickupLocation; // @synthesize pickupLocation=_pickupLocation;
@property(nonatomic) int phase; // @synthesize phase=_phase;
@property(retain, nonatomic) _INPBTimestamp *estimatedPickupEndDate; // @synthesize estimatedPickupEndDate=_estimatedPickupEndDate;
@property(retain, nonatomic) _INPBTimestamp *estimatedPickupDate; // @synthesize estimatedPickupDate=_estimatedPickupDate;
@property(retain, nonatomic) _INPBTimestamp *estimatedDropOffDate; // @synthesize estimatedDropOffDate=_estimatedDropOffDate;
@property(retain, nonatomic) _INPBLocationValue *dropOffLocation; // @synthesize dropOffLocation=_dropOffLocation;
@property(retain, nonatomic) _INPBRideDriver *driver; // @synthesize driver=_driver;
@property(retain, nonatomic) _INPBRideCompletionStatus *completionStatus; // @synthesize completionStatus=_completionStatus;
@property(copy, nonatomic) NSArray *additionalActionItems; // @synthesize additionalActionItems=_additionalActionItems;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
@property(readonly) unsigned long long hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)waypointsAtIndex:(unsigned long long)arg1;
@property(readonly, nonatomic) unsigned long long waypointsCount;
- (void)addWaypoints:(id)arg1;
- (void)clearWaypoints;
@property(readonly, nonatomic) BOOL hasVehicle;
@property(readonly, nonatomic) BOOL hasUserActivityForCancelingInApplication;
@property(readonly, nonatomic) BOOL hasScheduledPickupTime;
@property(readonly, nonatomic) BOOL hasRideOption;
@property(readonly, nonatomic) BOOL hasRideIdentifier;
@property(readonly, nonatomic) BOOL hasPickupLocation;
- (int)StringAsPhase:(id)arg1;
- (id)phaseAsString:(int)arg1;
@property(nonatomic) BOOL hasPhase;
@property(readonly, nonatomic) BOOL hasEstimatedPickupEndDate;
@property(readonly, nonatomic) BOOL hasEstimatedPickupDate;
@property(readonly, nonatomic) BOOL hasEstimatedDropOffDate;
@property(readonly, nonatomic) BOOL hasDropOffLocation;
@property(readonly, nonatomic) BOOL hasDriver;
@property(readonly, nonatomic) BOOL hasCompletionStatus;
- (id)additionalActionItemsAtIndex:(unsigned long long)arg1;
@property(readonly, nonatomic) unsigned long long additionalActionItemsCount;
- (void)addAdditionalActionItems:(id)arg1;
- (void)clearAdditionalActionItems;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end
