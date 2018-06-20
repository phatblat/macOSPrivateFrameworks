//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "HMFObject.h"

#import "HMDHomeMessageReceiver.h"
#import "HMFDumpState.h"
#import "HMFLogging.h"

@class HMDDevice, HMDEventTrigger, HMFMessageDispatcher, NSObject<OS_dispatch_queue>, NSSet, NSString, NSUUID;

@interface HMDEventTriggerSession : HMFObject <HMFDumpState, HMFLogging, HMDHomeMessageReceiver>
{
    NSUUID *_sessionID;
    NSString *_logString;
    HMFMessageDispatcher *_msgDispatcher;
    NSObject<OS_dispatch_queue> *_workQueue;
    HMDEventTrigger *_eventTrigger;
    NSUUID *_eventTriggerUUID;
    HMDDevice *_currentDevice;
}

+ (BOOL)hasMessageReceiverChildren;
+ (id)logCategory;
@property(readonly, nonatomic) HMDDevice *currentDevice; // @synthesize currentDevice=_currentDevice;
@property(readonly, nonatomic) NSUUID *eventTriggerUUID; // @synthesize eventTriggerUUID=_eventTriggerUUID;
@property(nonatomic) __weak HMDEventTrigger *eventTrigger; // @synthesize eventTrigger=_eventTrigger;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
@property(readonly, nonatomic) HMFMessageDispatcher *msgDispatcher; // @synthesize msgDispatcher=_msgDispatcher;
@property(readonly, nonatomic) NSString *logString; // @synthesize logString=_logString;
@property(readonly, nonatomic) NSUUID *sessionID; // @synthesize sessionID=_sessionID;
- (void).cxx_destruct;
- (BOOL)sendMessage:(id)arg1 payload:(id)arg2 device:(id)arg3 target:(id)arg4 responseHandler:(CDUnknownBlockType)arg5;
- (BOOL)sendMessage:(id)arg1 payload:(id)arg2 device:(id)arg3 responseHandler:(CDUnknownBlockType)arg4;
- (BOOL)sendResidentMessage:(id)arg1 payload:(id)arg2 responseHandler:(CDUnknownBlockType)arg3;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property(readonly, nonatomic) NSUUID *messageTargetUUID;
- (id)logIdentifier;
@property(readonly, copy) NSString *description;
- (id)dumpState;
- (void)_registerForMessages;
- (void)dealloc;
- (id)initWithSessionID:(id)arg1 eventTrigger:(id)arg2 workQueue:(id)arg3 msgDispatcher:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly, copy) NSSet *messageReceiverChildren;
@property(readonly) Class superclass;

@end
