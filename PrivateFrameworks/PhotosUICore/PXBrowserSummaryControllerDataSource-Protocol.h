//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDateInterval, NSString, PXBrowserSummaryController;

@protocol PXBrowserSummaryControllerDataSource <NSObject>

@optional
@property(readonly, nonatomic) BOOL shouldShowImportDates;
- (BOOL)isFilteringContainerContentForBrowserSummaryController:(PXBrowserSummaryController *)arg1;
- (id <PXBrowserSelectionSnapshot>)selectionSnapshotForBrowserSummaryController:(PXBrowserSummaryController *)arg1;
- (id <PXBrowserVisibleContentSnapshot>)visibleContentSnapshotForBrowserSummaryController:(PXBrowserSummaryController *)arg1;
- (NSDateInterval *)containerDateIntervalForBrowserSummaryController:(PXBrowserSummaryController *)arg1;
- (NSString *)localizedContainerItemsCountForBrowserSummaryController:(PXBrowserSummaryController *)arg1;
- (NSString *)containerTitleForBrowserSummaryController:(PXBrowserSummaryController *)arg1;
@end

