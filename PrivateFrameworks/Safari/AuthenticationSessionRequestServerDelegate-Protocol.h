//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class AuthenticationSessionRequestServer;

@protocol AuthenticationSessionRequestServerDelegate <NSObject>

@optional
- (void)authenticationSessionRequestServerDidFinishAllRequests:(AuthenticationSessionRequestServer *)arg1;
- (void)authenticationSessionRequestServerNeedsClientToReconnect:(AuthenticationSessionRequestServer *)arg1;
@end

