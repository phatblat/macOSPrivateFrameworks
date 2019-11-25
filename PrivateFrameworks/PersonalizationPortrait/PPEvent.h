//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"
#import "NSSecureCoding.h"

@class CLLocation, NSArray, NSDate, NSString, NSURL, PPCalendar;

@interface PPEvent : NSObject <NSSecureCoding, NSCopying>
{
    BOOL _availability;
    unsigned char _eventFlags;
    NSString *_eventIdentifier;
    NSString *_title;
    NSString *_location;
    PPCalendar *_calendar;
    NSDate *_startDate;
    NSDate *_endDate;
    NSURL *_externalURI;
    NSArray *_attendees;
    NSString *_organizerName;
    NSString *_notes;
    NSURL *_url;
    NSString *_structuredLocationTitle;
    NSString *_structuredLocationAddress;
    CLLocation *_structuredLocationCoordinates;
}

+ (BOOL)supportsSecureCoding;
@property(readonly, nonatomic) CLLocation *structuredLocationCoordinates; // @synthesize structuredLocationCoordinates=_structuredLocationCoordinates;
@property(readonly, nonatomic) NSString *structuredLocationAddress; // @synthesize structuredLocationAddress=_structuredLocationAddress;
@property(readonly, nonatomic) NSString *structuredLocationTitle; // @synthesize structuredLocationTitle=_structuredLocationTitle;
@property(readonly, nonatomic) NSURL *url; // @synthesize url=_url;
@property(readonly, nonatomic) NSString *notes; // @synthesize notes=_notes;
@property(readonly, nonatomic) unsigned char eventFlags; // @synthesize eventFlags=_eventFlags;
@property(readonly, nonatomic) NSString *organizerName; // @synthesize organizerName=_organizerName;
@property(readonly, nonatomic) NSArray *attendees; // @synthesize attendees=_attendees;
@property(readonly, nonatomic) NSURL *externalURI; // @synthesize externalURI=_externalURI;
@property(readonly, nonatomic) BOOL availability; // @synthesize availability=_availability;
@property(readonly, nonatomic) NSDate *endDate; // @synthesize endDate=_endDate;
@property(readonly, nonatomic) NSDate *startDate; // @synthesize startDate=_startDate;
@property(readonly, nonatomic) PPCalendar *calendar; // @synthesize calendar=_calendar;
@property(readonly, nonatomic) NSString *location; // @synthesize location=_location;
@property(readonly, nonatomic) NSString *title; // @synthesize title=_title;
@property(readonly, nonatomic) NSString *eventIdentifier; // @synthesize eventIdentifier=_eventIdentifier;
- (void).cxx_destruct;
- (BOOL)isEqualToEvent:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)description;
- (long long)compareStartDateWithEvent:(id)arg1;
- (BOOL)organizerIsCurrentUser;
- (BOOL)representsUnscheduledFreeTime;
- (id)initWithEventIdentifier:(id)arg1 title:(id)arg2 location:(id)arg3 calendar:(id)arg4 startDate:(id)arg5 endDate:(id)arg6 availability:(BOOL)arg7 externalURI:(id)arg8 attendees:(id)arg9 organizerName:(id)arg10 eventFlags:(unsigned char)arg11 notes:(id)arg12 url:(id)arg13 structuredLocationTitle:(id)arg14 structuredLocationAddress:(id)arg15 structuredLocationCoordinates:(id)arg16;
- (id)initWithEKEvent:(id)arg1;
- (id)init;

@end

