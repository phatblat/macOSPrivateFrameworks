//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <PhotosUICore/PXAssetsSectionConfigurator.h>

@class PXCuratedLibraryCardSectionBodyLayoutSpec;

@interface PXCuratedLibraryCardSectionConfigurator : PXAssetsSectionConfigurator
{
    PXCuratedLibraryCardSectionBodyLayoutSpec *_cardSpec;
}

@property(readonly, nonatomic) PXCuratedLibraryCardSectionBodyLayoutSpec *cardSpec; // @synthesize cardSpec=_cardSpec;
- (void).cxx_destruct;
- (void)configureAssetSectionLayout:(id)arg1;
- (struct NSEdgeInsets)containerInsets;
- (id)createCardSpecWithExtendedTraitCollection:(id)arg1;
- (id)initWithExtendedTraitCollection:(id)arg1 assetsSectionLayoutSpec:(id)arg2;

@end

