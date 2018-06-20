//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSSecureCoding.h"
#import "NSXPCListenerDelegate.h"

@class NSObject<OS_dispatch_queue>, NSString, NSXPCListener, NSXPCListenerEndpoint;

__attribute__((visibility("hidden")))
@interface VSGenericUpdateEndpoint : NSObject <NSXPCListenerDelegate, NSSecureCoding>
{
    NSXPCListenerEndpoint *_endpoint;
    NSObject<OS_dispatch_queue> *_queue;
    NSXPCListener *_listener;
    CDUnknownBlockType _handler;
}

+ (BOOL)supportsSecureCoding;
+ (CDUnknownBlockType)remoteUpdateHanderForEndpoint:(id)arg1;
+ (id)configuredEndpointWithUpdateHandler:(CDUnknownBlockType)arg1 withConnection:(id)arg2;
@property(copy, nonatomic) CDUnknownBlockType handler; // @synthesize handler=_handler;
@property(retain, nonatomic) NSXPCListener *listener; // @synthesize listener=_listener;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(retain, nonatomic) NSXPCListenerEndpoint *endpoint; // @synthesize endpoint=_endpoint;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)invalidate;
- (BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

