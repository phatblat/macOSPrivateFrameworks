//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSSecureCoding.h"

@class NSArray, NSDate, NSDateInterval, NSDictionary, NSTimeZone;

@interface USUsageReport : NSObject <NSSecureCoding>
{
    double _screenTime;
    NSArray *_categoryUsage;
    unsigned long long _deviceUnlocks;
    unsigned long long _screenWakes;
    NSDictionary *_userNotificationsByBundleIdentifier;
    NSDateInterval *_interval;
    NSTimeZone *_timeZone;
    NSDate *_lastEventDate;
}

+ (BOOL)supportsSecureCoding;
@property(readonly) NSDate *lastEventDate; // @synthesize lastEventDate=_lastEventDate;
@property(readonly) NSTimeZone *timeZone; // @synthesize timeZone=_timeZone;
@property(readonly) NSDateInterval *interval; // @synthesize interval=_interval;
@property(readonly, copy) NSDictionary *userNotificationsByBundleIdentifier; // @synthesize userNotificationsByBundleIdentifier=_userNotificationsByBundleIdentifier;
@property(readonly) unsigned long long screenWakes; // @synthesize screenWakes=_screenWakes;
@property(readonly) unsigned long long deviceUnlocks; // @synthesize deviceUnlocks=_deviceUnlocks;
@property(readonly, copy) NSArray *categoryUsage; // @synthesize categoryUsage=_categoryUsage;
@property(readonly) double screenTime; // @synthesize screenTime=_screenTime;
- (void).cxx_destruct;
@property(readonly) NSDictionary *categoryUsageBySecondaryIdentifier;
@property(readonly) NSDictionary *categoryUsageByPrimaryIdentifier;
@property(readonly) NSDictionary *webUsageByDomain;
@property(readonly) NSDictionary *applicationUsageByBundleIdentifier;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)_usUsageReportCommonInitWithScreenTime:(double)arg1 categoryUsage:(id)arg2 deviceUnlocks:(unsigned long long)arg3 screenWakes:(unsigned long long)arg4 notifications:(id)arg5 interval:(id)arg6 timeZone:(id)arg7 lastEventDate:(id)arg8;
- (id)initWithScreenTime:(double)arg1 categoryUsage:(id)arg2 deviceUnlocks:(unsigned long long)arg3 screenWakes:(unsigned long long)arg4 notifications:(id)arg5 interval:(id)arg6 timeZone:(id)arg7 lastEventDate:(id)arg8;

@end
