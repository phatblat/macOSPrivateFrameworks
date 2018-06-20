//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSDate.h"

@interface NSDate (WBSNSDateExtras)
+ (double)safari_oneDayInSeconds;
+ (void)safari_dateFromNTPServerWithTimeout:(double)arg1 completionHandler:(CDUnknownBlockType)arg2;
+ (id)safari_dateOfMidnightNumberOfDaysAgo:(long long)arg1;
- (id)safari_stringsFromDateForLocaleIdentifiers:(id)arg1;
- (id)_safari_stringWithDashSeparatorWithDateFormatter:(id)arg1;
@property(readonly, nonatomic) double safari_timeIntervalUntilNow;
- (BOOL)safari_isNowOrInRecentPast;
- (BOOL)safari_isInclusivelyBetweenDate:(id)arg1 andDate:(id)arg2;
- (id)safari_startOfDay;
- (BOOL)safari_isInSameDayAsDate:(id)arg1;
- (BOOL)safari_isInToday;
- (long long)safari_numberOfWeeksUntilDate:(id)arg1;
@end

