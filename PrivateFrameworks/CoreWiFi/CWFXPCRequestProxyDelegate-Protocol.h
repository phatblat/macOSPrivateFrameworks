//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CWFXPCConnection, CWFXPCEvent, CWFXPCRequest, CWFXPCRequestProxy;

@protocol CWFXPCRequestProxyDelegate <NSObject>
- (void)XPCRequestProxy:(CWFXPCRequestProxy *)arg1 sendXPCEvent:(CWFXPCEvent *)arg2 reply:(void (^)(void))arg3;
- (void)XPCRequestProxy:(CWFXPCRequestProxy *)arg1 XPCConnection:(CWFXPCConnection *)arg2 receivedXPCRequest:(CWFXPCRequest *)arg3;
@end
