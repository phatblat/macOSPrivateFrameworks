//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSLock, NSXPCConnection, NSXPCListenerEndpoint;

@interface CDPDaemonConnection : NSObject
{
    NSXPCConnection *_conn;
    NSLock *_connLock;
    NSXPCListenerEndpoint *_daemonXPCEndpoint;
}

@property(retain, nonatomic) NSXPCListenerEndpoint *daemonXPCEndpoint; // @synthesize daemonXPCEndpoint=_daemonXPCEndpoint;
- (void).cxx_destruct;
- (id)synchronousDaemonWithErrorHandler:(CDUnknownBlockType)arg1;
- (id)daemonWithErrorHandler:(CDUnknownBlockType)arg1;
- (id)daemon;
- (id)connection;
- (id)init;

@end

