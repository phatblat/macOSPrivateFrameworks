//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSSecureCoding.h"

@interface ICSDuration : NSObject <NSSecureCoding>
{
    double _duration;
}

+ (BOOL)supportsSecureCoding;
+ (id)generateDurationFromICSString:(id)arg1;
+ (id)durationFromICSString:(id)arg1;
+ (id)durationFromRFC2445UTF8String:(const char *)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)ICSStringWithOptions:(unsigned long long)arg1;
- (BOOL)isNegative;
- (long long)seconds;
- (long long)minutes;
- (long long)hours;
- (long long)days;
- (long long)weeks;
- (double)timeInterval;
- (id)initWithWeeks:(long long)arg1 days:(long long)arg2 hours:(long long)arg3 minutes:(long long)arg4 seconds:(long long)arg5;
- (void)_ICSStringWithOptions:(unsigned long long)arg1 appendingToString:(id)arg2;

@end

