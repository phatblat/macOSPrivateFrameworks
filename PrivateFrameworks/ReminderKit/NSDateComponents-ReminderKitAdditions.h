//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSDateComponents.h"

@interface NSDateComponents (ReminderKitAdditions)
+ (id)rem_dateComponentsWithYear:(long long)arg1 month:(long long)arg2 day:(long long)arg3 hour:(long long)arg4 minute:(long long)arg5 second:(long long)arg6 allDay:(BOOL)arg7 timeZone:(id)arg8;
+ (id)rem_dateWithDateComponents:(id)arg1 timeZone:(id)arg2;
+ (id)rem_dateWithDateComponentsUsingArchivingTimeZone:(id)arg1;
+ (id)rem_dateComponentsWithDate:(id)arg1 timeZone:(id)arg2 isAllDay:(BOOL)arg3;
+ (id)rem_dateComponentsWithDateUsingArchivingTimeZone:(id)arg1 isAllDay:(BOOL)arg2;
- (id)rem_stringRepresentation;
- (long long)rem_compare:(id)arg1;
- (BOOL)rem_isWeekendDateComponents;
- (BOOL)rem_isAllDayDateComponents;
- (BOOL)rem_isValidDateComponents;
- (id)rem_allDayDateComponents;
- (id)rem_strippingTimeZone;
- (id)rem_dateComponentsByAddingTimeInterval:(double)arg1;
- (id)rem_gregorianEquivalent;
@end
