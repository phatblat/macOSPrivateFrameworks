//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSDictionary, NSMutableDictionary, NSMutableSet, NSSet;

@interface NSCollectionViewLayoutInvalidationContext : NSObject
{
    NSMutableSet *_invalidatedItemIndexPaths;
    NSMutableDictionary *_invalidatedSupplementaryIndexPaths;
    NSMutableDictionary *_invalidatedDecorationIndexPaths;
    NSArray *_updateItems;
    struct CGPoint _contentOffsetAdjustment;
    struct CGSize _contentSizeAdjustment;
    struct {
        unsigned int invalidateDataSource:1;
        unsigned int invalidateEverything:1;
        unsigned int initiatedFromReloadData:1;
        unsigned int retainExistingSizingInfoForEstimates:1;
    } _invalidationContextFlags;
}

- (void).cxx_destruct;
@property struct CGSize contentSizeAdjustment;
@property struct CGPoint contentOffsetAdjustment;
@property(nonatomic, getter=_updateItems, setter=_setUpdateItems:) NSArray *updateItems;
@property(nonatomic, setter=_setInvalidateEverything:) BOOL invalidateEverything;
@property(nonatomic, setter=_setInvalidateDataSourceCounts:) BOOL invalidateDataSourceCounts;
@property(readonly) NSDictionary *invalidatedDecorationIndexPaths;
- (void)invalidateDecorationElementsOfKind:(id)arg1 atIndexPaths:(id)arg2;
@property(readonly) NSDictionary *invalidatedSupplementaryIndexPaths;
@property(readonly) NSSet *invalidatedItemIndexPaths;
- (void)invalidateItemsAtIndexPaths:(id)arg1;
- (void)invalidateSupplementaryElementsOfKind:(id)arg1 atIndexPaths:(id)arg2;
- (void)_setInvalidatedSupplementaryViews:(id)arg1;
- (id)_invalidatedSupplementaryViews;
@property(nonatomic, getter=_retainExistingSizingInfoForEstimates, setter=_setRetainExistingSizingInfoForEstimates:) BOOL retainExistingSizingInfoForEstimates;
@property(nonatomic, getter=_initiatedFromReloadData, setter=_setInitiatedFromReloadData:) BOOL initiatedFromReloadData;

@end

