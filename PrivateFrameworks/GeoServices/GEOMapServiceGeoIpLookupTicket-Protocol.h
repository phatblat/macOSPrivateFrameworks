//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class GEOApplicationAuditToken, NSObject<OS_dispatch_queue>;

@protocol GEOMapServiceGeoIpLookupTicket <NSObject>
- (void)cancel;
- (void)submitWithHandler:(void (^)(GeoIpLookupResult *, NSError *))arg1 auditToken:(GEOApplicationAuditToken *)arg2 networkActivity:(void (^)(BOOL))arg3 handlerQueue:(NSObject<OS_dispatch_queue> *)arg4;
@end
