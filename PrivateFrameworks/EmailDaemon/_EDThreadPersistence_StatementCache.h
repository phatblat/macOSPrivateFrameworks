//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class EDPersistenceDatabaseConnection, NSMutableDictionary;

@interface _EDThreadPersistence_StatementCache : NSObject
{
    EDPersistenceDatabaseConnection *_connection;
    NSMutableDictionary *_preparedStatements;
}

@property(readonly, nonatomic) NSMutableDictionary *preparedStatements; // @synthesize preparedStatements=_preparedStatements;
@property(readonly, nonatomic) EDPersistenceDatabaseConnection *connection; // @synthesize connection=_connection;
- (void).cxx_destruct;
- (id)preparedStatementForQueryString:(id)arg1;
- (id)initWithConnection:(id)arg1;

@end
