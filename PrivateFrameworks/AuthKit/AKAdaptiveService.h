//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSXPCListenerDelegate.h"

@class NSString, NSXPCInterface, NSXPCListener;

@interface AKAdaptiveService : NSObject <NSXPCListenerDelegate>
{
    NSXPCInterface *_exportedInterface;
    id _exportedObject;
    NSXPCListener *_listener;
    CDUnknownBlockType _interruptionHandler;
    CDUnknownBlockType _invalidationHandler;
}

@property(copy) CDUnknownBlockType invalidationHandler; // @synthesize invalidationHandler=_invalidationHandler;
@property(copy) CDUnknownBlockType interruptionHandler; // @synthesize interruptionHandler=_interruptionHandler;
- (void).cxx_destruct;
- (BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (id)listenerEndpoint;
- (void)resume;
- (void)dealloc;
- (id)initWithInterface:(id)arg1 weakObject:(id)arg2;
- (id)initWithInterface:(id)arg1 strongObject:(id)arg2;
- (id)_initWithInterface:(id)arg1 object:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

