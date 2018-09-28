//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <RemoteManagement/RMUniquedManagedObject.h>

#import "RMUniquelySerializableManagedObject.h"

@class NSData, NSSet, NSString, RMCoreDevice, RMCoreUser;

@interface RMUserDeviceState : RMUniquedManagedObject <RMUniquelySerializableManagedObject>
{
}

+ (id)fetchOrCreateWithDictionaryRepresentation:(id)arg1 inContext:(id)arg2 error:(id *)arg3;
+ (id)fetchLocalUserDeviceStateInContext:(id)arg1 error:(id *)arg2;
+ (id)fetchOrCreateLocalUserDeviceStateInContext:(id)arg1 error:(id *)arg2;
+ (id)fetchRequestMatchingLocalUserDeviceState;
- (void)delete;
- (id)dictionaryRepresentation;
- (BOOL)updateWithDictionaryRepresentation:(id)arg1;
- (id)computeUniqueIdentifier;
- (void)didChangeValueForKey:(id)arg1;

// Remaining properties
@property(copy, nonatomic) NSData *capabilitiesPlist; // @dynamic capabilitiesPlist;
@property(nonatomic) BOOL cloudSyncEnabled; // @dynamic cloudSyncEnabled;
@property(copy, nonatomic) NSString *coreDuetIdentifier; // @dynamic coreDuetIdentifier;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(retain, nonatomic) RMCoreDevice *device; // @dynamic device;
@property(copy, nonatomic) NSData *deviceInfoPlist; // @dynamic deviceInfoPlist;
@property(readonly) unsigned long long hash;
@property(retain, nonatomic) NSSet *installedApps; // @dynamic installedApps;
@property(retain, nonatomic) RMCoreDevice *localDevice; // @dynamic localDevice;
@property(retain, nonatomic) RMCoreUser *localUser; // @dynamic localUser;
@property(nonatomic) BOOL managementEnabled; // @dynamic managementEnabled;
@property(copy, nonatomic) NSString *passcodeOwner; // @dynamic passcodeOwner;
@property(nonatomic) BOOL screenTimeEnabled; // @dynamic screenTimeEnabled;
@property(readonly) Class superclass;
@property(retain, nonatomic) RMCoreUser *user; // @dynamic user;

@end

