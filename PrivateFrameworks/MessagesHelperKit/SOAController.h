//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSXPCListenerDelegate.h"
#import "SOAReceiverProtocol.h"

@class NSMutableArray, NSMutableDictionary, NSObject<OS_dispatch_queue>, NSString, NSXPCListener, SOAReceiver;

@interface SOAController : NSObject <NSXPCListenerDelegate, SOAReceiverProtocol>
{
    BOOL _markedForDestruction;
    SOAReceiver *_receiver;
    NSXPCListener *_listener;
    NSMutableArray *_connections;
    NSString *_name;
    NSMutableDictionary *_controllerProperties;
    NSObject<OS_dispatch_queue> *_controllerQueue;
}

+ (void)initialize;
+ (id)remoteReceiverProtocol;
+ (id)receiverProtocol;
+ (Class)receiverClass;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *controllerQueue; // @synthesize controllerQueue=_controllerQueue;
@property BOOL markedForDestruction; // @synthesize markedForDestruction=_markedForDestruction;
@property(retain) NSMutableDictionary *controllerProperties; // @synthesize controllerProperties=_controllerProperties;
@property(retain) NSString *name; // @synthesize name=_name;
@property(retain) NSMutableArray *connections; // @synthesize connections=_connections;
@property(retain) NSXPCListener *listener; // @synthesize listener=_listener;
@property(retain) SOAReceiver *receiver; // @synthesize receiver=_receiver;
- (void).cxx_destruct;
- (void)invalidate;
- (void)mainInvalidate;
- (void)dealloc;
- (void)setupComplete;
- (void)removeDefaultsObjectForKey:(id)arg1 inCollection:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)setDefaultsObject:(id)arg1 forKey:(id)arg2 inCollection:(id)arg3 completionBlock:(CDUnknownBlockType)arg4;
- (void)removeDefaultsObject:(id)arg1 fromCollection:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)addDefaultsObject:(id)arg1 toCollection:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)setDefaultsObject:(id)arg1 forKey:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (void)setValue:(id)arg1 forControllerKey:(id)arg2;
- (id)defaultsObjectForKey:(id)arg1;
- (id)userDefaultsDictionary;
- (id)bundleIdentifier;
- (void)connectionAdded:(id)arg1;
- (void)connectionDied:(id)arg1;
- (void)suspendConnections;
- (BOOL)persistsWithoutAccounts;
- (BOOL)isPersistent;
- (id)initWithXPCListener:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

