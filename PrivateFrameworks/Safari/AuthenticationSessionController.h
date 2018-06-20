//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "AuthenticationSessionDelegate.h"
#import "AuthenticationSessionRequestHandling.h"

@class AuthenticationSessionLaunchAgentProxy, AuthenticationSessionRequestClient, NSMutableDictionary, NSObject<OS_dispatch_queue>, NSString;

__attribute__((visibility("hidden")))
@interface AuthenticationSessionController : NSObject <AuthenticationSessionRequestHandling, AuthenticationSessionDelegate>
{
    NSObject<OS_dispatch_queue> *_internalQueue;
    AuthenticationSessionLaunchAgentProxy *_launchAgentProxy;
    AuthenticationSessionRequestClient *_client;
    NSMutableDictionary *_requestsToSessions;
}

- (void).cxx_destruct;
- (void)_fulfillRequest:(id)arg1 withCallbackURL:(id)arg2 error:(id)arg3;
- (void)authenticationSessionWasCanceled:(id)arg1;
- (void)authenticationSession:(id)arg1 didFinishWithCallbackURL:(id)arg2;
- (void)disconnectFromAuthenticationSessionRequestServer;
- (void)cancelAuthenticationSessionWithRequest:(id)arg1;
- (void)beginAuthenticationSessionWithRequest:(id)arg1;
- (void)noteNewRequestsAreAvailable;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

