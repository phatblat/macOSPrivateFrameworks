//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CalendarPersistence/CalExchangeGetItemOperation.h>

@interface CalExchangeGetCalendarItemOperation : CalExchangeGetItemOperation
{
}

+ (id)meetingTimeZonePropertyResponseShape;
+ (id)_createOrUpdateLocation:(id)arg1 inManagedObjectContext:(id)arg2 withValue:(id)arg3;
+ (id)iCalendarPartipationStatusForResponseType:(long long)arg1;
- (id)debugDescription;
- (id)debugTitle;
- (BOOL)executeWithBinding:(id)arg1 inSession:(id)arg2 inContext:(id)arg3 error:(id *)arg4;
- (BOOL)shouldInsertCalendarItem:(id)arg1 existsEventWithSameSharedUID:(BOOL)arg2 forPrincipal:(id)arg3;
- (BOOL)createOrUpdateItems:(id)arg1 inCalendar:(id)arg2 error:(id *)arg3;
- (id)responseShape;
- (id)_correctStartDateForItem:(id)arg1 date:(id)arg2 calendarInEventTimeZone:(id)arg3 calendarInGMT:(id)arg4;
- (BOOL)_updateEvent:(id)arg1 inCalendar:(id)arg2 withCalendarItem:(id)arg3 occurrences:(id)arg4 masterCalendarItem:(id)arg5 error:(id *)arg6;
- (void)_updateAttendeesForEvent:(id)arg1 inCalendar:(id)arg2 withCalendarItem:(id)arg3;
- (void)_updateAttendee:(id)arg1 forEvent:(id)arg2 withAttendee:(id)arg3 role:(id)arg4 type:(int)arg5;
- (void)_updateAttendee:(id)arg1 forEvent:(id)arg2 name:(id)arg3 address:(id)arg4 responseType:(long long)arg5 role:(id)arg6 type:(int)arg7;
- (void)_updateAttachmentsForEvent:(id)arg1 inCalendar:(id)arg2 withCalendarItem:(id)arg3 masterCalendarItem:(id)arg4;

@end

