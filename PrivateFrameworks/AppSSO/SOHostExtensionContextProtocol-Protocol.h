//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SOExtensionContextProtocol.h"

@class NSDictionary, NSError, NSURL, SOAuthorizationCredential;

@protocol SOHostExtensionContextProtocol <SOExtensionContextProtocol>
- (void)canOpenURL:(NSURL *)arg1 completionHandler:(void (^)(BOOL))arg2;
- (void)openURL:(NSURL *)arg1 completionHandler:(void (^)(BOOL))arg2;
- (void)authorizationDidCompleteWithCredential:(SOAuthorizationCredential *)arg1 error:(NSError *)arg2;
- (void)presentAuthorizationViewControllerWithHints:(NSDictionary *)arg1 completion:(void (^)(BOOL, NSError *))arg2;
@end

