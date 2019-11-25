//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface PLQueryHandler : NSObject
{
}

+ (BOOL)_findAndReplaceLatitudeLongitudeKeyInQuery:(id)arg1;
+ (BOOL)fixUserQueryDataInQuery:(id)arg1;
+ (BOOL)includeHiddenAssets:(id)arg1;
+ (BOOL)_containsKey:(int)arg1 inQuery:(id)arg2;
+ (id)_predicateForQuery:(id)arg1 inLibrary:(id)arg2 changeDetectionCriteria:(id)arg3;
+ (id)predicateForQuery:(id)arg1 inLibrary:(id)arg2 changeDetectionCriteria:(id)arg3;
+ (id)_smartAlbumAssetTypeFilter;
+ (id)_predicateForSingleQuery:(id)arg1 inLibrary:(id)arg2 changeDetectionCriteria:(id)arg3;
+ (BOOL)hasMatchingFetchingAlbumForSingleQuery:(id)arg1 outKind:(int *)arg2;
+ (id)_predicateForNotAbleToUploadQuery;
+ (id)_predicateForTaggedWithGPSQuery:(id)arg1 inLibrary:(id)arg2;
+ (id)_predicateFromAlbumKind:(int)arg1 negate:(BOOL)arg2;
+ (id)_predicateForLoopingQuery:(id)arg1 inLibrary:(id)arg2;
+ (id)_predicateForIsReferencedQuery:(id)arg1 inLibrary:(id)arg2;
+ (id)_predicateForPersonQuery:(id)arg1 inLibrary:(id)arg2 changeDetectionCriteria:(id)arg3;
+ (id)_invertedPersonMatchesPredicateForCriteria:(id)arg1;
+ (id)_personMatchesPredicateForCriteria:(id)arg1;
+ (id)_personNameQueryKeyPaths;
+ (id)_predicateForDoubleQuery:(id)arg1 inLibrary:(id)arg2;
+ (id)_equalityPredicateForDoubleQuery:(id)arg1 withValue:(double)arg2 comparator:(int)arg3 inLibrary:(id)arg4;
+ (BOOL)_needEqualityForDoubleQuery:(int)arg1;
+ (id)_predicateForRangeQuery:(id)arg1 inLibrary:(id)arg2 changeDetectionCriteria:(id)arg3;
+ (id)_predicateForTextQuery:(id)arg1 inLibrary:(id)arg2;
+ (id)_predicateFromSearchIndexForText:(id)arg1 comparator:(int)arg2 inLibrary:(id)arg3;
+ (id)_predicateForEmptyQuery:(id)arg1 inLibrary:(id)arg2;
+ (BOOL)_needToNegateQueryForComparator:(int)arg1;
+ (id)_expressionForStringValue:(id)arg1 inLibrary:(id)arg2;
+ (unsigned long long)_comparatorToOperatorType:(int)arg1;
+ (id)_getConvertedKeys:(id)arg1;
+ (int)_convertComparatorToNumericComparator:(int)arg1;
+ (BOOL)_isTextComparator:(int)arg1;
+ (id)_getConvertedQueryKey:(id)arg1;
+ (id)_convertQueryValueForAssetType:(int)arg1;
+ (id)_convertQueryKeyTypeToString:(int)arg1;
+ (id)_getTargetDateForTheLastDays:(long long)arg1 weeks:(long long)arg2 months:(long long)arg3 years:(long long)arg4 seconds:(long long)arg5 targetDate:(id)arg6;
+ (id)_getTargetDateWithUnit:(int)arg1 dateValue:(id)arg2;
+ (id)_infoFromSingleQuery:(id)arg1;
+ (id)queryFromInfo:(id)arg1;
+ (id)infoFromQuery:(id)arg1;
+ (id)dataFromQuery:(id)arg1;
+ (id)constructQueryFromData:(id)arg1;

@end

