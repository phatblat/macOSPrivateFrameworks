//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <HomeKitDaemon/HMDRemoteLoginReceiverAuthentication.h>

@class HMDRemoteLoginProxyAuthenticationRequest;

@interface HMDRemoteLoginReceiverProxyAuthentication : HMDRemoteLoginReceiverAuthentication
{
    HMDRemoteLoginProxyAuthenticationRequest *_request;
}

+ (id)logCategory;
@property(readonly, nonatomic) HMDRemoteLoginProxyAuthenticationRequest *request; // @synthesize request=_request;
- (void).cxx_destruct;
- (void)_authenticate;
- (void)authenticate;
- (id)description;
- (void)dealloc;
- (id)initWithSessionID:(id)arg1 remoteDevice:(id)arg2 workQueue:(id)arg3 remoteMessageSender:(id)arg4 delegate:(id)arg5 request:(id)arg6;

@end

