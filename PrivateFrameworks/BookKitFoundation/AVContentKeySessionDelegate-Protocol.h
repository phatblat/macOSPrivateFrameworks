//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class AVContentKeyRequest, AVContentKeySession, AVPersistableContentKeyRequest, NSData, NSError, NSString;

@protocol AVContentKeySessionDelegate <NSObject>
- (void)contentKeySession:(AVContentKeySession *)arg1 didProvideContentKeyRequest:(AVContentKeyRequest *)arg2;

@optional
- (void)contentKeySessionDidGenerateExpiredSessionReport:(AVContentKeySession *)arg1;
- (void)contentKeySessionContentProtectionSessionIdentifierDidChange:(AVContentKeySession *)arg1;
- (void)contentKeySession:(AVContentKeySession *)arg1 contentKeyRequestDidSucceed:(AVContentKeyRequest *)arg2;
- (BOOL)contentKeySession:(AVContentKeySession *)arg1 shouldRetryContentKeyRequest:(AVContentKeyRequest *)arg2 reason:(NSString *)arg3;
- (void)contentKeySession:(AVContentKeySession *)arg1 contentKeyRequest:(AVContentKeyRequest *)arg2 didFailWithError:(NSError *)arg3;
- (void)contentKeySession:(AVContentKeySession *)arg1 didUpdatePersistableContentKey:(NSData *)arg2 forContentKeyIdentifier:(id)arg3;
- (void)contentKeySession:(AVContentKeySession *)arg1 didProvidePersistableContentKeyRequest:(AVPersistableContentKeyRequest *)arg2;
- (void)contentKeySession:(AVContentKeySession *)arg1 didProvideRenewingContentKeyRequest:(AVContentKeyRequest *)arg2;
@end

