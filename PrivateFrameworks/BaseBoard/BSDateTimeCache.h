//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface BSDateTimeCache : NSObject
{
    double _yesterday;
    double _today;
    double _tomorrow;
    double _2daysFromNow;
    double _6daysAgo;
    double _prevWeek;
    double _nextWeek;
    double _lastAttemptedResetTime;
    double _lastSuccessfulResetTime;
}

+ (id)sharedInstance;
- (id)description;
- (void)_resetAndConfigureAndPostNotification:(BOOL)arg1;
- (void)_resetAndConfigure;
- (void)_resetAndConfigureIfNecessary;
- (BOOL)isWithinNextWeek:(double)arg1;
- (BOOL)isWithinPrevWeek:(double)arg1 includeToday:(BOOL)arg2;
- (BOOL)isWithinPrevWeek:(double)arg1;
- (BOOL)isYesterday:(double)arg1;
- (BOOL)isTomorrow:(double)arg1;
- (BOOL)_isToday:(double)arg1;
- (BOOL)isToday:(double)arg1;
- (double)nextWeek;
- (double)prevWeek;
- (double)yesterday;
- (double)tomorrow;
- (double)today;
- (void)dealloc;
- (id)init;

@end

