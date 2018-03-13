//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CloudPhotoLibrary/CPLEngineStorage.h>

#import "CPLAbstractObject.h"

@class CPLPlatformObject, NSArray, NSString;

@interface CPLEngineClientCache : CPLEngineStorage <CPLAbstractObject>
{
    NSArray *__lastModifiedProperties;
}

@property(copy, setter=_setLastModifiedProperties:) NSArray *_lastModifiedProperties; // @synthesize _lastModifiedProperties=__lastModifiedProperties;
- (void).cxx_destruct;
- (void)fillRelatedIdentifiersInChange:(id)arg1;
@property(readonly, nonatomic) unsigned long long estimatedLocalLibraryAssetCount;
@property(readonly, nonatomic) unsigned long long estimatedLocalLibrarySize;
- (BOOL)storeEstimatedLocalLibrarySize:(unsigned long long)arg1 estimatedAssetCount:(unsigned long long)arg2 error:(id *)arg3;
- (id)statusDictionary;
- (id)status;
- (id)resourceOfType:(unsigned long long)arg1 forRecordWithIdentifier:(id)arg2 error:(id *)arg3;
- (BOOL)applyBatch:(id)arg1 direction:(unsigned long long)arg2 withError:(id *)arg3;
- (id)localChangeBatchFromCloudBatch:(id)arg1 usingMapping:(id)arg2 withError:(id *)arg3;
- (id)compactedBatchFromExpandedBatch:(id)arg1;
- (BOOL)resetWithError:(id *)arg1;
- (unsigned long long)countOfRecordsWithRelatedIdentifier:(id)arg1 class:(Class)arg2;
- (BOOL)hasRecordWithRelatedIdentifier:(id)arg1 class:(Class)arg2;
- (id)recordsWithRelatedIdentifier:(id)arg1 class:(Class)arg2;
- (id)recordsWithRelatedIdentifier:(id)arg1;
- (BOOL)hasRecordWithIdentifier:(id)arg1;
- (id)relatedIdentifierForRecordWithIdentifier:(id)arg1;
- (id)_relatedIdentifierForRecordWithIdentifier:(id)arg1;
- (id)recordWithIdentifier:(id)arg1;
- (BOOL)deleteRecordWithIdentifier:(id)arg1 error:(id *)arg2;
- (BOOL)updateRecord:(id)arg1 error:(id *)arg2;
- (BOOL)addRecord:(id)arg1 error:(id *)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) CPLPlatformObject *platformObject;
@property(readonly) Class superclass;

@end

