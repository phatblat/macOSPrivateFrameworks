//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class GEOPlannedDestination, GEORouteHypothesis, NSError, NSObject<OS_dispatch_queue>, NSObject<OS_dispatch_source>, NSUUID;

@interface GEORouteHypothesizer : NSObject
{
    GEOPlannedDestination *_plannedDestination;
    unsigned long long _state;
    BOOL _unableToFindRouteForOriginalTransportType;
    GEORouteHypothesis *_currentHypothesis;
    NSError *_currentError;
    CDUnknownBlockType _updateHandler;
    NSUUID *_uuid;
    NSObject<OS_dispatch_queue> *_serialQueue;
    BOOL _wakeForDelay;
    NSObject<OS_dispatch_source> *_delayDispatchTimer;
}

+ (void)didDismissUINotification:(unsigned long long)arg1 forPlannedDestination:(id)arg2 dismissalType:(unsigned long long)arg3;
+ (BOOL)transitTTLSupportedInCurrentCountry;
+ (id)hypothesizerForPlannedDestination:(id)arg1;
@property(readonly, nonatomic) BOOL unableToFindRouteForOriginalTransportType; // @synthesize unableToFindRouteForOriginalTransportType=_unableToFindRouteForOriginalTransportType;
@property(readonly, nonatomic) NSError *currentError; // @synthesize currentError=_currentError;
@property(readonly, nonatomic) GEOPlannedDestination *plannedDestination; // @synthesize plannedDestination=_plannedDestination;
@property(readonly, nonatomic) GEORouteHypothesis *currentHypothesis; // @synthesize currentHypothesis=_currentHypothesis;
@property(nonatomic) unsigned long long state; // @synthesize state=_state;
- (void).cxx_destruct;
- (id)description;
- (void)dealloc;
- (void)didDismissUINotification:(unsigned long long)arg1 dismissalType:(unsigned long long)arg2;
- (void)didPostUINotification:(unsigned long long)arg1;
- (void)onlyPerformLocalUpdates;
- (void)stopHypothesizing;
- (void)requestRefresh;
- (void)startHypothesizingWithUpdateHandler:(CDUnknownBlockType)arg1;
- (void)_delayStartingWithXpc;
- (void)cancelDelayDispatchTimer;
- (void)_delayStartingWithoutXpc;
- (void)_performDelayedStart;
- (BOOL)_wontHypothesizeAgain;
- (void)setDoNotWakeForDelay;
- (BOOL)wakeForDelay;
@property(readonly, nonatomic) double willEndHypothesizingInterval;
@property(readonly, nonatomic) double willBeginHypothesizingInterval;
- (id)initWithPlannedDestination:(id)arg1;

@end

