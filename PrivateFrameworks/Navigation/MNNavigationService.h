//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "MNNavigationServiceClientInterface.h"
#import "MNNavigationServiceRemoteProxyDelegate.h"

@class GEOComposedRoute, GEOComposedWaypoint, GEODirectionsRequest, GEODirectionsResponse, MNAudioOutputSetting, MNCommuteDestination, MNLocation, MNNavigationDetails, MNNavigationServiceRemoteProxy, MNObserverHashTable, MNSettings, NSArray, NSString;

@interface MNNavigationService : NSObject <MNNavigationServiceClientInterface, MNNavigationServiceRemoteProxyDelegate>
{
    MNObserverHashTable *_navigationObservers;
    id <MNNavigationServiceProxy> _proxy;
    MNNavigationServiceRemoteProxy *_remoteProxy;
    MNNavigationDetails *_details;
    MNSettings *_cachedSettings;
    MNAudioOutputSetting *_currentAudioOutputSetting;
    unsigned long long _routeSelection;
    NSArray *_audioSettings;
    MNAudioOutputSetting *_currentSettingForVoicePrompt;
}

+ (id)sharedService;
+ (unsigned long long)_hashForProtocol:(id)arg1;
+ (unsigned long long)daemonInterfaceHash;
+ (unsigned long long)clientInterfaceHash;
@property(readonly, nonatomic) MNAudioOutputSetting *currentSettingForVoicePrompt; // @synthesize currentSettingForVoicePrompt=_currentSettingForVoicePrompt;
@property(readonly, nonatomic) NSArray *audioSettings; // @synthesize audioSettings=_audioSettings;
@property(readonly, nonatomic) unsigned long long routeSelection; // @synthesize routeSelection=_routeSelection;
@property(readonly, nonatomic) MNAudioOutputSetting *currentAudioOutputSetting; // @synthesize currentAudioOutputSetting=_currentAudioOutputSetting;
- (void).cxx_destruct;
- (void)remoteProxyDidFinishReconnecting:(id)arg1;
- (void)navigationServiceProxy:(id)arg1 didUpdateAudioOutputRouteSelection:(unsigned long long)arg2;
- (void)navigationServiceProxy:(id)arg1 didUpdateAudioOutputCurrentSettingForVoicePrompt:(id)arg2;
- (void)navigationServiceProxy:(id)arg1 didUpdateAudioOutputCurrentSetting:(id)arg2;
- (void)navigationServiceProxy:(id)arg1 didUpdateAudioOutputSettings:(id)arg2;
- (void)navigationServiceProxy:(id)arg1 didStartUsingVoiceLanguage:(id)arg2;
- (void)navigationServiceProxy:(id)arg1 didStartSpeakingPrompt:(id)arg2;
- (void)navigationServiceProxy:(id)arg1 didActivateAudioSession:(BOOL)arg2;
- (void)navigationServiceProxy:(id)arg1 didUpdateFeedback:(id)arg2 forAlightingStepAtIndex:(unsigned long long)arg3;
- (void)navigationServiceProxy:(id)arg1 didSignalAlightForStepAtIndex:(unsigned long long)arg2;
- (void)navigationServiceProxy:(id)arg1 didUpdateTracePlaybackDetails:(id)arg2;
- (void)navigationServiceProxy:(id)arg1 didUpdatePossibleCommuteDestinations:(id)arg2;
- (void)navigationServiceProxy:(id)arg1 didUpdateIsInVehicle:(BOOL)arg2;
- (void)navigationServiceProxy:(id)arg1 didInvalidateTrafficIncidentAlert:(id)arg2;
- (void)navigationServiceProxy:(id)arg1 didUpdateTrafficIncidentAlert:(id)arg2;
- (void)navigationServiceProxy:(id)arg1 didReceiveTrafficIncidentAlert:(id)arg2;
- (void)navigationServiceProxy:(id)arg1 didUpdateAlternateRoutes:(id)arg2;
- (void)navigationServiceProxy:(id)arg1 failedRerouteWithErrorCode:(long long)arg2;
- (void)navigationServiceProxy:(id)arg1 didSwitchToNewTransportType:(int)arg2 newRoute:(id)arg3;
- (void)navigationServiceProxyDidCancelReroute:(id)arg1;
- (void)navigationServiceProxy:(id)arg1 didRerouteWithDetails:(id)arg2 withLocationDetails:(id)arg3 withAlternateRoutes:(id)arg4;
- (void)navigationServiceProxyWillReroute:(id)arg1;
- (void)navigationServiceProxy:(id)arg1 didUpdateHeading:(double)arg2 accuracy:(double)arg3;
- (void)navigationServiceProxy:(id)arg1 didUpdateTrafficForETARoute:(id)arg2 from:(unsigned int)arg3 to:(unsigned int)arg4 forRoute:(id)arg5;
- (void)navigationServiceProxy:(id)arg1 didUpdateETAResponseForRoute:(id)arg2;
- (void)navigationServiceProxy:(id)arg1 didUpdateRemainingTime:(double)arg2 remainingDistance:(double)arg3;
- (void)navigationServiceProxy:(id)arg1 didUpdateDisplayETA:(id)arg2 displayRemainingMinutes:(unsigned long long)arg3 forRoute:(id)arg4;
- (void)navigationServiceProxy:(id)arg1 updatedGuidanceEventFeedback:(id)arg2;
- (void)navigationServiceProxy:(id)arg1 newGuidanceEventFeedback:(id)arg2;
- (void)navigationServiceProxy:(id)arg1 didEnableGuidancePrompts:(BOOL)arg2;
- (void)navigationServiceProxyPredictingDidArrive:(id)arg1;
- (void)navigationServiceProxyDidArrive:(id)arg1;
- (void)navigationServiceProxy:(id)arg1 hideLaneDirectionsForId:(id)arg2;
- (void)navigationServiceProxy:(id)arg1 showLaneDirections:(id)arg2;
- (void)navigationServiceProxy:(id)arg1 usePersistentDisplay:(BOOL)arg2;
- (void)navigationServiceProxy:(id)arg1 updateSignsWithInfo:(id)arg2;
- (void)navigationServiceProxyEndGuidanceUpdate:(id)arg1;
- (void)navigationServiceProxyBeginGuidanceUpdate:(id)arg1;
- (void)navigationServiceProxyHideSecondaryStep:(id)arg1;
- (void)navigationServiceProxy:(id)arg1 displaySecondaryStep:(id)arg2 instructions:(id)arg3 shieldType:(int)arg4 shieldText:(id)arg5 drivingSide:(int)arg6;
- (void)navigationServiceProxy:(id)arg1 displayManeuverAlertForAnnouncementStage:(unsigned long long)arg2;
- (void)navigationServiceProxy:(id)arg1 displayPrimaryStep:(id)arg2 instructions:(id)arg3 shieldType:(int)arg4 shieldText:(id)arg5 drivingSide:(int)arg6 maneuverStepIndex:(unsigned long long)arg7 isSynthetic:(BOOL)arg8;
- (void)navigationServiceProxy:(id)arg1 willAnnounce:(unsigned long long)arg2 inSeconds:(double)arg3;
- (void)navigationServiceProxy:(id)arg1 didUpdateDistanceUntilManeuver:(double)arg2 timeUntilManeuver:(double)arg3 forStepIndex:(unsigned long long)arg4;
- (void)navigationServiceProxy:(id)arg1 didUpdateDistanceUntilSign:(double)arg2 timeUntilSign:(double)arg3 forStepIndex:(unsigned long long)arg4;
- (void)navigationServiceProxy:(id)arg1 didUpdateProceedToRouteDistance:(double)arg2 displayString:(id)arg3 closestStepIndex:(unsigned long long)arg4;
- (void)navigationServiceProxy:(id)arg1 didUpdateStepIndex:(unsigned long long)arg2 legIndex:(unsigned long long)arg3;
- (void)navigationServiceProxy:(id)arg1 didUpdateMatchedLocation:(id)arg2;
- (void)navigationServiceProxy:(id)arg1 didChangeNavigationState:(int)arg2;
- (void)navigationServiceProxy:(id)arg1 didFailWithError:(id)arg2;
- (void)navigationServiceProxyWillResumeFromPauseNavigation:(id)arg1;
- (void)navigationServiceProxyWillPauseNavigation:(id)arg1;
- (void)navigationServiceProxy:(id)arg1 didUpdateNavigationDetails:(id)arg2;
- (void)navigationServiceProxy:(id)arg1 didUpdateActiveRouteDetails:(id)arg2;
- (void)navigationServiceProxy:(id)arg1 didChangeFromState:(unsigned long long)arg2 toState:(unsigned long long)arg3;
- (void)navigationServiceProxy:(id)arg1 willChangeFromState:(unsigned long long)arg2 toState:(unsigned long long)arg3;
- (void)_resetDetails;
- (void)recordTraceBookmarkAtCurrentPositionWthScreenshotData:(id)arg1;
- (void)setTracePlaybackSpeed:(double)arg1;
@property(nonatomic) double tracePosition;
@property(nonatomic) BOOL traceIsPlaying;
@property(readonly, nonatomic) NSArray *traceBookmarks;
@property(readonly, nonatomic) double traceDuration;
@property(readonly, nonatomic) NSString *tracePath;
@property(readonly, nonatomic) NSString *traceFileName;
@property(readonly, nonatomic) BOOL isInVehicle;
- (id)predictedETARoute;
- (id)predictedRoute;
- (id)predictedDestination;
- (id)predictedDestinationName;
@property(readonly, nonatomic) MNCommuteDestination *predictedCommuteDestination;
@property(readonly, nonatomic) NSArray *possibleCommuteDestinations;
@property(readonly, nonatomic) BOOL isPredictingDestination;
@property(readonly, nonatomic) BOOL isDetour;
@property(readonly, nonatomic) NSString *originalDestinationName;
@property(readonly, nonatomic) GEOComposedWaypoint *originalDestination;
@property(readonly, nonatomic) NSString *destinationName;
@property(readonly, nonatomic) GEOComposedWaypoint *destination;
@property(readonly, nonatomic) GEOComposedWaypoint *originalOrigin;
@property(readonly, nonatomic) GEOComposedWaypoint *origin;
@property(readonly, nonatomic) double timeUntilManeuver;
@property(readonly, nonatomic) double distanceUntilManeuver;
@property(readonly, nonatomic) double timeUntilSign;
@property(readonly, nonatomic) double distanceUntilSign;
@property(readonly, nonatomic) double remainingTime;
@property(readonly, nonatomic) MNLocation *lastLocation;
@property(readonly, nonatomic) unsigned long long stepIndex;
- (id)etaRouteForRoute:(id)arg1;
- (id)routeIncidentsForRoute:(id)arg1;
- (unsigned long long)alternateRouteIndexForRoute:(id)arg1;
- (unsigned long long)displayRemainingMinutesForRoute:(id)arg1;
- (id)displayETAForRoute:(id)arg1;
@property(readonly, nonatomic) NSArray *alternateRoutes;
@property(readonly, nonatomic) unsigned long long reconnectionRouteIndex;
@property(readonly, nonatomic) unsigned long long routeIndex;
@property(readonly, nonatomic) GEODirectionsResponse *currentResponse;
@property(readonly, nonatomic) GEODirectionsRequest *currentRequest;
@property(readonly, nonatomic) GEOComposedRoute *route;
@property(readonly, nonatomic) int desiredTransportType;
@property(readonly, nonatomic) int desiredNavigationType;
@property(readonly, nonatomic) NSString *currentVoiceLanguage;
@property(readonly, nonatomic) BOOL isTrackingCurrentLocation;
@property(readonly, nonatomic) int navigationTransportType;
@property(readonly, nonatomic) int navigationState;
@property(readonly, nonatomic) BOOL speechMuted;
@property(readonly, nonatomic) int navigationType;
@property(readonly, nonatomic) unsigned long long state;
- (void)setRideIndex:(unsigned long long)arg1 forLegIndex:(unsigned long long)arg2;
- (void)setDisplayedStepIndex:(unsigned long long)arg1;
- (void)setIsConnectedToCarplay:(BOOL)arg1;
@property(nonatomic) BOOL guidancePromptsEnabled;
@property(nonatomic) int headingOrientation;
- (void)setCurrentAudioOutputSetting:(id)arg1;
- (void)setHFPPreference:(BOOL)arg1 forSetting:(id)arg2;
- (void)stopCurrentGuidancePrompt;
- (BOOL)vibrateForPrompt:(unsigned long long)arg1;
- (BOOL)repeatCurrentTrafficAlert;
- (BOOL)repeatCurrentGuidance;
- (void)changeSettings:(id)arg1;
- (id)settings;
- (void)setFullGuidanceMode:(BOOL)arg1;
- (void)switchToRoute:(id)arg1;
- (void)resumeOriginalDestination;
- (void)updateDestination:(id)arg1;
- (void)stopPredictingDestinations;
- (void)startPredictingDestinations;
- (void)stopNavigation;
- (void)startNavigationWithRoute:(id)arg1 withFullGuidance:(BOOL)arg2;
- (void)startNavigationForRouteDetails:(id)arg1;
- (void)prepareNavigationWithRouteDetails:(id)arg1;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
- (BOOL)isOpenForClient:(id)arg1;
- (void)closeForClient:(id)arg1;
- (void)openForClient:(id)arg1;
- (id)initPrivate;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

