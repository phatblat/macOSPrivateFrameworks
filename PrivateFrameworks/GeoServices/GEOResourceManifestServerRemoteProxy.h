//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "GEOResourceManifestServerProxy.h"

@class GEOActiveTileGroup, GEOResourceManifestConfiguration, NSLock, NSObject<OS_dispatch_queue>, NSObject<OS_xpc_object>, NSString;

@interface GEOResourceManifestServerRemoteProxy : NSObject <GEOResourceManifestServerProxy>
{
    id <GEOResourceManifestServerProxyDelegate> _delegate;
    NSObject<OS_dispatch_queue> *_connectionQueue;
    NSObject<OS_xpc_object> *_conn;
    BOOL _sentConfigurationMessage;
    BOOL _hasOpenConnection;
    BOOL _isUpdatingManifest;
    BOOL _isLoadingResources;
    NSObject<OS_dispatch_queue> *_serverQueue;
    GEOResourceManifestConfiguration *_configuration;
    NSLock *_authTokenLock;
    NSString *_authToken;
    int _activeTileGroupChangedNotificationToken;
}

@property(nonatomic) __weak id <GEOResourceManifestServerProxyDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_handleMessage:(id)arg1 xpcMessage:(id)arg2;
- (void)deactivateResourceScenario:(int)arg1;
- (void)activateResourceScenario:(int)arg1;
- (void)deactivateResourceScale:(int)arg1;
- (void)activateResourceScale:(int)arg1;
- (void)performOpportunisticResourceLoading;
- (void)setManifestToken:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)getResourceManifestWithHandler:(CDUnknownBlockType)arg1;
- (id)updateProgress;
- (void)cancelCurrentManifestUpdate;
- (void)forceUpdate:(long long)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)updateIfNecessary:(CDUnknownBlockType)arg1;
- (oneway void)resetActiveTileGroup;
- (oneway void)setActiveTileGroupIdentifier:(id)arg1;
- (void)closeConnection;
- (void)openConnection;
- (id)_xpcConnection;
- (id)configuration;
- (id)authToken;
- (void)dealloc;
@property(readonly, nonatomic) GEOActiveTileGroup *activeTileGroup;
- (id)initWithDelegate:(id)arg1 configuration:(id)arg2;
- (id)serverQueue;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
