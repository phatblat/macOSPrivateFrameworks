//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "HMFLogging.h"
#import "HMFMessageReceiver.h"
#import "HMObjectMerge.h"
#import "NSSecureCoding.h"

@class HMBulletinBoardNotification, HMFUnfairLock, NSArray, NSObject<OS_dispatch_queue>, NSSet, NSString, NSUUID, _HMContext;

@interface HMBulletinBoardNotificationServiceGroup : NSObject <HMFLogging, HMFMessageReceiver, NSSecureCoding, HMObjectMerge>
{
    HMFUnfairLock *_lock;
    NSArray *_cameraProfiles;
    NSArray *_associatedServices;
    NSSet *_cameraProfileUUIDs;
    NSSet *_associatedServiceUUIDs;
    HMBulletinBoardNotification *_bulletinBoardNotification;
    NSUUID *_uniqueIdentifier;
    NSUUID *_targetUUID;
    _HMContext *_context;
    NSString *_logID;
}

+ (BOOL)supportsSecureCoding;
+ (id)logCategory;
@property(readonly, copy, nonatomic) NSString *logID; // @synthesize logID=_logID;
@property(retain, nonatomic) _HMContext *context; // @synthesize context=_context;
@property(readonly, nonatomic) __weak HMBulletinBoardNotification *bulletinBoardNotification; // @synthesize bulletinBoardNotification=_bulletinBoardNotification;
- (void).cxx_destruct;
- (BOOL)_mergeWithNewObject:(id)arg1 operations:(id)arg2;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property(readonly, nonatomic) NSUUID *messageTargetUUID;
- (id)logIdentifier;
@property(retain, nonatomic) NSSet *associatedServiceUUIDs; // @synthesize associatedServiceUUIDs=_associatedServiceUUIDs;
@property(retain, nonatomic) NSArray *associatedServices; // @synthesize associatedServices=_associatedServices;
- (void)_callServiceGroupUpdate;
@property(retain, nonatomic) NSSet *cameraProfileUUIDs; // @synthesize cameraProfileUUIDs=_cameraProfileUUIDs;
@property(retain, nonatomic) NSArray *cameraProfiles; // @synthesize cameraProfiles=_cameraProfiles;
- (void)_requestServiceGroup;
@property(readonly, copy, nonatomic) NSUUID *uniqueIdentifier; // @synthesize uniqueIdentifier=_uniqueIdentifier;
@property(readonly, copy, nonatomic) NSUUID *targetUUID; // @synthesize targetUUID=_targetUUID;
- (void)_findObjects;
- (void)handleConfigureNotification:(id)arg1;
- (void)_handleBulletinBoardNotificationServiceGroupUpdateNotification:(id)arg1;
- (void)_registerNotificationHandlers;
- (void)__configureWithContext:(id)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

