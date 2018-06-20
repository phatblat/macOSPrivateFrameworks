//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary, NSError, NSMapTable, NSMutableArray, NSObject<OS_dispatch_group>, NSObject<OS_dispatch_queue>, NSObject<OS_os_log>, NSString, NSURL;

@interface GEOSQLiteDB : NSObject
{
    NSObject<OS_os_log> *_log;
    struct sqlite3 *_db;
    NSError *_lastError;
    NSURL *_databaseFileURL;
    int _sqliteFlags;
    NSDictionary *_pragmas;
    CDUnknownBlockType _setupBlock;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_queue> *_externalFilesQueue;
    NSObject<OS_dispatch_group> *_externalFilesGroup;
    NSMutableArray *_externalFilesActiveChannels;
    NSMapTable *_preparedStatements;
    BOOL _isInTransaction;
    BOOL _isTemporaryInMemoryDatabase;
    BOOL _didEncounterExternalResourceErrorInTransaction;
    NSMutableArray *_filesAddedDuringTransaction;
    NSMutableArray *_filesDeletedDuringTransaction;
    NSMapTable *_virtualTables;
    // Error parsing type: (?="flag"{atomic_flag="_Value"AB}"dummy"i), name: _didTearDown
}

+ (id)defaultPragmas;
- (void).cxx_destruct;
- (BOOL)writeBlobData:(id)arg1 toTable:(const char *)arg2 column:(const char *)arg3 rowID:(long long)arg4 error:(id *)arg5;
- (long long)lastInsertRowID;
- (BOOL)deleteExternalResourceAtURL:(id)arg1 error:(id *)arg2;
- (BOOL)writeExternalResourceWithData:(id)arg1 toURL:(id)arg2 error:(id *)arg3;
- (BOOL)reportSQLiteErrorCode:(int)arg1 method:(id)arg2 error:(id *)arg3;
- (id)noCopyBlobForColumn:(int)arg1 inStatment:(struct sqlite3_stmt *)arg2;
- (id)blobForColumn:(int)arg1 inStatment:(struct sqlite3_stmt *)arg2;
- (id)_blobForColumn:(int)arg1 inStatment:(struct sqlite3_stmt *)arg2 noCopy:(BOOL)arg3;
- (id)stringForColumn:(int)arg1 inStatment:(struct sqlite3_stmt *)arg2;
- (double)doubleForColumn:(int)arg1 inStatment:(struct sqlite3_stmt *)arg2;
- (long long)int64ForColumn:(int)arg1 inStatment:(struct sqlite3_stmt *)arg2;
- (int)intForColumn:(int)arg1 inStatment:(struct sqlite3_stmt *)arg2;
- (BOOL)executeInTransaction:(CDUnknownBlockType)arg1;
- (BOOL)vacuum;
- (BOOL)executeStatement:(id)arg1 statementBlock:(CDUnknownBlockType)arg2;
- (BOOL)executeStatement:(struct sqlite3_stmt *)arg1 error:(id *)arg2;
- (BOOL)bindRealParameter:(const char *)arg1 toValue:(double)arg2 inStatement:(struct sqlite3_stmt *)arg3 error:(id *)arg4;
- (BOOL)bindInt64Parameter:(const char *)arg1 toValue:(long long)arg2 inStatement:(struct sqlite3_stmt *)arg3 error:(id *)arg4;
- (BOOL)bindIntParameter:(const char *)arg1 toValue:(int)arg2 inStatement:(struct sqlite3_stmt *)arg3 error:(id *)arg4;
- (BOOL)bindNullParameter:(const char *)arg1 inStatement:(struct sqlite3_stmt *)arg2 error:(id *)arg3;
- (BOOL)bindZeroBlobParameter:(const char *)arg1 length:(unsigned long long)arg2 inStatement:(struct sqlite3_stmt *)arg3 error:(id *)arg4;
- (BOOL)bindBlobNoCopyParameter:(const char *)arg1 toValue:(id)arg2 inStatement:(struct sqlite3_stmt *)arg3 error:(id *)arg4;
- (BOOL)bindBlobParameter:(const char *)arg1 toValue:(id)arg2 inStatement:(struct sqlite3_stmt *)arg3 error:(id *)arg4;
- (BOOL)bindTextParameter:(const char *)arg1 toValue:(id)arg2 inStatement:(struct sqlite3_stmt *)arg3 error:(id *)arg4;
- (BOOL)_bindParameter:(const char *)arg1 inStatement:(struct sqlite3_stmt *)arg2 error:(id *)arg3 withBinder:(CDUnknownBlockType)arg4;
- (BOOL)statementForKey:(id)arg1 statementBlock:(CDUnknownBlockType)arg2;
- (struct sqlite3_stmt *)statementForKey:(id)arg1;
- (void)clearStatement:(id)arg1;
- (BOOL)prepareStatement:(const char *)arg1 forKey:(id)arg2;
- (BOOL)dropTablesLike:(id)arg1;
- (BOOL)dropAllTables;
- (id)getTablesLike:(id)arg1;
- (id)getAllTables;
- (BOOL)createTable:(const char *)arg1 withDrop:(const char *)arg2;
- (BOOL)unregisterVirtualTable:(id)arg1;
- (BOOL)registerVirtualTable:(id)arg1;
- (void)_debug_lockDB:(id)arg1;
- (void)_debug_unlockDB:(id)arg1;
- (void)dealloc;
- (void)_closeDB;
- (void)tearDown;
- (int)_setPragmas;
- (BOOL)_deleteAllDatabaseFilesIfCorrupt:(int)arg1;
- (void)_deleteAndReopenDatabaseIfCorrupt:(int)arg1;
- (void)_createParentDirectory;
- (int)_openDatabaseFile;
- (int)_openAndConfigure;
- (BOOL)_openAndConfigureWithRetryIfCorrupt;
- (BOOL)setup;
- (void)_execute:(CDUnknownBlockType)arg1 errorHandler:(CDUnknownBlockType)arg2;
- (void)executeAsync:(CDUnknownBlockType)arg1;
- (void)executeAsync:(CDUnknownBlockType)arg1 errorHandler:(CDUnknownBlockType)arg2;
- (void)executeSync:(CDUnknownBlockType)arg1;
- (void)executeSync:(CDUnknownBlockType)arg1 errorHandler:(CDUnknownBlockType)arg2;
- (id)description;
- (id)initWithQueueName:(const char *)arg1 log:(id)arg2 databaseFileURL:(id)arg3 sqliteFlags:(int)arg4 pragmas:(id)arg5 setupBlock:(CDUnknownBlockType)arg6;
- (id)initWithQueueName:(const char *)arg1 logFacility:(const char *)arg2 dbFilePath:(id)arg3 sqliteFlags:(int)arg4 pragmas:(id)arg5 setupBlock:(CDUnknownBlockType)arg6;
@property(nonatomic) long long user_version;
@property(readonly, nonatomic) NSDictionary *pragmas;
@property(readonly, nonatomic) NSObject<OS_os_log> *log;
@property(readonly, nonatomic) BOOL isDBReady;
@property(readonly, nonatomic) NSError *lastError;
@property(readonly, nonatomic) NSString *dbFilePath;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *isolationQueue;
@property(readonly, nonatomic) struct sqlite3 *sqliteDB;
- (id)UUIDForColumn:(int)arg1 inStatment:(struct sqlite3_stmt *)arg2;
- (BOOL)bindParameter:(const char *)arg1 toUUID:(id)arg2 inStatement:(struct sqlite3_stmt *)arg3 error:(id *)arg4;
- (BOOL)_waitForAllTransactionExternalResources;
- (void)_channelEncounteredError:(int)arg1;
- (void)_channelCleanupFailedWithError:(int)arg1;
- (void)_doneWritingToChannel:(id)arg1;
- (void)_writeTransactionExternalResourceWithData:(id)arg1 toURL:(id)arg2;

@end

