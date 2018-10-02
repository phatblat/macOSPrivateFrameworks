//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "CATRemoteTransportDelegate.h"
#import "CATTransportDelegate.h"

@class CATRemoteTransport, CATStateMachine, CATTransport, CRKRemoteEndpoint, NSString;

@interface CRKSession : NSObject <CATTransportDelegate, CATRemoteTransportDelegate>
{
    CATStateMachine *mFSM;
    CATRemoteTransport *mTransport;
    double mCurrentBackoffInterval;
    BOOL _allowUntrustedConnections;
    BOOL _requiresBeacon;
    id <CRKSessionDelegate> _delegate;
    CRKRemoteEndpoint *_endpoint;
    id <CRKGrowthFunction> _backoffGrowthFunction;
    double _lostBeaconTimeout;
    double _willLoseBeaconWarningTimeout;
    double _failedConnectionRetryInterval;
}

@property(nonatomic) double failedConnectionRetryInterval; // @synthesize failedConnectionRetryInterval=_failedConnectionRetryInterval;
@property(nonatomic) double willLoseBeaconWarningTimeout; // @synthesize willLoseBeaconWarningTimeout=_willLoseBeaconWarningTimeout;
@property(nonatomic) double lostBeaconTimeout; // @synthesize lostBeaconTimeout=_lostBeaconTimeout;
@property(readonly, nonatomic) id <CRKGrowthFunction> backoffGrowthFunction; // @synthesize backoffGrowthFunction=_backoffGrowthFunction;
@property(nonatomic) BOOL requiresBeacon; // @synthesize requiresBeacon=_requiresBeacon;
@property(readonly, nonatomic) BOOL allowUntrustedConnections; // @synthesize allowUntrustedConnections=_allowUntrustedConnections;
@property(readonly) CRKRemoteEndpoint *endpoint; // @synthesize endpoint=_endpoint;
@property(nonatomic) __weak id <CRKSessionDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) CATTransport *transport; // @synthesize transport=mTransport;
@property(retain, nonatomic) CATStateMachine *stateMachine; // @synthesize stateMachine=mFSM;
- (void).cxx_destruct;
- (void)transport:(id)arg1 didInterruptWithError:(id)arg2;
- (void)transportDidInvalidate:(id)arg1;
- (void)transportDidConnect:(id)arg1;
- (void)transport:(id)arg1 encounteredTrustDecisionWhileTryingToSecure:(id)arg2;
- (void)resetBackoff;
- (void)backoffDidFinish;
- (void)exitBackoffCanConnect;
- (void)enterBackoffCanConnect;
- (void)enterNoNetwork;
- (void)enterOutOfRange;
- (void)delegateInvalidated;
- (void)delegateDisconnected;
- (void)delegateConnected;
- (void)delegateDidBecomeNotConnectable;
- (void)delegateDidBecomeConnectable;
- (void)delegateDidLoseBeacon;
- (void)delegateWillLoseBeacon;
- (void)cancelConnectionAttempt;
- (id)studentSocketOptions;
- (void)tryConnecting;
- (void)registerDefaults;
- (void)failedToConnect;
- (void)didConnect;
- (void)lostBeacon;
- (void)rejected;
- (void)invalidate;
- (void)connect;
- (void)lostConnection;
- (void)localWiFiBecameUnavailable;
- (void)localWiFiBecameAvailable;
- (void)foundBeacon;
- (id)initWithEndpoint:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

