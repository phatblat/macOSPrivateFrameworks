//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <WebDriver/HTTPConnection.h>

@class NSDictionary, RoutingHTTPServer;

@interface RoutingConnection : HTTPConnection
{
    RoutingHTTPServer *http;
    NSDictionary *headers;
}

- (void).cxx_destruct;
- (BOOL)shouldDie;
- (id)preprocessErrorResponse:(id)arg1;
- (id)preprocessResponse:(id)arg1;
- (void)setHeadersForResponse:(id)arg1 isError:(BOOL)arg2;
- (void)responseDidAbort:(id)arg1;
- (void)responseHasAvailableData:(id)arg1;
- (id)httpResponseForMethod:(id)arg1 URI:(id)arg2;
- (void)processBodyData:(id)arg1;
- (BOOL)shouldHandleRequestForMethod:(id)arg1 atPath:(id)arg2;
- (BOOL)supportsMethod:(id)arg1 atPath:(id)arg2;
- (id)initWithAsyncSocket:(id)arg1 configuration:(id)arg2;

@end

