//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSObject<OS_dispatch_queue>, NSObject<OS_xpc_object>;

@interface HCServer : NSObject
{
    BOOL _deadConnection;
    id <AXHeardServerDelegate> _delegate;
    id <AXHeardServerMessageDelegate> _messageDelegate;
    NSObject<OS_dispatch_queue> *_connectionQueue;
    NSObject<OS_xpc_object> *_xpcConnection;
}

@property(nonatomic) BOOL deadConnection; // @synthesize deadConnection=_deadConnection;
@property(retain, nonatomic) NSObject<OS_xpc_object> *xpcConnection; // @synthesize xpcConnection=_xpcConnection;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *connectionQueue; // @synthesize connectionQueue=_connectionQueue;
@property(nonatomic) __weak id <AXHeardServerMessageDelegate> messageDelegate; // @synthesize messageDelegate=_messageDelegate;
@property(nonatomic) __weak id <AXHeardServerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)handleMessageError:(id)arg1 destructive:(BOOL)arg2;
- (void)handleMessageWithPayload:(id)arg1 forIdentifier:(unsigned long long)arg2;
- (void)sendMessageWithPayload:(id)arg1 andIdentifier:(unsigned long long)arg2;
- (void)sendSynchronousMessageWithPayload:(id)arg1 andIdentifier:(unsigned long long)arg2;
- (id)setupServerIfNecessary;
- (void)handleReply:(id)arg1;
@property(readonly, nonatomic) BOOL isConnected;
- (BOOL)shouldRestartOnInterruption;
- (void)resetConnection;
- (void)terminateConnectionAndNotify:(BOOL)arg1;
- (void)startServerWithDelegate:(id)arg1;
- (void)dealloc;
- (id)init;

@end

