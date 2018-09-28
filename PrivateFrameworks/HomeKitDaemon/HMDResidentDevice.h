//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "HMFObject.h"

#import "HMDBackingStoreObjectProtocol.h"
#import "HMFDumpState.h"
#import "HMFLogging.h"
#import "NSSecureCoding.h"

@class HMDDevice, HMDHome, HMDResidentDeviceManager, HMFUnfairLock, NSString, NSUUID;

@interface HMDResidentDevice : HMFObject <HMDBackingStoreObjectProtocol, HMFDumpState, HMFLogging, NSSecureCoding>
{
    HMFUnfairLock *__lock;
    BOOL _enabled;
    BOOL _confirmed;
    BOOL _reachable;
    BOOL _lowBattery;
    HMDDevice *_device;
    NSUUID *_identifier;
    long long _batteryState;
    HMDHome *_home;
    HMDResidentDeviceManager *_residentDeviceManager;
}

+ (BOOL)supportsSecureCoding;
+ (id)logCategory;
+ (id)batteryStateAsString:(long long)arg1;
+ (id)shortDescription;
@property(nonatomic) __weak HMDResidentDeviceManager *residentDeviceManager; // @synthesize residentDeviceManager=_residentDeviceManager;
@property(nonatomic) __weak HMDHome *home; // @synthesize home=_home;
@property(nonatomic, getter=isLowBattery) BOOL lowBattery; // @synthesize lowBattery=_lowBattery;
@property(nonatomic) long long batteryState; // @synthesize batteryState=_batteryState;
@property(nonatomic, getter=isReachable) BOOL reachable; // @synthesize reachable=_reachable;
@property(nonatomic, getter=isConfirmed) BOOL confirmed; // @synthesize confirmed=_confirmed;
@property(nonatomic, getter=isEnabled) BOOL enabled; // @synthesize enabled=_enabled;
@property(copy, nonatomic) NSUUID *identifier; // @synthesize identifier=_identifier;
@property(retain, nonatomic) HMDDevice *device; // @synthesize device=_device;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)logIdentifier;
- (id)dumpState;
- (id)modelObjectWithChangeType:(unsigned long long)arg1 version:(long long)arg2;
- (void)_handleResidentDeviceUpdateConfirmed:(BOOL)arg1;
- (void)_handleResidentDeviceUpdateEnabled:(BOOL)arg1;
- (void)_residentDeviceModelUpdated:(id)arg1 newValues:(id)arg2 message:(id)arg3;
- (void)transactionObjectRemoved:(id)arg1 message:(id)arg2;
- (void)transactionObjectUpdated:(id)arg1 newValues:(id)arg2 message:(id)arg3;
- (void)__deviceUpdated:(id)arg1;
- (void)__deviceAdded:(id)arg1;
- (void)__accountAdded:(id)arg1;
- (id)runtimeState;
@property(readonly, nonatomic) BOOL supportsMediaSystem;
@property(readonly, nonatomic) BOOL supportsSharedEventTriggerActivation;
@property(readonly, nonatomic) unsigned long long status;
- (BOOL)isEqual:(id)arg1;
@property(readonly) unsigned long long hash;
@property(readonly, copy) NSString *description;
@property(readonly, copy) NSString *debugDescription;
- (id)descriptionWithPointer:(BOOL)arg1;
- (id)shortDescription;
@property(readonly, nonatomic) unsigned long long capabilities;
@property(readonly, getter=isBlocked) BOOL blocked;
- (void)configureWithHome:(id)arg1;
- (void)dealloc;
- (id)initWithDevice:(id)arg1;
- (id)initWithModel:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly) Class superclass;

@end

