//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "AuthenticationHintsProvider.h"

@class NSString;

@protocol SDAuthenticationHintsInterface <AuthenticationHintsProvider>
- (void)authenticateAccountWithAppleID:(NSString *)arg1 password:(NSString *)arg2 completion:(void (^)(NSError *))arg3;
@end

