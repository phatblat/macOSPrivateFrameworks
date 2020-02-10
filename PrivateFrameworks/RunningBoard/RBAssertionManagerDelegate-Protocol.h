//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSSet, RBAssertion, RBProcess, RBProcessState, RBProcessStateChangeSet, RBSProcessIdentity, RBSystemState;

@protocol RBAssertionManagerDelegate <NSObject>
- (void)assertionManager:(id <RBAssertionManaging>)arg1 didRejectAcquisitionFromOriginatorWithExcessiveAssertions:(RBProcess *)arg2;
- (void)assertionManager:(id <RBAssertionManaging>)arg1 didEndTrackingInFightUpdatesForProcessIdentity:(RBSProcessIdentity *)arg2;
- (void)assertionManager:(id <RBAssertionManaging>)arg1 didBeginTrackingInFightUpdatesForProcessIdentity:(RBSProcessIdentity *)arg2;
- (void)assertionManager:(id <RBAssertionManaging>)arg1 didEndTrackingStateForProcessIdentity:(RBSProcessIdentity *)arg2;
- (void)assertionManager:(id <RBAssertionManaging>)arg1 didBeginTrackingStateForProcessIdentity:(RBSProcessIdentity *)arg2;
- (void)assertionManager:(id <RBAssertionManaging>)arg1 didRemoveProcess:(RBProcess *)arg2 withState:(RBProcessState *)arg3;
- (void)assertionManager:(id <RBAssertionManaging>)arg1 didAddProcess:(RBProcess *)arg2 withState:(RBProcessState *)arg3;
- (void)assertionManager:(id <RBAssertionManaging>)arg1 didInvalidateAssertions:(NSSet *)arg2;
- (void)assertionManager:(id <RBAssertionManaging>)arg1 willExpireAssertionsSoonForProcess:(RBProcess *)arg2 expirationTime:(double)arg3;
- (void)assertionManager:(id <RBAssertionManaging>)arg1 willInvalidateAssertion:(RBAssertion *)arg2;
- (void)assertionManager:(id <RBAssertionManaging>)arg1 didResolveSystemState:(RBSystemState *)arg2;
- (void)assertionManager:(id <RBAssertionManaging>)arg1 didUpdateProcessStates:(RBProcessStateChangeSet *)arg2 completion:(void (^)(void))arg3;
@end
