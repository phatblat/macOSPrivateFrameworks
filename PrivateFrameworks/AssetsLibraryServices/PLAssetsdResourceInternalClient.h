//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <AssetsLibraryServices/PLAssetsdBaseClient.h>

@interface PLAssetsdResourceInternalClient : PLAssetsdBaseClient
{
}

- (void)purgeExpiredOutboundSharingAssetsWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)requestMasterThumbnailForAssetUUID:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)prepareRevertToOriginalForAsset:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)batchSaveAssetsWithJobDictionaries:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;

@end
