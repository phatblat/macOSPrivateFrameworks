//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NEAppProxyProviderContainerDelegate.h"
#import "NPTunnelDelegate.h"

@class NPKeyBag, NSArray, NSDictionary, NSMutableArray, NSMutableDictionary, NSObject<OS_nw_endpoint>, NSPAppRule, NSPConfiguration, NSPFlowDivert, NSString, NWPathEvaluator;

@interface NSPManager : NSObject <NPTunnelDelegate, NEAppProxyProviderContainerDelegate>
{
    struct os_unfair_lock_s lock;
    BOOL _disableIdleTimeout;
    BOOL _isObserving;
    BOOL _testFetchDaypass;
    unsigned int _nextFlowID;
    unsigned int _tunnelCount;
    NWPathEvaluator *_pathEvaluator;
    CDUnknownBlockType _changeHandler;
    CDUnknownBlockType _connectionInfoSetHandler;
    CDUnknownBlockType _tunnelConnectedHandler;
    NPKeyBag *_keybag;
    NWPathEvaluator *_policyEvaluator;
    NSDictionary *_appRules;
    NPKeyBag *_inUseKeybag;
    NSPConfiguration *_configuration;
    NSPFlowDivert *_flowDivert;
    NSMutableDictionary *_flowInfoMap;
    NSArray *_currentAgents;
    NSMutableDictionary *_fallbackCounts;
    id <NSPManagerDelegate> _delegate;
    NSString *_signingIdentifier;
    NSPAppRule *_matchingAppRule;
    NSMutableArray *_knownFlows;
    CDUnknownBlockType _pendingCancellationHandler;
    NSArray *_testLatencyMap;
    unsigned long long _testLatencyMapIndex;
    NSObject<OS_nw_endpoint> *_currentTunnelEndpoint;
}

+ (id)sharedManager;
@property(retain, nonatomic) NSObject<OS_nw_endpoint> *currentTunnelEndpoint; // @synthesize currentTunnelEndpoint=_currentTunnelEndpoint;
@property(nonatomic) unsigned int tunnelCount; // @synthesize tunnelCount=_tunnelCount;
@property(nonatomic) unsigned int nextFlowID; // @synthesize nextFlowID=_nextFlowID;
@property unsigned long long testLatencyMapIndex; // @synthesize testLatencyMapIndex=_testLatencyMapIndex;
@property BOOL testFetchDaypass; // @synthesize testFetchDaypass=_testFetchDaypass;
@property(retain) NSArray *testLatencyMap; // @synthesize testLatencyMap=_testLatencyMap;
@property(copy, nonatomic) CDUnknownBlockType pendingCancellationHandler; // @synthesize pendingCancellationHandler=_pendingCancellationHandler;
@property(readonly, nonatomic) NSMutableArray *knownFlows; // @synthesize knownFlows=_knownFlows;
@property(retain) NSPAppRule *matchingAppRule; // @synthesize matchingAppRule=_matchingAppRule;
@property(readonly, nonatomic) NSString *signingIdentifier; // @synthesize signingIdentifier=_signingIdentifier;
@property(nonatomic) __weak id <NSPManagerDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) NSMutableDictionary *fallbackCounts; // @synthesize fallbackCounts=_fallbackCounts;
@property(retain, nonatomic) NSArray *currentAgents; // @synthesize currentAgents=_currentAgents;
@property(nonatomic) BOOL isObserving; // @synthesize isObserving=_isObserving;
@property(retain, nonatomic) NSMutableDictionary *flowInfoMap; // @synthesize flowInfoMap=_flowInfoMap;
@property(retain) NSPFlowDivert *flowDivert; // @synthesize flowDivert=_flowDivert;
@property(retain) NSPConfiguration *configuration; // @synthesize configuration=_configuration;
@property(retain) NPKeyBag *inUseKeybag; // @synthesize inUseKeybag=_inUseKeybag;
@property(retain) NSDictionary *appRules; // @synthesize appRules=_appRules;
@property(readonly, nonatomic) NWPathEvaluator *policyEvaluator; // @synthesize policyEvaluator=_policyEvaluator;
@property BOOL disableIdleTimeout; // @synthesize disableIdleTimeout=_disableIdleTimeout;
@property(retain) NPKeyBag *keybag; // @synthesize keybag=_keybag;
@property(copy, nonatomic) CDUnknownBlockType tunnelConnectedHandler; // @synthesize tunnelConnectedHandler=_tunnelConnectedHandler;
@property(copy, nonatomic) CDUnknownBlockType connectionInfoSetHandler; // @synthesize connectionInfoSetHandler=_connectionInfoSetHandler;
@property(copy, nonatomic) CDUnknownBlockType changeHandler; // @synthesize changeHandler=_changeHandler;
@property(readonly, nonatomic) NWPathEvaluator *pathEvaluator; // @synthesize pathEvaluator=_pathEvaluator;
- (void).cxx_destruct;
- (void)container:(id)arg1 didSetTunnelConfiguration:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)container:(id)arg1 didRequestFlowDivertControlSocketWithCompletionHandler:(CDUnknownBlockType)arg2;
- (void)container:(id)arg1 didFailWithError:(id)arg2;
- (void)container:(id)arg1 didStartWithError:(id)arg2;
@property(readonly) double timeIntervalSinceLastUsage;
- (void)resetTestLatencyMapIndex:(unsigned long long)arg1;
- (BOOL)useTestDaypass;
- (BOOL)useTestLatencyMap;
- (unsigned long long)getTestLatencyRTT:(id)arg1 parameters:(struct networkParameters *)arg2;
- (void)ingestTestLatencyMap:(id)arg1 local:(BOOL)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)buildTestLatencyMap:(id)arg1;
- (BOOL)shouldSetConfigurationToAppRule:(id)arg1 edgeSet:(id)arg2;
- (id)createAppRuleMapWithRules:(id)arg1;
@property(readonly, nonatomic) BOOL currentNetworkHasProxies;
@property(readonly, nonatomic) BOOL isEnabled;
- (void)fetchStateForClient:(id)arg1 withPeerEndpoint:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)sendUsageReport:(id)arg1;
- (id)createTransformsForEndpoint:(id)arg1 parameters:(id)arg2;
- (id)createReplacementEndpointForEndpoint:(id)arg1 properties:(id)arg2;
- (id)getAppRuleMatchingParameters:(id)arg1 flowProperties:(id)arg2;
- (id)getConnectionInfoForIdentifier:(id)arg1;
- (void)setConnectionInfo:(id)arg1 forIdentifier:(id)arg2;
@property(readonly) BOOL isFirstTunnel;
- (void)tunnel:(id)arg1 flowDidFallbackWithReason:(long long)arg2;
- (void)tunnelIsReady:(id)arg1;
- (void)tunnelDidConnect:(id)arg1;
- (void)tunnelDidCancel:(id)arg1;
- (id)instantiateTunnelWithEndpoint:(id)arg1 parameters:(id)arg2;
- (id)instantiateFlowWithTunnel:(id)arg1 inputProtocol:(struct nw_protocol *)arg2;
- (void)startWithConfiguration:(id)arg1 appRules:(id)arg2 delegate:(id)arg3;
- (void)start;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)handlePolicyUpdate;
- (void)stopWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)waitForTunnelsToCancelWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

