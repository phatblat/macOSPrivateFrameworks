//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, PXSectionedDataSource;

@protocol PXGDataSourceDrivenLayout <NSObject>
- (void)applySectionedChangedDetailsForSingleSection:(NSArray *)arg1 dataSourceAfterChanges:(PXSectionedDataSource *)arg2 changeMediaVersionHandler:(BOOL (^)(struct PXSimpleIndexPath, struct PXSimpleIndexPath))arg3;
- (void)applySectionedChangeDetails:(NSArray *)arg1 dataSourceAfterChanges:(PXSectionedDataSource *)arg2 sublayoutProvider:(id <PXGSublayoutProvider>)arg3 outChangedSections:(id *)arg4 outSectionsWithItemChanges:(id *)arg5 changeMediaVersionHandler:(BOOL (^)(struct PXSimpleIndexPath, struct PXSimpleIndexPath))arg6;
@end
