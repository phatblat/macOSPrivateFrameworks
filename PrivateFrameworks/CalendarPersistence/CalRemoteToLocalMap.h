//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary;

@interface CalRemoteToLocalMap : NSObject
{
    NSMutableDictionary *_reminderCalendars;
    NSMutableDictionary *_eventCalendars;
    NSMutableDictionary *_subscriptionCalendars;
}

+ (id)mapAfterCreatingMissingLocalCalendarsWithGroup:(id)arg1 includeEvents:(BOOL)arg2 includeReminders:(BOOL)arg3 inContext:(id)arg4;
+ (id)_localCloneFromRemoteCalendar:(id)arg1;
+ (id)_findMissingInGroup:(id)arg1 fromMap:(id)arg2 includeEvents:(BOOL)arg3 includeReminders:(BOOL)arg4;
+ (id)_titleWithFallbackForCalendar:(id)arg1;
+ (id)_existingLocalCalendarsMapWithContext:(id)arg1 includeEvents:(BOOL)arg2 includeReminders:(BOOL)arg3;
@property(retain) NSMutableDictionary *subscriptionCalendars; // @synthesize subscriptionCalendars=_subscriptionCalendars;
@property(retain) NSMutableDictionary *eventCalendars; // @synthesize eventCalendars=_eventCalendars;
@property(retain) NSMutableDictionary *reminderCalendars; // @synthesize reminderCalendars=_reminderCalendars;
- (id)mappedCalendarForCalendar:(id)arg1;
- (void)_addCalendar:(id)arg1 includeEvents:(BOOL)arg2 includeReminders:(BOOL)arg3;
- (void)dealloc;
- (id)init;

@end

