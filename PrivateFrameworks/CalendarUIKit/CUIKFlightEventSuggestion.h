//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CalendarUIKit/CUIKEventSuggestion.h>

@class NSDate, NSString;

@interface CUIKFlightEventSuggestion : CUIKEventSuggestion
{
    NSDate *_departureDate;
    NSString *_airlineCode;
    long long _flightNumber;
}

@property long long flightNumber; // @synthesize flightNumber=_flightNumber;
@property(retain) NSString *airlineCode; // @synthesize airlineCode=_airlineCode;
@property(retain) NSDate *departureDate; // @synthesize departureDate=_departureDate;
- (void).cxx_destruct;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)flightCode;

@end

