//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "MNLocationProvider.h"
#import "MNLocationProviderDelegate.h"

@class MNCoreLocationProvider, MNLeechedLocationProvider, NSBundle, NSString;

@interface MNHybridLocationProvider : NSObject <MNLocationProviderDelegate, MNLocationProvider>
{
    unsigned long long _mode;
    MNCoreLocationProvider *_coreLocationProvider;
    MNLeechedLocationProvider *_leechedLocationProvider;
    unsigned long long _activeServices;
    BOOL _shouldNotifyDelegate;
    id <MNLocationProviderDelegate> _delegate;
}

@property(nonatomic) __weak id <MNLocationProviderDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)locationProviderDidResumeLocationUpdates:(id)arg1;
- (void)locationProviderDidPauseLocationUpdates:(id)arg1;
- (BOOL)locationProviderShouldPauseLocationUpdates:(id)arg1;
- (void)locationProviderDidChangeAuthorizationStatus:(id)arg1;
- (void)locationProvider:(id)arg1 didReceiveError:(id)arg2;
- (void)locationProvider:(id)arg1 didUpdateHeading:(id)arg2;
- (void)locationProvider:(id)arg1 didUpdateLocation:(id)arg2;
@property(readonly, nonatomic) double timeScale;
@property(readonly, nonatomic) BOOL isTracePlayer;
@property(readonly, nonatomic) BOOL isSimulation;
@property(readonly, nonatomic) BOOL usesCLMapCorrection;
@property(readonly, nonatomic) int authorizationStatus;
@property(readonly, nonatomic) double expectedGpsUpdateInterval;
@property(nonatomic) BOOL matchInfoEnabled;
@property(nonatomic) double distanceFilter;
@property(nonatomic, getter=isLocationServicesPreferencesDialogEnabled) BOOL locationServicesPreferencesDialogEnabled;
@property(nonatomic) double desiredAccuracy;
@property(copy, nonatomic) NSString *effectiveBundleIdentifier;
@property(retain, nonatomic) NSBundle *effectiveBundle;
- (void)resetForActiveTileGroupChanged;
- (void)stopUpdatingVehicleHeading;
- (void)startUpdatingVehicleHeading;
- (void)stopUpdatingVehicleSpeed;
- (void)startUpdatingVehicleSpeed;
- (void)stopUpdatingHeading;
- (void)startUpdatingHeading;
- (void)stopUpdatingLocation;
- (void)startUpdatingLocation;
- (id)leechedLocationProvider;
- (id)coreLocationProvider;
- (void)_unsubscribeFromService:(unsigned long long)arg1;
- (void)_subscribeToService:(unsigned long long)arg1;
- (BOOL)_isSubscribedToService:(unsigned long long)arg1;
- (id)_inactiveLocationProvider;
- (id)_activeLocationProvider;
@property(nonatomic) unsigned long long mode;
- (id)initWithMode:(unsigned long long)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

