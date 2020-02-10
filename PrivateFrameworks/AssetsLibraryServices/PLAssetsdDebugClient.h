//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <AssetsLibraryServices/PLAssetsdBaseClient.h>

@interface PLAssetsdDebugClient : PLAssetsdBaseClient
{
}

- (void)updateSiriVocabulary;
- (void)coalesceJournalsForPayloadClassIDs:(id)arg1 withChangeJournalOverThreshold:(float)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)snapshotJournalsForPayloadClassIDs:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)privateDownloadCloudPhotoLibraryAsset:(id)arg1 resourceType:(unsigned long long)arg2 highPriority:(BOOL)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (BOOL)invalidateHighlightSubtitlesAndRegenerateHighlightTitlesWithError:(id *)arg1;
- (BOOL)cleanupEmptyHighlightsWithError:(id *)arg1;
- (BOOL)updateHighlightTitlesWithError:(id *)arg1;
- (BOOL)processUnprocessedMomentLocationsWithError:(id *)arg1;
- (BOOL)processRecentHighlightsWithError:(id *)arg1;
- (void)prefetchResourcesWithMode:(long long)arg1;
- (void)prefetchResourcesForHighlights:(id)arg1;
- (void)prefetchResourcesForMemories:(id)arg1;
- (void)pruneAssets:(id)arg1 resourceTypes:(id)arg2;
- (BOOL)debugSidecarFileURLsForAsset:(id)arg1 debugSidecarFileURLs:(id *)arg2 error:(id *)arg3;
- (BOOL)revertToOriginalForAsset:(id)arg1 error:(id *)arg2;
- (id)getCPLState;
- (id)getXPCTransactionStatus;
- (void)rebuildAllThumbnails;
- (void)resetDupesAnalysis;
- (void)rebuildCloudFeed;
- (BOOL)rebuildSearchIndexWithError:(id *)arg1;
- (BOOL)synchronouslySetSearchIndexPaused:(BOOL)arg1 reason:(id)arg2 error:(id *)arg3;
- (void)setSearchIndexPaused:(BOOL)arg1 reason:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)dropSearchIndexWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)deferredLogDumpWithFormat:(id)arg1;
- (BOOL)allMomentsMetadataWithOutputPath:(id)arg1 metadataDictionary:(id *)arg2 error:(id *)arg3;
- (BOOL)dumpMetadataForMomentsWithOutputPath:(id)arg1 metadataDirectory:(id *)arg2 error:(id *)arg3;
- (BOOL)rebuildHighlightsDeletingExistingHighlights:(BOOL)arg1 error:(id *)arg2;
- (BOOL)rebuildMomentsDeletingExistingMoments:(BOOL)arg1 error:(id *)arg2;
- (id)momentGenerationStatus;
- (void)recoverAssetsInInconsistentCloudState;
- (void)identifyAssetsWithInconsistentCloudState;
- (void)unloadImageFilesForAsset:(id)arg1 minimumFormat:(int)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)getStatus;

@end
