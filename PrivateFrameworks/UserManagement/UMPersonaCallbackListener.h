//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSXPCListenerDelegate.h"

@class NSMutableSet, NSString, NSXPCListener;

__attribute__((visibility("hidden")))
@interface UMPersonaCallbackListener : NSObject <NSXPCListenerDelegate>
{
    NSString *_machServiceName;
    NSMutableSet *_xpcConnections;
    NSXPCListener *_xpcListener;
    CDUnknownBlockType _personaUpdateCallbackHandler;
}

+ (id)sharedServer;
@property(copy, nonatomic) CDUnknownBlockType personaUpdateCallbackHandler; // @synthesize personaUpdateCallbackHandler=_personaUpdateCallbackHandler;
@property(retain, nonatomic) NSXPCListener *xpcListener; // @synthesize xpcListener=_xpcListener;
@property(retain, nonatomic) NSMutableSet *xpcConnections; // @synthesize xpcConnections=_xpcConnections;
@property(retain, nonatomic) NSString *machServiceName; // @synthesize machServiceName=_machServiceName;
- (void).cxx_destruct;
- (void)_tearDownConnectionToUMServerWithConnection:(id)arg1;
- (void)_setUpUMServerXPCConnectionIfNeeded:(id)arg1;
- (BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (void)personaUpdateCallbackForMachServiceCompletionHandler:(CDUnknownBlockType)arg1;
- (void)personaListDidUpdateCompletionHandler:(CDUnknownBlockType)arg1;
- (void)bubbleDidPop;
- (void)uploadContentWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)deviceLoginSessionStateDidUpdate;
- (void)userSwitchTaskListDidUpdate;
- (void)readyToSwitchToLoginSession:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)readyToSwitchToUser:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)willSwitchToUser:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)setupPersonaCallbackMachService:(id)arg1 callbackHandler:(CDUnknownBlockType)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
