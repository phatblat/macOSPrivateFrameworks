//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CNVCardDateComponentsFormatter, NSCalendar;

@interface CNVCardDateComponentsParser : NSObject
{
    CNVCardDateComponentsFormatter *_formatter;
    NSCalendar *_gregorianCalendar;
}

- (void).cxx_destruct;
- (id)dateComponentsFromString:(id)arg1 calendarIdentifier:(id)arg2;
- (id)dateComponentsWithParser:(id)arg1;
- (id)dateComponentsFromString:(id)arg1 omitYear:(long long)arg2;
- (id)gregorianDateComponentsWithParser:(id)arg1;
- (id)init;

@end

