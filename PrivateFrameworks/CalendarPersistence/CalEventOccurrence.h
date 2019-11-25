//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "CalCacheableEventOccurrence.h"

@class CalManagedCalendar, CoreCalendarSource, NSDate, NSManagedObjectID, NSMutableDictionary, NSNumber, NSString, NSTimeZone, NSURL;

@interface CalEventOccurrence : NSObject <CalCacheableEventOccurrence>
{
    NSString *_occurrenceID;
    NSMutableDictionary *_changedProperties;
    NSManagedObjectID *_managedEventObjectID;
    NSManagedObjectID *_masterManagedEventObjectID;
    NSManagedObjectID *_managedCalendarObjectID;
    NSDate *_date;
    NSDate *_recurrenceDate;
    NSDate *_cachedStart;
    NSDate *_initialStart;
    NSDate *_cachedEnd;
    NSDate *_initialEnd;
    NSDate *_cachedStartDateWithoutTimeComponents;
    NSDate *_cachedEndDateWithoutTimeComponents;
    NSNumber *_cachedDaysSpanned;
    NSNumber *_cachedIsMultiDayTimedEvent;
    NSTimeZone *_timeZone;
    NSString *__localUID;
    NSString *__sharedUID;
    NSString *_accountImageID;
    BOOL _needsRebin;
    NSNumber *_isAllDay;
    NSNumber *_travelDuration;
    NSString *_travelRouteType;
    NSNumber *_needsReply;
    NSNumber *_permission;
    NSNumber *_invitationMode;
    NSNumber *_attendeeIconState;
    NSDate *_creationDate;
    NSString *_title;
    NSNumber *_status;
    NSString *_location;
    NSNumber *_hasAttachment;
    NSString *_myAttendeeStatus;
    NSString *_timeZoneString;
    NSString *_calendarServerAccess;
    BOOL _isEphemeral;
}

+ (id)changedPropertiesToCheck;
+ (id)legacyOccurrenceFromOccurrence:(id)arg1;
+ (id)occurrenceInCalendar:(id)arg1;
@property(nonatomic) BOOL needsRebin; // @synthesize needsRebin=_needsRebin;
@property(retain, nonatomic) NSString *occurrenceID; // @synthesize occurrenceID=_occurrenceID;
@property(retain, nonatomic) NSString *accountImageID; // @synthesize accountImageID=_accountImageID;
@property(retain, nonatomic) NSString *__sharedUID; // @synthesize __sharedUID;
@property(retain, nonatomic) NSString *__localUID; // @synthesize __localUID;
@property(retain, nonatomic) NSTimeZone *cachedTimeZone; // @synthesize cachedTimeZone=_timeZone;
@property(nonatomic) BOOL isEphemeral; // @synthesize isEphemeral=_isEphemeral;
@property(retain, nonatomic) NSManagedObjectID *managedCalendarObjectID; // @synthesize managedCalendarObjectID=_managedCalendarObjectID;
@property(retain, nonatomic) NSManagedObjectID *masterManagedEventObjectID; // @synthesize masterManagedEventObjectID=_masterManagedEventObjectID;
@property(retain, nonatomic) NSManagedObjectID *managedEventObjectID; // @synthesize managedEventObjectID=_managedEventObjectID;
@property(retain, nonatomic) NSNumber *cachedIsMultiDayTimedEvent; // @synthesize cachedIsMultiDayTimedEvent=_cachedIsMultiDayTimedEvent;
@property(retain, nonatomic) NSDate *cachedEndDateWithoutTimeComponents; // @synthesize cachedEndDateWithoutTimeComponents=_cachedEndDateWithoutTimeComponents;
@property(retain, nonatomic) NSDate *cachedStartDateWithoutTimeComponents; // @synthesize cachedStartDateWithoutTimeComponents=_cachedStartDateWithoutTimeComponents;
@property(retain, nonatomic) NSNumber *cachedDaysSpanned; // @synthesize cachedDaysSpanned=_cachedDaysSpanned;
@property(retain, nonatomic) NSDate *initialEnd; // @synthesize initialEnd=_initialEnd;
@property(retain, nonatomic) NSDate *cachedEnd; // @synthesize cachedEnd=_cachedEnd;
@property(retain, nonatomic) NSDate *initialStart; // @synthesize initialStart=_initialStart;
@property(retain, nonatomic) NSDate *cachedStart; // @synthesize cachedStart=_cachedStart;
@property(retain, nonatomic) NSDate *recurrenceDate; // @synthesize recurrenceDate=_recurrenceDate;
@property(retain, nonatomic) NSDate *date; // @synthesize date=_date;
- (void).cxx_destruct;
- (id)committedPropertyForKey:(id)arg1;
- (id)propertyForKey:(id)arg1;
- (id)changedPropertyForKey:(id)arg1;
- (void)removePropertyForKey:(id)arg1;
- (void)setProperty:(id)arg1 forKey:(id)arg2;
- (id)changedValues;
@property(readonly, retain, nonatomic) NSDate *dateForSorting;
- (id)legacyOccurrence;
- (BOOL)isEditable;
- (BOOL)isEditableIgnoringInvitationStatus:(BOOL)arg1;
- (BOOL)supportsAttachments;
- (BOOL)ableToMoveToCalendar:(id)arg1;
- (BOOL)hasDetachedOccurrences;
- (BOOL)isDetachedEntity;
- (BOOL)hasRecurrenceData;
@property(readonly, copy) NSString *description;
@property(retain) NSURL *url;
@property(retain, nonatomic) NSDate *endDate;
@property(retain, nonatomic) NSDate *startDate;
- (id)endDateWithoutTimeComponents;
- (id)startDateWithoutTimeComponents;
- (BOOL)isMultiDayTimedEvent;
- (long long)daysSpanned;
@property(readonly, nonatomic) BOOL isFloating;
@property(readonly, retain, nonatomic) NSString *localUID;
@property(readonly, retain, nonatomic) NSString *sharedUID;
- (id)repository;
@property(readonly, retain, nonatomic) CoreCalendarSource *calendarSource;
@property(readonly, nonatomic) double duration;
@property(readonly, nonatomic) BOOL isStatusDeclined;
@property(readonly, nonatomic) BOOL isStatusMaybe;
- (id)calendarServerAccess;
- (id)myAttendeeStatus;
@property(readonly, nonatomic) BOOL hasAttachment;
@property(readonly, nonatomic) int status;
- (id)creationDate;
@property(readonly, nonatomic) int attendeeIconState;
- (int)permission;
- (int)invitationMode;
@property(readonly, nonatomic) BOOL needsReply;
@property(readonly, nonatomic) NSString *travelRouteType;
@property(readonly, nonatomic) double travelDuration;
@property(nonatomic) BOOL isAllDay;
@property(retain, nonatomic) NSTimeZone *timeZone;
@property(retain, nonatomic) NSString *location;
@property(retain) NSString *title;
- (BOOL)isPrivateAndDelegateOrCalendarSharedToMe;
- (BOOL)isPrivate;
@property(readonly, nonatomic) unsigned long long calendarOrder;
@property(readonly, retain, nonatomic) NSString *color;
@property(readonly, retain, nonatomic) CalManagedCalendar *calendar;
- (BOOL)isValid;
- (id)managedCalendarInUserOrChildContext;
- (id)managedCalendarInContext:(id)arg1;
- (id)_managedCalendarInContext:(id)arg1;
- (id)_managedObjectContext;
- (id)_managedEventInContext:(id)arg1;
- (BOOL)associatedWithChildContext;
- (id)userOrChildContext;
- (id)managedEventInUserOrChildContext;
- (void)discardEditing;
- (BOOL)validateForCommit;
- (id)_entityPropertyForChangedKey:(id)arg1;
- (id)_entityValueForValue:(id)arg1;
- (id)_legacyDateFromOccurrenceDate:(id)arg1;
- (id)_entityKeyForKey:(id)arg1;
- (BOOL)_hasTimeChange;
- (BOOL)_hasAnyChange;
- (long long)compareTimeEndingRecently:(id)arg1;
- (long long)compare:(id)arg1;
- (BOOL)isEqualToOccurrence:(id)arg1;
@property(readonly) unsigned long long hash;
- (void)dealloc;
- (id)initWithManagedEvent:(id)arg1 date:(id)arg2 from:(id)arg3 to:(id)arg4;
- (void)_updateObjectIDsFromManagedEvent:(id)arg1;
- (id)initWithManagedEvent:(id)arg1;
- (id)initWithOccurrenceID:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

