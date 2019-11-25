//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <SystemMigration/SMSystem_Daemon.h>

@class NSString, SKAPFSDisk, SKBindableDisk, SKDisk, SKDisk<SKEncryptedDiskProtocol>;

@interface SMSystem_Daemon_SKDiskBased : SMSystem_Daemon
{
    SKDisk *skDisk;
    id cachedPrimaryIdentifier;
    NSString *_deviceBus;
    NSString *_deviceModelName;
    SKDisk<SKEncryptedDiskProtocol> *_encryptedSKDisk;
    SKAPFSDisk *_apfsSKDisk;
    SKBindableDisk *_bindableSKDisk;
}

+ (unsigned long long)requiredScannerState;
@property(retain) SKBindableDisk *bindableSKDisk; // @synthesize bindableSKDisk=_bindableSKDisk;
@property __weak SKAPFSDisk *apfsSKDisk; // @synthesize apfsSKDisk=_apfsSKDisk;
@property __weak SKDisk<SKEncryptedDiskProtocol> *encryptedSKDisk; // @synthesize encryptedSKDisk=_encryptedSKDisk;
@property(retain) NSString *deviceModelName; // @synthesize deviceModelName=_deviceModelName;
@property(retain) NSString *deviceBus; // @synthesize deviceBus=_deviceBus;
@property(retain) id cachedPrimaryIdentifier; // @synthesize cachedPrimaryIdentifier;
@property(retain) SKDisk *skDisk; // @synthesize skDisk;
- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (BOOL)addFDEUsers:(id)arg1 removeUsers:(id)arg2 diskUnlockPassword:(id)arg3;
- (BOOL)encryptDiskWithUsers:(id)arg1 iCloudUser:(id)arg2 iCloudPassword:(id)arg3 andBag:(id)arg4 returningError:(id *)arg5;
- (BOOL)validateFDEPassword:(id)arg1;
- (id)storageKitUsersForUsers:(id)arg1;
- (id)fdeSignedUsers;
- (void)reclaimPurgableSpace;
- (unsigned long long)purgableSpace;
- (unsigned long long)freeSpace;
- (unsigned long long)totalSize;
- (BOOL)isInternal;
- (id)protocol;
- (void)prepareSystem;
- (BOOL)matches:(id)arg1;
- (id)volumeIcon;
- (id)description;
- (void)invalidate;
- (void)scannerInit;
- (double)estimatedTransferRate;
- (id)volumeName;
- (BOOL)isDefaultEffaceable;
- (BOOL)isPasswordLocked;
- (unsigned long long)systemType;
@property(readonly, getter=isEncrypted) BOOL encrypted;
- (unsigned long long)filesystemType;
- (BOOL)isCaseSensitive;
- (id)primaryIdentifier;
- (void)determineDiskType;
- (void)initPrimaryIdentifier;
- (void)initSKDisk;
- (id)initWithPath:(id)arg1;
- (id)initWithSKDisk:(id)arg1;

@end

