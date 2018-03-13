//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSObject<OS_dispatch_queue>, NSXPCConnection, VCPDatabaseReader;

@interface VCPMediaAnalyzer : NSObject
{
    NSObject<OS_dispatch_queue> *_analysisQueue;
    NSObject<OS_dispatch_queue> *_storageQueue;
    VCPDatabaseReader *_databaseReader;
    BOOL _standalone;
    BOOL _noResultStrip;
    NSXPCConnection *_connection;
    long long _sandboxHandle;
}

+ (id)sharedMediaAnalyzer;
- (void).cxx_destruct;
- (id)curateMovieAssetsForCollection:(id)arg1 withAlreadyCuratedAssets:(id)arg2 andDesiredCount:(unsigned long long)arg3 allowOnDemand:(BOOL)arg4;
- (int)requestAnalysesForAssets:(id)arg1 analysisTypes:(unsigned long long)arg2 allowOndemand:(BOOL)arg3 progressHandler:(CDUnknownBlockType)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)distanceFromAsset:(id)arg1 timeRange:(CDStruct_e83c9415)arg2 toAsset:(id)arg3 timeRange:(CDStruct_e83c9415)arg4 duplicate:(long long *)arg5 distance:(float *)arg6;
- (void)distanceFromAsset:(id)arg1 toAsset:(id)arg2 duplicate:(long long *)arg3 distance:(float *)arg4;
- (void)getSceneDescriptors:(CDStruct_e83c9415)arg1 featureResults:(id)arg2 descriptorArray:(id)arg3;
- (id)queryImageDescriptorOfAsset:(id)arg1 withExistingAnalysis:(id)arg2 timeRange:(CDStruct_e83c9415)arg3 lastFeature:(BOOL)arg4 isDegraded:(char *)arg5;
- (void)checkDuplicate:(id)arg1 withAsset:(id)arg2 duplicate:(long long *)arg3;
- (void)assetsAnalyzedSinceDate:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (BOOL)cancelAnalysisWithRequestID:(int)arg1;
- (int)requestAnalysisForAsset:(id)arg1 analysisTypes:(unsigned long long)arg2 progressHandler:(CDUnknownBlockType)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (id)analyzeOndemand:(id)arg1 forAnalysisTypes:(unsigned long long)arg2 storeAnalysis:(BOOL)arg3;
- (id)requestAnalysisForAsset:(id)arg1 analysisTypes:(unsigned long long)arg2 resultTypes:(id)arg3 allowOndemand:(BOOL)arg4;
- (unsigned long long)typesToRemove:(unsigned long long)arg1 requested:(unsigned long long)arg2;
- (unsigned long long)metaAnalysisTypesForAsset:(id)arg1;
- (id)addClassificationResults:(id)arg1 analysis:(id)arg2;
- (void)getDatabaseSandboxExtension;
- (id)connection;
- (void)dealloc;
- (id)init;

@end

