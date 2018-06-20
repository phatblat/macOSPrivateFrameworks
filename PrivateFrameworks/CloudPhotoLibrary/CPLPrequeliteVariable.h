//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"
#import "PQLInjecting.h"

@class CPLPrequeliteTable, CPLPrequeliteType, NSData, NSString, PQLNameInjection;

@interface CPLPrequeliteVariable : NSObject <PQLInjecting, NSCopying>
{
    PQLNameInjection *_injection;
    id _cachedValue;
    id _cachedValueIdentifier;
    BOOL _shouldNotCacheValue;
    BOOL _allowsNull;
    BOOL _unique;
    NSString *_variableName;
    CPLPrequeliteTable *_table;
    CPLPrequeliteType *_type;
    id <PQLBindable> _bindableValueForDefaultValue;
    id _defaultValue;
}

+ (id)variableWithName:(id)arg1 forTable:(id)arg2 type:(id)arg3;
+ (id)variableWithName:(id)arg1 type:(id)arg2;
+ (id)indexVariableForVariableWithName:(id)arg1 forTable:(id)arg2;
+ (id)variableWithName:(id)arg1 defaultValue:(id)arg2 forTable:(id)arg3 type:(id)arg4;
+ (id)variableWithName:(id)arg1 defaultValue:(id)arg2 type:(id)arg3;
@property(nonatomic, getter=isUnique) BOOL unique; // @synthesize unique=_unique;
@property(nonatomic) BOOL allowsNull; // @synthesize allowsNull=_allowsNull;
@property(retain, nonatomic) id defaultValue; // @synthesize defaultValue=_defaultValue;
@property(retain, nonatomic) id <PQLBindable> bindableValueForDefaultValue; // @synthesize bindableValueForDefaultValue=_bindableValueForDefaultValue;
@property(nonatomic) BOOL shouldNotCacheValue; // @synthesize shouldNotCacheValue=_shouldNotCacheValue;
@property(readonly, nonatomic) CPLPrequeliteType *type; // @synthesize type=_type;
@property(readonly, nonatomic) CPLPrequeliteTable *table; // @synthesize table=_table;
@property(readonly, nonatomic) NSString *variableName; // @synthesize variableName=_variableName;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)arg1;
@property(readonly) unsigned long long hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)columnDefinitionWithDefaultValue:(id)arg1;
@property(readonly, nonatomic) id <PQLInjecting> columnDefinition;
- (id)valueFromSet:(id)arg1 atIndex:(int)arg2;
- (id)bindableValueForValue:(id)arg1;
- (void)discardCachedValue;
- (void)setCachedValue:(id)arg1 forIdentifier:(id)arg2;
- (id)cachedValueForIdentifier:(id)arg1;
- (BOOL)hasCachedValueForIdentifier:(id)arg1;
@property(readonly, copy) NSString *description;
- (int)bindWithStatement:(struct sqlite3_stmt *)arg1 startingAtIndex:(int)arg2;
@property(readonly, nonatomic) NSData *sql;
- (id)initWithName:(id)arg1 defaultValue:(id)arg2 table:(id)arg3 type:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end
