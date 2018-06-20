//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Navigation/MNLocationTracker.h>

#import "GEOETAUpdaterDelegate.h"

@class GEOComposedRoute, GEOComposedWaypoint, GEOETAUpdater, GEONavigationMapMatcher, MNActiveRouteInfo, MNLocation, MNNavigationTraceManager, NSString;

__attribute__((visibility("hidden")))
@interface MNCommuteLocationTracker : MNLocationTracker <GEOETAUpdaterDelegate>
{
    GEOComposedWaypoint *_destination;
    GEOComposedWaypoint *_lastOrigin;
    MNLocation *_lastLocation;
    MNActiveRouteInfo *_routeInfo;
    id <GEOMapServiceTicket> _currentLocationTicket;
    id <GEODirectionServiceTicket> _directionsRequestTicket;
    GEONavigationMapMatcher *_mapMatcher;
    GEOETAUpdater *_etaUpdater;
    unsigned long long _destinationID;
    MNNavigationTraceManager *_traceManager;
    BOOL _requestNonRecommendedRoutes;
    BOOL _routingInProgress;
}

@property(nonatomic) BOOL routingInProgress; // @synthesize routingInProgress=_routingInProgress;
@property(nonatomic) unsigned long long destinationID; // @synthesize destinationID=_destinationID;
@property(nonatomic) BOOL requestNonRecommendedRoutes; // @synthesize requestNonRecommendedRoutes=_requestNonRecommendedRoutes;
@property(readonly, nonatomic) GEOComposedWaypoint *destination; // @synthesize destination=_destination;
- (void).cxx_destruct;
- (void)etaUpdaterReceivedInvalidRoute:(id)arg1 newRoute:(id)arg2 incidentsOnRoute:(id)arg3 incidentsOffRoute:(id)arg4;
- (void)etaUpdaterUpdatedETA:(id)arg1;
- (void)etaUpdater:(id)arg1 receivedError:(id)arg2;
- (void)etaUpdater:(id)arg1 receivedETATrafficUpdateResponse:(id)arg2;
- (void)etaUpdater:(id)arg1 willSendETATrafficUpdateRequest:(id)arg2;
- (id)etaUpdaterRoutesForETATrafficUpdateRequest:(id)arg1;
- (id)_matchedLocationForMatchResult:(id)arg1 originalLocation:(id)arg2;
- (id)_matchedLocationForLocation:(id)arg1;
- (void)updateLocation:(id)arg1;
- (void)stopTracking;
- (void)startTracking;
- (int)transportType;
- (id)_directionsRequestFeedback;
- (id)_routeAttributes;
- (void)_handleDirectionsResponse:(id)arg1 error:(id)arg2 forRequest:(id)arg3;
- (void)_requestRouteFromWaypoint:(id)arg1 location:(id)arg2;
- (void)_requestRouteFromLocation:(id)arg1;
@property(readonly, nonatomic) GEOComposedRoute *route;
- (void)_setAuditToken:(id)arg1;
- (void)updateETA;
- (void)dealloc;
- (id)initWithDestination:(id)arg1 traceManager:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

