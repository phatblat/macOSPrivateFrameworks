//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSData, WiFiAwarePublishDatapathServiceSpecificInfo, WiFiAwarePublishServiceSpecificInfo, WiFiAwarePublisherDataSessionHandle, WiFiMACAddress;

@protocol WiFiAwarePublisherXPC <NSObject>
- (void)updateServiceSpecificInfo:(WiFiAwarePublishServiceSpecificInfo *)arg1 completionHandler:(void (^)(long long))arg2;
- (void)updateDatapathServiceSpecificInfo:(WiFiAwarePublishDatapathServiceSpecificInfo *)arg1 completionHandler:(void (^)(long long))arg2;
- (void)terminateDataSession:(WiFiAwarePublisherDataSessionHandle *)arg1 completionHandler:(void (^)(long long))arg2;
- (void)sendMessage:(NSData *)arg1 toPeerAddress:(WiFiMACAddress *)arg2 withInstanceID:(unsigned char)arg3 completionHandler:(void (^)(long long))arg4;
- (void)cancel;
@end

