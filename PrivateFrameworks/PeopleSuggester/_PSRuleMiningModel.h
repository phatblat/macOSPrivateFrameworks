//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class _PSContactResolver;

@interface _PSRuleMiningModel : NSObject
{
    id <_DKKnowledgeQuerying> _knowledgeStore;
    _PSContactResolver *_contactResolver;
}

@property(readonly, nonatomic) _PSContactResolver *contactResolver; // @synthesize contactResolver=_contactResolver;
@property(readonly, nonatomic) id <_DKKnowledgeQuerying> knowledgeStore; // @synthesize knowledgeStore=_knowledgeStore;
- (void).cxx_destruct;
- (id)suggestionArrayWithArray:(id)arg1 appendingUniqueElementsByBundleIdFromArray:(id)arg2;
- (id)filterByRegularizingRules:(id)arg1 invalidatedByAnyConflictingItems:(id)arg2 containingItemTypes:(id)arg3;
- (id)filterByRegularizingRulesByContextOverlap:(id)arg1 regulularizeItems:(id)arg2 queryItems:(id)arg3 regularizationConstraint:(unsigned long long)arg4;
- (id)shareExtensionSuggestionsFromContext:(id)arg1;
- (id)suggestionProxiesWithPredictionContext:(id)arg1 photoSuggestedPeople:(id)arg2 supportedBundleIDs:(id)arg3;
- (id)initWithKnowledgeStore:(id)arg1 contactresolver:(id)arg2;

@end
