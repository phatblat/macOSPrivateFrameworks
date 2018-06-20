//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "HMFObject.h"

#import "HMFLogging.h"
#import "HMFMessageReceiver.h"

@class HMDHomeManager, HMFMessageDestination, NSObject<OS_dispatch_queue>, NSString, NSUUID;

@interface HMDKeyTransferAgent : HMFObject <HMFLogging, HMFMessageReceiver>
{
    NSString *_progressState;
    unsigned long long _residentProvisioningStatus;
    NSObject<OS_dispatch_queue> *_workQueue;
    HMDHomeManager *_homeManager;
    NSUUID *_uuid;
}

+ (id)logCategory;
@property(retain, nonatomic) NSUUID *uuid; // @synthesize uuid=_uuid;
@property(nonatomic) __weak HMDHomeManager *homeManager; // @synthesize homeManager=_homeManager;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
@property(readonly) unsigned long long residentProvisioningStatus; // @synthesize residentProvisioningStatus=_residentProvisioningStatus;
@property(retain, nonatomic) NSString *progressState; // @synthesize progressState=_progressState;
- (void).cxx_destruct;
- (id)logIdentifier;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property(readonly, nonatomic) NSUUID *messageTargetUUID;
@property(readonly, copy) HMFMessageDestination *messageDestination;
- (void)resetConfig;
- (void)beginPairingWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)initWithHomeManager:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

