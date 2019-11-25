//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

__attribute__((visibility("hidden")))
@interface SCRMovementInfo : NSObject
{
    long long _direction;
    double _distance;
    long long _adjustmentType;
    unsigned long long _counter;
}

@property(nonatomic) unsigned long long counter; // @synthesize counter=_counter;
@property(nonatomic) long long adjustmentType; // @synthesize adjustmentType=_adjustmentType;
@property(nonatomic) double distance; // @synthesize distance=_distance;
@property(nonatomic) long long direction; // @synthesize direction=_direction;
- (id)initWithDirection:(long long)arg1 distance:(double)arg2 adjustmentType:(long long)arg3;

@end

