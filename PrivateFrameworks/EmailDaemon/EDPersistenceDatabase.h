//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "EDPersistenceDatabaseConnectionDelegate.h"
#import "EDPersistenceDatabaseConnectionPoolDelegate.h"

@class EDPersistenceDatabaseConnectionPool, EDProtectedDatabasePersistence, EFSQLPropertyMapper, EFSQLSchema, NSString;

@interface EDPersistenceDatabase : NSObject <EDPersistenceDatabaseConnectionPoolDelegate, EDPersistenceDatabaseConnectionDelegate>
{
    BOOL _setupIsComplete;
    EFSQLSchema *_schema;
    EFSQLSchema *_protectedSchema;
    EFSQLPropertyMapper *_propertyMapper;
    EDPersistenceDatabaseConnectionPool *_connectionPool;
    EDProtectedDatabasePersistence *_protectedDatabasePersistence;
    NSString *_basePath;
    NSString *_databaseName;
    NSString *_fullPath;
}

+ (id)log;
@property BOOL setupIsComplete; // @synthesize setupIsComplete=_setupIsComplete;
@property(readonly, nonatomic) NSString *fullPath; // @synthesize fullPath=_fullPath;
@property(readonly, nonatomic) NSString *databaseName; // @synthesize databaseName=_databaseName;
@property(readonly, nonatomic) NSString *basePath; // @synthesize basePath=_basePath;
@property(readonly, nonatomic) EDProtectedDatabasePersistence *protectedDatabasePersistence; // @synthesize protectedDatabasePersistence=_protectedDatabasePersistence;
@property(readonly, nonatomic) EDPersistenceDatabaseConnectionPool *connectionPool; // @synthesize connectionPool=_connectionPool;
@property(readonly, nonatomic) EFSQLPropertyMapper *propertyMapper; // @synthesize propertyMapper=_propertyMapper;
@property(readonly, nonatomic) EFSQLSchema *protectedSchema; // @synthesize protectedSchema=_protectedSchema;
@property(readonly, nonatomic) EFSQLSchema *schema; // @synthesize schema=_schema;
- (void).cxx_destruct;
- (id)urlForDatabasePath:(id)arg1 type:(long long)arg2;
- (id)urlForDatabasePath:(id)arg1 type:(long long)arg2 fileProtection:(id)arg3;
- (id)fileProtectionForDatabaseType:(long long)arg1;
- (void)scheduleRecurringActivity;
@property(readonly, nonatomic) BOOL enforceDataProtection;
- (void)reconcileJournalWithCompletionBlock:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic) BOOL databaseIsCorrupt;
- (id)openConnectionIsWriter:(BOOL)arg1;
- (void)checkInConnection:(id)arg1;
- (id)checkOutConnectionIsWriter:(BOOL)arg1;
@property(readonly, nonatomic) BOOL isNestedDatabaseCall;
- (void)closeAllConnections;
- (BOOL)performBlock:(CDUnknownBlockType)arg1 isWriter:(BOOL)arg2 useTransaction:(BOOL)arg3;
- (BOOL)performDatabaseSetupUsingTransaction:(BOOL)arg1 block:(CDUnknownBlockType)arg2;
- (BOOL)performWriteBlock:(CDUnknownBlockType)arg1;
- (BOOL)performReadBlock:(CDUnknownBlockType)arg1;
- (void)performDatabaseWorkInBlockWithHighPriority:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic) BOOL writersAreWaiting;
- (id)initWithBasePath:(id)arg1 databaseName:(id)arg2 maxConcurrentReaders:(unsigned long long)arg3 schema:(id)arg4 protectedSchema:(id)arg5 propertyMapper:(id)arg6 protectedDatabasePersistence:(id)arg7;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
