//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class NSIndexPath, NSString;

@interface NSCollectionViewLayoutAttributes : NSObject <NSCopying>
{
    NSString *_elementKind;
    NSString *_reuseIdentifier;
    struct CGPoint _center;
    struct CGSize _size;
    struct CGRect _frame;
    double _alpha;
    struct CATransform3D _transform;
    NSIndexPath *_indexPath;
    NSString *_isCloneString;
    struct {
        unsigned int isCellKind:1;
        unsigned int isDecorationView:1;
        unsigned int isHidden:1;
        unsigned int isClone:1;
        unsigned int isInterItemGap:1;
        unsigned int isInterSectionGap:1;
    } _layoutFlags;
    long long _zIndex;
}

+ (id)layoutAttributesForDecorationViewOfKind:(id)arg1 withIndexPath:(id)arg2;
+ (id)layoutAttributesForSupplementaryViewOfKind:(id)arg1 withIndexPath:(id)arg2;
+ (id)layoutAttributesForInterSectionGapBeforeIndexPath:(id)arg1;
+ (id)layoutAttributesForInterItemGapBeforeIndexPath:(id)arg1;
+ (id)layoutAttributesForItemWithIndexPath:(id)arg1;
@property long long zIndex; // @synthesize zIndex=_zIndex;
@property double alpha; // @synthesize alpha=_alpha;
- (void).cxx_destruct;
@property(readonly) NSString *representedElementKind;
@property(readonly) long long representedElementCategory;
- (BOOL)_isSupplementaryView;
- (BOOL)_isDecorationView;
- (BOOL)_isCell;
- (unsigned long long)hash;
- (BOOL)_isTransitionVisibleTo:(id)arg1;
- (BOOL)_isEquivalentTo:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (id)description;
- (void)setFloating:(BOOL)arg1;
- (BOOL)isFloating;
- (void)setDistanceIntoEndZone:(double)arg1;
- (double)distanceIntoEndZone;
- (void)setFractionIntoEndZone:(double)arg1;
- (double)fractionIntoEndZone;
- (struct CGAffineTransform)transform;
- (void)setTransform:(struct CGAffineTransform)arg1;
- (void)setTransform3D:(struct CATransform3D)arg1;
- (struct CATransform3D)transform3D;
- (void)setCenter:(struct CGPoint)arg1;
- (struct CGPoint)center;
@property struct CGSize size;
@property struct CGRect frame;
- (void)setBounds:(struct CGRect)arg1;
- (struct CGRect)bounds;
- (id)initialLayoutAttributesForInsertedDecorationElementOfKind:(id)arg1 atIndexPath:(id)arg2;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(retain) NSIndexPath *indexPath;
- (id)_reuseIdentifier;
- (void)_setReuseIdentifier:(id)arg1;
- (id)_elementKind;
- (void)_setElementKind:(id)arg1;
- (BOOL)_isClone;
- (void)_setIsClone:(BOOL)arg1;
@property(getter=isHidden) BOOL hidden;
- (id)init;
- (id)__indexPath;
- (id)__elementKind;

@end

