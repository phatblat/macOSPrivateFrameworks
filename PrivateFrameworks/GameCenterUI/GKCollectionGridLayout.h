//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <GameCenterUI/GKCollectionFocusingLayout.h>

@class NSDictionary, NSIndexSet;

@interface GKCollectionGridLayout : GKCollectionFocusingLayout
{
    BOOL _centersItemsInExcessSpace;
    long long _autoWidthColumns;
    double _extraSectionHeaderToCellSpace;
    NSIndexSet *_sectionsThatShowHeaderWhenEmpty;
    NSIndexSet *_sectionsThatShowFootersWhenEmpty;
    NSDictionary *_itemAttributes;
    NSDictionary *_headerAttributes;
    NSDictionary *_footerAttributes;
}

@property(retain, nonatomic) NSDictionary *footerAttributes; // @synthesize footerAttributes=_footerAttributes;
@property(retain, nonatomic) NSDictionary *headerAttributes; // @synthesize headerAttributes=_headerAttributes;
@property(retain, nonatomic) NSDictionary *itemAttributes; // @synthesize itemAttributes=_itemAttributes;
@property(retain, nonatomic) NSIndexSet *sectionsThatShowFootersWhenEmpty; // @synthesize sectionsThatShowFootersWhenEmpty=_sectionsThatShowFootersWhenEmpty;
@property(retain, nonatomic) NSIndexSet *sectionsThatShowHeaderWhenEmpty; // @synthesize sectionsThatShowHeaderWhenEmpty=_sectionsThatShowHeaderWhenEmpty;
@property(nonatomic) double extraSectionHeaderToCellSpace; // @synthesize extraSectionHeaderToCellSpace=_extraSectionHeaderToCellSpace;
@property(nonatomic) long long autoWidthColumns; // @synthesize autoWidthColumns=_autoWidthColumns;
@property(nonatomic) BOOL centersItemsInExcessSpace; // @synthesize centersItemsInExcessSpace=_centersItemsInExcessSpace;
- (void).cxx_destruct;
- (long long)lastValidSection;
- (struct CGSize)collectionViewContentSize;
- (id)layoutAttributesForSupplementaryViewOfKind:(id)arg1 atIndexPath:(id)arg2;
- (id)layoutAttributesForItemAtIndexPath:(id)arg1;
- (id)layoutAttributesForElementsInRect:(struct CGRect)arg1;
- (void)prepareLayout;
- (void)applyDefaults;

@end

