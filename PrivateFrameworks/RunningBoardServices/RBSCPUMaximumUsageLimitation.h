//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <RunningBoardServices/RBSLimitation.h>

@interface RBSCPUMaximumUsageLimitation : RBSLimitation
{
    unsigned char _role;
    unsigned long long _percentage;
    double _duration;
    unsigned long long _violationPolicy;
}

+ (id)limitationForRole:(unsigned char)arg1 withPercentage:(unsigned long long)arg2 duration:(double)arg3 violationPolicy:(unsigned long long)arg4;
@property(readonly, nonatomic) unsigned char role; // @synthesize role=_role;
@property(readonly, nonatomic) unsigned long long violationPolicy; // @synthesize violationPolicy=_violationPolicy;
@property(readonly, nonatomic) double duration; // @synthesize duration=_duration;
@property(readonly, nonatomic) unsigned long long percentage; // @synthesize percentage=_percentage;
- (id)_initWithRole:(unsigned char)arg1 percentage:(unsigned long long)arg2 duration:(double)arg3 violationPolicy:(unsigned long long)arg4;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)initWithBSXPCCoder:(id)arg1;
- (void)encodeWithBSXPCCoder:(id)arg1;
- (id)succinctDescriptionBuilder;

@end

