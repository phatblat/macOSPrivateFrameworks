//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <WorkflowKit/WFTrigger.h>

@class CLCircularRegion, NSDate;

@interface WFLocationTrigger : WFTrigger
{
    CLCircularRegion *_region;
    NSDate *_startTime;
    NSDate *_endTime;
}

+ (BOOL)supportsSecureCoding;
+ (id)timestampDateFormatter;
@property(retain, nonatomic) NSDate *endTime; // @synthesize endTime=_endTime;
@property(retain, nonatomic) NSDate *startTime; // @synthesize startTime=_startTime;
@property(copy, nonatomic) CLCircularRegion *region; // @synthesize region=_region;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (BOOL)hasValidConfiguration;
- (void)configureWithConfiguration:(id)arg1;

@end

