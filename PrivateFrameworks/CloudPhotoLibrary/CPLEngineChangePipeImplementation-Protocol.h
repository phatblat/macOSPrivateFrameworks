//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CPLEngineStorageImplementation.h"

@class CPLChangeBatch, CPLScopeFilter, CPLScopedIdentifier, NSArray;

@protocol CPLEngineChangePipeImplementation <CPLEngineStorageImplementation>
- (BOOL)deleteRecordsForScopeIndex:(long long)arg1 maxCount:(long long)arg2 deletedCount:(long long *)arg3 error:(id *)arg4;
- (NSArray *)allChangeBatches;
- (BOOL)compactChangeBatchesWithError:(id *)arg1;
- (BOOL)deleteAllChangesWithScopeFilter:(CPLScopeFilter *)arg1 error:(id *)arg2;
- (BOOL)deleteAllChangeBatchesWithError:(id *)arg1;
- (BOOL)hasSomeChangeWithScopeFilter:(CPLScopeFilter *)arg1;
- (BOOL)hasSomeChangeInScopesWithIdentifiers:(id <NSFastEnumeration>)arg1;
- (BOOL)hasSomeChangeWithScopedIdentifier:(CPLScopedIdentifier *)arg1;
- (BOOL)popNextBatchWithError:(id *)arg1;
- (CPLChangeBatch *)nextBatch;
- (BOOL)popChangeBatch:(id *)arg1 error:(id *)arg2;
- (BOOL)appendChangeBatch:(CPLChangeBatch *)arg1 error:(id *)arg2;
- (BOOL)hasQueuedBatches;
- (unsigned long long)countOfQueuedBatches;
@end

