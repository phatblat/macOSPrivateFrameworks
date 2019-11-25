//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSOperation.h"

@class KHCalendarUtility, NSDate, NSDictionary, NSMutableArray, NSMutableDictionary, NSString;

@interface KHHolidaysCalendarEventParser : NSOperation
{
    BOOL _currentRecordIsValid;
    NSString *_eventString;
    unsigned long long _type;
    NSDictionary *_typeListForCountry;
    NSString *_delimiter;
    CDUnknownBlockType _completion;
    NSString *_currentRecord;
    NSDate *_currentStartDate;
    NSDate *_currentEndDate;
    NSString *_currentRecurrenceRule;
    NSMutableArray *_recurrenceExceptions;
    NSMutableDictionary *_currentLocalizations;
    NSDate *_maxCalendarDate;
    NSDate *_latestCalendarDate;
    KHCalendarUtility *_calendarUtility;
}

@property(retain, nonatomic) KHCalendarUtility *calendarUtility; // @synthesize calendarUtility=_calendarUtility;
@property(copy, nonatomic) NSDate *latestCalendarDate; // @synthesize latestCalendarDate=_latestCalendarDate;
@property(copy, nonatomic) NSDate *maxCalendarDate; // @synthesize maxCalendarDate=_maxCalendarDate;
@property(retain, nonatomic) NSMutableDictionary *currentLocalizations; // @synthesize currentLocalizations=_currentLocalizations;
@property(retain, nonatomic) NSMutableArray *recurrenceExceptions; // @synthesize recurrenceExceptions=_recurrenceExceptions;
@property(copy, nonatomic) NSString *currentRecurrenceRule; // @synthesize currentRecurrenceRule=_currentRecurrenceRule;
@property(copy, nonatomic) NSDate *currentEndDate; // @synthesize currentEndDate=_currentEndDate;
@property(copy, nonatomic) NSDate *currentStartDate; // @synthesize currentStartDate=_currentStartDate;
@property(copy, nonatomic) NSString *currentRecord; // @synthesize currentRecord=_currentRecord;
@property(nonatomic) BOOL currentRecordIsValid; // @synthesize currentRecordIsValid=_currentRecordIsValid;
@property(copy, nonatomic) CDUnknownBlockType completion; // @synthesize completion=_completion;
@property(copy, nonatomic) NSString *delimiter; // @synthesize delimiter=_delimiter;
@property(copy, nonatomic) NSDictionary *typeListForCountry; // @synthesize typeListForCountry=_typeListForCountry;
@property(nonatomic) unsigned long long type; // @synthesize type=_type;
@property(copy, nonatomic) NSString *eventString; // @synthesize eventString=_eventString;
- (void).cxx_destruct;
- (id)_calendar;
- (id)_createMaxCalendarDateWithNumberOfYears:(unsigned long long)arg1;
- (BOOL)_holidayWithNameIsValid:(id)arg1;
- (id)_adjustRecurrenceDate:(id)arg1 byDay:(id)arg2;
- (id)_photoDateFromDaySpec:(id)arg1 andStartingDate:(id)arg2;
- (unsigned long long)_dayOfWeekFromTwoCharDayAtEndOfString:(id)arg1;
- (BOOL)_isDateAnException:(id)arg1;
- (id)_unescapeString:(id)arg1;
- (id)_parseDateString:(id)arg1;
- (id)_parseRecurrenceRule;
- (id)_createRecordDates;
- (id)_createLocalizedEventName;
- (void)_parseLine:(id)arg1;
- (void)main;
- (id)initWithEventString:(id)arg1 type:(unsigned long long)arg2 typeListForCountry:(id)arg3 delimiter:(id)arg4 completion:(CDUnknownBlockType)arg5;

@end

