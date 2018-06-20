//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CloudPhotoLibrary/CPLPlatformObject.h>

#import "CPLEngineStorageImplementation.h"

@class CPLPrequeliteTable, NSString;

@interface CPLPrequeliteStorage : CPLPlatformObject <CPLEngineStorageImplementation>
{
    CPLPrequeliteTable *_nameTable;
    CPLPrequeliteTable *_mainTable;
    CPLPrequeliteTable *_tempTable;
    BOOL _initializingStorage;
    BOOL _initializeSuperWasCalled;
    BOOL _superWasCalled;
    BOOL _shouldUpgradeSchema;
}

@property(readonly, nonatomic) BOOL shouldUpgradeSchema; // @synthesize shouldUpgradeSchema=_shouldUpgradeSchema;
- (void).cxx_destruct;
- (BOOL)recreateMainTableWithCopyInstructions:(id)arg1 oldFields:(id)arg2 error:(id *)arg3;
- (BOOL)isCloudScopeIndexValid:(long long)arg1;
- (BOOL)isLocalScopeIndexValid:(long long)arg1;
- (id)scopedIdentifierForCloudIdentifier:(id)arg1 scopeIndex:(long long)arg2;
- (id)scopedIdentifierForLocalIdentifier:(id)arg1 scopeIndex:(long long)arg2;
- (long long)stableScopeIndexForScopeIdentifier:(id)arg1;
- (long long)cloudScopeIndexForScopeIdentifier:(id)arg1;
- (long long)localScopeIndexForScopeIdentifier:(id)arg1;
- (long long)scopeIndexForCloudScopedIdentifier:(id)arg1;
- (long long)scopeIndexForLocalScopedIdentifier:(id)arg1;
- (id)_scopes;
- (BOOL)_checkSuperWasCalled;
- (id)statusPerScopeIndexWithGroupProperty:(id)arg1 valueDescription:(CDUnknownBlockType)arg2;
- (id)statusPerScopeIndex;
- (id)_statusPerScopeIndex;
- (id)scopeIndexColumnName;
- (id)statusDictionary;
- (id)status;
- (id)recordsDesignation;
- (void)writeTransactionDidSucceed;
- (void)writeTransactionDidFail;
- (BOOL)closeWithError:(id *)arg1;
- (BOOL)openWithError:(id *)arg1;
- (BOOL)resetValueForVariable:(id)arg1 error:(id *)arg2;
- (id)valueForVariable:(id)arg1;
- (BOOL)setValue:(id)arg1 forVariable:(id)arg2 error:(id *)arg3;
- (BOOL)createVariable:(id)arg1 defaultValue:(id)arg2 error:(id *)arg3;
- (id)variableWithName:(id)arg1 defaultValue:(id)arg2 type:(id)arg3;
- (id)variableWithName:(id)arg1 type:(id)arg2;
- (BOOL)dropIndexWithName:(id)arg1 error:(id *)arg2;
- (BOOL)createIndexOnColumn:(id)arg1 error:(id *)arg2;
- (BOOL)createIndexWithName:(id)arg1 withDefinition:(id)arg2 unique:(BOOL)arg3 error:(id *)arg4;
- (BOOL)createIndexOnColumnVariable:(id)arg1 error:(id *)arg2;
- (BOOL)createIndex:(id)arg1 withDefinition:(id)arg2 unique:(BOOL)arg3 error:(id *)arg4;
- (BOOL)addColumnVariableGroup:(id)arg1 error:(id *)arg2;
- (BOOL)addColumnVariable:(id)arg1 error:(id *)arg2;
- (id)columnVariableWithName:(id)arg1 defaultValue:(id)arg2 type:(id)arg3;
- (id)columnVariableWithName:(id)arg1 type:(id)arg2;
- (BOOL)createMainTableWithDefinition:(id)arg1 error:(id *)arg2;
- (BOOL)createMainTableWithColumnVariables:(id)arg1 error:(id *)arg2;
- (id)mainTable;
- (BOOL)upgradeStorageToVersion:(long long)arg1;
- (BOOL)initializeStorage;
- (BOOL)createStorage;
- (void)_afterInitializeStorage;
- (void)_beforeInitializeStorage;
- (id)engineLibrary;
- (id)pqStore;
- (id)initWithAbstractObject:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

