//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@class NSString, NSURL, NSUUID;

@protocol AuthenticationSessionCoordinating
- (void)askSafariToCancelAuthenticationSessionWithUUID:(NSUUID *)arg1;
- (void)askSafariToBeginAuthenticationSessionWithUUID:(NSUUID *)arg1 url:(NSURL *)arg2 callbackURLScheme:(NSString *)arg3 completionHandler:(void (^)(NSURL *, NSError *))arg4;
@end

