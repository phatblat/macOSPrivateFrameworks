//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CloudPhotoLibrary/CPLPrequeliteStorage.h>

#import "CPLEngineQuarantinedRecordsImplementation.h"

@class NSString;

@interface CPLPrequeliteQuarantinedRecords : CPLPrequeliteStorage <CPLEngineQuarantinedRecordsImplementation>
{
}

- (BOOL)deleteRecordsForScopeIndex:(long long)arg1 maxCount:(long long)arg2 deletedCount:(long long *)arg3 error:(id *)arg4;
- (unsigned long long)countOfQuarantinedRecords;
- (BOOL)isRecordWithScopedIdentifierQuarantined:(id)arg1;
- (BOOL)removeQuarantinedRecordsWithScopedIdentifier:(id)arg1 removed:(char *)arg2 error:(id *)arg3;
- (BOOL)addQuarantinedRecordsWithScopedIdentifier:(id)arg1 reason:(id)arg2 error:(id *)arg3;
- (BOOL)upgradeStorageToVersion:(long long)arg1;
- (BOOL)initializeStorage;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

