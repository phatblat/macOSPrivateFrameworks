//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@class NSXPCListenerEndpoint;

@protocol AUPBRegistrarHosting
- (void)registerAsEndpointListenerWithReply:(void (^)(NSError *))arg1;
- (void)setListenerEndpoint:(NSXPCListenerEndpoint *)arg1 withReply:(void (^)(NSError *))arg2;
@end

