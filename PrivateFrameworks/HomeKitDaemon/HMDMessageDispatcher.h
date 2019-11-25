//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "HMFMessageDispatcher.h"

@class HMDHomeManager, HMDMessageFilterChain, HMDSecureRemoteMessageFilter, HMDSecureRemoteMessageTransport, HMDXPCMessageTransport, NSMutableDictionary;

@interface HMDMessageDispatcher : HMFMessageDispatcher
{
    HMDXPCMessageTransport *_XPCTransport;
    HMDSecureRemoteMessageTransport *_secureRemoteTransport;
    HMDMessageFilterChain *_messageFilterChain;
    NSMutableDictionary *_remoteGateways;
    HMDSecureRemoteMessageFilter *_secureRemoteMessageFilter;
    HMDHomeManager *_homeManager;
}

+ (id)defaultDispatcher;
+ (id)destinationWithTarget:(id)arg1 userID:(id)arg2 destination:(id)arg3 multicast:(BOOL)arg4;
@property(nonatomic) __weak HMDHomeManager *homeManager; // @synthesize homeManager=_homeManager;
@property(retain, nonatomic) HMDSecureRemoteMessageFilter *secureRemoteMessageFilter; // @synthesize secureRemoteMessageFilter=_secureRemoteMessageFilter;
@property(retain, nonatomic) NSMutableDictionary *remoteGateways; // @synthesize remoteGateways=_remoteGateways;
@property(readonly, nonatomic) HMDMessageFilterChain *messageFilterChain; // @synthesize messageFilterChain=_messageFilterChain;
@property(readonly, nonatomic) HMDSecureRemoteMessageTransport *secureRemoteTransport; // @synthesize secureRemoteTransport=_secureRemoteTransport;
@property(readonly, nonatomic) HMDXPCMessageTransport *XPCTransport; // @synthesize XPCTransport=_XPCTransport;
- (void).cxx_destruct;
- (void)sendMessage:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)dispatchMessage:(id)arg1;
- (void)configureHTTPTransport:(id)arg1;
- (void)disableMessageServer;
- (void)enableMessageServer;
- (id)httpMessageTransport;
- (void)configureHomeManager:(id)arg1;
- (void)reset;
- (id)filterClasses;
- (void)dealloc;
- (id)initWithXPCTransport:(id)arg1 secureRemoteTransport:(id)arg2 messageFilterChain:(id)arg3;
- (id)prepareAnswerForRequestedCapabilities:(id)arg1;
- (void)removeHome:(id)arg1;
- (void)updateHome:(id)arg1 configurationVersion:(long long)arg2;
- (void)electDeviceForUser:(id)arg1 destination:(id)arg2 deviceCapabilities:(id)arg3 responseTimeout:(double)arg4 responseQueue:(id)arg5 responseHandler:(CDUnknownBlockType)arg6;
- (void)sendSecureMessage:(id)arg1 target:(id)arg2 userID:(id)arg3 destination:(id)arg4 responseQueue:(id)arg5 responseHandler:(CDUnknownBlockType)arg6;
- (id)remoteAccessDeviceForHome:(id)arg1;
- (id)residentCommunicationHandlerForHome:(id)arg1;
- (void)_setRemoteAccessDevice:(id)arg1 forHome:(id)arg2 sendNotification:(BOOL)arg3;
- (void)setRemoteAccessDevice:(id)arg1 forHome:(id)arg2;
- (void)setCompanionDevice:(id)arg1 forHome:(id)arg2;
- (void)handleSecureSessionError:(id)arg1;

@end

