//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class GEOApplicationAuditToken, GEOWiFiQualityServiceRequest, NSObject<OS_dispatch_queue>, NSString;

@protocol GEOWiFiQualityServiceProxy <NSObject>
- (void)submitWiFiQualityTileLoadForKey:(NSString *)arg1 eTag:(NSString *)arg2 requestId:(NSString *)arg3 auditToken:(GEOApplicationAuditToken *)arg4 completionQueue:(NSObject<OS_dispatch_queue> *)arg5 completion:(void (^)(NSString *, NSString *, NSData *, NSError *))arg6;
- (void)cancelRequestId:(NSString *)arg1;
- (void)submitWiFiQualityServiceRequest:(GEOWiFiQualityServiceRequest *)arg1 requestId:(NSString *)arg2 auditToken:(GEOApplicationAuditToken *)arg3 completionQueue:(NSObject<OS_dispatch_queue> *)arg4 completion:(void (^)(GEOWiFiQualityServiceResponse *, NSError *))arg5;
@end
