//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <GeoServices/GEONavigationMapMatcher.h>

@interface GEONavigationDrivingMapMatcher : GEONavigationMapMatcher
{
}

- (id)_routeMatcherForRoute:(id)arg1;
- (double)_approximateMaxSpeedForRoad:(CDStruct_f2d78687 *)arg1;
- (BOOL)_shouldConsiderRoadMatch:(id)arg1 overRouteMatch:(id)arg2 forLocation:(id)arg3;
- (BOOL)_locationMeetsSpeedThresholdForRoadMatch:(id)arg1 distanceFromRoute:(double)arg2;
- (int)transportType;
- (id)matchLocation:(id)arg1 transportType:(int)arg2;

@end

