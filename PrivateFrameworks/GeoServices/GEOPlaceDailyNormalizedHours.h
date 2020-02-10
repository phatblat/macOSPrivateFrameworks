//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray;

@interface GEOPlaceDailyNormalizedHours : NSObject
{
    long long _weekday;
    NSArray *_localTimeIntervals;
    double _closingSoonThresholdSeconds;
    double _openingSoonThresholdSeconds;
    BOOL _openToMidnight;
    BOOL _openFromMidnight;
}

+ (long long)todaysWeekday:(long long)arg1 yesterdaysWeekday:(long long)arg2 containsTimeFromMidnight:(double)arg3 inNormalizedHours:(id)arg4;
+ (long long)getWeekdayForDate:(id)arg1 inNormalizedHours:(id)arg2 timeZone:(id)arg3;
+ (id)dailyNormalizedHoursForWeekday:(long long)arg1 timeIntervals:(id)arg2 closingThreshold:(double)arg3 openingThreshold:(double)arg4 openToMidnight:(BOOL)arg5 openFromMidnight:(BOOL)arg6;
@property(readonly, nonatomic) BOOL openFromMidnight; // @synthesize openFromMidnight=_openFromMidnight;
@property(readonly, nonatomic) BOOL openToMidnight; // @synthesize openToMidnight=_openToMidnight;
@property(nonatomic) double openingSoonThresholdSeconds; // @synthesize openingSoonThresholdSeconds=_openingSoonThresholdSeconds;
@property(nonatomic) double closingSoonThresholdSeconds; // @synthesize closingSoonThresholdSeconds=_closingSoonThresholdSeconds;
@property(readonly, nonatomic) NSArray *localTimeIntervals; // @synthesize localTimeIntervals=_localTimeIntervals;
@property(readonly, nonatomic) long long weekday; // @synthesize weekday=_weekday;
- (void).cxx_destruct;
- (id)description;

@end
