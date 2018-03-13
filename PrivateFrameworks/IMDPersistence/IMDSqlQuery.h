//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface IMDSqlQuery : NSObject
{
    NSString *_tableName;
    NSString *_columns;
    NSString *_where;
    long long _limit;
}

+ (id)databaseQuery:(id)arg1;
@property(nonatomic) long long limit; // @synthesize limit=_limit;
@property(copy, nonatomic) NSString *where; // @synthesize where=_where;
@property(copy, nonatomic) NSString *columns; // @synthesize columns=_columns;
@property(readonly, copy, nonatomic) NSString *tableName; // @synthesize tableName=_tableName;
- (id)createQueryString;
- (void)dealloc;
- (id)initWithTableName:(id)arg1;

@end

