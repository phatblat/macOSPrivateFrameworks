//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <BaseBoard/_BSSqlitePreparedSimpleStatement.h>

@class NSString;

@interface _BSSqliteDeferredPreparedSimpleStatement : _BSSqlitePreparedSimpleStatement
{
    NSString *_deferredSql;
}

- (void).cxx_destruct;
- (BOOL)executeWithBindings:(id)arg1 resultRowHandler:(CDUnknownBlockType)arg2 error:(out id *)arg3;
- (id)initWithDatabaseConnection:(id)arg1 deferredSql:(id)arg2;

@end
