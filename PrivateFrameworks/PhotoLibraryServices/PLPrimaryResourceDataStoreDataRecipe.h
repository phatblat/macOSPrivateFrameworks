//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <PhotoLibraryServices/PLResourceRecipe.h>

@interface PLPrimaryResourceDataStoreDataRecipe : PLResourceRecipe
{
    unsigned int _recipeID;
}

@property(nonatomic) unsigned int recipeID; // @synthesize recipeID=_recipeID;
- (id)description;
- (void)generateAndStoreForAsset:(id)arg1 version:(unsigned int)arg2 imageConversionClient:(id)arg3 videoConversionClient:(id)arg4 progress:(id *)arg5 completion:(CDUnknownBlockType)arg6;
- (id)chooseIngredientsFrom:(id)arg1 version:(unsigned int)arg2;
- (id)supportedVersionsForLocalResourceGeneration;
- (id)colorSpaceGivenSourceColorSpace:(id)arg1 inContext:(id)arg2;
- (id)codecInContext:(id)arg1;
- (id)utiInContext:(id)arg1;
- (id)initWithRecipeID:(unsigned int)arg1;

@end

