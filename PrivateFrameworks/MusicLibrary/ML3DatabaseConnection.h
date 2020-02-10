//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class ML3DatabaseConnectionPool, ML3DatabaseStatementCache, NSMutableArray, NSString, NSUUID;

@interface ML3DatabaseConnection : NSObject
{
    struct sqlite3 *_sqlitedb;
    BOOL _isOpen;
    ML3DatabaseStatementCache *_statementCache;
    unsigned long long _statementsSinceLastCheckpoint;
    unsigned int _transactionLevel;
    BOOL _nestedTransactionWantsToRollback;
    NSMutableArray *_enqueuedTransactionCommitBlocks;
    ML3DatabaseConnectionPool *_owningPool;
    NSMutableArray *_registeredFunctions;
    NSMutableArray *_registeredModules;
    const void *_iTunesExtensions;
    int _profilingLevel;
    NSString *_lastTracedStatement;
    int _willDeleteDatabaseNotifyToken;
    BOOL _isHandlingIOError;
    BOOL _alreadyAttemptedCorruptionRecovery;
    BOOL _isReadOnly;
    BOOL _automaticCheckpointingEnabled;
    BOOL _logQueryPlans;
    id <ML3DatabaseConnectionDelegate> _connectionDelegate;
    NSString *_databasePath;
    unsigned long long _journalingMode;
    unsigned long long _protectionLevel;
    NSUUID *_currentTransactionID;
    NSUUID *_uniqueIdentifier;
    unsigned long long _checkpointStatementThreshold;
}

@property(nonatomic) BOOL logQueryPlans; // @synthesize logQueryPlans=_logQueryPlans;
@property(nonatomic) unsigned long long checkpointStatementThreshold; // @synthesize checkpointStatementThreshold=_checkpointStatementThreshold;
@property(nonatomic) BOOL automaticCheckpointingEnabled; // @synthesize automaticCheckpointingEnabled=_automaticCheckpointingEnabled;
@property(readonly, nonatomic) NSUUID *uniqueIdentifier; // @synthesize uniqueIdentifier=_uniqueIdentifier;
@property(readonly, nonatomic) NSUUID *currentTransactionID; // @synthesize currentTransactionID=_currentTransactionID;
@property(nonatomic) unsigned long long protectionLevel; // @synthesize protectionLevel=_protectionLevel;
@property(nonatomic) unsigned long long journalingMode; // @synthesize journalingMode=_journalingMode;
@property(nonatomic, setter=setReadOnly:) BOOL isReadOnly; // @synthesize isReadOnly=_isReadOnly;
@property(readonly, nonatomic) NSString *databasePath; // @synthesize databasePath=_databasePath;
@property(nonatomic) __weak id <ML3DatabaseConnectionDelegate> connectionDelegate; // @synthesize connectionDelegate=_connectionDelegate;
- (void).cxx_destruct;
- (void)_handleDatabaseProfileStatement:(const char *)arg1 executionTimeNS:(unsigned long long)arg2;
- (void)_handleDatabaseTraceStatement:(const char *)arg1;
- (BOOL)_handleZombieSQLiteConnection:(struct sqlite3 *)arg1;
- (BOOL)_handleConnectionErrorWhileOpening:(int)arg1;
- (void)_executeTransactionCommitBlocks:(BOOL)arg1;
- (void)_resetUnfinalizedStatements;
- (void)_finalizeAllStatements;
- (BOOL)_isDeviceMediaLibraryDatabase;
- (void)_updateProfilingLevel;
- (void)_logDatabaseFileDebugInformation;
- (void)_logCurrentError;
- (void)_logCurrentErrorWhilePerformingStatementOperation:(id)arg1 statement:(id)arg2;
- (void)_logCurrentErrorWhilePerformingStatementOperation:(id)arg1 statementSQL:(id)arg2;
- (void)_createDatabaseFileIfNonexistent;
- (void)_createDatabaseDirectoryIfNonexistent;
- (BOOL)_databaseFilesAreWritable;
- (BOOL)_databaseFileExists;
- (id)_registeredModuleNamed:(id)arg1;
- (BOOL)_validatePreparedStatement:(id)arg1 error:(id *)arg2;
- (id)_shortDescription;
- (BOOL)_internalEndTransactionAndCommit:(BOOL)arg1;
- (BOOL)_internalBeginTransactionWithBehaviorType:(unsigned long long)arg1;
- (BOOL)_internalExecuteUpdate:(id)arg1 withParameters:(id)arg2 error:(id *)arg3;
- (id)_internalExecuteQuery:(id)arg1 withParameters:(id)arg2 limitProperty:(id)arg3 limitValue:(long long)arg4;
- (void)_internalLogQuery:(id)arg1 withParameters:(id)arg2 limitProperty:(id)arg3 limitValue:(long long)arg4;
- (BOOL)_executeStatement:(id)arg1 withError:(id *)arg2;
- (id)_prepareStatement:(id)arg1 error:(id *)arg2;
- (void)_setAlreadyAttemptedCorruptionRecovery:(BOOL)arg1;
- (BOOL)_alreadyAttemptedCorruptionRecovery;
- (void)_setTransactionLevel:(unsigned long long)arg1;
- (unsigned long long)_transactionLevel;
- (int)_distrustQueriesDuringBlock:(CDUnknownBlockType)arg1;
- (id)_databaseFilePaths;
- (BOOL)_handleDiskIOError;
- (BOOL)_handleBusyLockWithNumberOfRetries:(int)arg1;
- (void)_handleDatabaseCorruption;
- (void)_ensureConnectionIsOpen;
- (struct sqlite3 *)_sqliteHandle;
- (void)_setOwningPool:(id)arg1;
- (id)_owningPool;
- (int)checkpointDatabase;
- (BOOL)deleteDatabase;
- (id)sqliteError;
- (long long)lastInsertionRowID;
- (id)openBlobInTable:(id)arg1 column:(id)arg2 row:(long long)arg3 readOnly:(BOOL)arg4;
- (BOOL)removeModuleNamed:(id)arg1;
- (BOOL)registerModuleName:(id)arg1 moduleMethods:(struct sqlite3_module *)arg2;
- (BOOL)registerModule:(id)arg1;
- (BOOL)registerFunctionName:(id)arg1 argumentCount:(int)arg2 functionPointer:(CDUnknownFunctionPointerType)arg3 userData:(void *)arg4;
- (BOOL)registerFunctionName:(id)arg1 argumentCount:(int)arg2 functionPointer:(CDUnknownFunctionPointerType)arg3;
- (BOOL)registerFunctionName:(id)arg1 argumentCount:(int)arg2 block:(CDUnknownBlockType)arg3;
- (void)enqueueBlockForTransactionCommit:(CDUnknownBlockType)arg1;
- (BOOL)performTransactionWithBlock:(CDUnknownBlockType)arg1 usingBehaviorType:(unsigned long long)arg2;
- (BOOL)performTransactionWithBlock:(CDUnknownBlockType)arg1;
- (BOOL)popToRootTransactionAndCommit:(BOOL)arg1;
- (BOOL)popTransactionAndCommit:(BOOL)arg1;
- (BOOL)pushTransactionUsingBehaviorType:(unsigned long long)arg1;
- (BOOL)pushTransaction;
@property(readonly, nonatomic) BOOL transactionMarkedForRollBack;
@property(readonly, nonatomic) BOOL isInTransaction;
- (BOOL)executeUpdate:(id)arg1 withParameters:(id)arg2 error:(id *)arg3;
- (BOOL)executeUpdate:(id)arg1;
- (BOOL)tableExists:(id)arg1;
- (id)executeQuery:(id)arg1 withParameters:(id)arg2 limitProperty:(id)arg3 limitValue:(long long)arg4;
- (id)executeQuery:(id)arg1 withParameters:(id)arg2;
- (id)executeQuery:(id)arg1;
- (BOOL)databasePathExists;
- (void)flush;
- (BOOL)_closeAndFlushTransactionState:(BOOL)arg1;
- (BOOL)close;
- (BOOL)_openWithFlags:(int)arg1;
- (BOOL)open;
- (void)setCurrentTransactionID:(id)arg1;
@property(nonatomic) int profilingLevel;
@property(readonly, nonatomic) BOOL isOpen;
- (BOOL)isEqual:(id)arg1;
- (id)description;
- (void)dealloc;
- (id)initWithDatabasePath:(id)arg1;
- (id)init;
- (BOOL)_alterTableNamed:(id)arg1 withNewColumnDefinitions:(id)arg2 newColumnNames:(id)arg3 oldColumnNames:(id)arg4;
- (void)_enumerateTableColumnNamesAndDefinitionsFromTable:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (BOOL)schemaDeleteColumns:(id)arg1 inTable:(id)arg2;
- (BOOL)schemaDeleteColumn:(id)arg1 inTable:(id)arg2;
- (BOOL)schemaRenameColumn:(id)arg1 inTable:(id)arg2 toNewColumnName:(id)arg3;
- (BOOL)schemaInsertColumnDefinitions:(id)arg1 intoTable:(id)arg2 atIndex:(unsigned long long)arg3;
- (BOOL)schemaInsertColumnDefinition:(id)arg1 intoTable:(id)arg2 atIndex:(unsigned long long)arg3;
- (BOOL)schemaAddColumnDefinition:(id)arg1 toTable:(id)arg2;

@end
