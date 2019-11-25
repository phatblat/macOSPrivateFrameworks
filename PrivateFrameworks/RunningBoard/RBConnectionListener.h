//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSXPCListenerDelegate.h"
#import "RBStateCapturing.h"

@class NSArray, NSMapTable, NSObject<OS_dispatch_queue>, NSObject<OS_os_transaction>, NSObject<OS_xpc_object>, NSString, RBConnectionContext;

__attribute__((visibility("hidden")))
@interface RBConnectionListener : NSObject <NSXPCListenerDelegate, RBStateCapturing>
{
    struct os_unfair_lock_s _lock;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_xpc_object> *_listener;
    NSMapTable *_lock_connectionToClientMap;
    NSMapTable *_lock_identifierToClientMap;
    RBConnectionContext *_context;
    NSObject<OS_os_transaction> *_transaction;
}

+ (id)sharedConnectionWorkloop;
- (void).cxx_destruct;
- (id)captureState;
@property(readonly, copy, nonatomic) NSString *stateCaptureTitle;
- (void)stop;
- (void)start;
@property(readonly, nonatomic) NSArray *clients;
@property(readonly, copy) NSString *debugDescription;
- (id)initWithContext:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

