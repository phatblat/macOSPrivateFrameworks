//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface GEOHoursTestHelper : NSObject
{
}

+ (id)testingDictionaryForIsWeekdayInRange;
+ (struct GEOPDLocalTimeRange)_rangeWithFromHour:(long long)arg1 fromMinute:(long long)arg2 toHour:(long long)arg3 toMinute:(long long)arg4;
+ (id)_pdHoursFromHour:(long long)arg1 fromMinute:(long long)arg2 toHour:(long long)arg3 toMinute:(long long)arg4 inTimeZone:(id)arg5 onDay:(long long)arg6 month:(long long)arg7 year:(long long)arg8 openingThreshold:(double)arg9 closingThreshold:(double)arg10 shouldGoOverMidnight:(BOOL)arg11;
+ (id)testTimeZoneForGEOPlaceDailyHoursTest;
+ (id)testTimeZoneForMKLocalizedHoursBuilderTest;
+ (id)testDateForMKLocalizedHoursBuilderTest;
+ (id)testBusinessHoursWithTemporaryClosedHoursTypeForMKLocalizedHoursBuilderTest;
+ (id)testBusinessHoursWithPermanentlyClosedHoursTypeForMKLocalizedHoursBuilderTest;
+ (id)testBusinessHoursForMKLocalizedHoursBuilderTest;
+ (id)dateWithString:(id)arg1;

@end

