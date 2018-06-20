//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CalendarPersistence/CalManagedCalendar.h>

@interface CalManagedLocalCalendar : CalManagedCalendar
{
}

+ (id)singletonSuggestedEventContainerSource;
+ (id)singletonContainerSource;
+ (id)localCalendarsGroupTitle;
+ (void)enableChangeRequestNotifications;
+ (id)entityName;
- (id)subscriptionURL;
- (id)publishURL;
- (void)setSharees:(id)arg1;
- (id)sharees;
- (id)containerSource;
- (id)nodesForOrdering;
- (id)defaultAlarmsWithIsAllDayEvent:(BOOL)arg1 fromServer:(BOOL)arg2;
- (id)defaultAlarmsWithIsAllDayEvent:(BOOL)arg1;
- (void)didSave;
- (BOOL)validateForUpdate:(id *)arg1;
- (BOOL)validateForInsert:(id *)arg1;
- (BOOL)validateForWrite:(id *)arg1;
- (long long)notificationCountForClass:(Class)arg1;
- (BOOL)isMigrateable;
- (id)properties;
@property(nonatomic) BOOL isNaturalLanguageSuggestedEventCalendar;
@property(nonatomic) BOOL isSuggestedEventCalendar;
- (BOOL)isLocal;
- (BOOL)supportsPublishing;
- (BOOL)isWritable;
- (id)type;
- (id)calendarSource;

// Remaining properties
@property BOOL isEditable; // @dynamic isEditable;

@end

