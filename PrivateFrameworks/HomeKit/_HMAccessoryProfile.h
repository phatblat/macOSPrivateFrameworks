//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "HMFMessageReceiver.h"
#import "HMObjectMerge.h"
#import "NSSecureCoding.h"

@class HMAccessory, HMFUnfairLock, HMHome, NSArray, NSObject<OS_dispatch_queue>, NSString, NSUUID, _HMContext;

__attribute__((visibility("hidden")))
@interface _HMAccessoryProfile : NSObject <HMObjectMerge, HMFMessageReceiver, NSSecureCoding>
{
    HMFUnfairLock *_lock;
    NSUUID *_uniqueIdentifier;
    _HMContext *_context;
    HMAccessory *_accessory;
    HMHome *_home;
    NSUUID *_profileUniqueIdentifier;
    NSArray *_services;
}

+ (BOOL)supportsSecureCoding;
@property(readonly, nonatomic) NSArray *services; // @synthesize services=_services;
@property(readonly, copy, nonatomic) NSUUID *profileUniqueIdentifier; // @synthesize profileUniqueIdentifier=_profileUniqueIdentifier;
@property(readonly, nonatomic) __weak HMHome *home; // @synthesize home=_home;
@property(readonly, nonatomic) __weak HMAccessory *accessory; // @synthesize accessory=_accessory;
@property(readonly, nonatomic) _HMContext *context; // @synthesize context=_context;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
@property(readonly) unsigned long long hash;
- (BOOL)isEqual:(id)arg1;
@property(readonly, nonatomic) NSUUID *uniqueIdentifier; // @synthesize uniqueIdentifier=_uniqueIdentifier;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property(readonly, nonatomic) NSUUID *messageTargetUUID;
- (BOOL)_mergeWithNewObject:(id)arg1 operations:(id)arg2;
- (void)handleRuntimeStateUpdate:(id)arg1;
- (void)_registerNotificationHandlers;
- (void)__configureWithContext:(id)arg1 accessory:(id)arg2;
@property(readonly, copy) NSString *description;
- (id)initWithUUID:(id)arg1 services:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

