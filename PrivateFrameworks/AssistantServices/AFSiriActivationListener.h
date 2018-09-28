//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "AFInvalidating.h"
#import "AFSiriActivationService.h"
#import "NSXPCListenerDelegate.h"

@class NSObject<OS_dispatch_queue>, NSString, NSXPCListener;

@interface AFSiriActivationListener : NSObject <NSXPCListenerDelegate, AFSiriActivationService, AFInvalidating>
{
    NSObject<OS_dispatch_queue> *_queue;
    NSXPCListener *_xpcListener;
    id <AFSiriActivationListenerDelegate> _delegate;
}

- (void).cxx_destruct;
- (void)_invalidate;
- (void)_stop;
- (void)_startWithDelegate:(id)arg1;
- (oneway void)handleIntent:(id)arg1 inBackgroundAppWithBundleId:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (oneway void)activateWithRequestInfo:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (oneway void)prewarmForRequestInfo:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (void)invalidate;
- (void)stop;
- (void)startWithDelegate:(id)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

