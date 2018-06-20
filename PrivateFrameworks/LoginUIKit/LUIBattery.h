//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary;

@interface LUIBattery : NSObject
{
    NSDictionary *_info;
}

+ (id)battery;
- (void)dealloc;
- (id)init;
@property(readonly) float relativeCapacity;
@property(readonly) float percentRemaining;
@property(readonly) float maxCapacity;
@property(readonly) BOOL isPresent;
@property(readonly) BOOL isPluggedIn;
@property(readonly) BOOL isInternal;
@property(readonly) BOOL isInPoorCondition;
@property(readonly) BOOL isHealthy;
@property(readonly) BOOL isCharging;
@property(readonly) BOOL isCharged;
@property(readonly) float currentCapacity;
- (BOOL)_updateBatteryState;
- (BOOL)_isBattery;

@end

