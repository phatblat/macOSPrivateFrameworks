//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class KHDBDatabase, KHDBDatabaseManager, KHDBLockedDictionary, KHDBLockedRidList, KHDBLockedSet, KHDBPreparedSql, KHDBRidIndexEntity, KHDBRidIter, NSCountedSet, NSMutableArray, NSMutableDictionary, NSMutableSet, NSObject<OS_dispatch_queue>, NSString;

@interface KHDBEntity : NSObject
{
    int _spinlock;
    KHDBDatabase *_database;
    KHDBDatabaseManager *_databaseManager;
    NSString *_tableName;
    NSMutableArray *_fieldDefs;
    NSMutableDictionary *_fieldDefsByName;
    NSMutableArray *_derivedFieldDefs;
    NSMutableArray *_fieldNames;
    NSString *_primaryKeyField;
    NSMutableArray *_multiColumnIndexes;
    NSMutableArray *_uniqueMultiColumnIndexes;
    NSString *_infoDictionaryColumns;
    KHDBRidIndexEntity *_ridIndexEntity;
    Class _modelClass;
    BOOL _canPrepareSql;
    BOOL _canCreateModels;
    BOOL _allModelsLoaded;
    int _numOutstandingWrites;
    BOOL _hasModelIdField;
    BOOL _hasUuidField;
    BOOL _hasCreateDateField;
    BOOL _hasModDateField;
    BOOL _hasIsInTrashField;
    BOOL _supportsOpenClose;
    BOOL _hasInfoDictionary;
    BOOL _useOverreleaseChecking;
    BOOL _nextModelIdIsDirty;
    unsigned long long _nextModelId;
    BOOL _entityIsClosing;
    BOOL _canFlushModels;
    unsigned long long _flushModelCount;
    NSMutableDictionary *_cachedModelsByUuid;
    NSMutableDictionary *_cachedModelsById;
    KHDBLockedRidList *_cachedModelIdList;
    KHDBRidIter *_flushModelIdIterator;
    NSObject<OS_dispatch_queue> *_cachedModelsQueue;
    NSMutableSet *_cachedModels;
    NSString *_allFieldsList;
    NSString *_autoLoadFieldList;
    KHDBPreparedSql *_persistModelSql;
    KHDBPreparedSql *_copyRecordSql;
    KHDBLockedDictionary *_commonQueries;
    KHDBLockedDictionary *_commonDistinctQueries;
    KHDBLockedDictionary *_commonUpdates;
    KHDBLockedDictionary *_commonModifies;
    KHDBLockedDictionary *_commonMultiUpdates;
    KHDBLockedDictionary *_commonDeletes;
    KHDBLockedDictionary *_inMemoryFilters;
    KHDBLockedDictionary *_entityMemoryFilters;
    KHDBLockedSet *_reusableStrings;
    KHDBLockedDictionary *_ridIndexes;
    KHDBLockedDictionary *_ridIndexesByFieldName;
    KHDBLockedRidList *_allModelIds;
    NSCountedSet *_allQueriesUsed;
    NSCountedSet *_couldHaveBeenInMemory;
    unsigned long long _indentLevel;
    KHDBLockedDictionary *_relationshipCaches;
}

+ (void)createEntitiesForDatabaseFile:(id)arg1;
+ (void)createEntitiesForDatabaseFile:(id)arg1 asReadOnly:(BOOL)arg2;
+ (id)entitiesFromDatabaseFile:(id)arg1;
+ (int)fieldTypeFromDefinition:(id)arg1;
+ (id)normalizeSql:(id)arg1;
+ (id)stripSqlComments:(id)arg1;
+ (id)stripCComments:(id)arg1;
+ (id)classNameForName:(id)arg1;
+ (id)instanceNameForName:(id)arg1;
+ (id)tablePrefixes;
+ (id)capitalizedString:(id)arg1;
+ (id)bucketReaderForSqlType:(int)arg1;
+ (id)indexedReaderForSqlType:(int)arg1;
+ (id)readerForSqlType:(int)arg1;
+ (id)sqlTypeStringForSqlType:(int)arg1;
+ (id)castToObjectFor:(id)arg1 withSqlType:(int)arg2;
+ (BOOL)needRetainForSqlType:(int)arg1;
+ (id)classForSqlType:(int)arg1;
+ (void)flushModelsAggressively:(id)arg1;
+ (void)flushModels:(id)arg1;
+ (id)newLoadDataFromResultSet:(id)arg1 forFieldsWithDefs:(id)arg2;
+ (unsigned long long)fillDropInBucket:(id)arg1 fromResultSet:(id)arg2 forColumnIndex:(long long)arg3;
+ (id)objectFromResultSet:(id)arg1 forType:(int)arg2 forColumnIndex:(long long)arg3;
+ (id)arrayOfType:(int)arg1 forQuery:(id)arg2 withArgs:(id)arg3;
+ (id)arrayOfType:(int)arg1 withCanceler:(id)arg2 forQuery:(id)arg3 withArgs:(id)arg4;
+ (void)appendToArray:(id)arg1 ofType:(int)arg2 forQuery:(id)arg3 withArgs:(id)arg4;
+ (void)appendToArray:(id)arg1 ofType:(int)arg2 withCanceler:(id)arg3 forQuery:(id)arg4 withArgs:(id)arg5;
+ (id)setOfType:(int)arg1 forQuery:(id)arg2 withArgs:(id)arg3;
+ (id)setOfType:(int)arg1 withCanceler:(id)arg2 forQuery:(id)arg3 withArgs:(id)arg4;
+ (void)addObjectOrNull:(id)arg1 toArray:(id)arg2;
+ (id)makeUpdateList:(id)arg1;
+ (id)makeList:(id)arg1;
+ (id)stringForSqlType:(int)arg1;
+ (void)delayAfterBeingPostponed;
+ (void)initialize;
@property(nonatomic) unsigned long long flushModelCount; // @synthesize flushModelCount=_flushModelCount;
@property(nonatomic) BOOL useOverreleaseChecking; // @synthesize useOverreleaseChecking=_useOverreleaseChecking;
@property(nonatomic) BOOL allModelsLoaded; // @synthesize allModelsLoaded=_allModelsLoaded;
@property(nonatomic) BOOL canPrepareSql; // @synthesize canPrepareSql=_canPrepareSql;
@property(nonatomic) BOOL canCreateModels; // @synthesize canCreateModels=_canCreateModels;
@property(nonatomic) BOOL entityIsClosing; // @synthesize entityIsClosing=_entityIsClosing;
@property(retain, nonatomic) KHDBRidIndexEntity *ridIndexEntity; // @synthesize ridIndexEntity=_ridIndexEntity;
- (void)generateDatabaseClassForDatabase:(id)arg1 withEntities:(id)arg2 asReadOnly:(BOOL)arg3;
- (void)writeDatabaseImplementationToHandle:(id)arg1 forDatabase:(id)arg2 withEntities:(id)arg3 asReadOnly:(BOOL)arg4;
- (void)writeDatabaseInterfaceToHandle:(id)arg1 forDatabaseClass:(id)arg2 withEntities:(id)arg3;
- (void)generateFilesAsReadOnly:(BOOL)arg1;
- (void)writeEntityImplementationToHandle:(id)arg1;
- (void)writeOptions:(int)arg1 toHandle:(id)arg2;
- (void)writeEntityInterfaceToHandle:(id)arg1;
- (void)writeModelImplementationToHandle:(id)arg1 asReadOnly:(BOOL)arg2;
- (void)writeModelInterfaceToHandle:(id)arg1 asReadOnly:(BOOL)arg2;
- (void)writeCopyrightHeaderForName:(id)arg1 toHandle:(id)arg2;
- (id)fieldKeyForFieldName:(id)arg1;
- (void)writeIndentedString:(id)arg1 toHandle:(id)arg2;
- (void)writeString:(id)arg1 toHandle:(id)arg2;
- (void)decrIndentLevel;
- (void)incrIndentLevel;
- (unsigned long long)indentLevel;
- (void)rebuildRidIndexes;
- (void)rebuildRidIndexes:(CDUnknownBlockType)arg1;
- (void)repairRidIndexes;
- (void)repairRidIndexes:(CDUnknownBlockType)arg1;
- (void)writeValue:(id)arg1 toField:(id)arg2 forModelId:(id)arg3 withModDate:(id)arg4;
- (long long)intValueForField:(id)arg1 forModelId:(id)arg2;
- (BOOL)boolValueForField:(id)arg1 forModelId:(id)arg2;
- (id)dataValueForField:(id)arg1 forModelId:(id)arg2;
- (id)dateValueForField:(id)arg1 forModelId:(id)arg2;
- (id)numberValueForField:(id)arg1 forModelId:(id)arg2;
- (id)stringValueForField:(id)arg1 forModelId:(id)arg2;
- (void)update:(id)arg1 withData:(id)arg2 forModelId:(id)arg3;
- (void)update:(id)arg1;
- (void)update:(id)arg1 args:(id)arg2;
- (void)flushAllModels;
- (void)flushModels;
- (void)flushModels:(BOOL)arg1;
- (id)allCachedModelIdList;
@property(nonatomic) BOOL canFlushModels;
- (id)allCachedModels;
- (unsigned long long)cachedModelCount;
- (void)deleteOfModelsWithIds:(id)arg1;
- (void)deleteOfModelsWithIds:(id)arg1 deleteInfoDictionary:(BOOL)arg2;
- (void)deleteOfModelObjectWithId:(id)arg1;
- (void)deleteOfModelObjectWithId:(id)arg1 deleteInfoDictionary:(BOOL)arg2;
- (void)uncacheAllModels;
- (void)uncacheModels:(id)arg1;
- (void)uncacheModel:(id)arg1;
- (id)cachedModelsForIdList:(id)arg1 notFound:(id *)arg2;
- (id)cachedModelsForIds:(id)arg1 notFound:(id *)arg2;
- (void)resetUuidForModel:(id)arg1 fromUuid:(id)arg2;
- (id)cachedModelForId:(unsigned long long)arg1;
- (id)cachedModelForIdNumber:(id)arg1;
- (id)cachedModelsForUuids:(id)arg1 uuidsNotFound:(id)arg2;
- (id)cachedModelForUuid:(id)arg1;
- (id)hasCachedModelForModelId:(id)arg1;
- (id)cacheModel:(id)arg1;
- (unsigned long long)retainCountForCachedModel:(id)arg1;
- (id)addressesForModelIds:(id)arg1;
- (id)addressForModelId:(id)arg1;
- (id)someModelsForIdList:(id)arg1;
- (id)someModelsForIdList:(id)arg1 withCanceler:(id)arg2;
- (id)modelsForIdList:(id)arg1;
- (id)modelsForIdList:(id)arg1 withCanceler:(id)arg2;
- (id)modelsForIds:(id)arg1;
- (id)modelsForIds:(id)arg1 withCanceler:(id)arg2;
- (id)modelForId:(id)arg1;
- (id)modelsForUuids:(id)arg1;
- (id)modelsForUuids:(id)arg1 withCanceler:(id)arg2;
- (id)modelForUuid:(id)arg1;
- (id)mappingsForEntity;
- (void)copyRecordsWithMappings:(id)arg1 toEntity:(id)arg2 fromQuery:(id)arg3;
- (void)copyRecordsWithMappings:(id)arg1 toEntity:(id)arg2 where:(id)arg3 args:(id)arg4;
- (void)copyRecordsWithMappings:(id)arg1 toEntity:(id)arg2 where:(id)arg3;
- (void)copyRecordsToEntity:(id)arg1 where:(id)arg2;
- (void)copyRecordsToEntity:(id)arg1 where:(id)arg2 args:(id)arg3;
- (void)copyRecordsToEntity:(id)arg1 withCanceler:(id)arg2 where:(id)arg3;
- (void)copyRecordsToEntity:(id)arg1 withCanceler:(id)arg2 where:(id)arg3 args:(id)arg4;
- (void)copyRecordsToEntity:(id)arg1 fromQuery:(id)arg2;
- (id)readForDupSqlWhere:(id)arg1;
- (void)copyFields:(id)arg1 toEntity:(id)arg2 withInsertSql:(id)arg3 fromQuery:(id)arg4;
- (void)copyFields:(id)arg1 toEntity:(id)arg2 withInsertSql:(id)arg3 where:(id)arg4;
- (void)copyFields:(id)arg1 toEntity:(id)arg2 withInsertSql:(id)arg3 where:(id)arg4 args:(id)arg5;
- (void)insertIntoRidList:(id)arg1 idsForColumn:(id)arg2 where:(id)arg3;
- (void)insertIntoRidList:(id)arg1 idsForColumn:(id)arg2 where:(id)arg3 args:(id)arg4;
- (void)insertIntoRidList:(id)arg1 withCanceler:(id)arg2 idsForColumn:(id)arg3 where:(id)arg4;
- (void)insertIntoRidList:(id)arg1 withCanceler:(id)arg2 idsForColumn:(id)arg3 where:(id)arg4 args:(id)arg5;
- (void)insertIntoRidList:(id)arg1 idsForColumn:(id)arg2 fromQuery:(id)arg3;
- (id)dictionaryOfListsForKey:(id)arg1 value:(id)arg2 where:(id)arg3;
- (id)dictionaryOfListsForKey:(id)arg1 value:(id)arg2 where:(id)arg3 args:(id)arg4;
- (id)dictionaryOfListsForKey:(id)arg1 value:(id)arg2 fromQuery:(id)arg3;
- (id)dictionaryOfSetsForKey:(id)arg1 value:(id)arg2 defaultValue:(id)arg3 where:(id)arg4;
- (id)dictionaryOfSetsForKey:(id)arg1 value:(id)arg2 defaultValue:(id)arg3 where:(id)arg4 args:(id)arg5;
- (id)dictionaryOfSetsForKey:(id)arg1 value:(id)arg2 defaultValue:(id)arg3 fromQuery:(id)arg4;
- (id)nestedDictionariesForOuterKey:(id)arg1 innerKey:(id)arg2 value:(id)arg3 where:(id)arg4;
- (id)nestedDictionariesForOuterKey:(id)arg1 innerKey:(id)arg2 value:(id)arg3 where:(id)arg4 args:(id)arg5;
- (id)nestedDictionariesForOuterKey:(id)arg1 innerKey:(id)arg2 value:(id)arg3 fromQuery:(id)arg4;
- (id)dictionaryForKey:(id)arg1 value:(id)arg2 defaultValue:(id)arg3 where:(id)arg4;
- (id)dictionaryForKey:(id)arg1 value:(id)arg2 defaultValue:(id)arg3 where:(id)arg4 args:(id)arg5;
- (id)dictionaryForKey:(id)arg1 value:(id)arg2 defaultValue:(id)arg3 fromQuery:(id)arg4;
- (void)updateColumn:(id)arg1 remappings:(id)arg2;
- (void)updateColumn:(id)arg1 toValue:(id)arg2 where:(id)arg3;
- (void)updateColumn:(id)arg1 toValue:(id)arg2 where:(id)arg3 args:(id)arg4;
- (void)appendAddressesToArray:(id)arg1 orderedBy:(id)arg2 where:(id)arg3 args:(id)arg4;
- (id)select:(id)arg1 orderedBy:(id)arg2 where:(id)arg3 args:(id)arg4;
- (id)selectObjectsAsDictionaries:(id)arg1 where:(id)arg2;
- (id)selectObjectsAsDictionaries:(id)arg1 where:(id)arg2 args:(id)arg3;
- (id)selectObjectsAsDictionaries:(id)arg1 fromQuery:(id)arg2;
- (id)selectDictionaryOfDictionaries:(id)arg1 forKey:(id)arg2 withCanceler:(id)arg3 where:(id)arg4;
- (id)selectDictionaryOfDictionaries:(id)arg1 forKey:(id)arg2 withCanceler:(id)arg3 where:(id)arg4 args:(id)arg5;
- (id)selectDictionaryOfDictionaries:(id)arg1 forKey:(id)arg2 fromQuery:(id)arg3;
- (id)selectDictionaryOfObjects:(id)arg1 forKey:(id)arg2 withCanceler:(id)arg3 where:(id)arg4;
- (id)selectDictionaryOfObjects:(id)arg1 forKey:(id)arg2 withCanceler:(id)arg3 where:(id)arg4 args:(id)arg5;
- (id)selectDictionaryOfObjects:(id)arg1 forKey:(id)arg2 fromQuery:(id)arg3;
- (id)selectDistinctColumns:(id)arg1 where:(id)arg2;
- (id)selectDistinctColumns:(id)arg1 where:(id)arg2 args:(id)arg3;
- (id)selectDistinctColumns:(id)arg1 fromQuery:(id)arg2;
- (id)selectObjects:(id)arg1 where:(id)arg2;
- (id)selectObjects:(id)arg1 where:(id)arg2 args:(id)arg3;
- (id)selectObjects:(id)arg1 fromQuery:(id)arg2;
- (id)selectOneObject:(id)arg1 where:(id)arg2;
- (id)selectOneObject:(id)arg1 where:(id)arg2 args:(id)arg3;
- (id)selectOneObject:(id)arg1 fromQuery:(id)arg2;
- (id)selectDistinctList:(id)arg1 where:(id)arg2;
- (id)selectDistinctList:(id)arg1 where:(id)arg2 args:(id)arg3;
- (id)selectDistinctList:(id)arg1 fromQuery:(id)arg2;
- (id)selectDistinct:(id)arg1 where:(id)arg2;
- (id)selectDistinct:(id)arg1 where:(id)arg2 args:(id)arg3;
- (id)selectDistinct:(id)arg1 fromQuery:(id)arg2;
- (void)appendAddressesToArray:(id)arg1 forQuery:(id)arg2 withArgs:(id)arg3;
- (void)appendAddressesToArray:(id)arg1 withCanceler:(id)arg2 forQuery:(id)arg3 withArgs:(id)arg4;
- (id)arrayForColumn:(id)arg1 fromQuery:(id)arg2;
- (id)setForColumn:(id)arg1 fromQuery:(id)arg2;
- (BOOL)modelExistsFromQuery:(id)arg1;
- (BOOL)modelExistsWhere:(id)arg1;
- (BOOL)modelExistsWhere:(id)arg1 args:(id)arg2;
- (unsigned long long)countOfModelsFromQuery:(id)arg1;
- (unsigned long long)countOfModelsWhere:(id)arg1;
- (unsigned long long)countOfModelsWhere:(id)arg1 args:(id)arg2;
- (id)modelIdListWhere:(id)arg1;
- (id)modelIdListWhere:(id)arg1 args:(id)arg2;
- (id)modelIdListFromQuery:(id)arg1;
- (id)modelIdsWhere:(id)arg1;
- (id)modelIdsWhere:(id)arg1 args:(id)arg2;
- (id)modelIdsFromQuery:(id)arg1;
- (id)modelUuidsWhere:(id)arg1;
- (id)modelUuidsWhere:(id)arg1 args:(id)arg2;
- (id)modelUuidsFromQuery:(id)arg1;
- (id)infoDictionariesWhere:(id)arg1;
- (id)infoDictionariesWhere:(id)arg1 args:(id)arg2;
- (id)loadInfoDictionariesFromResultSet:(id)arg1;
- (id)infoDictionaryColumns;
- (id)anyModelFromQuery:(id)arg1;
- (id)anyModelWhere:(id)arg1;
- (id)anyModelWhere:(id)arg1 args:(id)arg2;
- (id)iteratorWhere:(id)arg1;
- (id)iteratorWhere:(id)arg1 args:(id)arg2;
- (id)iteratorFromQuery:(id)arg1;
- (id)arrayOfModelsWhere:(id)arg1;
- (id)arrayOfModelsWhere:(id)arg1 args:(id)arg2;
- (id)arrayOfModelsFromQuery:(id)arg1;
- (id)modelsWhere:(id)arg1;
- (id)modelsWhere:(id)arg1 args:(id)arg2;
- (id)modelsFromQuery:(id)arg1;
- (void)async_deleteModelsWhere:(id)arg1;
- (void)async_deleteModelsWhere:(id)arg1 args:(id)arg2;
- (BOOL)deleteModelsFromQuery:(id)arg1;
- (BOOL)deleteModelsWhere:(id)arg1;
- (BOOL)deleteModelsWhere:(id)arg1 args:(id)arg2;
- (void)deleteModelsForIdList:(id)arg1;
- (void)deleteModelsForIds:(id)arg1;
- (void)deleteModelsForIds:(id)arg1 deleteInfoDictionary:(BOOL)arg2;
- (void)deleteModels:(id)arg1;
- (void)deleteModel:(id)arg1;
- (void)willDeleteModel:(id)arg1;
- (void)willSaveDatabase;
- (void)saveRidIndexes;
- (void)didOpenDatabase;
- (id)loadModelsFromIdResultSet:(id)arg1 limit:(unsigned long long)arg2;
- (id)loadArrayOfModelsFromResultSet:(id)arg1 limit:(unsigned long long)arg2;
- (id)loadModelsFromResultSet:(id)arg1 limit:(unsigned long long)arg2;
- (id)loadArrayOfModelsFromBucket:(id)arg1 limit:(unsigned long long)arg2;
- (id)loadModelsFromBucket:(id)arg1 limit:(unsigned long long)arg2;
- (id)loadModelFromBucket:(id)arg1;
- (id)loadModelFromResultSet:(id)arg1;
- (void)updateModel:(id)arg1;
- (unsigned long long)changeMaskForField:(id)arg1;
- (void)persistModel:(id)arg1;
- (id)copyRecordSql;
- (id)persistModelSql;
- (id)persistFields;
- (id)sqlForDeleteWhere:(id)arg1;
- (id)sqlForUpdateOf:(id)arg1;
- (id)sqlForUpdateOf:(id)arg1 where:(id)arg2;
- (id)sqlForModifyOfField:(id)arg1;
- (id)sqlForModifyOfField:(id)arg1 where:(id)arg2;
- (id)sqlForUpdateOfField:(id)arg1;
- (id)sqlForUpdateOfField:(id)arg1 where:(id)arg2;
- (id)sqlForSelectDistinct:(id)arg1 where:(id)arg2;
- (id)sqlForSelectOf:(id)arg1 where:(id)arg2;
- (id)sqlForSelect:(id)arg1 where:(id)arg2;
- (id)sqlForSelectWhere:(id)arg1;
- (id)setCachedQuery:(id)arg1 inDictionary:(id)arg2 selectList:(id)arg3 whereClause:(id)arg4;
- (id)cachedQueryInDictionary:(id)arg1 selectList:(id)arg2 whereClause:(id)arg3;
- (id)allFieldsList;
- (id)autoLoadFieldList;
- (id)selectDistinctPrefixForColumn:(id)arg1;
- (id)selectPrefixForColumns:(id)arg1;
- (id)selectPrefixForColumn:(id)arg1;
- (void)setModelClass:(Class)arg1;
- (Class)modelClass;
- (void)setupIntrospection;
- (id)ridIndexes;
- (id)fieldTypesForFields:(id)arg1;
- (BOOL)hasIndexForField:(id)arg1;
- (int)typeForField:(id)arg1;
- (id)valueSelectorForField:(id)arg1;
- (id)fieldDefsForFields:(id)arg1;
- (id)fieldDefForField:(id)arg1;
- (id)autoLoadFields;
- (id)primaryKeyField;
- (id)fieldDefs;
- (id)fieldNames;
- (id)tableName;
- (void)_dispatch_async_suspend:(BOOL)arg1 withBlock:(CDUnknownBlockType)arg2;
- (void)dispatch_async:(CDUnknownBlockType)arg1;
- (void)_dispatch_sync_if_needed_suspend:(BOOL)arg1 withBlock:(CDUnknownBlockType)arg2;
- (void)dispatch_sync_if_needed:(CDUnknownBlockType)arg1;
- (id)databaseMgr;
- (id)database;
- (void)recomputeNextModelId;
- (void)usedModelId:(unsigned long long)arg1;
- (void)saveNextModelId;
- (unsigned long long)nextModelId;
- (void)invalidateNextModelId;
- (BOOL)isModelIdInUse:(unsigned long long)arg1;
- (void)recomputeAllModelIds;
- (id)allModelIds;
- (long long)createIndexOnColumnNames:(id)arg1 unique:(BOOL)arg2;
- (BOOL)createIndexOnField:(id)arg1;
- (BOOL)createTableIfMissing;
- (id)ridIndexesForFieldName:(id)arg1;
- (id)ridIndexForFieldName:(id)arg1;
- (id)ridIndexForIndexName:(id)arg1;
- (id)ridIndexListForIndexName:(id)arg1 boolValue:(BOOL)arg2;
- (id)ridIndexListForIndexName:(id)arg1 value:(id)arg2;
- (void)addRidIndexForFields:(id)arg1;
- (void)addRidIndexForField:(id)arg1 options:(int)arg2;
- (void)addRidIndex:(id)arg1 forFieldName:(id)arg2;
- (void)addRidIndex:(id)arg1 forIndexName:(id)arg2;
- (void)addDerivedField:(id)arg1 withType:(int)arg2;
- (void)addMultiColumnIndex:(id)arg1 unique:(BOOL)arg2;
- (void)addField:(id)arg1 withType:(int)arg2;
- (void)addField:(id)arg1 withType:(int)arg2 changeMask:(unsigned long long)arg3;
- (void)addField:(id)arg1 withType:(int)arg2 options:(int)arg3;
- (void)addField:(id)arg1 withType:(int)arg2 options:(int)arg3 changeMask:(unsigned long long)arg4;
- (void)executeMultiUpdate:(id)arg1 withListOfArgs:(id)arg2;
- (void)executeUpdate:(id)arg1;
- (void)executeUpdate:(id)arg1 withArgs:(id)arg2;
- (void)waitForOutstandingWrites;
- (void)decrementOutstandingWrites;
- (void)incrementOutstandingWrites;
- (BOOL)hasOutstandingWrites;
- (BOOL)checkForModelOverreleases;
- (void)releaseExtraRetainsForModel:(id)arg1;
- (void)retainExtraForModel:(id)arg1;
- (void)setHasInfoDictionary:(BOOL)arg1;
- (BOOL)hasInfoDictionary;
- (BOOL)supportsOpenClose;
- (BOOL)hasIsInTrashField;
- (BOOL)hasModDateField;
- (BOOL)hasCreateDateField;
- (BOOL)hasUuidField;
- (BOOL)hasModelIdField;
- (id)description;
- (id)inMemoryFilterForWhere:(id)arg1;
- (id)registerEntityMemoryFilterForWhere:(id)arg1;
- (id)entityMemoryFilterForWhere:(id)arg1;
- (id)valueForFieldName:(id)arg1 forModelId:(id)arg2;
- (id)valueForFieldName:(id)arg1 forUuid:(id)arg2;
- (id)valueForFieldName:(id)arg1 forKeyField:(id)arg2 withKeyValue:(id)arg3;
- (void)loadRelationshipCache:(id)arg1;
- (void)loadRelationshipCache:(id)arg1 where:(id)arg2;
- (void)loadRelationshipCache:(id)arg1 where:(id)arg2 args:(id)arg3;
- (void)dropRelationshipCacheForFieldName:(id)arg1 forKeyField:(id)arg2;
- (id)relationshipCacheForFieldName:(id)arg1 forKeyField:(id)arg2;
- (id)createRelationshipCacheForFieldName:(id)arg1 forKeyField:(id)arg2 isOneToOne:(BOOL)arg3;
- (id)reusableString:(id)arg1;
- (void)delayAfterBeingPostponed;
- (void)dealloc;
- (void)refreshPreparedSql;
- (void)reportCachedSql;
- (void)whereUsed:(id)arg1;
- (BOOL)_logErrors;
- (id)initWithTableName:(id)arg1 forDatabaseManager:(id)arg2;
- (id)initWithTableName:(id)arg1 forDatabaseManager:(id)arg2 forDatabase:(id)arg3;
- (id)cachedModels;
- (id)cachedModelsQueue;

@end
