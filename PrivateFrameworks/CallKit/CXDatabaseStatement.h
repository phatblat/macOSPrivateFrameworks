//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

__attribute__((visibility("hidden")))
@interface CXDatabaseStatement : NSObject
{
    struct sqlite3_stmt *_statement;
    struct sqlite3 *_database;
}

@property(nonatomic) struct sqlite3 *database; // @synthesize database=_database;
@property(nonatomic) struct sqlite3_stmt *statement; // @synthesize statement=_statement;
- (BOOL)processResultsWithExpectedColumnCount:(long long)arg1 resultRowHandler:(CDUnknownBlockType)arg2 error:(id *)arg3;
- (BOOL)bindText:(const char *)arg1 ofLength:(int)arg2 atIndex:(int)arg3 error:(id *)arg4;
- (BOOL)bindInt64:(long long)arg1 atIndex:(int)arg2 error:(id *)arg3;
- (BOOL)bind:(id)arg1 error:(id *)arg2;
- (BOOL)executeWithExpectedColumnCount:(long long)arg1 resultRowHandler:(CDUnknownBlockType)arg2 error:(id *)arg3;
- (BOOL)executeWithError:(id *)arg1;
- (void)finalize;
- (void)dealloc;
- (id)init;
- (id)initWithSQL:(id)arg1 database:(id)arg2 error:(id *)arg3;

@end
