//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <PhotoPrintProduct/KHDBEntity.h>

@class KHDBPreparedSql, NSNumber;

@interface KHDBAdminDataEntity : KHDBEntity
{
    KHDBPreparedSql *m_updateTablePropertySql;
    KHDBPreparedSql *m_updateTableBlobPropertySql;
    KHDBPreparedSql *m_deletePropertySql;
    NSNumber *m_closedClean;
    BOOL m_isDirty;
}

+ (int)typeForObject:(id)arg1;
- (BOOL)overridePersistFlagForPropertyArea:(id)arg1 propertyName:(id)arg2;
- (void)persistAfterRebuildPropertiesChanged;
- (id)persistAfterRebuildProperties;
- (void)deleteCombinedUpgradePhase;
- (void)setCombinedUpgradePhase:(id)arg1;
- (id)combinedUpgradePhase;
- (void)markAsDirty:(BOOL)arg1;
- (void)setLastLaunchClosedClean;
- (void)setClosedCleanly:(BOOL)arg1;
- (BOOL)closedCleanly;
- (void)setEntityIsClosing:(BOOL)arg1;
- (void)setSyncDate:(id)arg1 forDatabaseUuid:(id)arg2;
- (id)syncDateForDatabaseUuid:(id)arg1;
- (id)syncDates;
- (void)setDatabaseUuid:(id)arg1;
- (id)databaseUuid;
- (void)setCreateDate:(id)arg1;
- (id)createDate;
- (void)setMinorVersion:(id)arg1;
- (id)minorVersion;
- (void)setMajorVersion:(id)arg1;
- (id)majorVersion;
- (void)invalidateAllModelIdsForEntity:(id)arg1;
- (void)saveAllModelIds:(id)arg1 forEntity:(id)arg2;
- (id)allModelIdsForEntity:(id)arg1;
- (void)setNextId:(unsigned long long)arg1 forEntity:(id)arg2;
- (void)invalidateNextIdForEntity:(id)arg1;
- (unsigned long long)nextIdForEntity:(id)arg1;
- (id)propertyForArea:(id)arg1 propertyName:(id)arg2;
- (double)doublePropertyForArea:(id)arg1 propertyName:(id)arg2;
- (id)datePropertyForArea:(id)arg1 propertyName:(id)arg2;
- (id)numberPropertyForArea:(id)arg1 propertyName:(id)arg2;
- (id)stringPropertyForArea:(id)arg1 propertyName:(id)arg2;
- (id)blobPropertyForArea:(id)arg1 propertyName:(id)arg2;
- (BOOL)propertyExistsForArea:(id)arg1 propertyName:(id)arg2;
- (void)deletePropertyForArea:(id)arg1 propertyName:(id)arg2;
- (void)updateBlobProperty:(id)arg1 propertyArea:(id)arg2 propertyName:(id)arg3;
- (void)updateBlobProperty:(id)arg1 propertyArea:(id)arg2 propertyName:(id)arg3 persistAfterRebuild:(BOOL)arg4;
- (void)updateProperty:(id)arg1 propertyArea:(id)arg2 propertyName:(id)arg3;
- (void)updateProperty:(id)arg1 propertyArea:(id)arg2 propertyName:(id)arg3 persistAfterRebuild:(BOOL)arg4;
- (id)deletePropertySql;
- (id)updateTableBlobPropertySql;
- (id)updateTablePropertySql;
- (void)dealloc;
- (id)initWithTableName:(id)arg1 forDatabaseManager:(id)arg2 forDatabase:(id)arg3;

@end
