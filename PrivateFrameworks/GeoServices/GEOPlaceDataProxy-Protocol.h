//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class GEOApplicationAuditToken, GEODataRequestThrottlerToken, GEOMapItemIdentifier, GEOMapServiceTraits, GEOPDPlace, GEOPDPlaceRequest, NSArray, NSDictionary;

@protocol GEOPlaceDataProxy <NSObject>
- (void)clearCache;
- (unsigned long long)shrinkBySizeSync:(unsigned long long)arg1;
- (unsigned long long)calculateFreeableSpaceSync;
- (void)shrinkBySize:(unsigned long long)arg1 finished:(void (^)(unsigned long long))arg2;
- (void)calculateFreeableSpaceWithHandler:(void (^)(unsigned long long))arg1;
- (void)cancelRequest:(GEOPDPlaceRequest *)arg1;
- (void)performPlaceDataRequest:(GEOPDPlaceRequest *)arg1 traits:(GEOMapServiceTraits *)arg2 cachePolicy:(unsigned long long)arg3 timeout:(double)arg4 auditToken:(GEOApplicationAuditToken *)arg5 throttleToken:(GEODataRequestThrottlerToken *)arg6 networkActivity:(void (^)(BOOL))arg7 requesterHandler:(void (^)(GEOPDPlaceResponse *, NSError *, NSDictionary *))arg8;
- (void)trackPlaceData:(GEOPDPlace *)arg1;
- (void)fetchAllCacheEntriesWithRequesterHandler:(void (^)(NSDictionary *, NSError *))arg1;
- (void)requestPhoneNumbers:(NSArray *)arg1 allowCellularDataForLookup:(BOOL)arg2 traits:(GEOMapServiceTraits *)arg3 auditToken:(GEOApplicationAuditToken *)arg4 throttleToken:(GEODataRequestThrottlerToken *)arg5 requesterHandler:(void (^)(GEOPDPlaceResponse *, NSError *, NSDictionary *))arg6;
- (void)requestComponentsFromNetwork:(NSDictionary *)arg1 identifier:(GEOMapItemIdentifier *)arg2 resultProviderID:(int)arg3 traits:(GEOMapServiceTraits *)arg4 auditToken:(GEOApplicationAuditToken *)arg5 throttleToken:(GEODataRequestThrottlerToken *)arg6 requesterHandler:(void (^)(GEOPDPlaceResponse *, NSError *, NSDictionary *))arg7;
- (void)requestIdentifiers:(NSArray *)arg1 resultProviderID:(int)arg2 traits:(GEOMapServiceTraits *)arg3 options:(unsigned long long)arg4 auditToken:(GEOApplicationAuditToken *)arg5 throttleToken:(GEODataRequestThrottlerToken *)arg6 requesterHandler:(void (^)(GEOPDPlaceResponse *, NSError *, NSDictionary *))arg7;
@end

