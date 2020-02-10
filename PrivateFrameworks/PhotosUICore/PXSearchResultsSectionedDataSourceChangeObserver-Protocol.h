//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSIndexPath, NSIndexSet, PXSearchResultsSectionedDataSource, PXSearchResultsValue, PXSearchTopAssetsResult;

@protocol PXSearchResultsSectionedDataSourceChangeObserver <NSObject>
- (void)searchResultsDataSource:(PXSearchResultsSectionedDataSource *)arg1 didChangeThumbnailAssetsForSearchResult:(PXSearchTopAssetsResult *)arg2 atIndexes:(NSIndexSet *)arg3;
- (void)searchResultsDataSource:(PXSearchResultsSectionedDataSource *)arg1 didChangeThumbnailAssetsForSearchResult:(PXSearchTopAssetsResult *)arg2 topAssetsSectionExists:(BOOL)arg3;
- (void)searchResultsDataSource:(PXSearchResultsSectionedDataSource *)arg1 didFetchAssetsForSearchResult:(PXSearchResultsValue *)arg2 indexPath:(NSIndexPath *)arg3;
- (void)searchResultsDataSourceHasPendingChanges:(PXSearchResultsSectionedDataSource *)arg1 shouldMergePendingChanges:(BOOL)arg2;
@end
