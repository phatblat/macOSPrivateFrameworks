//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface MSBatteryPowerMonitor : NSObject
{
    BOOL _isExternalPowerConnected;
}

+ (BOOL)isExternalPowerConnected:(double *)arg1;
+ (id)defaultMonitor;
@property(readonly, nonatomic) BOOL isExternalPowerConnected; // @synthesize isExternalPowerConnected=_isExternalPowerConnected;
- (double)batteryPercentRemaining;

@end
