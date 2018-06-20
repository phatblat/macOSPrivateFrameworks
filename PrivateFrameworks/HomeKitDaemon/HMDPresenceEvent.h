//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <HomeKitDaemon/HMDEvent.h>

#import "HMDHomeMessageReceiver.h"
#import "HMDTriggerEventProtocol.h"
#import "HMFDumpState.h"
#import "HMFLogging.h"
#import "NSSecureCoding.h"

@class HMDEventTriggerExecutionSession, HMPresenceEventActivation, NSMutableArray, NSMutableDictionary, NSObject<OS_dispatch_queue>, NSSet, NSString, NSUUID;

@interface HMDPresenceEvent : HMDEvent <NSSecureCoding, HMFDumpState, HMFLogging, HMDHomeMessageReceiver, HMDTriggerEventProtocol>
{
    BOOL _currentStatus;
    NSString *_presenceType;
    HMPresenceEventActivation *_activation;
    NSMutableDictionary *_users;
    NSMutableArray *_userUUIDs;
    HMDEventTriggerExecutionSession *_executionSession;
}

+ (BOOL)supportsSecureCoding;
+ (id)logCategory;
@property(nonatomic) __weak HMDEventTriggerExecutionSession *executionSession; // @synthesize executionSession=_executionSession;
@property(nonatomic) BOOL currentStatus; // @synthesize currentStatus=_currentStatus;
@property(readonly, nonatomic) NSMutableArray *userUUIDs; // @synthesize userUUIDs=_userUUIDs;
@property(readonly, nonatomic) NSMutableDictionary *users; // @synthesize users=_users;
@property(readonly, nonatomic) HMPresenceEventActivation *activation; // @synthesize activation=_activation;
@property(retain, nonatomic) NSString *presenceType; // @synthesize presenceType=_presenceType;
- (void).cxx_destruct;
- (id)presenceMetricData;
- (id)metricData;
- (void)_transactionObjectRemoved:(id)arg1 message:(id)arg2;
- (void)_transactionObjectUpdated:(id)arg1 newValues:(id)arg2 message:(id)arg3;
- (id)modelObjectWithChangeType:(unsigned long long)arg1;
- (id)presenceTypeForClient;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (BOOL)removeUser:(id)arg1;
- (void)_addUser:(id)arg1;
- (void)_removeAllUsers;
- (void)_updateUsers:(id)arg1 payload:(id)arg2 home:(id)arg3;
- (void)_updatePresenceType:(id)arg1 payload:(id)arg2;
- (void)_handleUpdateRequest:(id)arg1;
- (BOOL)compatibleWithUser:(id)arg1;
- (BOOL)evaluateWithHomePresence:(id)arg1;
- (BOOL)evaluateWithUserPresence:(id)arg1;
- (BOOL)evaluateWithHomePresenceUpdate:(id)arg1;
- (void)didEndExecutionSession:(id)arg1;
- (void)_evaluatePresenceEventForHomePresenceUpdate:(id)arg1;
- (void)_handleHomePresenceUpdate:(id)arg1;
- (BOOL)_activate:(unsigned long long)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_registerForMessages;
@property(readonly, nonatomic) unsigned long long activationGranularity;
- (id)thisUser;
- (id)emptyModelObject;
- (id)createClientPayload;
- (id)createDaemonPayload;
- (id)createPresenceEventPayload:(BOOL)arg1;
- (id)createPayload;
- (void)configure:(id)arg1 messageDispatcher:(id)arg2 queue:(id)arg3 delegate:(id)arg4;
@property(readonly, copy) NSString *description;
- (void)dealloc;
- (id)initWithModel:(id)arg1 home:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property(readonly, copy) NSSet *messageReceiverChildren;
@property(readonly, nonatomic) NSUUID *messageTargetUUID;
@property(readonly) Class superclass;

@end

