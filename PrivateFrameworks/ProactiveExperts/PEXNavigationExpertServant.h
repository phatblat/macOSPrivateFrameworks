//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <ProactiveExperts/PEXServant.h>

#import "GEONavigationListenerDelegate.h"

@class GEONavigationListener, NSObject<OS_dispatch_semaphore>, NSString;

@interface PEXNavigationExpertServant : PEXServant <GEONavigationListenerDelegate>
{
    GEONavigationListener *_navigationListener;
    int _navigationState;
    NSString *_destinationName;
    NSString *_streetName;
    double _remainingTimeToDestination;
    double _remainingDistanceToDestination;
    NSObject<OS_dispatch_semaphore> *_stateSemaphore;
    NSObject<OS_dispatch_semaphore> *_streetSemaphore;
    NSObject<OS_dispatch_semaphore> *_summarySemaphore;
    NSObject<OS_dispatch_semaphore> *_initializationComplete;
}

- (void).cxx_destruct;
- (unsigned char)loadNamesWithNamedEntityHandler:(CDUnknownBlockType)arg1 contactNameItemHandler:(CDUnknownBlockType)arg2 detectedSince:(id)arg3;
- (unsigned char)loadRecentNamesWithNamedEntityHandler:(CDUnknownBlockType)arg1 contactNameItemHandler:(CDUnknownBlockType)arg2 source:(unsigned char)arg3 objects:(id)arg4;
- (id)nameItemsWithLimit:(unsigned long long)arg1;
- (void)navigationListener:(id)arg1 didUpdatePositionFromDestination:(CDStruct_c3b9c2ee)arg2;
- (void)navigationListener:(id)arg1 didUpdateGuidanceState:(id)arg2;
- (void)navigationListener:(id)arg1 didUpdateCurrentRoadName:(id)arg2;
- (void)navigationListener:(id)arg1 didUpdateRouteSummary:(id)arg2;
- (void)_makeNavRequests;
- (void)_stopListeningToNavigationUpdate;
- (BOOL)_waitForSummary;
- (BOOL)_waitForStreet;
- (BOOL)_waitForState;
- (id)quickTypeItemsForCriteria:(id)arg1 limit:(unsigned long long)arg2;
- (void)dealloc;
- (void)_warmUpFormatters;
- (void)_initializeNavigationListener;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

