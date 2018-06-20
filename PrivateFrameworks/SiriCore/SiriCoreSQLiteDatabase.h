//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSCache, NSString;

@interface SiriCoreSQLiteDatabase : NSObject
{
    struct sqlite3 *_handle;
    NSCache *_cachedSQLiteStatementsByQueryString;
    NSString *_path;
    long long _dataProtectionClass;
    long long _options;
}

@property(readonly, nonatomic) long long options; // @synthesize options=_options;
@property(readonly, nonatomic) long long dataProtectionClass; // @synthesize dataProtectionClass=_dataProtectionClass;
@property(readonly, copy, nonatomic) NSString *path; // @synthesize path=_path;
- (void).cxx_destruct;
- (BOOL)executeQueryString:(id)arg1 error:(id *)arg2;
- (BOOL)executeQuery:(id)arg1 error:(id *)arg2;
- (id)executeQuery:(id)arg1;
- (BOOL)closeWithError:(id *)arg1;
- (BOOL)openWithError:(id *)arg1;
- (id)initWithPath:(id)arg1 dataProtectionClass:(long long)arg2 options:(long long)arg3;
- (BOOL)rollbackTransactionWithError:(id *)arg1;
- (BOOL)commitTransactionWithError:(id *)arg1;
- (BOOL)beginTransactionWithError:(id *)arg1;
- (BOOL)rollbackToSavepointWithName:(id)arg1 error:(id *)arg2;
- (BOOL)releaseSavepointWithName:(id)arg1 error:(id *)arg2;
- (BOOL)savepointWithName:(id)arg1 error:(id *)arg2;
- (BOOL)performQuickCheckWithError:(id *)arg1;
- (BOOL)performIntegrityCheckWithError:(id *)arg1;
- (BOOL)performForeignKeyCheckWithError:(id *)arg1;
- (BOOL)vacuumWithError:(id *)arg1;
- (BOOL)dropIndexWithName:(id)arg1 error:(id *)arg2;
- (BOOL)createIndex:(id)arg1 error:(id *)arg2;
- (BOOL)alterTableWithName:(id)arg1 addColumn:(id)arg2 error:(id *)arg3;
- (BOOL)alterTableWithName:(id)arg1 renameTo:(id)arg2 error:(id *)arg3;
- (BOOL)dropTableWithName:(id)arg1 error:(id *)arg2;
- (BOOL)createTable:(id)arg1 error:(id *)arg2;
- (id)fetchTableWithName:(id)arg1 error:(id *)arg2;
- (id)fetchTableNamesWithError:(id *)arg1;
- (unsigned long long)countValuesInTableWithName:(id)arg1 columnName:(id)arg2 behavior:(long long)arg3 criterion:(id)arg4 range:(id)arg5 error:(id *)arg6;
- (id)selectValuesFromTableWithName:(id)arg1 columnName:(id)arg2 behavior:(long long)arg3 criterion:(id)arg4 order:(id)arg5 range:(id)arg6 error:(id *)arg7;
- (id)selectValueMapsFromTableWithName:(id)arg1 columnNames:(id)arg2 behavior:(long long)arg3 criterion:(id)arg4 order:(id)arg5 range:(id)arg6 error:(id *)arg7;
- (id)selectValueTuplesFromTableWithName:(id)arg1 columnNames:(id)arg2 behavior:(long long)arg3 criterion:(id)arg4 order:(id)arg5 range:(id)arg6 error:(id *)arg7;
- (BOOL)insertIntoTableWithName:(id)arg1 record:(id)arg2 error:(id *)arg3;
- (BOOL)insertIntoTableWithName:(id)arg1 valueMap:(id)arg2 error:(id *)arg3;
- (BOOL)updateTableWithName:(id)arg1 valueMap:(id)arg2 criterion:(id)arg3 error:(id *)arg4;
- (BOOL)deleteFromTableWithName:(id)arg1 criterion:(id)arg2 error:(id *)arg3;

@end

