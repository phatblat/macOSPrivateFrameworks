//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CloudPhotoLibrary/CPLPrequeliteStorage.h>

#import "CPLEngineResourceStorageImplementation.h"

@class CPLPrequeliteVariable, NSString;

@interface CPLPrequeliteResourceStorage : CPLPrequeliteStorage <CPLEngineResourceStorageImplementation>
{
    CPLPrequeliteVariable *_totalSizeVar;
    CPLPrequeliteVariable *_totalOriginalSizeVar;
}

- (void).cxx_destruct;
- (id)status;
- (unsigned long long)totalOriginalResourceSize;
- (unsigned long long)totalResourceSize;
- (BOOL)_decrementTotalOriginalResourceSize:(unsigned long long)arg1 error:(id *)arg2;
- (BOOL)_decrementTotalResourceSize:(unsigned long long)arg1 error:(id *)arg2;
- (BOOL)_incrementTotalOriginalResourceSize:(unsigned long long)arg1 error:(id *)arg2;
- (BOOL)_incrementTotalResourceSize:(unsigned long long)arg1 error:(id *)arg2;
- (BOOL)resetWithError:(id *)arg1;
- (void)enumerateIdentitiesWithBlock:(CDUnknownBlockType)arg1;
- (unsigned long long)retainCountForIdentity:(id)arg1;
- (BOOL)releaseIdentity:(id)arg1 lastReference:(char *)arg2 isTrackedOriginal:(BOOL)arg3 error:(id *)arg4;
- (BOOL)retainIdentity:(id)arg1 isTrackedOriginal:(BOOL)arg2 error:(id *)arg3;
- (BOOL)upgradeStorageToVersion:(long long)arg1;
- (BOOL)initializeStorage;
- (id)initWithAbstractObject:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
