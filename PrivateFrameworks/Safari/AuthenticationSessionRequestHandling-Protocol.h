//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@class AuthenticationSessionRequest;

@protocol AuthenticationSessionRequestHandling
- (void)disconnectFromAuthenticationSessionRequestServer;
- (void)cancelAuthenticationSessionWithRequest:(AuthenticationSessionRequest *)arg1;
- (void)beginAuthenticationSessionWithRequest:(AuthenticationSessionRequest *)arg1;
@end
