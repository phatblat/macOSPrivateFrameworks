//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSObject<OS_xpc_object>;

@interface CSActivationXPCClient : NSObject
{
    NSObject<OS_xpc_object> *_xpcConnection;
}

@property(retain, nonatomic) NSObject<OS_xpc_object> *xpcConnection; // @synthesize xpcConnection=_xpcConnection;
- (void).cxx_destruct;
- (id)_decodeError:(id)arg1;
- (void)_sendMessage:(id)arg1 connection:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)notifyActivationEvent:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_handleListenerError:(id)arg1;
- (void)_handleListenerEvent:(id)arg1;
- (void)dealloc;
- (void)connect;
- (id)init;

@end
