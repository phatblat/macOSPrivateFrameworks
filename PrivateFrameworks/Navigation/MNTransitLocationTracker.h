//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Navigation/MNSteppingLocationTracker.h>

#import "MNTransitScheduleTrackerDelegate.h"

@class GEORoadMatcher, GEOTransitRouteMatcher, MNLocation, MNTransitScheduleTracker, NSDate, NSString;

__attribute__((visibility("hidden")))
@interface MNTransitLocationTracker : MNSteppingLocationTracker <MNTransitScheduleTrackerDelegate>
{
    GEOTransitRouteMatcher *_transitRouteMatcher;
    MNTransitScheduleTracker *_scheduleTracker;
    GEORoadMatcher *_roadMatcher;
    NSDate *_lastLocationTimestamp;
    NSDate *_lastAccurateLocationDate;
    MNLocation *_lastMatchedLocation;
    NSDate *_startDate;
    BOOL _hasArrived;
    BOOL _debugSnapToTransitLines;
}

@property(nonatomic) BOOL debugSnapToTransitLines; // @synthesize debugSnapToTransitLines=_debugSnapToTransitLines;
- (void).cxx_destruct;
- (void)transitScheduleTracker:(id)arg1 didUpdateFeedback:(id)arg2 forAlightingStepAtIndex:(unsigned long long)arg3;
- (void)transitScheduleTracker:(id)arg1 didSignalAlightForStepAtIndex:(unsigned long long)arg2;
- (BOOL)_isInaccurateLocation:(id)arg1;
- (double)_timeToDisplayStaleGPSLocation;
- (id)_roadMatchForOffRouteLocation:(id)arg1 routeMatch:(id)arg2;
- (id)_locationForInaccurateLocation:(id)arg1;
- (id)_correctedLocationForLocation:(id)arg1;
- (id)_matchedLocationForLocation:(id)arg1;
- (void)stopTracking;
- (void)startTracking;
- (int)transportType;
- (id)initWithNavigationSession:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

