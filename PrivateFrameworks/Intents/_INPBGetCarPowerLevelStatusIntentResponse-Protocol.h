//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class _INPBDistance, _INPBDouble;

@protocol _INPBGetCarPowerLevelStatusIntentResponse <NSObject>
@property(readonly, nonatomic) BOOL hasFuelPercentRemaining;
@property(retain, nonatomic) _INPBDouble *fuelPercentRemaining;
@property(readonly, nonatomic) BOOL hasDistanceRemaining;
@property(retain, nonatomic) _INPBDistance *distanceRemaining;
@property(readonly, nonatomic) BOOL hasChargePercentRemaining;
@property(retain, nonatomic) _INPBDouble *chargePercentRemaining;
@end
