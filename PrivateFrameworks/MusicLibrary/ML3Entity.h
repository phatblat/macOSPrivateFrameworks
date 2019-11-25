//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class ML3MusicLibrary;

@interface ML3Entity : NSObject
{
    ML3MusicLibrary *_library;
    long long _persistentID;
}

+ (void)enumeratePersistentIDsInLibrary:(id)arg1 afterRevision:(long long)arg2 usingBlock:(CDUnknownBlockType)arg3;
+ (long long)revisionTrackingCode;
+ (id)orderingSQLForProperties:(id)arg1 directionality:(id)arg2;
+ (id)indexableSQLForProperties:(id)arg1;
+ (id)disambiguatedSelectSQLForProperty:(id)arg1;
+ (id)disambiguatedSQLForProperty:(id)arg1;
+ (void)predisambiguateProperties:(id)arg1 toDictionary:(id)arg2;
+ (id)allProperties;
+ (id)predisambiguatedProperties;
+ (id)collectionClassesToUpdateBeforeDelete;
+ (id)persistentIDColumnForTable:(id)arg1;
+ (id)extraTablesToInsert;
+ (id)extraTablesToDelete;
+ (BOOL)removeFromMyLibrary:(id)arg1 deletionType:(int)arg2 persistentIDs:(const long long *)arg3 count:(unsigned long long)arg4;
+ (BOOL)deleteFromLibrary:(id)arg1 deletionType:(int)arg2 persistentIDs:(const long long *)arg3 count:(unsigned long long)arg4 usingConnection:(id)arg5;
+ (BOOL)deleteFromLibrary:(id)arg1 deletionType:(int)arg2 persistentIDs:(const long long *)arg3 count:(unsigned long long)arg4;
+ (BOOL)_deleteRowForPersistentIDs:(const long long *)arg1 count:(unsigned long long)arg2 library:(id)arg3 table:(id)arg4 usingColumn:(id)arg5 usingConnection:(id)arg6;
+ (BOOL)libraryDynamicChangeForProperty:(id)arg1;
+ (BOOL)libraryContentsChangeForProperty:(id)arg1;
+ (void)_didChangeValueForProperties:(id)arg1 inLibrary:(id)arg2;
+ (BOOL)setValues:(id)arg1 forProperties:(id)arg2 forEntityPersistentIDs:(id)arg3 inLibrary:(id)arg4 usingConnection:(id)arg5;
+ (id)countingQueryForBaseQuery:(id)arg1 countProperty:(id)arg2 forIdentifier:(long long)arg3;
+ (BOOL)propertyIsCountProperty:(id)arg1;
+ (id)foreignPropertyForProperty:(id)arg1 entityClass:(Class)arg2;
+ (id)foreignColumnForProperty:(id)arg1;
+ (id)foreignDatabaseTableForProperty:(id)arg1;
+ (id)sectionPropertyForProperty:(id)arg1;
+ (id)defaultOrderingTerms;
+ (id)newWithDictionary:(id)arg1 inLibrary:(id)arg2 cachedNameOrders:(id)arg3 usingConnection:(id)arg4;
+ (id)newWithDictionary:(id)arg1 inLibrary:(id)arg2 cachedNameOrders:(id)arg3;
+ (id)newWithDictionary:(id)arg1 inLibrary:(id)arg2;
+ (id)newWithPersistentID:(long long)arg1 inLibrary:(id)arg2;
+ (id)joinClausesForProperty:(id)arg1;
+ (id)predicateByOptimizingComparisonPredicate:(id)arg1;
+ (id)predicateByOptimizingPredicate:(id)arg1;
+ (id)defaultFilterPredicates;
+ (id)URLForEntityWithPersistentID:(long long)arg1 libraryUID:(id)arg2;
+ (id)entityFromURL:(id)arg1 inLibrary:(id)arg2 verifyExistence:(BOOL)arg3;
+ (id)entityFromURL:(id)arg1 inLibrary:(id)arg2;
+ (id)entityURLScheme;
+ (id)newSelectSQLForProperties:(const id *)arg1 count:(unsigned long long)arg2 predicate:(id)arg3;
+ (id)newSelectAllEntitiesSQLForProperties:(const id *)arg1 count:(unsigned long long)arg2 predicate:(id)arg3;
+ (id)subselectPropertyForProperty:(id)arg1;
+ (id)subselectStatementForProperty:(id)arg1;
+ (void)enumeratePersistentIDsInLibrary:(id)arg1 matchingPredicate:(id)arg2 orderingTerms:(id)arg3 persistentIDs:(const long long *)arg4 count:(unsigned long long)arg5 options:(long long)arg6 usingBlock:(CDUnknownBlockType)arg7;
+ (BOOL)insertionChangesLibraryContents;
+ (BOOL)incrementRevisionWithLibrary:(id)arg1 persistentID:(long long)arg2 deletionType:(int)arg3 revisionType:(int)arg4 usingConnection:(id)arg5;
+ (BOOL)incrementRevisionWithLibrary:(id)arg1 persistentID:(long long)arg2 deletionType:(int)arg3 revisionType:(int)arg4;
+ (BOOL)incrementRevisionForRevisionTypeContentWithConnection:(id)arg1 deletionType:(int)arg2 persistentIDs:(const long long *)arg3 count:(unsigned long long)arg4;
+ (BOOL)incrementRevisionForRevisionTypeContentWithConnection:(id)arg1 deletionType:(int)arg2 persistentIDs:(id)arg3;
+ (BOOL)incrementRevisionForRevisionTypeContentWithLibrary:(id)arg1 deletionType:(int)arg2 persistentIDs:(id)arg3;
+ (BOOL)_shouldIncrementRevisionForType:(int)arg1 persistentID:(long long)arg2 usingConnection:(id)arg3;
+ (id)unsettableProperties;
+ (BOOL)insertValues:(id)arg1 intoTable:(id)arg2 persistentID:(long long)arg3 connection:(id)arg4;
+ (BOOL)insertValues:(id)arg1 intoTable:(id)arg2 persistentID:(long long)arg3 library:(id)arg4;
+ (id)predicateIncludingSystemwidePredicatesWithPredicate:(id)arg1 library:(id)arg2 options:(long long)arg3;
+ (id)unrestrictedAllItemsQueryWithlibrary:(id)arg1 predicate:(id)arg2 orderingTerms:(id)arg3;
+ (id)allItemsQueryWithLibrary:(id)arg1 predicate:(id)arg2 orderingTerms:(id)arg3 usingSections:(BOOL)arg4;
+ (id)unrestrictedQueryWithLibrary:(id)arg1 predicate:(id)arg2 orderingTerms:(id)arg3;
+ (id)queryWithLibrary:(id)arg1 predicate:(id)arg2 orderingTerms:(id)arg3 usingSections:(BOOL)arg4 options:(long long)arg5;
+ (id)queryWithLibrary:(id)arg1 predicate:(id)arg2 orderingTerms:(id)arg3 usingSections:(BOOL)arg4;
+ (id)queryWithLibrary:(id)arg1 predicate:(id)arg2 orderingTerms:(id)arg3 propertyToCount:(id)arg4 options:(long long)arg5;
+ (id)queryWithLibrary:(id)arg1 predicate:(id)arg2 orderingTerms:(id)arg3 propertyToCount:(id)arg4;
+ (id)queryWithLibrary:(id)arg1 predicate:(id)arg2 orderingTerms:(id)arg3;
+ (id)queryWithLibrary:(id)arg1 predicate:(id)arg2 usingSections:(BOOL)arg3;
+ (id)queryWithLibrary:(id)arg1 predicate:(id)arg2 options:(long long)arg3;
+ (id)queryWithLibrary:(id)arg1 predicate:(id)arg2;
+ (id)queryWithLibrary:(id)arg1 predicate:(id)arg2 orderingProperties:(id)arg3 orderingDirectionMappings:(id)arg4 usingSections:(BOOL)arg5;
+ (id)queryWithLibrary:(id)arg1 predicate:(id)arg2 orderingProperties:(id)arg3 usingSections:(BOOL)arg4;
+ (id)queryWithLibrary:(id)arg1 predicate:(id)arg2 orderingProperties:(id)arg3;
+ (id)anyInLibrary:(id)arg1 predicate:(id)arg2 options:(long long)arg3;
+ (id)anyInLibrary:(id)arg1 predicate:(id)arg2;
+ (id)aggregateQueryWithUnitQuery:(id)arg1 foreignPersistentIDProperty:(id)arg2;
+ (id)replacerWithProperties:(id)arg1 library:(id)arg2;
@property(readonly) long long persistentID; // @synthesize persistentID=_persistentID;
@property __weak ML3MusicLibrary *library; // @synthesize library=_library;
- (void).cxx_destruct;
- (void)incrementRevision;
- (BOOL)deleteFromLibrary;
- (void)didChangeValueForProperties:(id)arg1;
- (BOOL)setValue:(id)arg1 forProperty:(id)arg2;
- (BOOL)setValuesForPropertiesWithDictionary:(id)arg1;
- (BOOL)setValues:(id)arg1 forProperties:(id)arg2 usingConnection:(id)arg3;
- (void)setValues:(id)arg1 forProperties:(id)arg2 async:(BOOL)arg3 withCompletionBlock:(CDUnknownBlockType)arg4;
- (BOOL)setValues:(id)arg1 forProperties:(id)arg2;
- (BOOL)setValues:(const id *)arg1 forProperties:(const id *)arg2 count:(unsigned long long)arg3;
- (id)valueForProperty:(id)arg1;
- (id)getValuesForProperties:(id)arg1;
- (void)getValues:(id *)arg1 forProperties:(const id *)arg2 count:(unsigned long long)arg3;
- (id)URL;
- (BOOL)matchesPredicate:(id)arg1;
@property(readonly) BOOL existsInLibrary;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)copyInLibrary:(id)arg1;
- (id)initWithDictionary:(id)arg1 inLibrary:(id)arg2 cachedNameOrders:(id)arg3 usingConnection:(id)arg4;
- (id)initWithDictionary:(id)arg1 inLibrary:(id)arg2 cachedNameOrders:(id)arg3;
- (id)initWithPersistentID:(long long)arg1 inLibrary:(id)arg2;

@end

