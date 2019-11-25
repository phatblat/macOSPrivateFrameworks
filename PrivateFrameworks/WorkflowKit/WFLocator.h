//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "CLLocationManagerDelegate.h"

@class CLInUseAssertion, CLLocation, CLLocationManager, NSString;

@interface WFLocator : NSObject <CLLocationManagerDelegate>
{
    CLLocationManager *_locationManager;
    CLInUseAssertion *_inUseAssertion;
    CLLocation *_bestEffortLocation;
    CDUnknownBlockType _completionHandler;
    double _timeout;
}

+ (void)determineLocationWithWorkflowEnvironment:(long long)arg1 desiredAccuracy:(double)arg2 timeout:(double)arg3 completion:(CDUnknownBlockType)arg4;
+ (void)determineLocationWithWorkflowEnvironment:(long long)arg1 desiredAccuracy:(double)arg2 completion:(CDUnknownBlockType)arg3;
+ (void)determineLocationWithWorkflowEnvironment:(long long)arg1 completion:(CDUnknownBlockType)arg2;
@property(nonatomic) double timeout; // @synthesize timeout=_timeout;
@property(copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
@property(retain, nonatomic) CLLocation *bestEffortLocation; // @synthesize bestEffortLocation=_bestEffortLocation;
@property(retain, nonatomic) CLInUseAssertion *inUseAssertion; // @synthesize inUseAssertion=_inUseAssertion;
@property(retain, nonatomic) CLLocationManager *locationManager; // @synthesize locationManager=_locationManager;
- (void).cxx_destruct;
- (void)locationManager:(id)arg1 didFailWithError:(id)arg2;
- (void)locationManager:(id)arg1 didUpdateLocations:(id)arg2;
- (void)finishUpdatingLocation;
- (void)startUpdatingLocation;
- (void)requestLocation;
- (void)start;
- (BOOL)useRequestLocation;
- (void)dealloc;
- (id)initWithWorkflowEnvironment:(long long)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

