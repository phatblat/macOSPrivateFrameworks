//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <PhotoLibraryServices/PLResourceRecipe.h>

@interface PLPrimaryResourceDataStoreImageRecipe : PLResourceRecipe
{
    unsigned int _recipeID;
}

+ (struct CGSize)scaleOriginalSize:(struct CGSize)arg1 toLongSideTarget:(double)arg2;
+ (struct CGSize)scaleOriginalSize:(struct CGSize)arg1 toShortSideTarget:(double)arg2 maxLongSideLength:(double)arg3;
+ (double)_scaleFactorForInputSize:(struct CGSize)arg1 maximumPixelCount:(long long)arg2;
@property(nonatomic) unsigned int recipeID; // @synthesize recipeID=_recipeID;
- (id)description;
- (id)expectedSizeFromWidth:(long long)arg1 height:(long long)arg2;
- (void)generateAndStoreForAssetWithPriority:(id)arg1 version:(unsigned int)arg2 imageConversionClient:(id)arg3 videoConversionClient:(id)arg4 isHighPriority:(BOOL)arg5 progress:(id *)arg6 completion:(CDUnknownBlockType)arg7;
- (void)generateAndStoreForAsset:(id)arg1 version:(unsigned int)arg2 imageConversionClient:(id)arg3 videoConversionClient:(id)arg4 progress:(id *)arg5 completion:(CDUnknownBlockType)arg6;
- (id)expectedFileURLForVersion:(unsigned int)arg1 asset:(id)arg2;
- (id)chooseIngredientsFrom:(id)arg1 version:(unsigned int)arg2;
- (id)supportedVersionsForLocalResourceGeneration;
- (id)maxPixelCountForAssetWidth:(long long)arg1 height:(long long)arg2;
- (id)colorSpaceGivenSourceColorSpace:(id)arg1 inContext:(id)arg2;
- (id)codecInContext:(id)arg1;
- (BOOL)isMarkedFullSize;
- (BOOL)colorSpaceIsNativeForDisplay;
- (id)utiInContext:(id)arg1;
- (id)initWithRecipeID:(unsigned int)arg1;
- (void)_generateAndStoreUsingMediaConversionServicesForAsset:(id)arg1 version:(unsigned int)arg2 conversionClient:(id)arg3 isHighPriority:(BOOL)arg4 progress:(id *)arg5 completion:(CDUnknownBlockType)arg6;
- (id)_mediaConversionServiceOptionsForAsset:(id)arg1 adjustmentData:(id)arg2 largeAdjustmentData:(id)arg3 isHighPriority:(BOOL)arg4;
- (id)_resourceGenerationAffectsRecipesForLibraryID:(id)arg1;

@end
