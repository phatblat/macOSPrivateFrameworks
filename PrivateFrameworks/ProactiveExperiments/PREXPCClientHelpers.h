//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, NSXPCConnection, NSXPCInterface;

@interface PREXPCClientHelpers : NSObject
{
    struct _opaque_pthread_mutex_t {
        long long __sig;
        char __opaque[56];
    } _connLock;
    NSXPCConnection *_conn;
    NSString *_serviceName;
    NSXPCInterface *_whitelistedServerInterface;
    id _clientExportedObject;
    CDUnknownBlockType _interruptionHandler;
    CDUnknownBlockType _invalidationHandler;
}

- (void).cxx_destruct;
- (id)synchronousRemoteObjectProxyWithErrorHandler:(CDUnknownBlockType)arg1;
- (id)remoteObjectProxy;
- (void)_locked_establishConnection;
- (void)dealloc;
- (id)initWithServiceName:(id)arg1 whitelistedServerInterface:(id)arg2 clientExportedObject:(id)arg3 interruptionHandler:(CDUnknownBlockType)arg4 invalidationHandler:(CDUnknownBlockType)arg5;

@end

