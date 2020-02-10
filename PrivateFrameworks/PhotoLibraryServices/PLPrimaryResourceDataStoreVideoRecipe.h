//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <PhotoLibraryServices/PLResourceRecipe.h>

@interface PLPrimaryResourceDataStoreVideoRecipe : PLResourceRecipe
{
    unsigned int _recipeID;
}

@property(nonatomic) unsigned int recipeID; // @synthesize recipeID=_recipeID;
- (id)description;
- (void)generateAndStoreForAssetWithPriority:(id)arg1 version:(unsigned int)arg2 imageConversionClient:(id)arg3 videoConversionClient:(id)arg4 isHighPriority:(BOOL)arg5 progress:(id *)arg6 completion:(CDUnknownBlockType)arg7;
- (void)generateAndStoreForAsset:(id)arg1 version:(unsigned int)arg2 imageConversionClient:(id)arg3 videoConversionClient:(id)arg4 progress:(id *)arg5 completion:(CDUnknownBlockType)arg6;
- (id)expectedFileURLForVersion:(unsigned int)arg1 asset:(id)arg2;
- (void)_generateAndStoreUsingMediaConversionServicesForAsset:(id)arg1 version:(unsigned int)arg2 conversionClient:(id)arg3 isHighPriority:(BOOL)arg4 progress:(id *)arg5 completion:(CDUnknownBlockType)arg6;
- (id)_mediaConversionServiceOptionsForAsset:(id)arg1 adjustmentData:(id)arg2 largeAdjustmentData:(id)arg3 isHighPriority:(BOOL)arg4;
- (id)chooseIngredientsFrom:(id)arg1 version:(unsigned int)arg2;
- (id)_localAvailabileResourceForAsset:(id)arg1 cplType:(unsigned long long)arg2;
- (BOOL)isMarkedFullSize;
- (id)supportedVersionsForLocalResourceGeneration;
- (id)utiInContext:(id)arg1;
- (id)codecInContext:(id)arg1;
- (id)colorSpaceGivenSourceColorSpace:(id)arg1 inContext:(id)arg2;
- (id)initWithRecipeID:(unsigned int)arg1;

@end
