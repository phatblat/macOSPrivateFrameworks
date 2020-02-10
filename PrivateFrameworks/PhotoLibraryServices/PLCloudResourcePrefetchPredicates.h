//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface PLCloudResourcePrefetchPredicates : NSObject
{
}

+ (id)predicatesForNonThumbnails:(id)arg1 photoLibrary:(id)arg2 defaultPrefetchMode:(long long)arg3;
+ (id)predicatesForThumbnails;
+ (id)_predicateToPrefetchHighlightWithUUIDs:(id)arg1 photoLibrary:(id)arg2;
+ (id)_predicateToPrefetchMemories:(id)arg1 photoLibrary:(id)arg2;
+ (id)_predicateForKeyFacePrefetching:(id)arg1;
+ (id)_predicateToPrefetchSuggestions:(id)arg1 photoLibrary:(id)arg2;
+ (id)_resourcesToPrefetchForAsset:(id)arg1;
+ (BOOL)_shouldPrefetchMediums;
+ (id)_prefetchResourceForAsset:(id)arg1 inResourceTypes:(id)arg2;
+ (id)_masterPredicateForCPLResourceType:(unsigned long long)arg1 additionalAssetConditions:(id)arg2 additionalResourcePredicates:(id)arg3;
+ (id)_assetPredicateForCPLResourceType:(unsigned long long)arg1 additionalAssetConditions:(id)arg2 additionalResourcePredicates:(id)arg3;
+ (id)_excludeMomentShareAssetsString;
+ (id)_irisConditionString;
+ (id)_missingLocalOriginalConditionString;
+ (id)_predicateForImageResourcePixelsLessOrEqual:(long long)arg1;
+ (id)_predicateForResourceCreatedAfterDate:(id)arg1;
+ (id)_predicateForMaxFilesize:(long long)arg1;
+ (id)_missingThumbnailConditionString;
+ (id)_orderedPrefetchConditionStringsOnAssets;

@end
