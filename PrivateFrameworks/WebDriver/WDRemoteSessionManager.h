//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "RWIApplicationDelegate.h"
#import "RWIDrivableDelegate.h"
#import "RWIDriverSessionProvider.h"
#import "RWIManagerDelegate.h"
#import "RWITargetDelegate.h"
#import "WDSessionHostDelegate.h"

@class NSMutableSet, NSObject<OS_dispatch_queue>, NSSet, NSString, RWIDriver, SimDeviceSet, SimServiceContext;

@interface WDRemoteSessionManager : NSObject <RWITargetDelegate, RWIApplicationDelegate, RWIDrivableDelegate, RWIDriverSessionProvider, WDSessionHostDelegate, RWIManagerDelegate>
{
    id <WDServiceHost> _serviceHost;
    NSMutableSet *_pendingSessions;
    NSMutableSet *_activeSessions;
    NSObject<OS_dispatch_queue> *_simulatorAccessQueue;
    SimServiceContext *_simulatorService;
    SimDeviceSet *_simulatorDeviceSet;
    RWIDriver *_driver;
}

@property(readonly, nonatomic) RWIDriver *driver; // @synthesize driver=_driver;
- (void).cxx_destruct;
- (void)hostConnectionTerminated:(id)arg1;
- (id)forwardedCapabilitiesForSession:(id)arg1;
@property(readonly, nonatomic) id <WDServiceHost> serviceHost;
- (void)drivableDidChange:(id)arg1;
- (void)application:(id)arg1 didRemoveDrivable:(id)arg2;
- (void)application:(id)arg1 didAddDrivable:(id)arg2;
- (void)target:(id)arg1 didRemoveApplication:(id)arg2;
- (void)target:(id)arg1 didAddApplication:(id)arg2;
- (void)manager:(id)arg1 didRemoveTarget:(id)arg2;
- (void)manager:(id)arg1 didAddTarget:(id)arg2;
- (void)createSessionWithOptions:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)findDeviceHostsMatchingCriteria:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (BOOL)_deviceHost:(id)arg1 matchesCriteria:(id)arg2;
- (void)findSimulatorHostsMatchingCriteria:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (BOOL)_simulatorHost:(id)arg1 matchesCriteria:(id)arg2;
- (id)_validateHostCriteria:(id)arg1;
- (void)findMachineHostsMatchingCriteria:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
@property(readonly, copy, nonatomic) NSSet *allSessions;
@property(readonly, copy, nonatomic) NSSet *remoteSessions;
- (id)pendingSessions;
@property(readonly, copy, nonatomic) NSSet *activeSessions;
- (void)_initializeSimulatorSupport;
- (id)initWithDriver:(id)arg1 serviceHost:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

