//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "HMFObject.h"

#import "HMDHomeMessageReceiver.h"
#import "HMFLogging.h"
#import "NSSecureCoding.h"

@class ACAccount, HMDAppleMediaAccessory, HMDRemoteLoginAnisetteDataHandler, HMDRemoteLoginInitiator, HMDRemoteLoginReceiver, HMFMessageDispatcher, NSObject<OS_dispatch_queue>, NSSet, NSString, NSUUID;

@interface HMDRemoteLoginHandler : HMFObject <HMDHomeMessageReceiver, HMFLogging, NSSecureCoding>
{
    NSUUID *_uuid;
    HMDRemoteLoginInitiator *_initiator;
    HMDRemoteLoginReceiver *_receiver;
    HMDAppleMediaAccessory *_accessory;
    HMDRemoteLoginAnisetteDataHandler *_anisetteDataHandler;
    ACAccount *_loggedInAccount;
    NSObject<OS_dispatch_queue> *_workQueue;
    HMFMessageDispatcher *_msgDispatcher;
}

+ (id)remoteMessages;
+ (BOOL)supportsSecureCoding;
+ (BOOL)hasMessageReceiverChildren;
+ (id)logCategory;
@property(retain, nonatomic) HMFMessageDispatcher *msgDispatcher; // @synthesize msgDispatcher=_msgDispatcher;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
@property(retain, nonatomic) ACAccount *loggedInAccount; // @synthesize loggedInAccount=_loggedInAccount;
@property(readonly, nonatomic) HMDRemoteLoginAnisetteDataHandler *anisetteDataHandler; // @synthesize anisetteDataHandler=_anisetteDataHandler;
@property(readonly, nonatomic) __weak HMDAppleMediaAccessory *accessory; // @synthesize accessory=_accessory;
@property(readonly, nonatomic) HMDRemoteLoginReceiver *receiver; // @synthesize receiver=_receiver;
@property(readonly, nonatomic) HMDRemoteLoginInitiator *initiator; // @synthesize initiator=_initiator;
@property(readonly, nonatomic) NSUUID *uuid; // @synthesize uuid=_uuid;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
@property(readonly, copy) NSSet *messageReceiverChildren;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property(readonly, nonatomic) NSUUID *messageTargetUUID;
- (void)_updateLoggedInAccount:(id)arg1;
- (void)__handleUpdateLoggedInAccount:(id)arg1;
- (void)_sendAccountUpdateNotification:(id)arg1;
- (void)_handleRemoteLoginAccount:(id)arg1 message:(id)arg2;
- (void)registerForMessages;
- (void)configureWithWorkQueue:(id)arg1 messageDispatcher:(id)arg2;
- (void)_initialize;
- (id)logIdentifier;
- (id)initWithAccessory:(id)arg1 loggedInAccountData:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

