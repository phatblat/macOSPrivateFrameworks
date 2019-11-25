//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface ICSearchRankingQueryUtils : NSObject
{
}

+ (id)rankingQueryForDescriptor:(id)arg1 searchString:(id)arg2;
+ (id)rankingQueriesForSearchString:(id)arg1 withRankingQueryDefinition:(id)arg2;
+ (long long)bitOfRankingQueryDescriptor:(id)arg1 inRankingQueryBitDictionary:(id)arg2;
+ (id)spotlightMixedRankingQueryBitDictionary;
+ (id)spotlightMixedRankingQueryDefinition;
+ (id)spotlightSubstringRankingQueryBitDictionary;
+ (id)spotlightSubstringRankingQueryDefinition;
+ (id)spotlightPrefixRankingQueryBitDictionary;
+ (id)spotlightPrefixRankingQueryDefinition;

@end

