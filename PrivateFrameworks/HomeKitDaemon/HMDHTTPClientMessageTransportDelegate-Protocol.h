//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class HMDHTTPClientMessageTransport, NSDictionary, NSError;

@protocol HMDHTTPClientMessageTransportDelegate <NSObject>
- (void)client:(HMDHTTPClientMessageTransport *)arg1 didReceiveMessage:(NSDictionary *)arg2 completionHandler:(void (^)(NSDictionary *, NSError *))arg3;
- (void)client:(HMDHTTPClientMessageTransport *)arg1 didStopWithError:(NSError *)arg2;
@end
