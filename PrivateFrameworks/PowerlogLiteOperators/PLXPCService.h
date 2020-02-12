//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PLService.h"

@class NSArray, NSDictionary, NSMutableDictionary, NSObject<OS_xpc_object>, PLNSNotificationOperatorComposition, PLSemaphore, PLTimer;

@interface PLXPCService : PLService
{
    unsigned int _responderWaitTime;
    NSObject<OS_xpc_object> *_xpcConnection;
    NSMutableDictionary *_registeredListeners;
    NSMutableDictionary *_registeredResponders;
    NSDictionary *_permissionCache;
    PLNSNotificationOperatorComposition *_registrationNotification;
    NSArray *_clientIDs;
    NSDictionary *_clientNames;
    PLTimer *_resetPermissionsForClientsTimer;
    PLNSNotificationOperatorComposition *_dailyTaskNotification;
    PLSemaphore *_satelliteProcessSemaphore;
}

+ (BOOL)allowQueryFromPeer:(id)arg1;
+ (id)defaults;
+ (id)entryAggregateDefinitionXPCEvent;
+ (id)entryAggregateDefinitions;
+ (id)entryEventIntervalDefinitionResponderEvent;
+ (id)entryEventIntervalDefinitions;
+ (id)entryEventPointDefinitionClientLogging;
+ (id)entryEventPointDefinitionClientLoggingDrops;
+ (id)entryEventPointDefinitions;
+ (void)load;
@property unsigned int responderWaitTime; // @synthesize responderWaitTime=_responderWaitTime;
@property(retain) PLSemaphore *satelliteProcessSemaphore; // @synthesize satelliteProcessSemaphore=_satelliteProcessSemaphore;
@property(retain) PLNSNotificationOperatorComposition *dailyTaskNotification; // @synthesize dailyTaskNotification=_dailyTaskNotification;
@property(retain) PLTimer *resetPermissionsForClientsTimer; // @synthesize resetPermissionsForClientsTimer=_resetPermissionsForClientsTimer;
@property(retain) NSDictionary *clientNames; // @synthesize clientNames=_clientNames;
@property(retain) NSArray *clientIDs; // @synthesize clientIDs=_clientIDs;
@property(retain) PLNSNotificationOperatorComposition *registrationNotification; // @synthesize registrationNotification=_registrationNotification;
@property(retain) NSDictionary *permissionCache; // @synthesize permissionCache=_permissionCache;
@property(retain) NSMutableDictionary *registeredResponders; // @synthesize registeredResponders=_registeredResponders;
@property(retain) NSMutableDictionary *registeredListeners; // @synthesize registeredListeners=_registeredListeners;
@property(retain) NSObject<OS_xpc_object> *xpcConnection; // @synthesize xpcConnection=_xpcConnection;
- (void).cxx_destruct;
- (void)setSatelliteProcessExit;
- (void)setSatelliteProcessExitWithTime:(double)arg1;
- (void)stopPowerlogHelperd:(id)arg1;
- (void)handlePeerListenerEvent:(id)arg1 withMessage:(id)arg2 withClientID:(short)arg3 withProcessName:(id)arg4 withKey:(id)arg5 withPayload:(id)arg6;
- (void)handlePeerResponderEvent:(id)arg1 withMessage:(id)arg2 withClientID:(short)arg3 withProcessName:(id)arg4 withKey:(id)arg5 withPayload:(id)arg6;
- (void)handlePeerShouldLogEvent:(id)arg1 withMessage:(id)arg2 withClientID:(short)arg3 withProcessName:(id)arg4 withKey:(id)arg5;
- (void)handleSingleMessage:(id)arg1 fromPeer:(id)arg2 forEvent:(id)arg3;
- (void)handlePeer:(id)arg1 forEvent:(id)arg2;
- (void)resetPermissionsForClients;
- (short)permissionForClientID:(short)arg1 withKey:(id)arg2 withType:(id)arg3 withProcessName:(id)arg4;
- (void)logMessage:(id)arg1 withPayload:(id)arg2;
- (void)respondToEvent:(id)arg1 withResponse:(id)arg2;
- (id)registeredOperatorFromDictionary:(id)arg1 forMessage:(id)arg2;
- (void)dailyTasks;
- (void)initSatelliteProcessSemaphore;
- (void)initOperatorDependancies;
- (id)init;

@end

