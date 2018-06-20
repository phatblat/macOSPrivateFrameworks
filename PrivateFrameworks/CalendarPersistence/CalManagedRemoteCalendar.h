//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CalendarPersistence/CalManagedCalendar.h>

@class NSString;

@interface CalManagedRemoteCalendar : CalManagedCalendar
{
}

+ (void)_setLikenessDataStringForUnitTest:(id)arg1;
+ (id)entityName;
- (id)defaultOrganizerEmailForNewItems;
- (id)defaultOrganizerEncodedLikenessDataForNewItems;
- (id)defaultOrganizerAddressForNewItems;
- (id)defaultOrganizerNameForNewItems;
- (void)setPublishURL:(id)arg1;
- (id)subscriptionURL;
- (id)publishURL;
- (id)prePublishURL;
- (BOOL)hasAddressForMe;
- (BOOL)isAddressMe:(id)arg1;
- (BOOL)_calendarOwnerAddressIsEquivalentToURL:(id)arg1;
- (void)willSave;
- (id)properties;
- (long long)notificationCountForClass:(Class)arg1;
- (BOOL)isSubscribed;
- (BOOL)isCalDAVPublished;
- (id)_defaultAlarmsWithIsAllDayEvent:(BOOL)arg1 fromServerForCalendar:(BOOL)arg2 fromServerForPrincipal:(BOOL)arg3;
- (id)defaultAlarmsWithIsAllDayEvent:(BOOL)arg1 fromServer:(BOOL)arg2;
- (id)defaultAlarmsWithIsAllDayEvent:(BOOL)arg1;
- (BOOL)shareDefaultAlarmSettings;
- (void)applyReasonableDefaultsForNewCalendarInGroup:(id)arg1;
@property(retain) NSString *displayNotes;
@property(retain) NSString *displayTitle;
- (void)setIsEditableForReply:(BOOL)arg1;
- (BOOL)isEditableForReply;
- (void)setIsEditable:(BOOL)arg1;
- (BOOL)isWritable;
- (BOOL)isRefreshable;
- (BOOL)isEditable;
@property BOOL isDelegate;

// Remaining properties
@property int permission; // @dynamic permission;
@property(retain) NSString *prePublishURLString; // @dynamic prePublishURLString;
@property(retain) NSString *publishURLString; // @dynamic publishURLString;
@property(retain) NSString *serverSubscriptionURLString; // @dynamic serverSubscriptionURLString;
@property int sharingStatus; // @dynamic sharingStatus;

@end

