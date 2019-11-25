//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <PhotoLibraryServices/PLAssetsdResourceWriteOnlyService.h>

#import "PLAssetsdResourceServiceProtocol.h"

@class NSObject<OS_dispatch_queue>, NSString, PLAssetsdCPLResourceDownloader, PLAssetsdConnectionAuthorization;

@interface PLAssetsdResourceService : PLAssetsdResourceWriteOnlyService <PLAssetsdResourceServiceProtocol>
{
    NSObject<OS_dispatch_queue> *_asyncImageDataQueue;
    PLAssetsdConnectionAuthorization *_connectionAuthorization;
    PLAssetsdCPLResourceDownloader *_resourceDownloader;
}

- (void).cxx_destruct;
- (void)updateInternalResourcePath:(id)arg1 objectURI:(id)arg2 sandboxExtension:(id)arg3 reply:(CDUnknownBlockType)arg4;
- (id)consolidateAssets:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (BOOL)_consolidateResource:(id)arg1 assetUUID:(id)arg2 error:(id *)arg3;
- (void)translatePersistentURL:(id)arg1 withAdjustments:(BOOL)arg2 handler:(CDUnknownBlockType)arg3;
- (id)_utiFromPathConstrainedToImageOrMovie:(id)arg1;
- (id)_generateFullsizeRenderForAssetIfNecessary:(id)arg1 format:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)_generateFullsizeRenderForAsset:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (BOOL)_requiresFullsizeRenderGenerationForAsset:(id)arg1 format:(id)arg2;
- (void)generateOnDemandResourcesForAsset:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)downloadCloudSharedAsset:(id)arg1 wantedPlaceholderkind:(short)arg2 shouldPrioritize:(BOOL)arg3 shouldExtendTimer:(BOOL)arg4 reply:(CDUnknownBlockType)arg5;
- (void)estimatedFileLengthOfVideo:(id)arg1 fallbackFilePath:(id)arg2 exportPreset:(id)arg3 exportProperties:(id)arg4 reply:(CDUnknownBlockType)arg5;
- (void)asynchronousAdjustmentDataForAsset:(id)arg1 networkAccessAllowed:(BOOL)arg2 withDataBlob:(BOOL)arg3 reply:(CDUnknownBlockType)arg4;
- (void)asynchronousVideoURLForAsset:(id)arg1 format:(unsigned short)arg2 intent:(unsigned long long)arg3 networkAccessAllowed:(BOOL)arg4 streamingAllowed:(BOOL)arg5 trackCPLDownload:(BOOL)arg6 restrictToPlayable:(BOOL)arg7 reply:(CDUnknownBlockType)arg8;
- (void)getSandboxExtensionForFileSystemBookmark:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)getSandboxExtensionForAssetResourcePath:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)imageDataForAssetWithObjectURI:(id)arg1 formatID:(unsigned short)arg2 allowPlaceholder:(BOOL)arg3 wantURLOnly:(BOOL)arg4 networkAccessAllowed:(BOOL)arg5 trackCPLDownload:(BOOL)arg6 reply:(CDUnknownBlockType)arg7;
- (void)fileDescriptorForPersistentURL:(id)arg1 withAdjustments:(BOOL)arg2 reply:(CDUnknownBlockType)arg3;
- (void)filePathForPersistentURL:(id)arg1 withAdjustments:(BOOL)arg2 reply:(CDUnknownBlockType)arg3;
- (void)addAssetWithURL:(id)arg1 toAlbum:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (void)addAssetGroupWithName:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)saveAssetWithDataAndPorts:(id)arg1 imageSurface:(id)arg2 previewImageSurface:(id)arg3 reply:(CDUnknownBlockType)arg4;
- (id)initWithLibraryServicesManager:(id)arg1 connectionAuthorization:(id)arg2 resourceDownloader:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

