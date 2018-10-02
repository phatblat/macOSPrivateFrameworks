//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSData, NSDictionary, NSString, NSURL;

@protocol SKDaemonConnectionProtocol <NSObject>
- (void)deleteSnapshots:(NSArray *)arg1 disk:(NSDictionary *)arg2 completionBlock:(void (^)(BOOL, NSError *))arg3;
- (void)revertToSnapshot:(NSString *)arg1 disk:(NSDictionary *)arg2 completionBlock:(void (^)(BOOL, NSError *))arg3;
- (void)renameSnapshot:(NSString *)arg1 toName:(NSString *)arg2 disk:(NSDictionary *)arg3 completionBlock:(void (^)(BOOL, NSError *))arg4;
- (void)createSnapshot:(NSString *)arg1 disk:(NSDictionary *)arg2 completionBlock:(void (^)(BOOL, NSError *))arg3;
- (void)allSnapshotsForDisk:(NSDictionary *)arg1 completionBlock:(void (^)(NSArray *, NSError *))arg2;
- (void)resizeLimitsForDisk:(NSDictionary *)arg1 completionBlock:(void (^)(NSDictionary *))arg2;
- (void)dataRecordForUser:(NSString *)arg1 forVolume:(NSDictionary *)arg2 completionBlock:(void (^)(NSData *, NSError *))arg3;
- (void)deleteRAID:(NSDictionary *)arg1 handlingProgressForOperationUUID:(NSString *)arg2 completionBlock:(void (^)(BOOL, NSError *))arg3;
- (void)repairRAID:(NSDictionary *)arg1 spareDisk:(NSDictionary *)arg2 handlingProgressForOperationUUID:(NSString *)arg3 completionBlock:(void (^)(BOOL, NSError *))arg4;
- (void)convertToAPFS:(NSDictionary *)arg1 isDryRun:(BOOL)arg2 options:(NSDictionary *)arg3 handlingProgressForOperationUUID:(NSString *)arg4 andCompletionHandler:(void (^)(NSDictionary *, NSDictionary *, NSError *))arg5;
- (void)convertToAPFS:(NSDictionary *)arg1 isDryRun:(BOOL)arg2 handlingProgressForOperationUUID:(NSString *)arg3 andCompletionHandler:(void (^)(NSDictionary *, NSDictionary *, NSError *))arg4;
- (void)deleteAPFSVolume:(NSDictionary *)arg1 optionsDictionary:(NSDictionary *)arg2 handlingProgressForOperationUUID:(NSString *)arg3 completionBlock:(void (^)(BOOL, NSError *))arg4;
- (void)addChildVolumeToAPFSContainer:(NSDictionary *)arg1 optionsDictionary:(NSDictionary *)arg2 handlingProgressForOperationUUID:(NSString *)arg3 completionBlock:(void (^)(BOOL, NSError *))arg4;
- (void)deleteAPFSContainer:(NSDictionary *)arg1 handlingProgressForOperationUUID:(NSString *)arg2 completionBlock:(void (^)(BOOL, NSError *))arg3;
- (void)createAPFSContainerWithDisks:(NSArray *)arg1 progressUUID:(NSString *)arg2 callbackBlock:(void (^)(BOOL, NSError *))arg3;
- (void)volumesForAPFSPS:(NSDictionary *)arg1 completionBlock:(void (^)(NSArray *))arg2;
- (void)physicalStoresForAPFSVolume:(NSDictionary *)arg1 completionBlock:(void (^)(NSArray *))arg2;
- (void)removeDisk:(NSDictionary *)arg1 fromRAID:(NSDictionary *)arg2 handlingProgressForOperationUUID:(NSString *)arg3 completionBlock:(void (^)(BOOL, NSError *))arg4;
- (void)addDisks:(NSArray *)arg1 toRAID:(NSDictionary *)arg2 memberType:(NSString *)arg3 handlingProgressForOperationUUID:(NSString *)arg4 completionBlock:(void (^)(BOOL, NSError *))arg5;
- (void)createRAIDSetType:(NSString *)arg1 name:(NSString *)arg2 disks:(NSArray *)arg3 format:(NSDictionary *)arg4 options:(NSDictionary *)arg5 handlingProgressForOperationUUID:(NSString *)arg6 completionBlock:(void (^)(NSDictionary *, NSError *))arg7;
- (void)fixIncorrectlySizedPartitionMapOnDisk:(NSDictionary *)arg1 completionBlock:(void (^)(BOOL, NSError *))arg2;
- (void)addChildVolumeToEmptyLVG:(NSDictionary *)arg1 handlingProgressForOperationUUID:(NSString *)arg2 completetionBlock:(void (^)(NSDictionary *, NSError *))arg3;
- (void)filesystemsWithCallbackBlock:(void (^)(NSArray *))arg1;
- (void)isBusy:(void (^)(BOOL))arg1;
- (void)childDisksForWholeDisk:(NSDictionary *)arg1 withCallbackBlock:(void (^)(NSArray *))arg2;
- (void)wholeDiskForDiskDictionary:(NSDictionary *)arg1 withCallbackBlock:(void (^)(NSDictionary *))arg2;
- (void)diskForPath:(NSString *)arg1 withCallbackBlock:(void (^)(NSDictionary *))arg2;
- (void)recacheDisk:(NSDictionary *)arg1 withCallbackBlock:(void (^)(void))arg2;
- (void)enclosingDiskAtLevel:(unsigned long long)arg1 withCallbackBlock:(void (^)(NSDictionary *))arg2;
- (void)enclosingVolumeCount:(void (^)(unsigned long long))arg1;
- (void)getFDEUsersFromDisk:(NSDictionary *)arg1 withCompletionBlock:(void (^)(NSArray *, NSError *))arg2;
- (void)decryptVolume:(NSDictionary *)arg1 withPassword:(NSString *)arg2 forUser:(NSString *)arg3 withCompletionBlock:(void (^)(NSError *))arg4;
- (void)unlockEncryptedDisk:(NSDictionary *)arg1 withiCloudUser:(NSString *)arg2 iCloudHandle:(id)arg3 withCompletionBlock:(void (^)(NSError *))arg4;
- (void)unlockEncryptedDisk:(NSDictionary *)arg1 diskUnlockPassword:(NSString *)arg2 forUser:(NSString *)arg3 withCompletionBlock:(void (^)(NSError *))arg4;
- (void)validateEncryptedDiskPassword:(NSDictionary *)arg1 diskUnlockPassword:(NSString *)arg2 forUser:(NSString *)arg3 withCompletionBlock:(void (^)(NSError *))arg4;
- (void)establishReserveKEKForDisk:(NSDictionary *)arg1 diskUnlockPassword:(NSString *)arg2 withCompletionBlock:(void (^)(NSError *))arg3;
- (void)changePasswordForDisk:(NSDictionary *)arg1 oldPassword:(NSString *)arg2 newPassword:(NSString *)arg3 passwordHint:(NSString *)arg4 withCompletionBlock:(void (^)(BOOL))arg5;
- (void)extendedInfoForDisk:(NSDictionary *)arg1 withCompletionBlock:(void (^)(NSDictionary *))arg2;
- (void)blockRestoreDisk:(NSDictionary *)arg1 fromDiskImageFileURL:(NSString *)arg2 volumeUUID:(NSString *)arg3 creatingNewVolume:(BOOL)arg4 handlingProgressForOperationUUID:(NSString *)arg5 withCompletionBlock:(void (^)(BOOL, NSError *))arg6;
- (void)blockRestoreDisk:(NSDictionary *)arg1 fromDiskImageFileURL:(NSString *)arg2 handlingProgressForOperationUUID:(NSString *)arg3 withCompletionBlock:(void (^)(BOOL, NSError *))arg4;
- (void)blockRestoreDisk:(NSDictionary *)arg1 fromDisk:(NSDictionary *)arg2 volumeUUID:(NSString *)arg3 creatingNewVolume:(BOOL)arg4 handlingProgressForOperationUUID:(NSString *)arg5 withCompletionBlock:(void (^)(BOOL, NSError *))arg6;
- (void)blockRestoreDisk:(NSDictionary *)arg1 fromDisk:(NSDictionary *)arg2 handlingProgressForOperationUUID:(NSString *)arg3 withCompletionBlock:(void (^)(BOOL, NSError *))arg4;
- (void)volumesForDiskImageFileURL:(NSURL *)arg1 handlingProgressForOperationUUID:(NSString *)arg2 withCompletionBlock:(void (^)(NSArray *, NSError *))arg3;
- (void)iCloudRecoverManageFDEUsersForDisk:(NSDictionary *)arg1 icloudUser:(NSString *)arg2 icloudPassData:(NSData *)arg3 usersToRemoveArray:(NSArray *)arg4 resettingUserPasswords:(NSArray *)arg5 fdeRecipe:(NSArray *)arg6 handlingProgressForOperationUUID:(NSString *)arg7 withCompletionBlock:(void (^)(NSError *))arg8;
- (void)manageFDEUsersForDisk:(NSDictionary *)arg1 diskUnlockPassword:(NSString *)arg2 removingUsers:(NSArray *)arg3 resettingUserPasswords:(NSArray *)arg4 fdeRecipe:(NSArray *)arg5 handlingProgressForOperationUUID:(NSString *)arg6 withCompletionBlock:(void (^)(NSError *))arg7;
- (void)convertDiskToFDE:(NSDictionary *)arg1 withRecipe:(NSArray *)arg2 handlingProgressForOperationUUID:(NSString *)arg3 withCompletionBlock:(void (^)(NSError *))arg4;
- (void)convertDisk:(NSDictionary *)arg1 toCoreStorage:(BOOL)arg2 handlingProgressForOperationUUID:(NSString *)arg3 withCompletionBlock:(void (^)(NSDictionary *, NSError *))arg4;
- (void)getRecoverySystemInfoForDisk:(NSDictionary *)arg1 withCompletionBlock:(void (^)(NSDictionary *, NSError *))arg2;
- (void)ejectDisk:(NSDictionary *)arg1 withCompletionBlock:(void (^)(NSError *))arg2;
- (void)enableJournalingOnDisk:(NSDictionary *)arg1 withCompletionBlock:(void (^)(NSDictionary *, BOOL))arg2;
- (void)enablePermissionsOnDisk:(NSDictionary *)arg1 withCompletionBlock:(void (^)(NSDictionary *, BOOL))arg2;
- (void)ensureRecoveryForDisk:(NSDictionary *)arg1 withRecoverySystemPath:(NSString *)arg2 chunkkList:(NSString *)arg3 diagnostics:(NSString *)arg4 ignoreBlacklist:(BOOL)arg5 handlingProgressForOperationUUID:(NSString *)arg6 callbackBlock:(void (^)(NSDictionary *, NSError *))arg7;
- (void)blessDisk:(NSDictionary *)arg1 options:(NSDictionary *)arg2 withCallbackBlock:(void (^)(BOOL, NSError *))arg3;
- (void)compositeDisks:(NSArray *)arg1 volumeName:(NSString *)arg2 handlingProgressForOperationUUID:(NSString *)arg3 callbackBlock:(void (^)(NSError *))arg4;
- (void)removeDisk:(NSDictionary *)arg1 handlingProgressForOperationUUID:(NSString *)arg2 withCompletionHandler:(void (^)(NSError *))arg3;
- (void)resize:(NSDictionary *)arg1 toSize:(unsigned long long)arg2 handlingProgressForOperationUUID:(NSString *)arg3 withCompletionHandler:(void (^)(NSError *))arg4;
- (void)splitDisk:(NSDictionary *)arg1 toSize:(unsigned long long)arg2 newDiskRole:(NSString *)arg3 name:(NSString *)arg4 caseSensitive:(BOOL)arg5 password:(NSString *)arg6 handlingProgressForOperationUUID:(NSString *)arg7 withCompletionBlock:(void (^)(NSDictionary *, NSDictionary *, NSError *))arg8;
- (void)splitDisk:(NSDictionary *)arg1 toSize:(unsigned long long)arg2 newDiskType:(NSString *)arg3 name:(NSString *)arg4 caseSensitive:(BOOL)arg5 password:(NSString *)arg6 handlingProgressForOperationUUID:(NSString *)arg7 withCompletionBlock:(void (^)(NSDictionary *, NSDictionary *, NSError *))arg8;
- (void)mountDisk:(NSDictionary *)arg1 options:(NSArray *)arg2 withCompletionBlock:(void (^)(NSError *))arg3;
- (void)unmountDisk:(NSDictionary *)arg1 options:(NSDictionary *)arg2 withCompletionBlock:(void (^)(NSError *))arg3;
- (void)renameDisk:(NSDictionary *)arg1 to:(NSString *)arg2 withCompletionBlock:(void (^)(NSError *))arg3;
- (void)secureEraseDisk:(NSDictionary *)arg1 withEraseLevel:(int)arg2 handlingProgressForOperationUUID:(NSString *)arg3 withCompletionBlock:(void (^)(NSDictionary *, NSError *))arg4;
- (void)eraseDisk:(NSDictionary *)arg1 toFilesystem:(NSDictionary *)arg2 partitionMap:(NSString *)arg3 name:(NSString *)arg4 password:(NSString *)arg5 passwordHint:(NSString *)arg6 handlingProgressForOperationUUID:(NSString *)arg7 withCompletionBlock:(void (^)(NSDictionary *, NSError *))arg8;
- (void)repairUserHomeDirectoryForDisk:(NSDictionary *)arg1 forUser:(long long)arg2 handlingProgressForOperationUUID:(NSString *)arg3 withCompletionBlock:(void (^)(NSError *))arg4;
- (void)repairDisk:(NSDictionary *)arg1 options:(NSDictionary *)arg2 handlingProgressForOperationUUID:(NSString *)arg3 withCompletionBlock:(void (^)(NSError *))arg4;
- (void)verifyDisk:(NSDictionary *)arg1 handlingProgressForOperationUUID:(NSString *)arg2 withCompletionBlock:(void (^)(BOOL, NSError *))arg3;
- (void)setDiskIconWithImageData:(NSData *)arg1 forDisk:(NSDictionary *)arg2 WithReply:(void (^)(BOOL))arg3;
- (void)setDaemonLanguage:(NSString *)arg1 withCompletionBlock:(void (^)(BOOL))arg2;
@end

