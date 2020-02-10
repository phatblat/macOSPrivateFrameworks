//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class PLLazyObject;

@interface PLDateRangeTitleGenerator : NSObject
{
    PLLazyObject *_lazyRecentDateRangeFormatter;
    PLLazyObject *_lazyDateRangeFormatter;
    PLLazyObject *_lazyYearlessDateRangeFormatter;
    PLLazyObject *_lazyMonthDateRangeFormatter;
    PLLazyObject *_lazyShortMonthDateRangeFormatter;
    PLLazyObject *_lazyYearDateRangeFormatter;
}

- (void).cxx_destruct;
- (id)yearDateRangeFormatter;
- (id)shortMonthDateRangeFormatter;
- (id)monthDateRangeFormatter;
- (id)yearlessDateRangeFormatter;
- (id)dateRangeFormatter;
- (id)recentDateRangeFormatter;
- (id)newYearDateRangeFormatter;
- (id)newShortMonthDateRangeFormatter;
- (id)newMonthDateRangeFormatter;
- (id)newYearlessDateRangeFormatter;
- (id)newDateRangeFormatter;
- (id)newRecentDateRangeFormatter;
- (id)_dateRangeFormatterForCategory:(unsigned short)arg1 kind:(unsigned short)arg2 options:(unsigned long long)arg3;
- (id)dateRangeTitleWithStartDate:(id)arg1 endDate:(id)arg2 category:(unsigned short)arg3 kind:(unsigned short)arg4 options:(unsigned long long)arg5;
- (id)dateRangeTitleWithStartDate:(id)arg1 endDate:(id)arg2 category:(unsigned short)arg3 kind:(unsigned short)arg4;
- (id)init;

@end
