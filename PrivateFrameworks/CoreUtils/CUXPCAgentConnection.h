//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CUXPCAgent, NSObject<OS_dispatch_queue>, NSXPCConnection;

__attribute__((visibility("hidden")))
@interface CUXPCAgentConnection : NSObject
{
    CUXPCAgent *_agent;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    NSXPCConnection *_xpcCnx;
}

- (void).cxx_destruct;
- (id)remoteObjectProxyWithErrorHandler:(CDUnknownBlockType)arg1;
- (id)remoteObjectProxy;
- (void)connectionInvalidated;

@end

