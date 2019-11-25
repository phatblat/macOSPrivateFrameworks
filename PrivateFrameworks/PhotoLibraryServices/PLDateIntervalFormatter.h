//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSCalendar, NSDateIntervalFormatter, NSLocale;

@interface PLDateIntervalFormatter : NSObject
{
    BOOL _alwaysShowYear;
    NSDateIntervalFormatter *_dateIntervalFormatter;
    NSCalendar *_gmtCalendar;
    NSLocale *_locale;
}

+ (id)_currentLocalDate;
+ (id)stringFromStartDate:(id)arg1 endDate:(id)arg2 type:(unsigned long long)arg3 showLongMonthFormatIfNeeded:(BOOL)arg4;
+ (id)stringFromStartDate:(id)arg1 endDate:(id)arg2 type:(unsigned long long)arg3;
+ (id)_dateFormatForDateFormatterType:(unsigned long long)arg1 displayYear:(BOOL)arg2 displayLongMonth:(BOOL)arg3;
@property(nonatomic) BOOL alwaysShowYear; // @synthesize alwaysShowYear=_alwaysShowYear;
- (void).cxx_destruct;
@property(retain, nonatomic) NSLocale *locale; // @synthesize locale=_locale;
@property(readonly, nonatomic) NSCalendar *gmtCalendar; // @synthesize gmtCalendar=_gmtCalendar;
@property(readonly, nonatomic) NSDateIntervalFormatter *dateIntervalFormatter; // @synthesize dateIntervalFormatter=_dateIntervalFormatter;
- (BOOL)_yearIsNeededForDisplayingDate:(id)arg1;
- (id)stringFromStartDate:(id)arg1 endDate:(id)arg2 type:(unsigned long long)arg3 showLongMonthFormatIfNeeded:(BOOL)arg4;
- (id)stringFromStartDate:(id)arg1 endDate:(id)arg2 type:(unsigned long long)arg3;
- (id)init;

@end

