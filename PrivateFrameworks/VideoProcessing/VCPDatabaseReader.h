//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "PHPhotoLibraryAvailabilityObserver.h"

@class NSObject<OS_dispatch_queue>, NSString;

@interface VCPDatabaseReader : NSObject <PHPhotoLibraryAvailabilityObserver>
{
    NSObject<OS_dispatch_queue> *_sqlSerialQueue;
    struct sqlite3 *_database;
}

- (void).cxx_destruct;
- (void)photoLibraryDidBecomeUnavailable:(id)arg1;
- (id)queryAssetsAnalyzedSince:(id)arg1;
- (id)queryAnalysesForAssets:(id)arg1 withTypes:(id)arg2;
- (id)queryAnalysisForAsset:(id)arg1 withTypes:(id)arg2;
- (id)queryAnalysisPropertiesForAsset:(id)arg1;
- (id)queryAnalysisForAsset:(id)arg1;
- (BOOL)isAssetBlacklisted:(id)arg1 blacklistDate:(id *)arg2;
- (int)executeDatabaseBlock:(CDUnknownBlockType)arg1;
- (int)queryResultsForAssets:(id)arg1 withTypes:(id)arg2 batchResults:(id)arg3;
- (int)queryHeadersForAssets:(id)arg1 analyses:(id)arg2 idMap:(id)arg3;
- (int)queryResultsForAssetId:(long long)arg1 withTypes:(id)arg2 analysis:(id)arg3;
- (int)queryResultsForAssetId:(long long)arg1 analysis:(id)arg2;
- (int)queryHeaderForAsset:(id)arg1 analysis:(id *)arg2 assetId:(long long *)arg3;
- (int)parseResults:(struct sqlite3_stmt *)arg1 typeColumn:(int)arg2 dataColumn:(int)arg3 results:(id)arg4;
- (int)parseHeader:(struct sqlite3_stmt *)arg1 startColumn:(int)arg2 analysis:(id)arg3;
- (void)closeDatabase;
- (int)openDatabase;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

