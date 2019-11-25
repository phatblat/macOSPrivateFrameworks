//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDate, NSUserDefaults;

@interface VCDailyMetricCheckIn : NSObject
{
    NSDate *_currentDate;
    NSUserDefaults *_userDefaults;
}

+ (id)recentCheckIn;
@property(readonly, nonatomic) NSUserDefaults *userDefaults; // @synthesize userDefaults=_userDefaults;
@property(readonly, copy, nonatomic) NSDate *currentDate; // @synthesize currentDate=_currentDate;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSDate *checkInDate;
- (void)updateCheckInToNow;
- (BOOL)isCheckInAllowed;
- (id)initWithCurrentDate:(id)arg1 defaults:(id)arg2;
- (id)init;

@end

