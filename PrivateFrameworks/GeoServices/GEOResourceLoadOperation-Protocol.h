//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class GEOApplicationAuditToken, GEOResourceInfo, NSData, NSObject<OS_dispatch_queue>, NSString;

@protocol GEOResourceLoadOperation <NSObject>
@property(readonly, nonatomic) NSData *data;
@property(nonatomic) BOOL requiresWiFi;
- (void)cancel;
- (void)startWithCompletionHandler:(void (^)(NSData *, NSError *))arg1 callbackQueue:(NSObject<OS_dispatch_queue> *)arg2;
- (id)initWithResource:(GEOResourceInfo *)arg1 existingPartialData:(NSData *)arg2 auditToken:(GEOApplicationAuditToken *)arg3 baseURLString:(NSString *)arg4;
@end
