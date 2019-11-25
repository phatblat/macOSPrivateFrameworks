//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class GEODirectionsRequest, GEOETARequest, GEOQuickETARequest, NSString;

@interface GEOQuickETARequester : NSObject
{
    GEOQuickETARequest *_request;
    GEOETARequest *_simpleETARequest;
    GEODirectionsRequest *_directionsETARequest;
    NSString *_loggingFacility;
}

+ (BOOL)requestETAFromOrigin:(id)arg1 toDestinations:(id)arg2 transportType:(int)arg3 timepoint:(struct GEOTimepoint)arg4 includeDistance:(BOOL)arg5 commonOptions:(id)arg6 automobileOptions:(id)arg7 walkingOptions:(id)arg8 transitOptions:(id)arg9 auditToken:(id)arg10 handler:(CDUnknownBlockType)arg11 callbackQueue:(id)arg12;
+ (BOOL)requestTrafficAndETAFromWaypoint:(id)arg1 toWaypoints:(id)arg2 transportType:(int)arg3 automobileOptions:(id)arg4 handler:(CDUnknownBlockType)arg5;
- (void).cxx_destruct;
- (void)cancel;
- (void)calculateETAFromAPI:(BOOL)arg1 includeSummary:(BOOL)arg2 WithResponseHandler:(CDUnknownBlockType)arg3;
- (void)calculateETAFromAPI:(BOOL)arg1 WithResponseHandler:(CDUnknownBlockType)arg2;
- (void)calculateETAWithResponseHandler:(CDUnknownBlockType)arg1;
- (void)_calculateRoutingETAWithSummary:(BOOL)arg1 handler:(CDUnknownBlockType)arg2;
- (void)_calculateRoutingETAWithHandler:(CDUnknownBlockType)arg1;
- (void)_calculateSimpleETAFromAPI:(BOOL)arg1 includeSummary:(BOOL)arg2 WithHandler:(CDUnknownBlockType)arg3;
- (void)_calculateSimpleETAFromAPI:(BOOL)arg1 WithHandler:(CDUnknownBlockType)arg2;
- (id)initWithRequest:(id)arg1;

@end

