//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class WFOAuth2Credential;

@protocol WFOAuth2RevocableSessionManager <NSObject>
- (void)revokeCredential:(WFOAuth2Credential *)arg1 completionHandler:(void (^)(BOOL, NSError *))arg2;
@end

