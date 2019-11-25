//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class NSArray, NSCollectionLayoutGroup, NSDictionary, NSIndexSet;

@interface NSCollectionLayoutSection : NSObject <NSCopying>
{
    NSIndexSet *_pinnedBoundarySupplementaryItemIndexes;
    BOOL _hasBackgroundDecorationItem;
    NSDictionary *_supplementaryItemsDict;
    NSDictionary *_decorationItemsDict;
    BOOL _isEmptySection;
    BOOL _prefersListSolver;
    NSArray *_boundarySupplementaryItems;
    NSArray *_decorationItems;
    BOOL _supplementariesFollowContentInsets;
    double _interGroupSpacing;
    long long _orthogonalScrollingBehavior;
    CDUnknownBlockType _visibleItemsInvalidationHandler;
    NSCollectionLayoutGroup *_group;
    NSArray *_supplementaryItems;
    NSIndexSet *_pinnedSupplementaryItemIndexes;
    NSDictionary *_decorationItemssDict;
    id <_UICollectionLayoutSectionCallback> _callback;
    struct CGSize _contentSize;
    struct NSDirectionalEdgeInsets _contentInsets;
}

+ (id)_emptySection;
+ (id)sectionWithGroup:(id)arg1;
@property(nonatomic) BOOL prefersListSolver; // @synthesize prefersListSolver=_prefersListSolver;
@property(readonly, nonatomic, getter=_callback) id <_UICollectionLayoutSectionCallback> callback; // @synthesize callback=_callback;
@property(nonatomic) struct CGSize contentSize; // @synthesize contentSize=_contentSize;
@property(readonly, nonatomic) NSDictionary *decorationItemssDict; // @synthesize decorationItemssDict=_decorationItemssDict;
@property(copy, nonatomic) NSIndexSet *pinnedSupplementaryItemIndexes; // @synthesize pinnedSupplementaryItemIndexes=_pinnedSupplementaryItemIndexes;
@property(copy, nonatomic) NSArray *supplementaryItems; // @synthesize supplementaryItems=_supplementaryItems;
@property(copy, nonatomic) NSCollectionLayoutGroup *group; // @synthesize group=_group;
@property(copy) CDUnknownBlockType visibleItemsInvalidationHandler; // @synthesize visibleItemsInvalidationHandler=_visibleItemsInvalidationHandler;
@property BOOL supplementariesFollowContentInsets; // @synthesize supplementariesFollowContentInsets=_supplementariesFollowContentInsets;
@property long long orthogonalScrollingBehavior; // @synthesize orthogonalScrollingBehavior=_orthogonalScrollingBehavior;
@property double interGroupSpacing; // @synthesize interGroupSpacing=_interGroupSpacing;
@property struct NSDirectionalEdgeInsets contentInsets; // @synthesize contentInsets=_contentInsets;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (BOOL)_isListSolverCompatibleForLayoutAxis:(int)arg1;
- (id)decorationItemsDict;
@property(readonly, nonatomic) NSDictionary *supplementaryItemsDict;
- (id)_auxiliaryItemForElementKind:(id)arg1 category:(long long)arg2;
- (id)_auxillaryItemForElementKind:(id)arg1 category:(long long)arg2;
- (BOOL)scrollsOrthogonally;
- (BOOL)_containsEstimatedSizeElement;
- (void)_checkForDuplicateSupplementaryItemKindsAndThrowIfFound;
- (BOOL)_containsBackgroundDecorationItem:(id)arg1;
- (BOOL)_hasBackgroundDecorationItem;
- (id)pinnedBoundarySupplementaryItemIndexes;
- (BOOL)_hasVisibleItemsHandler;
- (BOOL)_isEmptySection;
- (BOOL)isEqual:(id)arg1;
@property(copy) NSArray *decorationItems;
@property(copy) NSArray *boundarySupplementaryItems;
- (id)initWithLayoutGroup:(id)arg1;
- (id)initWithGroup:(id)arg1 contentInsets:(struct NSDirectionalEdgeInsets)arg2 supplementaryItems:(id)arg3 boundarySupplementartItems:(id)arg4 pinnedSupplementaryItemIndexes:(id)arg5 interGroupSpacing:(double)arg6 visibleItemsInvalidationHandler:(CDUnknownBlockType)arg7 supplementariesFollowInsets:(BOOL)arg8 decorationItems:(id)arg9 orthogonalScrollingBehavior:(long long)arg10 isEmptySection:(BOOL)arg11 prefersListSolver:(BOOL)arg12;

@end

