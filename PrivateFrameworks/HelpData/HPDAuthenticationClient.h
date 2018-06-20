//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "HPDAuthAgentProtocol.h"

@class NSString, NSXPCConnection;

@interface HPDAuthenticationClient : NSObject <HPDAuthAgentProtocol>
{
    NSXPCConnection *_xpcConnection;
    NSString *_serviceName;
    NSString *_environment;
    id <HPDAuthClientProtocol> _delegate;
    CDUnknownBlockType _errorHandler;
}

@property(copy, nonatomic) CDUnknownBlockType errorHandler; // @synthesize errorHandler=_errorHandler;
@property(nonatomic) __weak id <HPDAuthClientProtocol> delegate; // @synthesize delegate=_delegate;
@property(copy, nonatomic) NSString *environment; // @synthesize environment=_environment;
@property(copy, nonatomic) NSString *serviceName; // @synthesize serviceName=_serviceName;
@property(retain, nonatomic) NSXPCConnection *xpcConnection; // @synthesize xpcConnection=_xpcConnection;
- (void).cxx_destruct;
@property BOOL suppressUI; // @dynamic suppressUI;
- (void)processEventNotification:(id)arg1;
- (void)unregisterForAuthenticationNotifications;
- (void)registerForAuthenticationNotifications;
- (void)isNetworkConnected:(CDUnknownBlockType)arg1;
- (void)disconnectFromNetwork;
- (void)connectToNetwork;
- (void)authenticateWithServiceName:(id)arg1 environment:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)authenticateWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)_handleConnectionError:(id)arg1;
- (void)dealloc;
- (id)initWithServiceName:(id)arg1 environment:(id)arg2;
- (id)init;

@end

