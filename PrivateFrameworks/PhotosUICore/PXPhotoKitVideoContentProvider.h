//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <PhotosUICore/PXDisplayAssetVideoContentProvider.h>

#import "PXPhotoLibraryUIChangeObserver.h"

@class NSString, PHAsset, PHFetchResult, PXPhotoKitUIMediaProvider;

@interface PXPhotoKitVideoContentProvider : PXDisplayAssetVideoContentProvider <PXPhotoLibraryUIChangeObserver>
{
    PHFetchResult *_fetchResult;
}

- (void).cxx_destruct;
- (void)photoLibraryDidChangeOnMainQueue:(id)arg1;
- (id)initWithAsset:(id)arg1 mediaProvider:(id)arg2;

// Remaining properties
@property(readonly, nonatomic) PHAsset *asset; // @dynamic asset;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) PXPhotoKitUIMediaProvider *mediaProvider; // @dynamic mediaProvider;
@property(readonly) Class superclass;

@end
