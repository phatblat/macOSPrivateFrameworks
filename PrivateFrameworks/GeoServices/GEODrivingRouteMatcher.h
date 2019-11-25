//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <GeoServices/GEORouteMatcher.h>

__attribute__((visibility("hidden")))
@interface GEODrivingRouteMatcher : GEORouteMatcher
{
}

- (BOOL)_supportsSnapping;
- (void)_finishRouteMatch:(id)arg1 previousRouteMatch:(id)arg2 forLocation:(id)arg3;
- (id)_startStepForPreviousRouteMatch:(id)arg1;
- (double)_maxCourseDelta:(id)arg1 previousRouteMatch:(id)arg2 timeSinceTunnel:(double)arg3;
- (double)_modifiedCourseAccuracyForLocation:(id)arg1 previousRouteMatch:(id)arg2;
- (double)_modifiedHorizontalAccuracy:(double)arg1 routeIndex:(unsigned int)arg2;
- (double)_courseWeightForLocation:(id)arg1 accuracyType:(long long)arg2;
- (double)_maxMatchDistance:(double)arg1 routeIndex:(unsigned int)arg2 previousRouteMatch:(id)arg3 timeSinceTunnel:(double)arg4;
- (id)_candidateForSegment:(id)arg1 location:(id)arg2 previousRouteMatch:(id)arg3;
- (id)initWithRoute:(id)arg1;

@end

