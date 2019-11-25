//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class PXIndexPathSet, PXSectionedDataSource;

@interface PXSelectionSnapshot : NSObject
{
    PXSectionedDataSource *_dataSource;
    PXIndexPathSet *_selectedIndexPaths;
    struct PXSimpleIndexPath _cursorIndexPath;
}

@property(readonly, nonatomic) struct PXSimpleIndexPath cursorIndexPath; // @synthesize cursorIndexPath=_cursorIndexPath;
@property(readonly, nonatomic) PXIndexPathSet *selectedIndexPaths; // @synthesize selectedIndexPaths=_selectedIndexPaths;
@property(readonly, nonatomic) PXSectionedDataSource *dataSource; // @synthesize dataSource=_dataSource;
- (void).cxx_destruct;
- (id)description;
- (id)fetchSelectedObjects;
- (struct PXSimpleIndexPath)indexPathOfObjectPassingTest:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic) PXIndexPathSet *sectionIndexPathsContainingSelection;
@property(readonly, nonatomic) struct PXSimpleIndexPath lastSelectedIndexPath;
@property(readonly, nonatomic) struct PXSimpleIndexPath firstSelectedIndexPath;
- (BOOL)areAllItemsSelected;
- (BOOL)isAnyItemSelected;
- (BOOL)isAnySectionSelected;
- (BOOL)isIndexPathSelected:(struct PXSimpleIndexPath)arg1;
- (id)init;
- (id)initWithDataSource:(id)arg1 selectedIndexPath:(struct PXSimpleIndexPath)arg2;
- (id)initWithDataSource:(id)arg1 selectedIndexPaths:(id)arg2;
- (id)initWithDataSource:(id)arg1 selectedIndexPaths:(id)arg2 cursorIndexPath:(struct PXSimpleIndexPath)arg3;
- (BOOL)areAllUnsavedAssetsSelectedWithImportStatusManager:(id)arg1;

@end

