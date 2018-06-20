//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray, NSObject<OS_dispatch_queue>, NSXPCConnection;

@interface ADAdServingDaemonConnection : NSObject
{
    id <ADAdServingDaemonConnectionDelegate> _delegate;
    NSMutableArray *_performWhenConnectedBlocks;
    NSObject<OS_dispatch_queue> *_connectionQueue;
    NSXPCConnection *_adServingDaemonConnection;
}

@property(retain, nonatomic) NSXPCConnection *adServingDaemonConnection; // @synthesize adServingDaemonConnection=_adServingDaemonConnection;
@property(nonatomic) NSObject<OS_dispatch_queue> *connectionQueue; // @synthesize connectionQueue=_connectionQueue;
@property(retain, nonatomic) NSMutableArray *performWhenConnectedBlocks; // @synthesize performWhenConnectedBlocks=_performWhenConnectedBlocks;
- (void)invalidate;
- (void)_considerConnectingToAdServingDaemon;
- (void)considerConnectingToAdServingDaemon;
- (id)rpcProxyWithErrorHandler:(CDUnknownBlockType)arg1;
- (id)rpcProxy;
- (void)performWhenConnected:(CDUnknownBlockType)arg1;
@property(nonatomic) __weak id <ADAdServingDaemonConnectionDelegate> delegate;
- (id)initWithDelegate:(id)arg1;
- (void)dealloc;

@end

