//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <PhotosUICore/PXUIMediaProvider.h>

@class NSArray, NSMutableArray, NSObject<OS_dispatch_queue>, PHAssetResourceQualityClass, PHCachingImageManager, PHImageManager, PXPhotoKitThumbnailCache;

@interface PXPhotoKitUIMediaProvider : PXUIMediaProvider
{
    NSArray *_thumbnailQualityClasses;
    NSArray *_thumbnailCaches;
    struct CGSize _masterThumbnailSize;
    // Error parsing type: Aq, name: _lastActivity
    struct os_unfair_lock_s _preheatlock;
    NSMutableArray *_preheatLock_preheatStates;
    NSObject<OS_dispatch_queue> *_preheatQueue;
    unsigned long long _preheatQueue_state;
    struct os_unfair_lock_s _lock;
    struct CGSize _lock_lastTargetSize;
    long long _lock_lastQualityClassIndex;
    PHAssetResourceQualityClass *_lock_lastResourceQualityClass;
    PXPhotoKitThumbnailCache *_lock_lastThumbnailCache;
    PHImageManager *_imageManager;
    PHCachingImageManager *_cachingImageManager;
}

+ (id)defaultMediaProvider;
@property(readonly, nonatomic) PHCachingImageManager *cachingImageManager; // @synthesize cachingImageManager=_cachingImageManager;
@property(readonly, nonatomic) PHImageManager *imageManager; // @synthesize imageManager=_imageManager;
- (void).cxx_destruct;
- (void)_preheatQueue_scheduleUpdateAfterDelay;
- (void)_preheatQueue_schedulePreheat;
- (void)_schedulePreheat;
- (void)_setPreheatInfo:(id)arg1 forQualityClassIndex:(long long)arg2;
- (id)_preheatInfoForQualityClassIndex:(long long)arg1;
- (void)_preheatQueue_update;
- (void)_noteActivity;
- (void)stopCachingImagesForAllAssets;
- (void)stopCachingImagesForAssets:(id)arg1 targetSize:(struct CGSize)arg2 contentMode:(long long)arg3 options:(id)arg4;
- (void)startCachingImagesForAssets:(id)arg1 targetSize:(struct CGSize)arg2 contentMode:(long long)arg3 options:(id)arg4;
- (void)cancelImageRequest:(long long)arg1;
- (struct CGSize)masterThumbnailSize;
- (void)enumerateAvailableThumbnailDataFormats:(CDUnknownBlockType)arg1;
- (void)preheatThumbnailDataForAssets:(id)arg1 origin:(long long)arg2 targetSize:(struct CGSize)arg3;
- (id)_thumbnailDataForAsset:(id)arg1 qualityClass:(id)arg2 cache:(id)arg3 onlyFromCache:(BOOL)arg4 outDataSpec:(struct PXMediaProviderThumbnailDataSpec *)arg5;
- (id)thumbnailDataForAsset:(id)arg1 targetSize:(struct CGSize)arg2 onlyFromCache:(BOOL)arg3 outDataSpec:(struct PXMediaProviderThumbnailDataSpec *)arg4;
- (void)_getQualityClass:(id *)arg1 cache:(id *)arg2 qualityClassIndex:(long long *)arg3 forTargetSize:(struct CGSize)arg4;
- (long long)requestURLForVideo:(id)arg1 options:(id)arg2 resultHandler:(CDUnknownBlockType)arg3;
- (long long)requestAnimatedImageForAsset:(id)arg1 options:(id)arg2 resultHandler:(CDUnknownBlockType)arg3;
- (long long)requestLivePhotoForAsset:(id)arg1 targetSize:(struct CGSize)arg2 contentMode:(long long)arg3 options:(id)arg4 resultHandler:(CDUnknownBlockType)arg5;
- (long long)requestPlayerItemForVideo:(id)arg1 options:(id)arg2 resultHandler:(CDUnknownBlockType)arg3;
- (long long)requestImageDataForAsset:(id)arg1 options:(id)arg2 resultHandler:(CDUnknownBlockType)arg3;
- (long long)requestImageForAsset:(id)arg1 targetSize:(struct CGSize)arg2 contentMode:(long long)arg3 options:(id)arg4 resultHandler:(CDUnknownBlockType)arg5;
- (id)init;
- (id)initWithImageManager:(id)arg1;

@end

