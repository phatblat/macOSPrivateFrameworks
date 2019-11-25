//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <PhotosUICore/PXAssetsDataSource.h>

@class NSDictionary, _PXFileBackedAssetCollection;

@interface PXFileBackedAssetsDataSource : PXAssetsDataSource
{
    _PXFileBackedAssetCollection *_assetCollection;
    NSDictionary *_assetCollectionBySection;
    NSDictionary *_assetDescriptionsBySection;
}

@property(readonly, copy, nonatomic) NSDictionary *assetDescriptionsBySection; // @synthesize assetDescriptionsBySection=_assetDescriptionsBySection;
- (void).cxx_destruct;
- (id)inputForItem:(id)arg1;
- (id)assetsInSectionIndexPath:(struct PXSimpleIndexPath)arg1;
- (id)objectAtIndexPath:(struct PXSimpleIndexPath)arg1;
- (long long)numberOfSubitemsInItem:(long long)arg1 section:(long long)arg2;
- (long long)numberOfItemsInSection:(long long)arg1;
- (long long)numberOfSections;
- (id)init;
- (id)initWithFileURLsBySection:(id)arg1;
- (id)initWithFileBackedAssetDescriptionsBySection:(id)arg1;
- (id)photosGraphSuggestedContributions;

@end

