//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface BSMonotonicReferenceTime : NSObject
{
    double _startTimeStamp;
}

+ (double)_timeIntervalSinceInternalClockReference;
+ (id)referenceTimeForDate:(id)arg1;
+ (id)referenceTimeWithTimeIntervalSinceNow:(double)arg1;
+ (id)distantFuture;
+ (id)distantPast;
+ (id)now;
- (id)date;
- (double)timeIntervalSinceReferenceTime:(id)arg1;
@property(readonly, nonatomic) double timeIntervalSinceNow;
@property(readonly, nonatomic) double timeIntervalToNow;
- (id)_initWithStartTime:(double)arg1;

@end

