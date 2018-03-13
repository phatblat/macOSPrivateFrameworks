//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class NSString;

@interface ICMediaTime : NSObject <NSCopying>
{
    unsigned char _days;
    unsigned char _hours;
    unsigned char _minutes;
    unsigned char _seconds;
    BOOL _negative;
}

@property(nonatomic, getter=isNegative) BOOL negative; // @synthesize negative=_negative;
@property(nonatomic) unsigned char seconds; // @synthesize seconds=_seconds;
@property(nonatomic) unsigned char minutes; // @synthesize minutes=_minutes;
@property(nonatomic) unsigned char hours; // @synthesize hours=_hours;
@property(nonatomic) unsigned char days; // @synthesize days=_days;
@property(readonly, nonatomic) NSString *durationDescription;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (BOOL)isEqualToMediaTime:(id)arg1;
@property(readonly, nonatomic) BOOL isZero;
- (id)initWithSeconds:(double)arg1;
- (id)initWithCMTime:(CDStruct_1b6d18a9)arg1;

@end

