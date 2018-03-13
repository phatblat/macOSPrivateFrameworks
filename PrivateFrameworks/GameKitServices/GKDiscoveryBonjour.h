//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray, NSMutableDictionary, NSObject<OS_dispatch_queue>, NSString;

@interface GKDiscoveryBonjour : NSObject
{
    NSString *_serviceType;
    NSString *_serviceDomain;
    struct _DNSServiceRef_t *_browseRef;
    struct _DNSServiceRef_t *_advertiseRef;
    CDUnknownBlockType _browseCallback;
    CDUnknownBlockType _connectionCallback;
    CDUnknownBlockType _collisionCallback;
    CDUnknownBlockType _serviceNameCollisionCallback;
    NSMutableArray *_launchdSources;
    int _listeningPort;
    NSMutableDictionary *_resolveContainers;
    NSObject<OS_dispatch_queue> *_resolveContainersSyncQueue;
}

@property(copy, nonatomic) CDUnknownBlockType serviceNameCollisionCallback; // @synthesize serviceNameCollisionCallback=_serviceNameCollisionCallback;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *resolveContainersSyncQueue; // @synthesize resolveContainersSyncQueue=_resolveContainersSyncQueue;
@property(copy, nonatomic) CDUnknownBlockType connectionCallback; // @synthesize connectionCallback=_connectionCallback;
@property(copy, nonatomic) CDUnknownBlockType browseCallback; // @synthesize browseCallback=_browseCallback;
@property(retain, nonatomic) NSMutableDictionary *resolveContainers; // @synthesize resolveContainers=_resolveContainers;
@property(retain, nonatomic) NSMutableArray *launchdSources; // @synthesize launchdSources=_launchdSources;
@property(nonatomic) struct _DNSServiceRef_t *advertiseRef; // @synthesize advertiseRef=_advertiseRef;
@property(nonatomic) struct _DNSServiceRef_t *browseRef; // @synthesize browseRef=_browseRef;
@property(copy, nonatomic) NSString *serviceDomain; // @synthesize serviceDomain=_serviceDomain;
@property(copy, nonatomic) NSString *serviceType; // @synthesize serviceType=_serviceType;
- (void)stopAdvertising;
- (void)startAdvertisingServiceName:(id)arg1 discoveryInfo:(id)arg2;
- (void)sendBonjourRegistrationEvent:(id)arg1 discoveryInfo:(id)arg2;
- (void)closeListeningSockets;
- (void)setupListeningSockets;
- (void)setupBothListeningSockets;
- (int)ipV6Socket;
- (int)ipV4Socket;
- (void)createDispatchEventWithSocket:(int)arg1;
- (void)stopResolve:(id)arg1;
- (int)resolveName:(id)arg1 onIndex:(unsigned int)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;
- (void)stopBrowsing;
- (int)startBrowsing:(CDUnknownBlockType)arg1;
- (void)dealloc;
- (BOOL)isAppleTV;
- (id)initWithDomain:(id)arg1 type:(id)arg2;
- (id)init;

@end

