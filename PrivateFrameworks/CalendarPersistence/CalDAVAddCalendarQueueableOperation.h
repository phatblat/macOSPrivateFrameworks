//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CalendarPersistence/CalDAVCalendarQueueableOperation.h>

@class NSMutableSet, NSSet, NSString;

@interface CalDAVAddCalendarQueueableOperation : CalDAVCalendarQueueableOperation
{
    int _state;
    NSMutableSet *_propertiesToSet;
    NSMutableSet *_fallbackProperties;
    NSString *_uri;
    NSString *_inboxURI;
    BOOL _isAutoScheduleSupported;
    BOOL _isEventContainer;
    BOOL _isTaskContainer;
}

+ (id)generateTimeZoneString:(id)arg1;
+ (id)mkcalendarPropertiesWithDisplayName:(id)arg1 color:(id)arg2 symbolicColorName:(id)arg3 order:(unsigned long long)arg4 notes:(id)arg5 timeZone:(id)arg6 shouldSetTransparency:(BOOL)arg7 isAffectingAvailability:(BOOL)arg8 isAutoscheduleSupported:(BOOL)arg9 fallbackProperties:(id)arg10;
@property(retain) NSString *inboxURI; // @synthesize inboxURI=_inboxURI;
@property(retain) NSString *uri; // @synthesize uri=_uri;
@property(retain) NSSet *fallbackProperties; // @synthesize fallbackProperties=_fallbackProperties;
@property(retain) NSSet *propertiesToSet; // @synthesize propertiesToSet=_propertiesToSet;
- (void).cxx_destruct;
- (void)performComplete;
- (void)taskGroup:(id)arg1 didFinishWithError:(id)arg2;
- (void)_updateFreeBusySet;
- (void)_updateACL;
- (id)_createReadFreeBusyACE;
- (void)performOperation;
- (id)initWithChangeRequest:(id)arg1 session:(id)arg2 isAffectingAvailability:(BOOL)arg3 isAutoscheduleSupported:(BOOL)arg4;

@end

