//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSHashTable, geo_isolater;

@interface GEOTransitUpdateRequester : NSObject
{
    geo_isolater *_isolater;
    NSHashTable *_pendingRequests;
}

+ (id)sharedRequester;
- (void).cxx_destruct;
- (BOOL)_finishRequest:(id)arg1;
- (void)cancelTransitRouteUpdateRequest:(id)arg1;
- (void)startTransitRouteUpdateRequest:(id)arg1 auditToken:(id)arg2 throttleToken:(id)arg3 queue:(id)arg4 networkActivity:(CDUnknownBlockType)arg5 completion:(CDUnknownBlockType)arg6;
- (id)init;

@end

