//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSManagedObject.h"

@class NSDate, NSNumber, NSSet, NSString, STCoreOrganization, STCoreOrganizationSettings, STFamilyOrganizationSettings, STLocalOrganizationSettings, STUserDeviceState, STiCloudOrganizationSettings;

@interface STCoreUser : NSManagedObject
{
}

+ (id)fetchRequestMatchingAppleID:(id)arg1;
+ (id)fetchRequestForFamilyMembers;
+ (id)fetchRequestForUsersWithDSID:(id)arg1;
+ (id)fetchRequestMatchingLocalUser;
+ (id)fetchUserWithAppleID:(id)arg1 inContext:(id)arg2 error:(id *)arg3;
+ (id)fetchUserWithDSID:(id)arg1 inContext:(id)arg2 error:(id *)arg3;
+ (id)fetchLocalUserInContext:(id)arg1 error:(id *)arg2;
+ (id)keyPathsForValuesAffectingCommunicationWhileLimitedPolicy;
+ (id)keyPathsForValuesAffectingCommunicationPolicy;
+ (id)keyPathsForValuesAffectingShareWebUsage;
+ (id)keyPathsForValuesAffectingNeedsToSetPasscode;
+ (id)keyPathsForValuesAffectingEffectivePasscode;
+ (id)keyPathsForValuesAffectingManaging;
+ (id)keyPathsForValuesAffectingManaged;
+ (id)keyPathsForValuesAffectingAllLimitsEnabled;
+ (id)keyPathsForValuesAffectingCanSetUpFamily;
+ (id)keyPathsForValuesAffectingSyncingEnabled;
+ (id)keyPathsForValuesAffectingScreenTimeEnabled;
+ (id)keyPathsForValuesAffectingLocalizedFullName;
+ (id)keyPathsForValuesAffectingContactManagementState;
- (id)_primaryContainerInContactStore:(id)arg1 withError:(id *)arg2;
- (id)_contactStoreForUser;
- (void)notifyServerOfScreenTimeEnabled:(BOOL)arg1;
- (void)didChangeValueForKey:(id)arg1;
- (void)updateWithDescription:(id)arg1;
@property(nonatomic) BOOL contactsEditable;
@property(nonatomic) long long communicationWhileLimitedPolicy;
@property(nonatomic) long long communicationPolicy;
@property(readonly) NSString *organizationIdentifier;
@property BOOL shareWebUsage;
@property(readonly) BOOL needsToSetPasscode;
@property(copy) NSString *effectivePasscode;
@property(readonly, getter=isManaging) BOOL managing;
@property(readonly, getter=isManaged) BOOL managed;
@property(readonly) STCoreOrganization *managingOrganization; // @dynamic managingOrganization;
@property BOOL allLimitsEnabled;
@property(readonly) BOOL canSetUpFamily;
@property BOOL syncingEnabled;
@property BOOL screenTimeEnabled;
@property(readonly, copy, nonatomic) NSString *localizedFullName;
@property(readonly) BOOL unmodeledParticipatesInSharedLedger;
@property(readonly) STCoreOrganizationSettings *unmodeledManagingOrganizationSettings;
@property(nonatomic) long long contactManagementState;
@property(readonly, copy) NSString *automaticDateTimeConfigurationIdentifier;
@property(readonly, copy) NSString *iCloudLogoutConfigurationIdentifier;
@property(readonly, copy) NSString *managedUserActivationIdentifier;
@property(readonly, copy) NSString *alwaysAllowConfigurationIdentifier;
@property(readonly, copy) NSString *alwaysAllowActivationIdentifier;

// Remaining properties
@property(copy, nonatomic) NSString *altDSID; // @dynamic altDSID;
@property(copy, nonatomic) NSString *appleID; // @dynamic appleID;
@property(retain, nonatomic) NSSet *blueprints; // @dynamic blueprints;
@property(retain, nonatomic) STiCloudOrganizationSettings *cloudSettings; // @dynamic cloudSettings;
@property(copy, nonatomic) NSNumber *dsid; // @dynamic dsid;
@property(copy, nonatomic) NSString *familyMemberType; // @dynamic familyMemberType;
@property(copy, nonatomic) NSString *familyName; // @dynamic familyName;
@property(retain, nonatomic) STFamilyOrganizationSettings *familySettings; // @dynamic familySettings;
@property(copy, nonatomic) NSString *givenName; // @dynamic givenName;
@property(nonatomic) BOOL isFamilyOrganizer; // @dynamic isFamilyOrganizer;
@property(nonatomic) BOOL isParent; // @dynamic isParent;
@property(retain, nonatomic) STLocalOrganizationSettings *localSettings; // @dynamic localSettings;
@property(retain, nonatomic) STUserDeviceState *localUserDeviceState; // @dynamic localUserDeviceState;
@property(nonatomic) long long passcodeEntryAttemptCount; // @dynamic passcodeEntryAttemptCount;
@property(copy, nonatomic) NSDate *passcodeEntryTimeoutEndDate; // @dynamic passcodeEntryTimeoutEndDate;
@property(readonly, copy, nonatomic) NSString *phoneticFamilyName; // @dynamic phoneticFamilyName;
@property(readonly, copy, nonatomic) NSString *phoneticGivenName; // @dynamic phoneticGivenName;
@property(nonatomic) BOOL supportsEncryption; // @dynamic supportsEncryption;
@property(retain, nonatomic) NSSet *usages; // @dynamic usages;
@property(retain, nonatomic) NSSet *userDeviceAddresses; // @dynamic userDeviceAddresses;
@property(retain, nonatomic) NSSet *userDeviceStates; // @dynamic userDeviceStates;

@end

