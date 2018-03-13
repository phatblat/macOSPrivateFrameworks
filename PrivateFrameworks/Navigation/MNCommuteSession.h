//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "MNCommuteDestinationObserver.h"
#import "MNCommuteDestinationUpdaterDelegate.h"

@class MNCommuteDestinationUpdater, MNLocation, MNLocationHistory, MNNavigationTraceManager, MNObserverHashTable<MNCommuteSessionObserver>, MNSuggestionsManager, NSArray, NSMutableDictionary, NSString, NSTimer;

__attribute__((visibility("hidden")))
@interface MNCommuteSession : NSObject <MNCommuteDestinationUpdaterDelegate, MNCommuteDestinationObserver>
{
    MNObserverHashTable<MNCommuteSessionObserver> *_observers;
    NSTimer *_stateChangeTimer;
    NSMutableDictionary *_suggestions;
    NSArray *_rankedDestinations;
    id _rankedDestinationsSync;
    NSTimer *_etaUpdateTimer;
    MNNavigationTraceManager *_traceManager;
    unsigned long long _currentSuggestionID;
    BOOL _isMapsActive;
    MNLocation *_lastLocation;
    MNLocationHistory *_locationHistory;
    MNSuggestionsManager *_suggestionsManager;
    unsigned long long _commuteSessionState;
    MNCommuteDestinationUpdater *_comparisonDestinationStartTime;
}

@property(nonatomic) __weak MNCommuteDestinationUpdater *comparisonDestinationStartTime; // @synthesize comparisonDestinationStartTime=_comparisonDestinationStartTime;
@property(readonly, nonatomic) MNNavigationTraceManager *traceManager; // @synthesize traceManager=_traceManager;
@property(nonatomic) unsigned long long commuteSessionState; // @synthesize commuteSessionState=_commuteSessionState;
@property(nonatomic) __weak MNSuggestionsManager *suggestionsManager; // @synthesize suggestionsManager=_suggestionsManager;
- (void).cxx_destruct;
- (void)commuteDestination:(id)arg1 didChangeInvalid:(BOOL)arg2;
- (void)destinationUpdaterDidArrive:(id)arg1;
- (void)destinationUpdater:(id)arg1 didUpdateDestination:(id)arg2;
@property(readonly, nonatomic) BOOL isMapsActive;
- (void)updateMapsActive:(BOOL)arg1;
- (void)_updatedDestinations;
- (void)updateComparisonStartDate;
- (void)_resetRankedDestinations;
- (void)updateLocation:(id)arg1;
- (void)addSuggestion:(id)arg1;
- (void)stopETAUpdates;
- (void)startETAUpdatesWithInterval:(double)arg1;
- (void)stop;
@property(readonly) NSString *suggestionsDescription;
@property(readonly, nonatomic) NSArray *rankedDestinations;
- (void)_updateSuggestionsManagerState;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
- (void)dealloc;
- (id)initWithTraceName:(id)arg1 isTraceRecording:(BOOL)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

