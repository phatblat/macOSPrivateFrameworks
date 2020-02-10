//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <PhotosGraph/PGAbstractSuggester.h>

#import "PGCoordinatableSuggester.h"

@class NSArray, NSEnumerator, NSMutableDictionary, NSString, PGSuggestionOptions, PLPhotoEditPersistenceManager, PLPhotoEffect;

@interface PGStudioLightSuggester : PGAbstractSuggester <PGCoordinatableSuggester>
{
    PGSuggestionOptions *_options;
    NSArray *_suggestedAssets;
    NSEnumerator *_suggestedAssetEnumerator;
    PLPhotoEditPersistenceManager *_photoEditPersistenceManager;
    NSMutableDictionary *_compositionControllerByAssetUUID;
    NSMutableDictionary *_assetMasterSizeByAssetUUID;
    PLPhotoEffect *_studioLightPhotoEffect;
    NSMutableDictionary *_recipeReasonByAssetUUID;
}

+ (id)suggestionSubtypes;
+ (id)suggestionTypes;
- (void).cxx_destruct;
- (id)reasonsForSuggestion:(id)arg1;
- (id)suggestionWithAsset:(id)arg1;
- (id)studioLightRecipeWithAsset:(id)arg1;
- (id)suggestedAssetsInAssets:(id)arg1 options:(id)arg2;
- (id)suggestedAssetsInAssets:(id)arg1;
- (id)compositionControllerForAsset:(id)arg1 baseVersion:(out long long *)arg2;
- (id)portraitsBetweenStartDate:(id)arg1 andEndDate:(id)arg2;
- (void)reset;
- (id)nextSuggestion;
- (void)startSuggestingWithOptions:(id)arg1;
- (id)suggestionsWithOptions:(id)arg1 progress:(CDUnknownBlockType)arg2;
- (id)initWithSession:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
