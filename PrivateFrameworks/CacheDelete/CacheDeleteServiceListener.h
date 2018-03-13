//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CacheDelete/CacheDeleteListener.h>

#import "CacheDeleteServiceProtocol.h"

@class CacheDeleteServiceInfo, NSObject<OS_dispatch_queue>, NSXPCListenerEndpoint;

@interface CacheDeleteServiceListener : CacheDeleteListener <CacheDeleteServiceProtocol>
{
    BOOL _legacyCallbacks;
    BOOL _anonymous;
    CacheDeleteServiceInfo *_serviceInfo;
    NSXPCListenerEndpoint *_endpoint;
    CDUnknownBlockType _purgeable;
    CDUnknownBlockType _purge;
    CDUnknownBlockType _periodic;
    CDUnknownBlockType _cancel;
    CDUnknownBlockType _notify;
    CDUnknownBlockType _callback;
    NSObject<OS_dispatch_queue> *_queue;
}

+ (id)cacheDeleteServiceListener:(id)arg1 options:(id)arg2;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(copy, nonatomic) CDUnknownBlockType callback; // @synthesize callback=_callback;
@property(copy, nonatomic) CDUnknownBlockType notify; // @synthesize notify=_notify;
@property(copy, nonatomic) CDUnknownBlockType cancel; // @synthesize cancel=_cancel;
@property(copy, nonatomic) CDUnknownBlockType periodic; // @synthesize periodic=_periodic;
@property(copy, nonatomic) CDUnknownBlockType purge; // @synthesize purge=_purge;
@property(copy, nonatomic) CDUnknownBlockType purgeable; // @synthesize purgeable=_purgeable;
@property(readonly) NSXPCListenerEndpoint *endpoint; // @synthesize endpoint=_endpoint;
@property(readonly, nonatomic) CacheDeleteServiceInfo *serviceInfo; // @synthesize serviceInfo=_serviceInfo;
@property(readonly) BOOL anonymous; // @synthesize anonymous=_anonymous;
@property(readonly) BOOL legacyCallbacks; // @synthesize legacyCallbacks=_legacyCallbacks;
- (void).cxx_destruct;
- (void)serviceCallback:(id)arg1 replyBlock:(CDUnknownBlockType)arg2;
- (void)setNotifyCallback:(CDUnknownBlockType)arg1;
- (void)serviceNotify:(id)arg1 replyBlock:(CDUnknownBlockType)arg2;
- (void)servicePing:(CDUnknownBlockType)arg1;
- (void)servicePeriodic:(int)arg1 info:(id)arg2 replyBlock:(CDUnknownBlockType)arg3;
- (void)serviceCancelPurge:(CDUnknownBlockType)arg1;
- (void)servicePurge:(int)arg1 info:(id)arg2 replyBlock:(CDUnknownBlockType)arg3;
- (void)servicePurgeable:(int)arg1 info:(id)arg2 replyBlock:(CDUnknownBlockType)arg3;
- (void)setPurgeable:(CDUnknownBlockType)arg1 purge:(CDUnknownBlockType)arg2 cancel:(CDUnknownBlockType)arg3 periodic:(CDUnknownBlockType)arg4 notify:(CDUnknownBlockType)arg5 callback:(CDUnknownBlockType)arg6 entitlements:(id)arg7;
- (id)initWithName:(id)arg1 options:(id)arg2;

@end

