//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSObject<OS_os_log>, NSString, NSXPCConnection, NSXPCInterface;

@interface _PASXPCClientHelper : NSObject
{
    struct _opaque_pthread_mutex_t _connLock;
    NSXPCConnection *_conn;
    NSString *_serviceName;
    NSXPCInterface *_whitelistedServerInterface;
    NSXPCInterface *_whitelistedClientInterface;
    id _serverInitiatedRequestHandler;
    CDUnknownBlockType _interruptionHandler;
    CDUnknownBlockType _invalidationHandler;
    NSObject<OS_os_log> *_logHandle;
}

- (void).cxx_destruct;
- (id)synchronousRemoteObjectProxyWithErrorHandler:(CDUnknownBlockType)arg1;
- (id)remoteObjectProxyWithErrorHandler:(CDUnknownBlockType)arg1;
- (id)remoteObjectProxy;
- (void)_locked_establishConnection;
- (void)dealloc;
- (id)initWithServiceName:(id)arg1 whitelistedServerInterface:(id)arg2 whitelistedClientInterface:(id)arg3 serverInitiatedRequestHandler:(id)arg4 interruptionHandler:(CDUnknownBlockType)arg5 invalidationHandler:(CDUnknownBlockType)arg6 logHandle:(id)arg7;

@end
