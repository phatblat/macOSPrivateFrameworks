//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <PhotosUICore/PXPhotoKitAssetCollectionActionPerformer.h>

@interface PXPhotoKitAssetCollectionCreateMemoryActionPerformer : PXPhotoKitAssetCollectionActionPerformer
{
}

+ (id)systemImageNameForAssetCollection:(id)arg1 person:(id)arg2;
+ (id)localizedTitleForUseCase:(unsigned long long)arg1 assetCollection:(id)arg2 person:(id)arg3;
+ (BOOL)canPerformOnAssetCollection:(id)arg1 people:(id)arg2;
- (void)performBackgroundTask;
- (void)performUserInteractionTask;

@end

