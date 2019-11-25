//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSObject<OS_dispatch_queue>, NSObject<OS_xpc_object>, NSRemoteServiceEndpoint, NSString, RVSLogger;

@interface NSRemoteServiceConnection : NSObject
{
    unsigned char _errorsAreFatal;
    NSObject<OS_xpc_object> *_connection;
    NSObject<OS_dispatch_queue> *_serviceQueue;
    NSObject<OS_dispatch_queue> *_internalQueue;
    id <NSObject><NSRemoteServiceConnectionDelegate> _delegate;
    NSObject<OS_dispatch_queue> *_delegateQueue;
    NSArray *_delegateStackTrace;
    NSString *_connectionName;
    RVSLogger *_logger;
    NSRemoteServiceEndpoint *_endpoint;
}

@property(readonly) NSRemoteServiceEndpoint *endpoint; // @synthesize endpoint=_endpoint;
@property(retain) NSObject<OS_dispatch_queue> *delegateQueue; // @synthesize delegateQueue=_delegateQueue;
@property unsigned char errorsAreFatal; // @synthesize errorsAreFatal=_errorsAreFatal;
@property(readonly) RVSLogger *logger; // @synthesize logger=_logger;
- (void).cxx_destruct;
- (BOOL)_setupConnection;
- (void)setDelegate:(id)arg1;
- (void)withDelegatePerform:(CDUnknownBlockType)arg1;
- (void)auditToken:(CDStruct_6ad76789 *)arg1;
- (int)pid;
- (int)asid;
- (unsigned int)egid;
- (unsigned int)euid;
- (void)sendReply:(id)arg1;
- (void)sendRequest:(id)arg1 replyQueue:(id)arg2;
- (void)sendRequest:(id)arg1;
- (id)sendSynchronousRequest:(id)arg1 withTimeout:(double)arg2;
- (id)sendSynchronousRequest:(id)arg1;
- (id)_sendSynchronousRequest:(id)arg1 withTimeout:(unsigned long long)arg2;
- (void)cleanup;
- (void)suspend;
- (void)resume;
- (id)initWithServiceConnection:(id)arg1 endpoint:(id)arg2;
- (id)initWithServiceConnection:(id)arg1;

@end

