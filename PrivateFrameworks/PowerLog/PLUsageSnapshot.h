//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDate;

@interface PLUsageSnapshot : NSObject
{
    NSDate *_timestamp;
    double _cpuUsage;
}

@property double cpuUsage; // @synthesize cpuUsage=_cpuUsage;
@property(retain) NSDate *timestamp; // @synthesize timestamp=_timestamp;
- (void).cxx_destruct;
- (id)description;

@end

