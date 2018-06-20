//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "HMFObject.h"

#import "HMDBackingStoreModelBackedObjectProtocol.h"
#import "HMDBackingStoreObjectProtocol.h"
#import "NSCopying.h"
#import "NSSecureCoding.h"

@class HMDDeviceCapabilitiesModel, NSString, NSUUID;

@interface HMDDeviceCapabilities : HMFObject <HMDBackingStoreObjectProtocol, HMDBackingStoreModelBackedObjectProtocol, NSCopying, NSSecureCoding>
{
    HMDDeviceCapabilitiesModel *_objectModel;
}

+ (id)deviceCapabilitiesModelIdentifierWithParentIdentifier:(id)arg1;
+ (BOOL)supportsSecureCoding;
+ (id)deviceCapabilities;
+ (BOOL)supportsReceivingRemoteCameraStream;
+ (BOOL)supportsDismissUserNotificationAndDialog;
+ (BOOL)supportsUserNotifications;
+ (BOOL)supportsCameraSnapshotRequestViaRelay;
+ (BOOL)supportsTargetControllerAutoConfigure;
+ (BOOL)supportsRemoteAccess;
+ (BOOL)isAppleMediaAccessory;
+ (BOOL)supportsCustomerReset;
+ (BOOL)supportsIntentDonation;
+ (BOOL)supportsHomeApp;
+ (BOOL)supportsLocalization;
@property(retain, nonatomic) HMDDeviceCapabilitiesModel *objectModel; // @synthesize objectModel=_objectModel;
- (void).cxx_destruct;
- (id)modelBackedObjects;
- (id)backingStoreObjectsWithChangeType:(unsigned long long)arg1 version:(long long)arg2;
- (id)modelObjectWithChangeType:(unsigned long long)arg1 version:(long long)arg2;
- (id)modelCopyWithChangeType:(unsigned long long)arg1 uuid:(id)arg2 parentUUID:(id)arg3;
@property(retain, nonatomic) NSUUID *modelParentIdentifier;
@property(readonly, nonatomic) NSUUID *modelIdentifier;
- (void)transactionObjectUpdated:(id)arg1 newValues:(id)arg2 message:(id)arg3;
- (void)transactionObjectRemoved:(id)arg1 message:(id)arg2;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, nonatomic) BOOL supportsTargetControl;
@property(readonly, nonatomic) BOOL supportsHomeInvitation;
@property(readonly, nonatomic, getter=isRemoteGatewayCapable) BOOL remoteGatewayCapable;
@property(readonly, nonatomic, getter=isResidentCapable) BOOL residentCapable;
@property(readonly, nonatomic) BOOL supportsAssistantAccessControl;
@property(readonly, nonatomic) BOOL supportsWholeHouseAudio;
@property(readonly, nonatomic) BOOL supportsCloudDataSync;
@property(readonly, nonatomic) BOOL supportsStandaloneMode;
@property(readonly, nonatomic) BOOL supportsKeyTransferServer;
@property(readonly, nonatomic) BOOL supportsKeyTransferClient;
@property(readonly, nonatomic) BOOL supportsDeviceSetup;
@property(readonly, nonatomic) BOOL supportsKeychainSync;
- (id)attributeDescriptions;
- (BOOL)isEqual:(id)arg1;
@property(readonly) unsigned long long hash;
- (id)initWithObjectModel:(id)arg1;
- (id)initWithProductInfo:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end
