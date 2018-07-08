//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class ABPersistentStoreDescription, NSDictionary, NSError, NSPersistentStore, NSPersistentStoreCoordinator, NSString, NSURL;

@interface ABPersistentStoreBuilder : NSObject
{
    NSPersistentStoreCoordinator *_coordinator;
    ABPersistentStoreDescription *_storeDescription;
    _Bool _readOnly;
    NSDictionary *_storeOptions;
    NSDictionary *_storeOptionsWithoutMigration;
    NSString *_databasePath;
    NSURL *_databaseUrl;
    BOOL _pristineDatabase;
    NSPersistentStore *_store;
    BOOL _cachePsc;
    BOOL _didMigrate;
    _Bool _addAsReadOnly;
    NSError *_error;
}

+ (id)mergeDictionary:(id)arg1 withDictionary:(id)arg2;
+ (id)proxyLockStoreOptionsForDatabaseAtUrl:(id)arg1 isReadOnly:(BOOL)arg2;
+ (id)readOnlyStoreOptionsWithBoolValue:(BOOL)arg1;
+ (id)coordinatorWithLastUnconstrainedModel;
@property(copy) NSError *error; // @synthesize error=_error;
@property(retain) NSPersistentStore *store; // @synthesize store=_store;
@property(readonly, retain) NSPersistentStoreCoordinator *coordinator; // @synthesize coordinator=_coordinator;
- (void)logFailureMessage;
- (void)removePersistentStoreAtPath:(id)arg1;
- (void)emptySaveIfNeeded;
- (void)updateMetdata;
- (BOOL)shouldUpdateMetadata;
- (void)updateMetdataIfNeeded;
- (BOOL)didAddStore;
- (void)fallBackToInMemory;
- (void)fallBackToInMemoryIfNeeded;
- (void)moveAsideDatabaseAtPath:(id)arg1 reason:(id)arg2;
- (void)moveAsideDatabase;
- (void)moveAsideDatabaseIfNeeded;
- (void)addInMemoryPersistentStore;
- (id)extraOptionsForStoreAtUrl:(id)arg1;
- (id)optionsWithMigrationForStoreAtUrl:(id)arg1;
- (id)optionsWithoutMigrationForStoreAtUrl:(id)arg1;
- (void)_coreDataR10319914Hack:(id)arg1;
- (void)addSqlitePersistentStoreWithUrl:(id)arg1;
- (void)migrateMailRecentsToInMemoryIfNeeded;
- (void)migrateContactIndex;
- (void)migrateOrphanProperties;
- (void)migratePhoneNumbers;
- (void)migrateLabels;
- (void)migrateCustomPropertiesInStore:(id)arg1;
- (BOOL)databaseMigrationNeeded;
- (void)migrateMailRecentsToInMemory;
- (void)logPersistentStoreTracerFailureWithMessage:(id)arg1 error:(id)arg2;
- (id)urlByCopyingToTemporaryUrl:(id)arg1;
- (void)migrateToUnconstrainedDatabaseSchemaAndDeDupe;
- (BOOL)databaseConstraintCleanupNeeded;
- (void)tryToAddPersistentStore;
- (void)removeDotNewPathForDatabasePath;
- (BOOL)databaseFileIsEmpty;
- (BOOL)databaseFileIsMissing;
- (void)preflightDatabaseFile;
- (void)setDatabaseUrl:(id)arg1;
- (void)setDatabasePath:(id)arg1;
- (void)setupInitialStateWithDatabasePath:(id)arg1;
- (id)addPersistentStoreAtDatabasePath:(id)arg1;
- (void)dealloc;
- (id)initWithStoreDescription:(id)arg1 readOnly:(BOOL)arg2 coordinator:(id)arg3;
- (id)initWithStoreDescription:(id)arg1 readOnly:(BOOL)arg2;

@end

