//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "HMFObject.h"

#import "HMDBackingStoreObjectProtocol.h"
#import "HMDHomeMessageReceiver.h"
#import "HMFDumpState.h"
#import "HMFLogging.h"
#import "NSSecureCoding.h"

@class AVOutputDeviceAuthorizedPeer, HAPPairingIdentity, HMDAccountHandle, HMDAccountIdentifier, HMDAssistantAccessControl, HMDHome, HMUserPresenceAuthorization, NSMutableArray, NSObject<OS_dispatch_queue>, NSSet, NSString, NSUUID;

@interface HMDUser : HMFObject <HMFLogging, HMFDumpState, HMDBackingStoreObjectProtocol, HMDHomeMessageReceiver, NSSecureCoding>
{
    BOOL _remoteAccessAllowed;
    NSMutableArray *_relayAccessTokens;
    HMDAccountHandle *_accountHandle;
    HMDAccountIdentifier *_accountIdentifier;
    unsigned long long _privilege;
    HMDHome *_home;
    NSString *_userID;
    HMUserPresenceAuthorization *_presenceAuthStatus;
    NSString *_relayIdentifier;
    HAPPairingIdentity *_pairingIdentity;
    NSString *_displayName;
    HMDAssistantAccessControl *_assistantAccessControl;
    NSUUID *_uuid;
    NSObject<OS_dispatch_queue> *_clientQueue;
    NSObject<OS_dispatch_queue> *_propertyQueue;
}

+ (id)userWithDictionary:(id)arg1 forHome:(id)arg2;
+ (BOOL)supportsSecureCoding;
+ (BOOL)hasMessageReceiverChildren;
+ (id)logCategory;
+ (id)UUIDWithUserID:(id)arg1 forHomeIdentifier:(id)arg2 uuid:(id)arg3 pairingIdentity:(id)arg4;
+ (id)userIDForAccountHandle:(id)arg1;
+ (id)ownerWithUserID:(id)arg1 home:(id)arg2 pairingIdentity:(id)arg3 homeManager:(id)arg4;
+ (id)currentUserWithPrivilege:(unsigned long long)arg1 forHome:(id)arg2;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *propertyQueue; // @synthesize propertyQueue=_propertyQueue;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *clientQueue; // @synthesize clientQueue=_clientQueue;
@property(copy, setter=setUUID:) NSUUID *uuid; // @synthesize uuid=_uuid;
- (void).cxx_destruct;
- (id)dictionaryEncoding;
- (id)modelObjectWithChangeType:(unsigned long long)arg1 version:(long long)arg2;
- (id)modelObjectWithChangeType:(unsigned long long)arg1;
- (id)backingStoreObjects:(long long)arg1;
- (void)migrateAfterCloudMerge:(CDUnknownBlockType)arg1;
- (void)migrateCloudZone:(id)arg1 migrationQueue:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_fixupRelayAccessTokens;
- (void)transactionObjectRemoved:(id)arg1 message:(id)arg2;
- (void)_transactionUserUpdated:(id)arg1 newValues:(id)arg2 message:(id)arg3;
- (void)transactionObjectUpdated:(id)arg1 newValues:(id)arg2 message:(id)arg3;
- (void)updateRelayAccessTokens:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
@property(readonly, copy, nonatomic) NSString *encodingRemoteDisplayName;
- (id)initWithCoder:(id)arg1;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;
- (id)messageDestination;
@property(readonly, nonatomic) NSUUID *messageTargetUUID;
- (id)logIdentifier;
- (id)publicKey;
- (id)pairingUsername;
@property(copy) NSString *userID; // @synthesize userID=_userID;
- (id)userCopy;
- (void)removeRelayAccessTokenForAccessory:(id)arg1;
- (void)addRelayAccessToken:(id)arg1 accessory:(id)arg2;
- (void)removeRelayAccessToken:(id)arg1;
- (void)addRelayAccessToken:(id)arg1;
- (id)relayAccessTokenForAccessory:(id)arg1;
- (BOOL)containsRelayAccessToken:(id)arg1;
- (id)relayAccessTokens;
@property(copy) NSString *relayIdentifier; // @synthesize relayIdentifier=_relayIdentifier;
- (void)removeAccessoriesFromAssistantAccessControlList:(id)arg1;
- (void)_handleAssistantAccessControlUpdate:(id)arg1;
- (void)handleAssistantAccessControlUpdate:(id)arg1;
- (BOOL)isCurrentUserAndOwner;
@property(retain) HMDAssistantAccessControl *assistantAccessControl; // @synthesize assistantAccessControl=_assistantAccessControl;
@property(readonly, getter=isValid) BOOL valid;
@property(readonly, getter=isRemoteGateway) BOOL remoteGateway;
- (BOOL)updateRemoteAccessAllowed:(BOOL)arg1;
@property(getter=isRemoteAccessAllowed) BOOL remoteAccessAllowed; // @synthesize remoteAccessAllowed=_remoteAccessAllowed;
- (BOOL)refreshDisplayName;
- (void)setDisplayName:(id)arg1;
@property(readonly, copy) NSString *displayName; // @synthesize displayName=_displayName;
@property(copy) HMUserPresenceAuthorization *presenceAuthStatus; // @synthesize presenceAuthStatus=_presenceAuthStatus;
- (void)__handleRemovedAccount:(id)arg1;
- (void)__handleAddedAccount:(id)arg1;
- (BOOL)requiresMakoSupport;
- (id)account;
- (void)deregisterIdentity;
- (void)registerIdentity;
@property(copy) HAPPairingIdentity *pairingIdentity; // @synthesize pairingIdentity=_pairingIdentity;
@property(copy) HMDAccountIdentifier *accountIdentifier;
- (void)setAccountHandle:(id)arg1;
- (id)accountHandle;
@property(readonly, getter=isCurrentUser) BOOL currentUser;
- (BOOL)updateAdministrator:(BOOL)arg1;
@property unsigned long long privilege; // @synthesize privilege=_privilege;
@property(readonly, getter=isOwner) BOOL owner;
@property(readonly, getter=isAdministrator) BOOL administrator;
- (unsigned long long)_compatiblePrivilege;
@property __weak HMDHome *home; // @synthesize home=_home;
- (void)registerForMessages;
- (id)messageDispatcher;
- (void)configureWithHome:(id)arg1;
- (id)dumpState;
- (id)attributeDescriptions;
- (id)shortDescription;
- (BOOL)isEqual:(id)arg1;
@property(readonly) unsigned long long hash;
- (void)dealloc;
- (id)initWithAccountHandle:(id)arg1 home:(id)arg2 pairingIdentity:(id)arg3 privilege:(unsigned long long)arg4;
- (id)initWithModelObject:(id)arg1;
@property(readonly, copy) AVOutputDeviceAuthorizedPeer *av_authorizedPeer;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, copy) NSSet *messageReceiverChildren;
@property(readonly) Class superclass;

@end

