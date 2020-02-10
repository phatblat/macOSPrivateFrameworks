//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "EFLoggable.h"

@class NSHashTable, NSString, NSURL;

@interface EFSQLConnection : NSObject <EFLoggable>
{
    NSHashTable *_preparedStatements;
    struct sqlite3 *_sqlDB;
    NSURL *_url;
}

+ (BOOL)isSuccessResultCode:(int)arg1 forStep:(BOOL)arg2 error:(id *)arg3;
+ (BOOL)setFileProtection:(id)arg1 forDatabaseAtURL:(id)arg2 error:(id *)arg3;
+ (id)log;
@property(readonly, nonatomic) NSURL *url; // @synthesize url=_url;
@property(readonly, nonatomic) struct sqlite3 *sqlDB; // @synthesize sqlDB=_sqlDB;
- (void).cxx_destruct;
- (BOOL)_isSuccessResultCode:(int)arg1 sqlDB:(struct sqlite3 *)arg2 error:(id *)arg3;
- (id)resultsForQueryString:(id)arg1;
- (BOOL)executeStatementString:(id)arg1 error:(id *)arg2;
- (id)preparedStatementForQueryString:(id)arg1;
- (BOOL)rollbackTransactionWithError:(id *)arg1;
- (BOOL)commitTransactionWithError:(id *)arg1;
- (BOOL)beginTransaction:(long long)arg1 error:(id *)arg2;
- (void)flush;
@property(readonly, nonatomic) BOOL isOpen;
- (void)close;
- (BOOL)finalizeStatementsWithError:(id *)arg1;
- (BOOL)openWithFlags:(int)arg1 error:(id *)arg2;
- (BOOL)openWithError:(id *)arg1;
@property(readonly, copy) NSString *description;
- (id)initWithSQLDB:(struct sqlite3 *)arg1;
- (id)initWithURL:(id)arg1;
- (id)initWithInMemoryDatabase;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
