//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CoreRoutine/RTScenarioTrigger.h>

@class RTLocationOfInterest;

@interface RTScenarioTriggerFirstTimeAtLocation : RTScenarioTrigger
{
    RTLocationOfInterest *_locationOfInterest;
}

+ (BOOL)supportsSecureCoding;
@property(readonly, nonatomic) RTLocationOfInterest *locationOfInterest; // @synthesize locationOfInterest=_locationOfInterest;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)description;
- (id)initWithLocationOfInterest:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end

