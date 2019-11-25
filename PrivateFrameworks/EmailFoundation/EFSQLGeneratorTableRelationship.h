//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class EFSQLColumnSchema, EFSQLTableSchema;

@interface EFSQLGeneratorTableRelationship : NSObject <NSCopying>
{
    EFSQLTableSchema *_table;
    EFSQLColumnSchema *_sourceColumn;
    EFSQLTableSchema *_targetTable;
    unsigned long long _relationship;
}

@property(readonly, nonatomic) unsigned long long relationship; // @synthesize relationship=_relationship;
@property(readonly, nonatomic) EFSQLTableSchema *targetTable; // @synthesize targetTable=_targetTable;
@property(readonly, nonatomic) EFSQLColumnSchema *sourceColumn; // @synthesize sourceColumn=_sourceColumn;
@property(readonly, nonatomic) EFSQLTableSchema *table; // @synthesize table=_table;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualToTableRelationship:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithPropertyMapper:(id)arg1 previousTable:(id)arg2;

@end

