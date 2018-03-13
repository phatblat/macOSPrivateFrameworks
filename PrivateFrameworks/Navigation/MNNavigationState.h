//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "MNNavigationStateInterface.h"

@class MNNavigationStateManager, MNNavigationTraceManager, NSString;

__attribute__((visibility("hidden")))
@interface MNNavigationState : NSObject <MNNavigationStateInterface>
{
    double _locationUpdateInterval;
    double _suggestionUpdateFrequency;
    MNNavigationStateManager *_stateManager;
}

@property(readonly, nonatomic) __weak MNNavigationStateManager *stateManager; // @synthesize stateManager=_stateManager;
@property(readonly, nonatomic) double suggestionUpdateFrequency; // @synthesize suggestionUpdateFrequency=_suggestionUpdateFrequency;
@property(readonly, nonatomic) double locationUpdateInterval; // @synthesize locationUpdateInterval=_locationUpdateInterval;
- (void).cxx_destruct;
- (void)acquireDesiredResourcePolicy;
- (void)interfaceHashesWithHandler:(CDUnknownBlockType)arg1;
- (void)recordTraceBookmarkAtCurrentPositionWthScreenshotData:(id)arg1;
- (void)setTracePosition:(double)arg1;
- (void)setTracePlaybackSpeed:(double)arg1;
- (void)setTraceIsPlaying:(BOOL)arg1;
- (void)acceptReroute:(BOOL)arg1 forTrafficIncidentAlertDetails:(id)arg2;
- (void)setRideIndex:(unsigned long long)arg1 forLegIndex:(unsigned long long)arg2;
- (void)setDisplayedStepIndex:(unsigned long long)arg1;
- (void)setIsConnectedToCarplay:(BOOL)arg1;
- (void)setCurrentAudioOutputSetting:(id)arg1;
- (void)setHFPPreference:(BOOL)arg1 forSetting:(id)arg2;
- (void)setGuidancePromptsEnabled:(BOOL)arg1;
- (void)stopCurrentGuidancePrompt;
- (void)vibrateForPrompt:(unsigned long long)arg1 withReply:(CDUnknownBlockType)arg2;
- (void)repeatCurrentTrafficAlertWithReply:(CDUnknownBlockType)arg1;
- (void)repeatCurrentGuidanceWithReply:(CDUnknownBlockType)arg1;
- (void)changeSettings:(id)arg1;
- (void)setFullGuidanceMode:(BOOL)arg1;
- (void)switchToRouteWithDetails:(id)arg1;
- (void)resumeOriginalDestination;
- (void)updateDestination:(id)arg1;
- (void)stopPredictingDestinations;
- (void)startPredictingDestinationsWithHandler:(CDUnknownBlockType)arg1;
- (void)stopNavigation;
- (void)startNavigationForRouteDetails:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)prepareNavigationWithRouteDetails:(id)arg1;
- (void)addCommuteDestinationSuggestion:(id)arg1;
- (void)updateWithLocation:(id)arg1;
- (void)confirmDestination:(id)arg1;
- (void)updateVehicleDetected:(BOOL)arg1;
- (void)updateMapsActive:(BOOL)arg1;
- (void)leaveState;
- (void)enterState;
- (void)dealloc;
- (id)initWithStateManager:(id)arg1;
- (id)init;
@property(readonly, nonatomic) MNNavigationTraceManager *traceManager;
@property(readonly, nonatomic) unsigned long long desiredResourcePolicy;
@property(readonly, nonatomic) unsigned long long desiredLocationProviderType;
@property(readonly, nonatomic) BOOL requiresHighMemoryThreshold;
@property(readonly, nonatomic) unsigned long long type;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

