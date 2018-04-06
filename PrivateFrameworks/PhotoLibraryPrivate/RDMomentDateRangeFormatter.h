//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSCalendar, NSDateFormatter, NSLocale;

@interface RDMomentDateRangeFormatter : NSObject
{
    BOOL _autoUpdateOnChanges;
    NSCalendar *_calendar;
    BOOL _includeDayNumbers;
    BOOL _includeDayNumbersWhenMonthsDiffer;
    BOOL _useRelativeDayFormatting;
    BOOL _useShortMonths;
    BOOL _useShortDaysInRanges;
    BOOL _useTime;
    BOOL _yearOnly;
    BOOL _timeOnly;
    NSDateFormatter *__sameDayDateFormatter;
    NSDateFormatter *__sameDayNoYearDateFormatter;
    NSDateFormatter *__dayOfTheWeekDateFormatter;
    NSDateFormatter *__relativeDateFormatterDay;
    NSDateFormatter *__yearDateFormatter;
    struct UDateIntervalFormat *__monthDayIntervalFormat;
    struct UDateIntervalFormat *__monthDayNoYearIntervalFormat;
    struct UDateIntervalFormat *__differentMonthDayIntervalFormat;
    struct UDateIntervalFormat *__differentMonthDayNoYearIntervalFormat;
    struct UDateIntervalFormat *__dayOfTheWeekIntervalFormat;
    struct UDateIntervalFormat *__timeIntervalFormat;
    struct UDateIntervalFormat *__yearIntervalFormat;
    NSLocale *__currentLocale;
}

+ (void)_dumpAllDateCombinationsWithFormatters;
@property(retain, nonatomic, setter=_setCurrentLocale:) NSLocale *_currentLocale; // @synthesize _currentLocale=__currentLocale;
@property(nonatomic) BOOL autoUpdateOnChanges; // @synthesize autoUpdateOnChanges=_autoUpdateOnChanges;
@property(nonatomic) BOOL timeOnly; // @synthesize timeOnly=_timeOnly;
@property(nonatomic) BOOL yearOnly; // @synthesize yearOnly=_yearOnly;
@property(nonatomic) BOOL useTime; // @synthesize useTime=_useTime;
@property(nonatomic) BOOL useShortDaysInRanges; // @synthesize useShortDaysInRanges=_useShortDaysInRanges;
@property(nonatomic) BOOL useShortMonths; // @synthesize useShortMonths=_useShortMonths;
@property(nonatomic) BOOL useRelativeDayFormatting; // @synthesize useRelativeDayFormatting=_useRelativeDayFormatting;
@property(nonatomic) BOOL includeDayNumbersWhenMonthsDiffer; // @synthesize includeDayNumbersWhenMonthsDiffer=_includeDayNumbersWhenMonthsDiffer;
@property(nonatomic) BOOL includeDayNumbers; // @synthesize includeDayNumbers=_includeDayNumbers;
- (void).cxx_destruct;
- (void)_dumpDateCombinations;
- (id)_relativeCombinationsForDate:(id)arg1;
- (void)_updateStartAndEndDatesAndDumpDateCombinationWithStartDate:(id)arg1 endDate:(id)arg2 currentDate:(id)arg3 dateFormatter:(id)arg4 calendarUnit:(unsigned long long)arg5 value:(long long)arg6;
- (id)_dateCombinationAfterUpdatingStartAndEndDatesWithStartDate:(id)arg1 endDate:(id)arg2 currentDate:(id)arg3 dateFormatter:(id)arg4 calendarUnit:(unsigned long long)arg5 value:(long long)arg6;
- (void)_updateCurrentDateAndDumpDateCombinationWithStartDate:(id)arg1 endDate:(id)arg2 currentDate:(id)arg3 dateFormatter:(id)arg4 calendarUnit:(unsigned long long)arg5 value:(long long)arg6;
- (id)_dateCombinationAfterUpdatingCurrentDateWithStartDate:(id)arg1 endDate:(id)arg2 currentDate:(id)arg3 dateFormatter:(id)arg4 calendarUnit:(unsigned long long)arg5 value:(long long)arg6;
- (void)_updateDateComponents:(id)arg1 withValueValue:(long long)arg2 forCalendarUnit:(unsigned long long)arg3;
- (void)_dumpDateCombinationWithStartDate:(id)arg1 endDate:(id)arg2 currentDate:(id)arg3 dateFormatter:(id)arg4;
- (id)_dateCombinationWithStartDate:(id)arg1 endDate:(id)arg2 currentDate:(id)arg3 dateFormatter:(id)arg4;
- (void)configureForFormatPreset:(unsigned long long)arg1;
- (void)_localeChanged:(id)arg1;
- (id)formattedDate:(id)arg1;
- (id)formattedDateRangeWithStartDate:(id)arg1 endDate:(id)arg2;
- (id)formattedDateRangeWithStartDate:(id)arg1 endDate:(id)arg2 currentDate:(id)arg3;
- (BOOL)_date:(id)arg1 isWithinDaysInThePast:(long long)arg2;
- (BOOL)_date:(id)arg1 isWithinDaysInThePast:(long long)arg2 fromCurrentDate:(id)arg3;
@property(readonly, nonatomic) struct UDateIntervalFormat *_yearIntervalFormat; // @synthesize _yearIntervalFormat=__yearIntervalFormat;
@property(readonly, nonatomic) struct UDateIntervalFormat *_timeIntervalFormat; // @synthesize _timeIntervalFormat=__timeIntervalFormat;
@property(readonly, nonatomic) struct UDateIntervalFormat *_dayOfTheWeekIntervalFormat; // @synthesize _dayOfTheWeekIntervalFormat=__dayOfTheWeekIntervalFormat;
@property(readonly, nonatomic) struct UDateIntervalFormat *_differentMonthDayNoYearIntervalFormat; // @synthesize _differentMonthDayNoYearIntervalFormat=__differentMonthDayNoYearIntervalFormat;
@property(readonly, nonatomic) struct UDateIntervalFormat *_differentMonthDayIntervalFormat; // @synthesize _differentMonthDayIntervalFormat=__differentMonthDayIntervalFormat;
@property(readonly, nonatomic) struct UDateIntervalFormat *_monthDayNoYearIntervalFormat; // @synthesize _monthDayNoYearIntervalFormat=__monthDayNoYearIntervalFormat;
@property(readonly, nonatomic) struct UDateIntervalFormat *_monthDayIntervalFormat; // @synthesize _monthDayIntervalFormat=__monthDayIntervalFormat;
@property(readonly, nonatomic) NSDateFormatter *_relativeDateFormatterDay; // @synthesize _relativeDateFormatterDay=__relativeDateFormatterDay;
@property(readonly, nonatomic) NSDateFormatter *_yearDateFormatter; // @synthesize _yearDateFormatter=__yearDateFormatter;
@property(readonly, nonatomic) NSDateFormatter *_dayOfTheWeekDateFormatter; // @synthesize _dayOfTheWeekDateFormatter=__dayOfTheWeekDateFormatter;
@property(readonly, nonatomic) NSDateFormatter *_sameDayNoYearDateFormatter; // @synthesize _sameDayNoYearDateFormatter=__sameDayNoYearDateFormatter;
@property(readonly, nonatomic) NSDateFormatter *_sameDayDateFormatter; // @synthesize _sameDayDateFormatter=__sameDayDateFormatter;
- (id)_dayDifferentMonthsTemplate;
- (id)_dayTemplate;
- (id)_sameMonthTemplate;
- (void)_invalidateFormats;
- (id)_formattedDateWithUDateFormatter:(struct UDateIntervalFormat *)arg1 startDate:(id)arg2 endDate:(id)arg3;
- (void)_releaseUDateFormatter:(struct UDateIntervalFormat *)arg1;
- (struct UDateIntervalFormat *)_newUDateFormatterForLocale:(id)arg1 template:(id)arg2;
- (id)init;

@end
