//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary, WBSSQLiteDatabase;

@interface WBSSQLiteStatementCache : NSObject
{
    WBSSQLiteDatabase *_database;
    NSMutableDictionary *_statements;
}

- (void).cxx_destruct;
- (void)dealloc;
- (void)invalidate;
- (id)statementForQuery:(id)arg1 error:(id *)arg2;
- (id)_createStatementForQuery:(id)arg1 error:(id *)arg2;
- (void)setCachedStatement:(id)arg1 forQuery:(id)arg2;
- (id)cachedStatementForQuery:(id)arg1;
- (id)initWithDatabase:(id)arg1;
- (id)init;

@end

