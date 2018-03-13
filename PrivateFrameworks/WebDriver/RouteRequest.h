//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class HTTPMessage, NSDictionary;

@interface RouteRequest : NSObject
{
    HTTPMessage *message;
    NSDictionary *params;
}

@property(readonly, nonatomic) NSDictionary *params; // @synthesize params;
- (void).cxx_destruct;
- (id)description;
- (id)body;
- (id)url;
- (id)method;
- (id)param:(id)arg1;
- (id)header:(id)arg1;
@property(readonly, nonatomic) NSDictionary *headers;
- (id)initWithHTTPMessage:(id)arg1 parameters:(id)arg2;
- (id)webDriver_decodedRequestString;
- (id)webDriver_decodedPayload;
- (id)webDriver_requestedPath;
- (long long)webDriver_httpMethod;

@end

