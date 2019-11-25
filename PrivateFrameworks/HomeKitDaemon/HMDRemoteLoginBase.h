//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "HMFObject.h"

#import "HMDHomeMessageReceiver.h"
#import "HMFLogging.h"

@class HMDAppleMediaAccessory, HMDRemoteLoginHandler, HMFMessageDispatcher, NSObject<OS_dispatch_queue>, NSSet, NSString, NSUUID;

@interface HMDRemoteLoginBase : HMFObject <HMFLogging, HMDHomeMessageReceiver>
{
    NSUUID *_uuid;
    HMDAppleMediaAccessory *_accessory;
    HMDRemoteLoginHandler *_remoteLoginHandler;
    NSString *_logString;
    NSObject<OS_dispatch_queue> *_workQueue;
    HMFMessageDispatcher *_msgDispatcher;
}

+ (id)logCategory;
+ (BOOL)hasMessageReceiverChildren;
@property(retain, nonatomic) HMFMessageDispatcher *msgDispatcher; // @synthesize msgDispatcher=_msgDispatcher;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
@property(readonly, nonatomic) NSString *logString; // @synthesize logString=_logString;
@property(readonly, nonatomic) __weak HMDRemoteLoginHandler *remoteLoginHandler; // @synthesize remoteLoginHandler=_remoteLoginHandler;
@property(readonly, nonatomic) __weak HMDAppleMediaAccessory *accessory; // @synthesize accessory=_accessory;
@property(readonly, nonatomic) NSUUID *uuid; // @synthesize uuid=_uuid;
- (void).cxx_destruct;
- (id)logIdentifier;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property(readonly, nonatomic) NSUUID *messageTargetUUID;
- (void)registerForMessages;
- (void)configureWithWorkQueue:(id)arg1 messageDispatcher:(id)arg2;
@property(readonly, copy) NSString *description;
- (id)initWithUUID:(id)arg1 accessory:(id)arg2 remoteLoginHandler:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly, copy) NSSet *messageReceiverChildren;
@property(readonly) Class superclass;

@end

