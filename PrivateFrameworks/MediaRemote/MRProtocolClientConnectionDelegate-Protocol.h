//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class MRProtocolClientConnection, MRProtocolMessage;

@protocol MRProtocolClientConnectionDelegate <NSObject>

@optional
- (void)clientDidDisconnect:(MRProtocolClientConnection *)arg1;
- (void)clientConnection:(MRProtocolClientConnection *)arg1 didReceiveMessage:(MRProtocolMessage *)arg2;
@end

