//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CloudPhotoLibrary/CPLPrequeliteStorage.h>

#import "CPLEngineStatusCenterImplementation.h"

@class CPLPrequeliteVariable, NSString;

@interface CPLPrequeliteStatusCenter : CPLPrequeliteStorage <CPLEngineStatusCenterImplementation>
{
    CPLPrequeliteVariable *_generationVar;
}

- (void).cxx_destruct;
- (BOOL)deleteRecordsForScopeIndex:(long long)arg1 maxCount:(long long)arg2 deletedCount:(long long *)arg3 error:(id *)arg4;
- (id)status;
- (BOOL)discardNotificationForRecordWithScopedIdentifier:(id)arg1 error:(id *)arg2;
- (BOOL)acknowledgeChangedStatus:(id)arg1 hasBeenDeleted:(char *)arg2 error:(id *)arg3;
- (id)statusChangesMaximumCount:(unsigned long long)arg1;
- (id)statusForRecordWithScopedIdentifier:(id)arg1;
- (BOOL)addStatus:(id)arg1 error:(id *)arg2;
- (BOOL)getNewGeneration:(unsigned long long *)arg1 error:(id *)arg2;
@property(readonly, nonatomic) BOOL hasStatusChanges;
- (BOOL)openWithError:(id *)arg1;
- (BOOL)upgradeStorageToVersion:(long long)arg1;
- (BOOL)initializeStorage;
- (id)initWithAbstractObject:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
