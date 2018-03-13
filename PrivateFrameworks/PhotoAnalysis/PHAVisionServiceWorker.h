//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <PhotoAnalysis/PHAWorker.h>

#import "PHAVisionServiceAssetsAnalyzingOperationDelegate.h"

@class NSMapTable, NSMutableDictionary, NSNumber, NSObject<OS_dispatch_queue>, NSOperationQueue, NSString;

@interface PHAVisionServiceWorker : PHAWorker <PHAVisionServiceAssetsAnalyzingOperationDelegate>
{
    NSOperationQueue *_assetAnalysisOperationQueue;
    NSObject<OS_dispatch_queue> *_commandDispatchQueue;
    NSMapTable *_jobToAssetsAnalyzingOperationMapTable;
    NSMutableDictionary *_coalescedAnalysisResultsByAssetLocalIdentifier;
    NSMutableDictionary *_coalescedJobResultsByAssetLocalIdentifier;
    NSNumber *_lastRecordedDarkWakeState;
    // Error parsing type: AQ, name: _lastPerformedJobScenario
    BOOL _analysisJobCancelled;
}

+ (CDUnknownBlockType)assetResourceSmallestToLargestComparator;
+ (CDUnknownBlockType)assetResourceLargestToSmallestComparator;
+ (void)initialize;
@property BOOL analysisJobCancelled; // @synthesize analysisJobCancelled=_analysisJobCancelled;
- (void).cxx_destruct;
- (void)insidePhotoLibraryTransactionPersistResultsDictionary:(id)arg1 forAsset:(id)arg2;
- (void)coalesceResultsDictionary:(id)arg1 forAssetLocalIdentifier:(id)arg2;
- (void)coalesceJobResult:(unsigned long long)arg1 forAssetLocalIdentifier:(id)arg2;
- (BOOL)supportsCoalescingResults;
- (BOOL)stopAcknowledgeDeletionsJob:(id)arg1 error:(id *)arg2;
- (BOOL)startAcknowledgeDeletionsJob:(id)arg1 error:(id *)arg2;
- (BOOL)stopAnalysisJob:(id)arg1 error:(id *)arg2;
- (BOOL)startAnalysisJob:(id)arg1 error:(id *)arg2;
- (void)shutdown;
- (void)startup;
- (void)visionServiceAssetsProcessingOperation:(id)arg1 didExecuteToCompletion:(BOOL)arg2;
- (id)defaultImageCreationOptions;
- (struct CGImage *)createCGImageFromImageFileURL:(id)arg1 imageOptions:(id)arg2 orientation:(unsigned long long *)arg3 error:(id *)arg4;
- (struct CGImage *)createCGImageForAssetResource:(id)arg1 imageOptions:(id)arg2 orientation:(unsigned long long *)arg3 error:(id *)arg4;
- (id)imageDataForAssetResource:(id)arg1 error:(id *)arg2;
- (id)localFileURLForAssetResource:(id)arg1 error:(id *)arg2;
- (id)assetResourcesForAsset:(id)arg1 fromDesiredTypes:(const long long *)arg2 count:(unsigned long long)arg3;
- (BOOL)processAsset:(id)arg1 error:(id *)arg2;
- (BOOL)getLocallyAvailableAssetResource:(id *)arg1 forAnalyzingAsset:(id)arg2 error:(id *)arg3;
- (id)preferredAssetResourcesForAnalyzingAsset:(id)arg1;
- (id)assetWithLocalIdentifier:(id)arg1 error:(id *)arg2;
- (struct CGImage *)_createCGImageFromImageSource:(struct CGImageSource *)arg1 imageOptions:(id)arg2 orientation:(unsigned long long *)arg3 error:(id *)arg4;
- (unsigned long long)analyzeAssetResourceFileAtURL:(id)arg1 forAsset:(id)arg2 withAttributes:(id)arg3 error:(id *)arg4;
- (unsigned long long)analyzeImageData:(id)arg1 forAsset:(id)arg2 withAttributes:(id)arg3 error:(id *)arg4;
- (void)didPerformJob:(id)arg1;
- (void)willCompleteJob:(id)arg1;
- (unsigned long long)analyzeAssetWithLocalIdentifier:(id)arg1 workerJob:(id)arg2 error:(id *)arg3;
- (unsigned long long)analyzeAssetWithLocalIdentifier:(id)arg1 dataLoadingOptions:(id)arg2 usingBlock:(CDUnknownBlockType)arg3 error:(id *)arg4;
- (BOOL)canProvideAnalysisJobResultInformation:(id)arg1 withoutRequiringAssetResourceForAsset:(id)arg2;
- (void)willPerformJob:(id)arg1;
- (Class)assetsAnalyzingOperationClass;
- (unsigned long long)lastPerformedJobScenario;
- (BOOL)isExecutingDuringDarkWake;
- (void)_checkForDarkWakeStateTransition;
- (id)initWithPhotoAnalysisManager:(id)arg1 dataLoader:(id)arg2;
- (id)newCVMLRequestOptions;
- (void)performCVMLForcedCleanup;
- (void)performCVMLForcedCleanupWithOptions:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

