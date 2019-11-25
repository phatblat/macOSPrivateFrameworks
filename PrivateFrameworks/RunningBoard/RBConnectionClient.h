//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "BSDescriptionProviding.h"
#import "RBClientInheritanceManagerDelegate.h"
#import "RBEntitlementPossessing.h"
#import "RBStateCapturing.h"

@class NSMutableSet, NSObject<OS_xpc_object>, NSString, RBClientInheritanceManager, RBProcess, RBProcessMonitorObserver, RBSAssertionIdentifier, RBSProcessHandle, RBSProcessIdentifier, RBSProcessIdentity;

__attribute__((visibility("hidden")))
@interface RBConnectionClient : NSObject <RBClientInheritanceManagerDelegate, RBEntitlementPossessing, BSDescriptionProviding, RBStateCapturing>
{
    NSObject<OS_xpc_object> *_connection;
    struct os_unfair_lock_s _lock;
    id <RBAssertionManaging> _assertionManager;
    id <RBEntitlementManaging> _entitlementManager;
    id <RBProcessManaging> _processManager;
    id <RBProcessMonitoring> _processMonitor;
    id <RBStateCaptureManaging> _stateCaptureManager;
    RBProcess *_containingProcess;
    NSString *_logProem;
    RBProcess *_process;
    RBSProcessHandle *_processHandle;
    RBSProcessIdentity *_processIdentity;
    RBSProcessIdentifier *_processIdentifier;
    unsigned int _euid;
    RBClientInheritanceManager *_inheritanceManager;
    id <RBEntitlementPossessing> _entitlements;
    NSMutableSet *_assertionIdentifiers;
    NSMutableSet *_deathMonitors;
    RBProcessMonitorObserver *_stateObserver;
    RBSAssertionIdentifier *_expirationBoostAssertionIdentifier;
}

+ (id)sharedLaunchWorkloop;
+ (id)sharedTerminationWorkloop;
@property(readonly, copy, nonatomic) RBSProcessIdentity *processIdentity; // @synthesize processIdentity=_processIdentity;
@property(readonly, copy, nonatomic) RBSProcessIdentifier *processIdentifier; // @synthesize processIdentifier=_processIdentifier;
@property(readonly, nonatomic) RBProcess *process; // @synthesize process=_process;
- (void).cxx_destruct;
- (id)captureState;
@property(readonly, copy, nonatomic) NSString *stateCaptureTitle;
- (void)didRemoveProcess:(id)arg1 withState:(id)arg2;
- (void)didInvalidateAssertions:(id)arg1;
- (void)willInvalidateAssertion:(id)arg1;
- (void)willExpireAssertionsSoonForProcess:(id)arg1 expirationTime:(double)arg2;
- (void)didUpdateProcessStates:(id)arg1;
- (void)inheritanceManager:(id)arg1 didChangeInheritances:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)succinctDescription;
@property(readonly, copy) NSString *description;
- (id)busyExtensionInstancesFromSet:(id)arg1 error:(out id *)arg2;
- (id)identifiersForStateCaptureSubsystemsWithError:(out id *)arg1;
- (void)captureStateForSubsystem:(id)arg1 withReply:(id)arg2;
- (id)infoPlistResultForInstance:(id)arg1 forKeys:(id)arg2 error:(out id *)arg3;
- (id)hostProcessForInstance:(id)arg1 error:(out id *)arg2;
- (id)limitationsForInstance:(id)arg1 error:(out id *)arg2;
- (id)lastExitContextForInstance:(id)arg1 error:(out id *)arg2;
- (BOOL)intendToExit:(id)arg1 withStatus:(id)arg2 error:(out id *)arg3;
- (void)statesForPredicate:(id)arg1 withDescriptor:(id)arg2 withReply:(id)arg3;
- (void)unsubscribeFromProcessStateChangesWithIdentifier:(unsigned long long)arg1;
- (BOOL)subscribeToProcessStateChangesWithConfiguration:(id)arg1 error:(out id *)arg2;
- (id)subscribeToProcessDeath:(id)arg1 error:(out id *)arg2;
- (void)executeTerminateRequest:(id)arg1 withReply:(id)arg2;
- (void)requestPluginHoldForIdentity:(id)arg1 terminate:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)executeLaunchRequest:(id)arg1 withReply:(id)arg2;
- (id)assertionDescriptorsWithFlattenedAttributes:(BOOL)arg1 error:(out id *)arg2;
- (BOOL)invalidateAssertionWithIdentifier:(id)arg1 error:(out id *)arg2;
- (oneway void)invalidateAssertionWithIdentifier:(id)arg1;
- (void)acquireAssertionForDescriptor:(id)arg1 withReply:(id)arg2;
- (id)lookupHandleForPredicate:(id)arg1 error:(out id *)arg2;
- (id)lookupHandleForKey:(id)arg1 error:(out id *)arg2;
- (id)handshakeWithRequest:(id)arg1;
- (BOOL)hasEntitlementDomain:(unsigned long long)arg1;
- (BOOL)hasEntitlement:(id)arg1;
- (void)invalidate;
- (void)handleMessage:(id)arg1;
- (id)initWithContext:(id)arg1 process:(id)arg2 connection:(id)arg3;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

