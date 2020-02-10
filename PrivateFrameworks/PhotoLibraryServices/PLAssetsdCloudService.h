//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <PhotoLibraryServices/PLAbstractLibraryServicesManagerService.h>

#import "PLAssetsdCloudServiceProtocol.h"

@class NSString, PLAssetsdCPLResourceDownloader;

@interface PLAssetsdCloudService : PLAbstractLibraryServicesManagerService <PLAssetsdCloudServiceProtocol>
{
    PLAssetsdCPLResourceDownloader *_resourceDownloader;
}

- (void).cxx_destruct;
- (void)computeFingerPrintsOfAssetWithObjectURI:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)asynchronousStopPreheatingCPLDownloadForAssetsWithTaskIdentifiers:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)asynchronousStartPreheatingCPLDownloadForAssets:(id)arg1 doneTokens:(id)arg2 format:(unsigned long long)arg3 reply:(CDUnknownBlockType)arg4;
- (void)downloadCloudPhotoLibraryAssetWithObjectURI:(id)arg1 taskIdentifier:(id)arg2 resourceType:(unsigned long long)arg3 HighPriority:(BOOL)arg4 trackCPLDownload:(BOOL)arg5 downloadIsTransient:(BOOL)arg6 reply:(CDUnknownBlockType)arg7;
- (void)cancelCPLDownloadTaskWithIdentifier:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)requestVideoPlaybackURLForCloudSharedAsset:(id)arg1 mediaAssetType:(unsigned long long)arg2 reply:(CDUnknownBlockType)arg3;
- (id)initWithLibraryServicesManager:(id)arg1 resourceDownloader:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
