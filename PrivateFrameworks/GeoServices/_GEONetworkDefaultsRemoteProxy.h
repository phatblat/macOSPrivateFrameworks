//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "_GEONetworkDefaultsServerProxy.h"

@class NSMutableArray, NSObject<OS_dispatch_queue>, NSString;

__attribute__((visibility("hidden")))
@interface _GEONetworkDefaultsRemoteProxy : NSObject <_GEONetworkDefaultsServerProxy>
{
    id <_GEONetworkDefaultsServerProxyDelegate> _delegate;
    NSObject<OS_dispatch_queue> *_isolation;
    NSObject<OS_dispatch_queue> *_xpcQueue;
    NSMutableArray *_updateCompletionHandlers;
    int _configChangedToken;
}

@property(nonatomic) __weak id <_GEONetworkDefaultsServerProxyDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)updateNetworkDefaults:(CDUnknownBlockType)arg1;
- (void)_networkDefaultsDidChange;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

