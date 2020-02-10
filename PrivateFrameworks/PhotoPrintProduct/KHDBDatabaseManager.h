//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class KHDBPreparedSql, KHDBResultSet, KHDBUsage, NSMutableDictionary, NSMutableSet, NSObject<OS_dispatch_queue>, NSString;

@interface KHDBDatabaseManager : NSObject
{
    struct sqlite3 *_db;
    NSString *_databasePath;
    BOOL _readOnly;
    BOOL _inMemory;
    BOOL _logsErrors;
    BOOL _throwExceptionOnError;
    BOOL _crashOnErrors;
    BOOL _inTransaction;
    BOOL _traceExecution;
    BOOL _profileTraceExecution;
    BOOL _isCorrupt;
    long long _busyRetryTimeout;
    NSMutableDictionary *_tblXref;
    NSMutableDictionary *_colXref;
    KHDBResultSet *_activeResultSet;
    NSMutableSet *_preparedStatements;
    unsigned int _sqlErrorCount;
    unsigned long long _uncommittedUpdates;
    unsigned long long _missedCommits;
    NSObject<OS_dispatch_queue> *_executionQueue;
    NSObject<OS_dispatch_queue> *_executionQueue_mt;
    unsigned long long _qResumeCount;
    KHDBResultSet *_postponableResultSet;
    int _postponableSpinlock;
    KHDBPreparedSql *_commitSql;
    KHDBPreparedSql *_beginTransactionSql;
    unsigned long long _queryCount;
    KHDBUsage *_usageStats[22];
    CDUnknownBlockType _commitDelegate;
}

+ (void)setLogErrorsEnabled:(BOOL)arg1;
+ (id)sqliteLibVersion;
@property(readonly, nonatomic) BOOL inTransaction; // @synthesize inTransaction=_inTransaction;
@property(nonatomic) unsigned long long uncommittedUpdates; // @synthesize uncommittedUpdates=_uncommittedUpdates;
@property(nonatomic) BOOL profileTraceExecution; // @synthesize profileTraceExecution=_profileTraceExecution;
@property(nonatomic) BOOL traceExecution; // @synthesize traceExecution=_traceExecution;
@property(nonatomic) BOOL throwExceptionOnError; // @synthesize throwExceptionOnError=_throwExceptionOnError;
@property(nonatomic) BOOL crashOnErrors; // @synthesize crashOnErrors=_crashOnErrors;
@property(nonatomic) BOOL logsErrors; // @synthesize logsErrors=_logsErrors;
@property BOOL isCorrupt; // @synthesize isCorrupt=_isCorrupt;
- (id)pathForQueryLog;
- (BOOL)createIndexOnTable:(id)arg1 columnNames:(id)arg2 named:(id)arg3;
- (BOOL)createIndexOnTable:(id)arg1 columnName:(id)arg2;
- (void)_dispatch_async_suspend:(_Bool)arg1 withBlock:(CDUnknownBlockType)arg2;
- (void)dispatch_async:(CDUnknownBlockType)arg1;
- (void)_dispatch_sync_if_needed_suspend:(_Bool)arg1 withBlock:(CDUnknownBlockType)arg2;
- (void)waitForOutstandingWrites;
- (void)dispatch_sync_if_needed:(CDUnknownBlockType)arg1;
- (void)postponeActiveResultSet;
- (void)dropPostponableResultSet:(id)arg1;
- (void)addPostponableResultSet:(id)arg1;
- (BOOL)onDbQueue;
- (id)executionQueue_mt;
- (id)executionQueue;
- (void)setBackgroundWritingEnabled:(BOOL)arg1;
- (void)unlockDatabase;
- (void)lockDatabase;
- (void)setLockingModeToExclusive:(BOOL)arg1;
- (long long)synchronicity;
- (void)setSynchronicity:(long long)arg1;
- (void)setBusyRetryTimeout:(long long)arg1;
- (long long)busyRetryTimeout;
- (long long)filesize;
- (void)increaseDatabaseSize:(long long)arg1;
- (void)reserveDatabaseSize:(long long)arg1;
- (void)analyze;
- (void)vacuum;
- (BOOL)beginTransaction;
- (void)backgroundCommitAndBeginNewTransaction:(id)arg1;
- (void)backgroundCommit:(id)arg1;
- (BOOL)commitAndBeginNewTransaction;
- (void)ensureBackgroundCommitNextCycle;
- (BOOL)commit;
- (CDUnknownBlockType)commitNoticeBlock;
- (void)setCommitNoticeBlock:(CDUnknownBlockType)arg1;
- (void)update:(id)arg1;
- (BOOL)updateSync:(id)arg1 withArgs:(id)arg2;
- (void)update:(id)arg1 withArgs:(id)arg2;
- (id)query:(id)arg1;
- (id)query:(id)arg1 withArgs:(id)arg2;
- (void)finalizePreparedStatementsLocked;
- (void)finalizePreparedStatements;
- (void)unregisterPreparedStatement:(id)arg1;
- (void)registerPreparedStatement:(id)arg1;
- (void)setActiveResultSet:(id)arg1;
- (id)activeResultSet;
- (id)columnsForTable:(id)arg1;
- (void)bindObject:(id)arg1 toColumn:(int)arg2 inStatement:(struct sqlite3_stmt *)arg3;
- (unsigned long long)lastInsertRowId;
- (BOOL)passesIntegrityCheck;
- (unsigned int)sqlErrorCount;
- (void)incrementSqlErrorCount;
- (BOOL)logErrors;
- (BOOL)hadError;
- (long long)lastErrorCode;
- (id)lastErrorMessage;
- (BOOL)goodConnection;
- (void)close;
- (BOOL)isClosed;
- (BOOL)isOpen;
- (BOOL)readOnly;
- (BOOL)inMemory;
- (BOOL)openAsReadOnly:(BOOL)arg1;
- (BOOL)openAsReadOnly:(BOOL)arg1 attemptJournalCleanup:(BOOL)arg2;
- (id)beginTransactionSql;
- (id)commitSql;
- (id)databasePath;
- (struct sqlite3 *)db;
- (id)usageOfType:(int)arg1;
- (void)addUsage:(double)arg1 ofType:(int)arg2;
- (void)dealloc;
- (id)initWithPath:(id)arg1;
- (id)arrayOfStringsForQuery:(id)arg1;
- (id)arrayOfStringsForQuery:(id)arg1 withArgs:(id)arg2;
- (id)setOfDatesForQuery:(id)arg1 withArgs:(id)arg2;
- (id)listOfNumbersForQuery:(id)arg1 withArgs:(id)arg2;
- (id)setOfNumbersForQuery:(id)arg1;
- (id)setOfNumbersForQuery:(id)arg1 withArgs:(id)arg2;
- (id)dictionaryOfStringsForQuery:(id)arg1;
- (id)dictionaryOfStringsForQuery:(id)arg1 withArgs:(id)arg2;
- (id)dictionaryOfDatesForQuery:(id)arg1;
- (id)dictionaryOfDatesForQuery:(id)arg1 withArgs:(id)arg2;
- (id)dictionaryWithKeySelector:(SEL)arg1 valueSelector:(SEL)arg2 forQuery:(id)arg3 withArgs:(id)arg4;
- (id)setOfStringsForQuery:(id)arg1;
- (id)setOfStringsForQuery:(id)arg1 withArgs:(id)arg2;
- (id)dateForQuery:(id)arg1;
- (id)dataForQuery:(id)arg1;
- (double)doubleForQuery:(id)arg1;
- (BOOL)boolForQuery:(id)arg1;
- (long long)intForQuery:(id)arg1;
- (long long)longLongForQuery:(id)arg1;
- (long long)longForQuery:(id)arg1;
- (id)numberForQuery:(id)arg1;
- (id)stringForQuery:(id)arg1;

@end
