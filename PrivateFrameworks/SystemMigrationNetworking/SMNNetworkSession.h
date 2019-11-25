//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSNetServiceBrowserDelegate.h"
#import "NSNetServiceDelegate.h"

@class NSDictionary, NSMutableArray, NSMutableOrderedSet, NSNetService, NSNetServiceBrowser, NSNumber, NSObject<OS_dispatch_queue>, NSSet, NSString, SMNConnection;

@interface SMNNetworkSession : NSObject <NSNetServiceDelegate, NSNetServiceBrowserDelegate>
{
    BOOL _automaticallySeeksFastestConnection;
    BOOL _secureTransport106Compatibility;
    BOOL _disallowsIPV6;
    BOOL _checkingForNewConnectionMethods;
    BOOL _clientIsReconnecting;
    BOOL _clientIsReResolving;
    BOOL _server;
    BOOL _hasEverBeenConnected;
    int _ipv6AcceptSocket;
    int _socketFd;
    int _preferredInterface;
    int _ipv6Port;
    unsigned long long _protocolVersion;
    NSString *_name;
    NSString *_connectedServiceName;
    NSDictionary *_txtRecord;
    NSString *_type;
    unsigned long long _remoteSystemType;
    Class _securityProviderClass;
    id _securityProviderDelegate;
    id <SMNNetworkSessionDelegateProtocol> _delegate;
    NSNumber *_connectionTimeout;
    unsigned long long _numberOfNetworkConfigurationChanges;
    unsigned long long _numberOfNetworkChanges;
    unsigned long long _numberOfDisconnects;
    NSObject<OS_dispatch_queue> *_connectionQueue;
    NSObject<OS_dispatch_queue> *_scObservationQueue;
    NSObject<OS_dispatch_queue> *_sampleQueue;
    struct __SCDynamicStore *_dynamicStoreConnection;
    NSNetServiceBrowser *_netServiceBrowser;
    NSObject<OS_dispatch_queue> *_currentlyConnectingConnectionQueue;
    SMNConnection *_currentConnectingConnection;
    NSMutableArray *_availablePeers;
    NSNetService *_netService;
    SMNConnection *_activeConnection;
    NSMutableOrderedSet *_otherConnections;
    NSDictionary *_remoteAddressesByIFMap;
    CDUnknownBlockType _connectionComparator;
    double _infrastructureWirelessRate;
}

+ (id)keyPathsForValuesAffectingActiveInterfaceBenchmark;
+ (id)keyPathsForValuesAffectingRemoteInterfaceType;
+ (id)keyPathsForValuesAffectingLocalInterfaceType;
@property double infrastructureWirelessRate; // @synthesize infrastructureWirelessRate=_infrastructureWirelessRate;
@property int ipv6Port; // @synthesize ipv6Port=_ipv6Port;
@property int preferredInterface; // @synthesize preferredInterface=_preferredInterface;
@property(copy) CDUnknownBlockType connectionComparator; // @synthesize connectionComparator=_connectionComparator;
@property BOOL hasEverBeenConnected; // @synthesize hasEverBeenConnected=_hasEverBeenConnected;
@property int socketFd; // @synthesize socketFd=_socketFd;
@property(getter=isServer) BOOL server; // @synthesize server=_server;
@property(retain) NSDictionary *remoteAddressesByIFMap; // @synthesize remoteAddressesByIFMap=_remoteAddressesByIFMap;
@property(retain) NSMutableOrderedSet *otherConnections; // @synthesize otherConnections=_otherConnections;
@property(retain) SMNConnection *activeConnection; // @synthesize activeConnection=_activeConnection;
@property(retain) NSNetService *netService; // @synthesize netService=_netService;
@property BOOL clientIsReResolving; // @synthesize clientIsReResolving=_clientIsReResolving;
@property BOOL clientIsReconnecting; // @synthesize clientIsReconnecting=_clientIsReconnecting;
@property(retain) NSMutableArray *availablePeers; // @synthesize availablePeers=_availablePeers;
@property(retain) SMNConnection *currentConnectingConnection; // @synthesize currentConnectingConnection=_currentConnectingConnection;
@property(retain) NSObject<OS_dispatch_queue> *currentlyConnectingConnectionQueue; // @synthesize currentlyConnectingConnectionQueue=_currentlyConnectingConnectionQueue;
@property int ipv6AcceptSocket; // @synthesize ipv6AcceptSocket=_ipv6AcceptSocket;
@property(retain) NSNetServiceBrowser *netServiceBrowser; // @synthesize netServiceBrowser=_netServiceBrowser;
@property struct __SCDynamicStore *dynamicStoreConnection; // @synthesize dynamicStoreConnection=_dynamicStoreConnection;
@property(retain) NSObject<OS_dispatch_queue> *sampleQueue; // @synthesize sampleQueue=_sampleQueue;
@property(retain) NSObject<OS_dispatch_queue> *scObservationQueue; // @synthesize scObservationQueue=_scObservationQueue;
@property(retain) NSObject<OS_dispatch_queue> *connectionQueue; // @synthesize connectionQueue=_connectionQueue;
@property unsigned long long numberOfDisconnects; // @synthesize numberOfDisconnects=_numberOfDisconnects;
@property unsigned long long numberOfNetworkChanges; // @synthesize numberOfNetworkChanges=_numberOfNetworkChanges;
@property unsigned long long numberOfNetworkConfigurationChanges; // @synthesize numberOfNetworkConfigurationChanges=_numberOfNetworkConfigurationChanges;
@property(getter=isCheckingForNewConnectionMethods) BOOL checkingForNewConnectionMethods; // @synthesize checkingForNewConnectionMethods=_checkingForNewConnectionMethods;
@property BOOL disallowsIPV6; // @synthesize disallowsIPV6=_disallowsIPV6;
@property BOOL secureTransport106Compatibility; // @synthesize secureTransport106Compatibility=_secureTransport106Compatibility;
@property BOOL automaticallySeeksFastestConnection; // @synthesize automaticallySeeksFastestConnection=_automaticallySeeksFastestConnection;
@property(retain) NSNumber *connectionTimeout; // @synthesize connectionTimeout=_connectionTimeout;
@property __weak id <SMNNetworkSessionDelegateProtocol> delegate; // @synthesize delegate=_delegate;
@property __weak id securityProviderDelegate; // @synthesize securityProviderDelegate=_securityProviderDelegate;
@property Class securityProviderClass; // @synthesize securityProviderClass=_securityProviderClass;
@property unsigned long long remoteSystemType; // @synthesize remoteSystemType=_remoteSystemType;
@property(retain) NSString *type; // @synthesize type=_type;
@property(retain) NSDictionary *txtRecord; // @synthesize txtRecord=_txtRecord;
@property(retain) NSString *connectedServiceName; // @synthesize connectedServiceName=_connectedServiceName;
@property(retain) NSString *name; // @synthesize name=_name;
@property unsigned long long protocolVersion; // @synthesize protocolVersion=_protocolVersion;
- (void).cxx_destruct;
@property(readonly) BOOL otherConnectionsAvailable;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)closeStream:(id)arg1;
- (id)newStreamWithName:(id)arg1;
- (void)stop;
- (void)recordInfrastructureRate;
- (void)closeAllConnections;
- (void)closeCurrentlyConnectingConnection;
- (void)closeOtherConnections;
- (void)closeActiveConnection;
- (id)connect:(id)arg1;
- (void)connectionFinishedSampling:(id)arg1;
- (void)checkForFasterConnections:(BOOL)arg1;
- (void)enumerateAndConnectToNewAddressesOfPeerNamed:(id)arg1 clientIsWaiting:(BOOL)arg2;
- (id)findNewAddressesFromService;
- (id)justAddressData:(struct sockaddr *)arg1 isIPV6:(BOOL)arg2;
- (void)connectToPeerNamed:(id)arg1;
- (BOOL)resolvePeerNamed:(id)arg1;
- (void)assumeFastestConnection;
- (void)waitForConnectionsToSampleUpToRoughly:(double)arg1;
- (void)startClient;
- (void)reResolveAddresses;
- (void)networkConfigurationChanged;
- (BOOL)startServer;
@property(readonly) NSSet *availableConnectionTypes;
- (void)promoteConnectionToActive:(id)arg1;
- (id)instantiateSecurityProviderForQueueName:(id)arg1;
@property(readonly) double activeInterfaceBenchmark;
@property(readonly) int remoteInterfaceType;
@property(readonly) int localInterfaceType;
- (void)dealloc;
- (id)initWithType:(id)arg1 baseQueueName:(id)arg2;
- (id)initWithType:(id)arg1;
- (void)netServiceBrowserDidStopSearch:(id)arg1;
- (void)netServiceBrowser:(id)arg1 didRemoveService:(id)arg2 moreComing:(BOOL)arg3;
- (void)netServiceBrowser:(id)arg1 didFindService:(id)arg2 moreComing:(BOOL)arg3;
- (void)netService:(id)arg1 didNotResolve:(id)arg2;
- (void)netService:(id)arg1 didUpdateTXTRecordData:(id)arg2;
- (void)netServiceDidResolveAddress:(id)arg1;
- (void)netServiceDidStop:(id)arg1;
- (void)netService:(id)arg1 didNotPublish:(id)arg2;
- (void)netServiceDidPublish:(id)arg1;
- (void)netServiceWillPublish:(id)arg1;
- (void)connectionInterrupted:(id)arg1;
- (void)connection:(id)arg1 streamClosing:(id)arg2;
- (void)connection:(id)arg1 newIncomingStream:(id)arg2;
- (void)connectionDeterminedTopology:(id)arg1 withCurrentRemoteAddressMap:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

