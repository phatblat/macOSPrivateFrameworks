//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSXPCConnection, NSXPCListenerEndpoint;

@interface AKAuthorizationDaemonConnection : NSObject
{
    struct os_unfair_lock_s _unfairLock;
    NSXPCConnection *_connection;
    id <AKAuthorizationClientProtocol> _contextManager;
    NSXPCListenerEndpoint *_listenerEndpoint;
}

@property(readonly, nonatomic) NSXPCListenerEndpoint *listenerEndpoint; // @synthesize listenerEndpoint=_listenerEndpoint;
- (void).cxx_destruct;
- (void)_connectionInvalidationHandler;
- (void)_connectionInterruptionHandler;
- (id)_connection;
- (id)synchronousRemoteObjectProxyWithErrorHandler:(CDUnknownBlockType)arg1;
- (id)remoteObjectProxyWithErrorHandler:(CDUnknownBlockType)arg1;
- (void)dealloc;
- (id)initWithListenerEndpoint:(id)arg1 exportedInterface:(id)arg2;
- (id)init;

@end

