//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CLLocation;

@interface PLLocationOfInterestLocation : NSObject
{
    CLLocation *_location;
    double _uncertainty;
}

@property(readonly, nonatomic) double uncertainty; // @synthesize uncertainty=_uncertainty;
@property(readonly, nonatomic) CLLocation *location; // @synthesize location=_location;
- (void).cxx_destruct;
- (double)distanceFromLocation:(id)arg1 withTypeRadius:(double)arg2;
- (id)description;
- (id)initWithLocation:(id)arg1 uncertainty:(double)arg2;

@end
