//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "HMFObject.h"

#import "APSConnectionDelegate.h"
#import "HMDAccountManager.h"
#import "HMFLogging.h"
#import "HMFMessageReceiver.h"
#import "HMFTimerDelegate.h"
#import "IDSAccountDelegate.h"
#import "IDSAccountRegistrationDelegate.h"
#import "IDSServiceDelegate.h"

@class ACAccountStore, HMDAccount, HMDAppleAccountContext, HMDAppleAccountSettings, HMDBackingStore, HMDDevice, HMFExponentialBackoffTimer, HMFTimer, HMFUnfairLock, IDSService, NSObject<OS_dispatch_queue>, NSString, NSUUID;

@interface HMDAppleAccountManager : HMFObject <HMDAccountManager, HMFLogging, HMFMessageReceiver, HMFTimerDelegate, IDSServiceDelegate>
{
    HMFUnfairLock *_lock;
    BOOL _monitoring;
    HMDAccount *_account;
    HMDAppleAccountContext *_accountContext;
    ACAccountStore *_accountStore;
    NSObject<OS_dispatch_queue> *_clientQueue;
    HMFExponentialBackoffTimer *_accountChangeBackoffTimer;
    HMFTimer *_devicesChangeBackoffTimer;
    IDSService *_service;
    HMDBackingStore *_backingStore;
}

+ (id)logCategory;
+ (id)sharedManager;
@property(retain, nonatomic) HMDBackingStore *backingStore; // @synthesize backingStore=_backingStore;
@property(readonly, nonatomic) IDSService *service; // @synthesize service=_service;
@property(nonatomic, getter=isMonitoring) BOOL monitoring; // @synthesize monitoring=_monitoring;
@property(readonly, nonatomic) HMFTimer *devicesChangeBackoffTimer; // @synthesize devicesChangeBackoffTimer=_devicesChangeBackoffTimer;
@property(readonly, nonatomic) HMFExponentialBackoffTimer *accountChangeBackoffTimer; // @synthesize accountChangeBackoffTimer=_accountChangeBackoffTimer;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *clientQueue; // @synthesize clientQueue=_clientQueue;
@property(readonly) ACAccountStore *accountStore; // @synthesize accountStore=_accountStore;
- (void).cxx_destruct;
- (void)service:(id)arg1 devicesChanged:(id)arg2;
- (void)service:(id)arg1 activeAccountsChanged:(id)arg2;
- (void)account:(id)arg1 aliasesChanged:(id)arg2;
- (void)account:(id)arg1 isActiveChanged:(BOOL)arg2;
- (void)timerDidFire:(id)arg1;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property(readonly, nonatomic) NSUUID *messageTargetUUID;
@property(readonly, nonatomic) HMDAppleAccountSettings *settings;
- (void)processAccountModelRemove:(id)arg1 message:(id)arg2;
- (void)processAccountModel:(id)arg1 message:(id)arg2;
- (BOOL)isModelCurrentAccount:(id)arg1;
- (id)primaryHandleForAccount:(id)arg1;
- (BOOL)shouldDevice:(id)arg1 processModel:(id)arg2 actions:(id)arg3;
- (BOOL)shouldAccount:(id)arg1 pushbackModel:(id)arg2 actions:(id)arg3;
- (BOOL)shouldSyncDevice:(id)arg1;
- (BOOL)shouldSyncAccount:(id)arg1;
- (BOOL)shouldCacheAccount:(id)arg1;
@property(readonly) HMDDevice *device;
- (void)__deviceRemovedFromCurrentAccount:(id)arg1;
- (void)__deviceAddedToCurrentAccount:(id)arg1;
@property(retain) HMDAccount *account; // @synthesize account=_account;
@property(readonly) HMDAppleAccountContext *accountContext; // @synthesize accountContext=_accountContext;
- (void)__handleUpdatedName:(id)arg1;
- (void)__handleRemovedAccount:(id)arg1;
- (void)__handleModifiedAccount:(id)arg1;
- (void)stop;
- (void)start;
- (id)initWithIDSService:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

