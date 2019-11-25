//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "HMFObject.h"

#import "HMFLogging.h"
#import "IDSServiceDelegate.h"

@class HMDDevice, IDSService, NSObject<OS_dispatch_queue>, NSString;

@interface HMDCompanionManager : HMFObject <HMFLogging, IDSServiceDelegate>
{
    id <HMFLocking> _lock;
    NSObject<OS_dispatch_queue> *_queue;
    HMDDevice *_companion;
    IDSService *_service;
}

+ (id)logCategory;
+ (id)shortDescription;
+ (BOOL)isCompatibleCompanionDevice:(id)arg1;
+ (id)sharedManager;
@property(readonly, nonatomic) IDSService *service; // @synthesize service=_service;
- (void).cxx_destruct;
- (void)service:(id)arg1 connectedDevicesChanged:(id)arg2;
- (void)service:(id)arg1 devicesChanged:(id)arg2;
@property(readonly) HMDDevice *companion; // @synthesize companion=_companion;
- (void)__initializeConnectedDevices;
- (id)attributeDescriptions;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

