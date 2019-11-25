//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSHashTable, NSMutableDictionary;

@interface NSXPCSharedListener : NSObject
{
    NSMutableDictionary *_listeners;
    NSHashTable *_delegates;
    void *reserved;
}

+ (void)getSDKVersionOfServiceNamed:(id)arg1 reply:(CDUnknownBlockType)arg2;
+ (void)warmUpClassNamed:(id)arg1 inServiceNamed:(id)arg2;
+ (void)_failedToWarmUpClassNamed:(id)arg1 inServiceNamed:(id)arg2 dueTo:(id)arg3;
+ (id)sharedServiceListener;
+ (void)connectToService:(id)arg1 instanceIdentifier:(id)arg2 listener:(id)arg3 queue:(id)arg4 completion:(CDUnknownBlockType)arg5;
+ (void)connectToService:(id)arg1 listener:(id)arg2 queue:(id)arg3 completion:(CDUnknownBlockType)arg4;
+ (void)listenerEndpointForService:(id)arg1 instanceIdentifier:(id)arg2 listener:(id)arg3 queue:(id)arg4 completion:(CDUnknownBlockType)arg5;
+ (void)listenerEndpointForService:(id)arg1 listener:(id)arg2 queue:(id)arg3 completion:(CDUnknownBlockType)arg4;
+ (id)connectionForListenerNamed:(id)arg1 fromServiceNamed:(id)arg2 instanceIdentifier:(id)arg3;
+ (id)connectionForListenerNamed:(id)arg1 fromServiceNamed:(id)arg2;
+ (void)endpointForListenerNamed:(id)arg1 fromServiceNamed:(id)arg2 instanceIdentifier:(id)arg3 queue:(id)arg4 completion:(CDUnknownBlockType)arg5;
+ (id)endpointForReply:(id)arg1 withListenerName:(id)arg2;
@property(retain) NSMutableDictionary *listeners; // @synthesize listeners=_listeners;
- (void)resumeSubService:(id)arg1;
- (void)resumeAdditionalService:(id)arg1;
- (void)resume;
- (BOOL)shouldAcceptNewConnection:(id)arg1 forListenerNamed:(id)arg2;
- (void)didAcceptNewConnection:(id)arg1;
- (id)listenerEndpointWithName:(id)arg1;
- (void)addListener:(id)arg1 withName:(id)arg2;
- (void)addDelegate:(struct NSObject *)arg1;
- (void)dealloc;

@end

