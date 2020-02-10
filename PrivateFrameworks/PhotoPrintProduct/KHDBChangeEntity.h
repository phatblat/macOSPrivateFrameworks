//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <PhotoPrintProduct/KHDBEntity.h>

@class KHDBPreparedSql;

@interface KHDBChangeEntity : KHDBEntity
{
    KHDBPreparedSql *_updateMaskSql;
    BOOL _ignoreCurrentDatabaseChanges;
}

+ (id)concatenateUuidSet:(id)arg1 secondSet:(id)arg2;
+ (id)concatenateUuids:(id)arg1 secondUuid:(id)arg2;
- (id)modifiedUuidsForDbToMasksForConcatenatedChangeUuid:(id)arg1 afterDate:(id)arg2 limitToUuids:(id)arg3 excludeDbUuid:(id)arg4;
- (id)modifiedUuidsToMasksForConcatenatedChangeUuid:(id)arg1 afterDate:(id)arg2 limitToUuids:(id)arg3;
- (id)uuidToDbMapForConcatenatedChangeUuid:(id)arg1 changeType:(int)arg2 afterDate:(id)arg3 limitToUuids:(id)arg4;
- (id)uuidsForConcatenatedChangeUuid:(id)arg1 changeType:(int)arg2 afterDate:(id)arg3 limitToUuids:(id)arg4;
- (id)modifiedUuidsForDbToMasksAfterDate:(id)arg1 limitToUuids:(id)arg2 excludeDbUuid:(id)arg3;
- (id)modifiedUuidsToMasksAfterDate:(id)arg1 limitToUuids:(id)arg2;
- (id)uuidToDbMapForChangeType:(int)arg1 afterDate:(id)arg2 limitToUuids:(id)arg3 excludeDbUuid:(id)arg4;
- (id)uuidToDbMapForChangeType:(int)arg1 afterDate:(id)arg2 limitToUuids:(id)arg3;
- (id)uuidsForChangeType:(int)arg1 afterDate:(id)arg2 limitToUuids:(id)arg3;
- (id)uuidsForChangeType:(int)arg1;
- (void)updateChangeForModelId:(id)arg1 newMask:(unsigned long long)arg2 changeDate:(id)arg3;
- (id)infoDictionaryForChangeForUuid:(id)arg1 type:(int)arg2 mask:(unsigned long long)arg3 changeDate:(id)arg4 changeDbUuid:(id)arg5;
- (id)createChangeForUuids:(id)arg1 type:(int)arg2 mask:(unsigned long long)arg3 changeDate:(id)arg4 changeDbUuid:(id)arg5;
- (id)createChangeForUuid:(id)arg1 type:(int)arg2 mask:(unsigned long long)arg3 changeDate:(id)arg4 changeDbUuid:(id)arg5;
- (id)readForDupSqlWhere:(id)arg1;
- (void)setIgnoreCurrentDatabaseChanges:(BOOL)arg1;
- (BOOL)ignoreCurrentDatabaseChanges;
- (void)dealloc;
- (id)initWithJoinTableName:(id)arg1 forDatabaseManager:(id)arg2 forDatabase:(id)arg3;
- (id)initWithTableName:(id)arg1 forDatabaseManager:(id)arg2 forDatabase:(id)arg3;

@end
