//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface CSKHelpers : NSObject
{
}

+ (id)_newNumberFormatter;
+ (id)_newDateFormatter;
+ (id)_formattedDateFromDate:(id)arg1 formatter:(id)arg2 usecPosition:(int)arg3 timezone:(id)arg4;
+ (id)_localizedUsecStringFromDate:(id)arg1;
+ (struct tm *)_timeStructFromDate:(id)arg1 timeZone:(id)arg2 usec:(unsigned long long *)arg3;
+ (id)formattedNumberFromUnsignedInteger:(unsigned long long)arg1;
+ (id)formattedDateTimeTimeZoneFromDate:(id)arg1 timeZone:(id)arg2;
+ (id)formattedDateTimeFromDate:(id)arg1 timeZone:(id)arg2;
+ (id)formattedTimeTimeZoneFromDate:(id)arg1 timeZone:(id)arg2;
+ (id)formattedTimeFromDate:(id)arg1 timeZone:(id)arg2;

@end

