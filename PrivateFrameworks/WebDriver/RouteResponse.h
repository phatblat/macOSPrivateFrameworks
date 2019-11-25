//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class HTTPConnection, HTTPResponseProxy, NSDictionary, NSMutableDictionary, NSObject<HTTPResponse>;

@interface RouteResponse : NSObject
{
    NSMutableDictionary *headers;
    HTTPResponseProxy *proxy;
    HTTPConnection *connection;
}

@property(readonly, nonatomic) NSDictionary *headers; // @synthesize headers;
@property(readonly, nonatomic) __weak HTTPConnection *connection; // @synthesize connection;
- (void).cxx_destruct;
- (void)respondWithFile:(id)arg1 async:(BOOL)arg2;
- (void)respondWithFile:(id)arg1;
- (void)respondWithData:(id)arg1;
- (void)respondWithString:(id)arg1 encoding:(unsigned long long)arg2;
- (void)respondWithString:(id)arg1;
- (void)setHeader:(id)arg1 value:(id)arg2;
@property(nonatomic) long long statusCode;
@property(readonly, nonatomic) NSObject<HTTPResponse> *proxiedResponse;
@property(retain, nonatomic) NSObject<HTTPResponse> *response;
- (id)initWithConnection:(id)arg1;
- (unsigned long long)webDriver_textEncodingForBody;
- (id)webDriver_decodedResponseString;
- (void)webDriver_respondWithData:(id)arg1 relatedSession:(id)arg2;
- (void)webDriver_expectAsynchronousData;

@end

