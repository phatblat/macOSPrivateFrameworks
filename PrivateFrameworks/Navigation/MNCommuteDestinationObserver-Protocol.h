//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class GEOComposedRoute, GEOETARoute, MNCommuteDestination, MNLocation, NSDictionary;

@protocol MNCommuteDestinationObserver <NSObject>

@optional
- (void)commuteDestination:(MNCommuteDestination *)arg1 didChangeScores:(NSDictionary *)arg2;
- (void)commuteDestination:(MNCommuteDestination *)arg1 didChangeScore:(long long)arg2;
- (void)commuteDestination:(MNCommuteDestination *)arg1 didChangeLastLocation:(MNLocation *)arg2;
- (void)commuteDestination:(MNCommuteDestination *)arg1 didChangeRerouting:(BOOL)arg2;
- (void)commuteDestination:(MNCommuteDestination *)arg1 didChangeRemainingDistance:(double)arg2;
- (void)commuteDestination:(MNCommuteDestination *)arg1 didChangeRemainingTime:(double)arg2;
- (void)commuteDestination:(MNCommuteDestination *)arg1 didChangeETARoute:(GEOETARoute *)arg2;
- (void)commuteDestination:(MNCommuteDestination *)arg1 didChangeLastMatchedLocation:(MNLocation *)arg2;
- (void)commuteDestination:(MNCommuteDestination *)arg1 didChangeRoute:(GEOComposedRoute *)arg2;
- (void)commuteDestination:(MNCommuteDestination *)arg1 didChangeInvalid:(BOOL)arg2;
@end

