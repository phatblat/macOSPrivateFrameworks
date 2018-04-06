//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "PKInstallServiceClient.h"

@class NSObject<OS_dispatch_queue>, NSObject<OS_dispatch_semaphore>, NSString, NSXPCConnection;

@interface _PKInstallClientConnection : NSObject <PKInstallServiceClient>
{
    NSXPCConnection *_connection;
    id <PKInstallService> _proxy;
    id <PKInstallService> _blockingProxy;
    NSObject<OS_dispatch_semaphore> *_sema;
    NSObject<OS_dispatch_queue> *_connectionQueue;
    BOOL _isSilent;
}

@property(setter=setSilent:) BOOL isSilent; // @synthesize isSilent=_isSilent;
- (void)installDidEndForToken:(id)arg1;
- (void)installDidBeginCommitForToken:(id)arg1;
- (void)installDidBeginForToken:(id)arg1;
- (void)_unprotectedInvalidate;
- (void)invalidate;
- (BOOL)waitUntilDoneOrTimedOut;
- (BOOL)waitUntilDone;
- (void)signal;
- (id)_unprotectedBlockingProxy;
- (id)blockingProxy;
- (id)_unprotectedProxy;
- (id)proxy;
- (BOOL)_unprotectedIsServiceRemote;
- (BOOL)isServiceRemote;
- (BOOL)_unprotectedConnectToDaemon:(BOOL)arg1 privileged:(BOOL)arg2 clientObject:(id)arg3;
- (BOOL)connectToDaemon:(BOOL)arg1 privileged:(BOOL)arg2 clientObject:(id)arg3;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
