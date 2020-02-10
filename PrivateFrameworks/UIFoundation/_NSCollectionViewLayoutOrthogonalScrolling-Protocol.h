//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSCollectionViewLayoutAttributes, NSIndexPath, NSIndexSet, NSString;

@protocol _NSCollectionViewLayoutOrthogonalScrolling <NSObject>
- (BOOL)_orthogonalScrollingElementShouldAppearAboveForAttributes:(NSCollectionViewLayoutAttributes *)arg1;
- (NSArray *)_extendedAttributesQueryIncludingOrthogonalScrollingRegions:(struct CGRect)arg1;
- (BOOL)_shouldOrthogonalScrollingSectionDecorationScrollWithContentForIndexPath:(NSIndexPath *)arg1 elementKind:(NSString *)arg2;
- (BOOL)_shouldOrthogonalScrollingSectionSupplementaryScrollWithContentForIndexPath:(NSIndexPath *)arg1 elementKind:(NSString *)arg2;
- (struct _NSOrthogonalScrollingContentInsets)_orthogonalScrollingContentInsetsForSection:(long long)arg1;
- (struct CGRect)_orthogonalScrollingContentRectForSection:(long long)arg1;
- (struct CGRect)_orthogonalScrollingLayoutRectForSection:(long long)arg1;
- (int)_orthogonalScrollingAxis;
- (struct CGPoint)_orthogonalScrollingTargetContentOffsetForOffset:(struct CGPoint)arg1 section:(long long)arg2;
- (BOOL)_orthogonalScrollingUsesTargetContentOffsetForSection:(long long)arg1;
- (BOOL)_orthogonalScrollingShouldCenterCustomPagingSizeForSection:(long long)arg1;
- (double)_orthogonalScrollingPagingDimensionForSection:(long long)arg1;
- (BOOL)_shouldConfigureForPagingForOrthogonalScrollingSection:(long long)arg1;
- (struct CGVector)_scrollingUnitVectorForOrthogonalScrollingSection:(long long)arg1;
- (struct CGPoint)_offsetForOrthogonalScrollingSection:(long long)arg1;
- (void)_setOffset:(struct CGPoint)arg1 forOrthogonalScrollingSection:(long long)arg2;
- (NSIndexSet *)_orthogonalScrollingSections;
- (BOOL)_hasOrthogonalScrollingSections;
@end
