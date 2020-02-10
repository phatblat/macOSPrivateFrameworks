//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "HMFMessageTransport.h"

#import "HMDaemonConnection.h"
#import "HMFLogging.h"

@class HMDApplicationRegistry, HMDProcessInfo, HMDXPCRequestTracker, NSObject<OS_dispatch_queue>, NSSet, NSString, NSXPCConnection;

@interface HMDXPCClientConnection : HMFMessageTransport <HMDaemonConnection, HMFLogging>
{
    BOOL _activated;
    BOOL _entitledForAPIAccess;
    BOOL _entitledForBackgroundMode;
    BOOL _entitledForCameraClipsAccess;
    BOOL _entitledForMultiUserSetupAccess;
    NSXPCConnection *_xpcConnection;
    HMDProcessInfo *_processInfo;
    unsigned long long _entitlements;
    NSString *_clientName;
    HMDXPCRequestTracker *_requestTracker;
    NSObject<OS_dispatch_queue> *_workQueue;
    HMDApplicationRegistry *_appRegistry;
}

+ (id)logCategory;
+ (unsigned long long)entitlementsForConnection:(id)arg1;
@property(nonatomic) __weak HMDApplicationRegistry *appRegistry; // @synthesize appRegistry=_appRegistry;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
@property(readonly, nonatomic) HMDXPCRequestTracker *requestTracker; // @synthesize requestTracker=_requestTracker;
@property(retain, nonatomic) NSString *clientName; // @synthesize clientName=_clientName;
@property(readonly, nonatomic, getter=isEntitledForMultiUserSetupAccess) BOOL entitledForMultiUserSetupAccess; // @synthesize entitledForMultiUserSetupAccess=_entitledForMultiUserSetupAccess;
@property(readonly, nonatomic, getter=isEntitledForCameraClipsAccess) BOOL entitledForCameraClipsAccess; // @synthesize entitledForCameraClipsAccess=_entitledForCameraClipsAccess;
@property(readonly, nonatomic, getter=isEntitledForBackgroundMode) BOOL entitledForBackgroundMode; // @synthesize entitledForBackgroundMode=_entitledForBackgroundMode;
@property(readonly, nonatomic, getter=isEntitledForAPIAccess) BOOL entitledForAPIAccess; // @synthesize entitledForAPIAccess=_entitledForAPIAccess;
@property(readonly) unsigned long long entitlements; // @synthesize entitlements=_entitlements;
@property(nonatomic, getter=isActivated) BOOL activated; // @synthesize activated=_activated;
@property(nonatomic) __weak HMDProcessInfo *processInfo; // @synthesize processInfo=_processInfo;
@property(nonatomic) __weak NSXPCConnection *xpcConnection; // @synthesize xpcConnection=_xpcConnection;
- (void).cxx_destruct;
- (id)logIdentifier;
- (void)sendMessage:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)checkinWithName:(id)arg1;
- (void)handleMessage:(id)arg1 responseHandler:(CDUnknownBlockType)arg2;
- (void)handleMessage:(id)arg1;
- (BOOL)canSendMessage:(id)arg1;
- (void)_notifyOfNewIncomingClientMessage;
- (BOOL)shouldSendResponseForMessageIdentifier:(id)arg1;
@property(readonly, nonatomic) NSSet *activeRequests;
- (void)deactivate;
- (void)activate;
@property(readonly, nonatomic) id remoteProxy;
- (id)_extractBundleIdentifier;
- (id)extractTeamIdentifier;
@property(readonly, nonatomic) NSString *teamIdentifier;
@property(readonly, nonatomic) NSString *companionAppBundleIdentifier;
@property(readonly, nonatomic) NSString *applicationBundleIdentifier;
@property(readonly, getter=isPlatformBinary) BOOL platformBinary;
@property(readonly, nonatomic) int clientPid;
@property(readonly, nonatomic) NSString *name;
- (id)_displayName;
@property(readonly, nonatomic, getter=isEntitledForShortcutsAutomationAccess) BOOL entitledForShortcutsAutomationAccess;
@property(readonly, nonatomic, getter=isEntitledToProvideAccessorySetupPayload) BOOL entitledToProvideAccessorySetupPayload;
@property(readonly, nonatomic, getter=isEntitledForHomeLocationAccess) BOOL entitledForHomeLocationAccess;
@property(readonly, nonatomic, getter=isAuthorizedForLocationAccess) BOOL authorizedForLocationAccess;
@property(readonly, getter=isEntitledForSPIAccess) BOOL entitledForSPIAccess;
@property(readonly, nonatomic, getter=isAuthorizedForMicrophoneAccess) BOOL authorizedForMicrophoneAccess;
@property(readonly, nonatomic, getter=isAuthorizedForHomeDataAccess) BOOL authorizedForHomeDataAccess;
@property(readonly, copy) NSString *description;
- (void)dealloc;
- (id)initWithConnection:(id)arg1 queue:(id)arg2 activeMessageTracker:(id)arg3 appRegistry:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
