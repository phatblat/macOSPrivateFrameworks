//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSObject<OS_dispatch_queue>, NSURL, WBSSQLiteDatabase;

@interface WBSSiteMetadataImageCacheSettingsSQLiteStore : NSObject
{
    WBSSQLiteDatabase *_database;
    BOOL _isClosed;
    NSObject<OS_dispatch_queue> *_databaseQueue;
    long long _protectionType;
    NSURL *_databaseURL;
}

+ (long long)databaseSchemaVersion;
+ (Class)cacheSettingsEntryClass;
@property(readonly, nonatomic) NSURL *databaseURL; // @synthesize databaseURL=_databaseURL;
@property(readonly, nonatomic) WBSSQLiteDatabase *database; // @synthesize database=_database;
- (void).cxx_destruct;
- (id)_statementsForMigrationToSchemaVersion:(long long)arg1;
- (id)_deleteAllEntriesSQLiteStatement;
- (id)_deleteEntrySQLiteStatementWithHost:(id)arg1;
- (id)_updateEntrySQLiteStatementWithEntry:(id)arg1;
- (id)_insertEntrySQLiteStatementWithEntry:(id)arg1;
- (id)_selectEntrySQLiteStatementWithHost:(id)arg1;
- (id)_selectAllEntriesSQLiteStatement;
- (id)_createNewDatabaseSQLiteStatement;
- (BOOL)deleteAllEntries;
- (BOOL)deleteEntryWithHost:(id)arg1;
- (int)_updateEntry:(id)arg1;
- (int)_insertEntry:(id)arg1;
- (BOOL)saveEntry:(id)arg1;
- (id)allEntries;
- (id)entryWithHost:(id)arg1;
- (int)_setDatabaseSchemaVersion:(int)arg1;
- (BOOL)_performMigrationStepToSchemaVersion:(long long)arg1 withStatements:(id)arg2;
- (BOOL)_createNewDatabaseSchema;
- (BOOL)_migrateToCurrentSchemaVersionifNeeded;
- (BOOL)_checkDatabaseIntegrity;
- (BOOL)_openDatabase:(id)arg1 andCheckIntegrity:(BOOL)arg2;
- (void)dealloc;
- (void)_closeDatabase;
- (void)close;
- (id)initWithDatabaseURL:(id)arg1 protectionType:(long long)arg2;
- (id)initWithDatabaseURL:(id)arg1;

@end
