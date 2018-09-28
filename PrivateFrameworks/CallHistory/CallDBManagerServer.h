//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CallHistory/CallDBManager.h>

@interface CallDBManagerServer : CallDBManager
{
}

+ (id)getObjectIdsForAllRecords:(id)arg1;
+ (id)getUniqueIdsForAllRecords:(id)arg1;
+ (id)getObjectIdsForDuplicateRecordsWithUniqueIds:(id)arg1 andHavingObjectIds:(id)arg2;
+ (id)downgradeDatabaseAtLocation:(id)arg1 toVersion:(long long)arg2;
+ (id)getDestinationModel:(long long)arg1;
+ (long long)getNextVersionToDowngradeTo:(long long)arg1 withSourceVersion:(long long)arg2;
+ (long long)getNextVersionToDowngradeTo:(long long)arg1;
+ (long long)getNextVersionToMigrateToCurrentVersion:(long long)arg1;
+ (id)getDestinationModelForVersion:(long long)arg1;
- (BOOL)bootUpDBAtLocation:(id)arg1 isEncrypted:(BOOL)arg2;
- (BOOL)createCallDBProperties;
- (void)prepareForMigrationDBAtURL:(id)arg1 withModelAtURL:(id)arg2 andIsEncrypted:(BOOL)arg3;
- (id)getUUIDsOfNMostRecentRecords:(unsigned long long)arg1 fromManagedObjectContext:(id)arg2;
- (BOOL)handleDatabaseMigration:(id)arg1 isEncrypted:(BOOL)arg2 isRetry:(BOOL)arg3;
- (void)prepareDatabaseForNextStepInMigration:(id)arg1 dbVersion:(long long)arg2 isEncrypted:(BOOL)arg3;
- (void)populateHandleType:(id)arg1 dbVersion:(long long)arg2 isEncrypted:(BOOL)arg3;
- (void)populateRecentCallRemoteParticipantHandles:(id)arg1 dbVersion:(long long)arg2 isEncrypted:(BOOL)arg3;
- (void)populateServiceProviderAndCallCategory:(id)arg1 dbVersion:(long long)arg2 isEncrypted:(BOOL)arg3;
- (void)modifyCallRecordForDBAtLocation:(id)arg1 dbVersion:(long long)arg2 isEncrypted:(BOOL)arg3 modifyCallRecord:(CDUnknownBlockType)arg4;
- (BOOL)removeDuplicatesFromDBAtLocation:(id)arg1 dbVersion:(long long)arg2 isEncrypted:(BOOL)arg3;
- (id)createMOCForDBAtLocation:(id)arg1 dbVersion:(long long)arg2 isEncrypted:(BOOL)arg3;
- (BOOL)handleBootUpFailure:(id)arg1;
- (BOOL)bootUpDBAtLocationWithRecovery:(id)arg1 isEncrypted:(BOOL)arg2;
- (void)moveCallsFromTempDatabase;
- (id)permDBLocation:(unsigned char *)arg1;
- (id)tempDBLocation:(unsigned char *)arg1;
- (void)createTemporary;
- (void)createPermanent;

@end

