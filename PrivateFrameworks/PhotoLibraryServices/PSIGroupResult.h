//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class NSArray, NSMutableArray, NSMutableSet, NSObject<OS_dispatch_queue>, NSString;

@interface PSIGroupResult : NSObject <NSCopying>
{
    id <PSIGroupResultDelegate> _delegate;
    NSObject<OS_dispatch_queue> *_queue;
    NSString *_owningContentString;
    NSMutableArray *_assetUUIDs;
    NSMutableArray *_collectionResults;
    BOOL _didFetchOwningContentString;
    NSMutableSet *_sceneGroupsIds;
    short _dedupingSkippedCategory;
    float _score;
    NSString *_transientToken;
    NSArray *_groups;
    const struct __CFArray *_assetIds;
    const struct __CFArray *_collectionIds;
}

@property(nonatomic) __weak id <PSIGroupResultDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) short dedupingSkippedCategory; // @synthesize dedupingSkippedCategory=_dedupingSkippedCategory;
@property(retain, nonatomic) const struct __CFArray *collectionIds; // @synthesize collectionIds=_collectionIds;
@property(retain, nonatomic) const struct __CFArray *assetIds; // @synthesize assetIds=_assetIds;
@property(copy, nonatomic) NSArray *groups; // @synthesize groups=_groups;
@property(nonatomic) float score; // @synthesize score=_score;
@property(copy, nonatomic) NSString *transientToken; // @synthesize transientToken=_transientToken;
- (void).cxx_destruct;
- (void)resolveObjectsWithAssetCache:(id)arg1 collectionCache:(id)arg2;
- (void)fetchNextAssetUUIDs:(BOOL)arg1 collectionResults:(BOOL)arg2 assetCountLimit:(unsigned long long)arg3 collectionCountLimit:(unsigned long long)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)fetchNextAssetUUIDs:(BOOL)arg1 collectionResults:(BOOL)arg2 count:(unsigned long long)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)fetchNextAssetUUIDs:(unsigned long long)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)_prepareForFetchWithAssetCountLimit:(unsigned long long)arg1 collectionCountLimit:(unsigned long long)arg2 outAssetRange:(struct _NSRange *)arg3 outCollectionRange:(struct _NSRange *)arg4 outFetchOwningContentString:(char *)arg5;
@property(readonly) __weak NSArray *collectionResults;
@property(readonly) __weak NSArray *assetUUIDs;
@property(readonly) __weak NSString *owningContentString;
@property(readonly, nonatomic) BOOL hasDateFilterFromImplicitToken;
@property(readonly, nonatomic) BOOL isDateFilterPartiallyFromFullSearchText;
- (id)dateFilterGroupSnapshot;
- (id)firstSearchTextGroupSnapshot;
- (id)fullSearchTextGroupSnapshot;
- (BOOL)isMatchedByIdentifierAtIndex:(long long)arg1;
- (BOOL)isContentStringTextSearchableAtIndex:(long long)arg1;
- (long long)categoryAtIndex:(long long)arg1;
- (id)normalizedStringAtIndex:(long long)arg1;
- (id)contentStringAtIndex:(long long)arg1;
- (id)groupRangesAtIndex:(long long)arg1;
- (id)matchRangesAtIndex:(long long)arg1;
- (id)tokensAtIndex:(long long)arg1;
- (unsigned long long)groupCount;
@property(readonly, nonatomic) NSArray *groupsMatchRanges;
@property(readonly, nonatomic) NSArray *lookupIdentifiers;
@property(readonly, nonatomic) NSArray *contentStrings;
@property(readonly, nonatomic) NSArray *groupsSearchTokens;
@property(readonly, nonatomic) unsigned long long matchCount;
@property(readonly, nonatomic) unsigned long long collectionMatchCount;
@property(readonly, nonatomic) unsigned long long assetMatchCount;
@property(readonly) NSMutableSet *sceneGroupsIds;
- (id)normalizedUnitTestDescription;
- (id)unitTestDescription;
- (id)debugDescription;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)initWithQueue:(id)arg1;

@end

