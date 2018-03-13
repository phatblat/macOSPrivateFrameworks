//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CalendarPersistence/CaliMIPOperation.h>

@class NSData, NSDate, NSString, NSTimeZone;

@interface CaliMIPPersistDetailsOperation : CaliMIPOperation
{
    BOOL _eventIsAllDay;
    BOOL _eventIsFloating;
    NSData *_attachment;
    NSDate *_eventStartDate;
    NSTimeZone *_eventTimeZone;
    NSString *_eventTitle;
    NSString *_organizerName;
}

@property(retain) NSString *organizerName; // @synthesize organizerName=_organizerName;
@property(retain) NSString *eventTitle; // @synthesize eventTitle=_eventTitle;
@property(retain) NSTimeZone *eventTimeZone; // @synthesize eventTimeZone=_eventTimeZone;
@property(retain) NSDate *eventStartDate; // @synthesize eventStartDate=_eventStartDate;
@property BOOL eventIsFloating; // @synthesize eventIsFloating=_eventIsFloating;
@property BOOL eventIsAllDay; // @synthesize eventIsAllDay=_eventIsAllDay;
@property(retain) NSData *attachment; // @synthesize attachment=_attachment;
- (void).cxx_destruct;
- (id)attachmentInContext:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithManagedAttendees:(id)arg1;

@end

