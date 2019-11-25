//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "CLSClientDelegate.h"
#import "NSLocking.h"

@class NSString, NSXPCConnection, NSXPCListenerEndpoint;

@interface CLSEndpointConnection : NSObject <CLSClientDelegate, NSLocking>
{
    struct os_unfair_recursive_lock_s _lock;
    NSXPCConnection *_serverConnection;
    NSXPCListenerEndpoint *_endpoint;
    BOOL _connectionBorked;
    BOOL _interrupted;
    int _progressdAvailableToken;
    int _devModeChangedToken;
    NSString *_overrideBundleIdentifier;
    CDUnknownBlockType _onInterupt;
    CDUnknownBlockType _onConnect;
}

+ (BOOL)isAllowedToMakeXPCCalls;
+ (BOOL)isClassKitEnabled;
+ (BOOL)isInDevelopmentEnvironment;
+ (id)classKitEnvironment;
+ (id)instanceForEndpoint:(id)arg1;
+ (id)sharedInstance;
@property(copy, nonatomic) CDUnknownBlockType onConnect; // @synthesize onConnect=_onConnect;
@property(copy, nonatomic) CDUnknownBlockType onInterupt; // @synthesize onInterupt=_onInterupt;
@property(copy, nonatomic) NSString *overrideBundleIdentifier; // @synthesize overrideBundleIdentifier=_overrideBundleIdentifier;
- (void).cxx_destruct;
- (void)devModeChanged;
- (void)accountChanged;
- (void)addBarrierBlock:(CDUnknownBlockType)arg1;
- (void)connect;
- (void)deleteAppWithBundleIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_updateBundleIdentifier:(id)arg1 forConnection:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)setOverrideBundleIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)listAppsWithCompletion:(CDUnknownBlockType)arg1;
- (id)server:(CDUnknownBlockType)arg1;
- (id)syncServer:(CDUnknownBlockType)arg1;
- (id)utilityServer:(CDUnknownBlockType)arg1;
- (id)syncUtilityServer:(CDUnknownBlockType)arg1;
- (id)dataServer:(CDUnknownBlockType)arg1;
- (id)syncDataServer:(CDUnknownBlockType)arg1;
- (void)invalidate;
- (void)connectionBorked;
- (void)connectionInterupted;
- (void)_envokeOnInteruptCallback;
- (id)serverConnection;
- (BOOL)isBorked;
- (void)_registerForDarwinNotifications;
- (void)unlock;
- (void)lock;
- (void)dealloc;
- (id)initWithEndpoint:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

