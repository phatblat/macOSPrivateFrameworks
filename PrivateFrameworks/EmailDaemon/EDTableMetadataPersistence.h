//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "EDPersistenceDatabaseSchemaProvider.h"

@interface EDTableMetadataPersistence : NSObject <EDPersistenceDatabaseSchemaProvider>
{
}

+ (long long)largestDeletedRowIDForTableName:(id)arg1 withConnection:(id)arg2;
+ (BOOL)updateLargestDeletedRowID:(long long)arg1 forTableName:(id)arg2 withConnection:(id)arg3;
+ (id)tablesAndForeignKeysToResolve:(id *)arg1 associationsToResolve:(id *)arg2;

@end

