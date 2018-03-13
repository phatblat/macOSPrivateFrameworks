//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CalendarPersistence/CalManagedObject.h>

@class CalManagedCalendar, CalManagedPrincipal, NSSet;

@interface CalManagedDefaultAlarmSet : CalManagedObject
{
}

+ (id)defaultAlarmICSDocumentForString:(id)arg1;
+ (id)insertNewDefaultAlarmSetInContext:(id)arg1;
+ (void)_disableForUnitTests;
+ (void)_enableForUnitTests;
+ (id)entityName;
- (id)enclosingSource;
- (id)affectedCalendarIDs;
- (void)updateDefaultEventTimedAlarmsFromICS:(id)arg1;
- (void)updateDefaultEventAllDayAlarmsFromICS:(id)arg1;
- (id)updateDefaultAlarmsFromICSHelper:(id)arg1;
- (void)updateDefaultEventTimedAlarms:(id)arg1 processChangesNow:(BOOL)arg2;
- (void)updateDefaultEventTimedAlarms:(id)arg1;
- (void)updateDefaultEventAllDayAlarms:(id)arg1 processChangesNow:(BOOL)arg2;
- (void)updateDefaultEventAllDayAlarms:(id)arg1;
- (BOOL)isDefaultAlarmPreferenceNone:(BOOL)arg1;
@property(readonly) NSSet *defaultEventAllDayAlarms; // @dynamic defaultEventAllDayAlarms;
@property(readonly) NSSet *defaultEventTimedAlarms; // @dynamic defaultEventTimedAlarms;
- (void)updateDefaultAlarmsHelperForSet:(id)arg1 alarmSetKey:(id)arg2 processChangesNow:(BOOL)arg3;
- (id)icsStringForDefaultAlarmsAllDay:(BOOL)arg1;
- (void)insertChangeCalendarHomeDefaultAlarmRequestAllDay:(BOOL)arg1 forPrincipal:(id)arg2 inManagedObjectContext:(id)arg3;
- (void)insertChangeCalendarDefaultAlarmRequestAllDay:(BOOL)arg1 forCalendar:(id)arg2 inManagedObjectContext:(id)arg3;
- (void)processUpdatedInManagedObjectContext:(id)arg1;
- (void)processForType:(int)arg1 inManagedObjectContext:(id)arg2;

// Remaining properties
@property(retain) CalManagedCalendar *calendar; // @dynamic calendar;
@property(retain) CalManagedCalendar *localCalendar; // @dynamic localCalendar;
@property(retain) CalManagedPrincipal *localPrincipal; // @dynamic localPrincipal;
@property(retain) CalManagedPrincipal *principal; // @dynamic principal;

@end

