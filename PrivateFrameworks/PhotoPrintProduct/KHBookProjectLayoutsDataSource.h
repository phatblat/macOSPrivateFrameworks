//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <PhotoPrintProduct/KHProjectLayoutsDataSource.h>

#import "KHMutableEditorDataSource.h"

@class KHProjectLayout, NSMutableArray, NSMutableDictionary, NSString;

@interface KHBookProjectLayoutsDataSource : KHProjectLayoutsDataSource <KHMutableEditorDataSource>
{
    NSMutableArray *_collectionLayouts;
    KHProjectLayout *_rightEndSheetLayout;
    KHProjectLayout *_leftEndSheetLayout;
    KHProjectLayout *_frontSoftCoverHiddenLayout;
    KHProjectLayout *_backSoftCoverHiddenLayout;
    NSMutableDictionary *_blankLayouts;
    unsigned long long _leftEndSheetLayoutIndex;
    unsigned long long _rightEndSheetLayoutIndex;
    unsigned long long _softcoverHiddenFrontLayoutIndex;
    unsigned long long _softcoverHiddenBackLayoutIndex;
}

+ (id)_blankLayoutInProject:(id)arg1;
- (void).cxx_destruct;
- (id)accessibilityValuesForLayout:(id)arg1;
- (id)accessibilityValues;
- (id)editorDisplayFiltersAccessibilityLabel;
- (id)editorDisplayFilters;
- (long long)numberOfSpreadEditorLayoutsInRange:(struct _NSRange)arg1;
- (void)insertEditorSpreadLayoutAtIndex:(unsigned long long)arg1;
- (void)insertEditorLayoutAtIndex:(unsigned long long)arg1;
- (void)addEditorLayouts:(unsigned long long)arg1;
- (BOOL)editorLayoutAtIndexIsHidden:(long long)arg1;
- (void)clearEditorPlacedPhotos;
- (void)clearEditorPlacedPhotosForLayouts:(id)arg1;
- (void)removeEditorLayoutsInIndexSet:(id)arg1;
- (BOOL)adjustEditorPageCount:(unsigned long long)arg1;
- (BOOL)adjustDensitySetting:(unsigned long long)arg1 createDatabaseObjects:(BOOL)arg2;
- (long long)editorRearrangingStyle;
- (void)exchangeEditorLayoutAtIndex:(long long)arg1 withEditorLayoutAtIndex:(long long)arg2;
- (BOOL)_canMoveLayoutsInRange:(struct _NSRange)arg1 toIndex:(long long)arg2;
- (BOOL)_shouldExchangeLayoutAtIndex:(long long)arg1 withProposedIndex:(long long)arg2;
- (BOOL)shouldExchangeItemsInRange:(struct _NSRange)arg1 withProposedRange:(struct _NSRange)arg2;
- (struct _NSRange)targetRangeForMoveOfItemsAtRange:(struct _NSRange)arg1 toProposedRange:(struct _NSRange)arg2;
- (void)moveEditorLayoutsInRange:(struct _NSRange)arg1 toIndex:(long long)arg2;
- (void)moveEditorLayoutAtIndex:(long long)arg1 toIndex:(long long)arg2;
- (BOOL)canMoveEditorLayoutAtIndex:(long long)arg1;
- (struct _NSRange)targetRangeToRearrangeFromSourceRange:(struct _NSRange)arg1;
- (id)selectionIndicesForProposedSelectionIndex:(long long)arg1;
- (BOOL)shouldSelectEditorLayoutAtIndex:(long long)arg1;
- (long long)pageIndexForEditorLayout:(id)arg1;
- (id)editorTitleForLayoutsAtPageIndex:(long long)arg1;
- (id)editorLayoutsForPageAtIndex:(long long)arg1;
- (unsigned long long)numberOfVisibleEditorPagesPerPage;
- (long long)numberOfEditorPages;
- (long long)indexOfEditorLayout:(id)arg1;
- (id)editorLayoutForSelection:(id)arg1;
- (id)editorLayoutAtIndex:(long long)arg1;
- (id)editorIndexSetForSelectAllTrailing;
- (id)editorIndexSetForSelectAllLeading;
- (id)editorIndexSetForSelectAll;
- (long long)numberOfEditorLayouts;
- (id)editorTitle;
- (id)undoManager;
- (double)editorScaleForReferenceSize:(struct CGSize)arg1;
- (double)bestFitScaleForLayout:(id)arg1 referenceSize:(struct CGSize)arg2;
- (unsigned long long)stateForChangeType:(unsigned long long)arg1 withLayoutsAtIndexPaths:(id)arg2;
- (id)title;
- (unsigned long long)projectIndexForIndexPath:(id)arg1;
- (id)indexPathForProjectLayoutIndex:(unsigned long long)arg1;
- (id)collectionLayouts;
@property(readonly, nonatomic) KHProjectLayout *backSoftCoverHiddenLayout;
@property(readonly, nonatomic) KHProjectLayout *frontSoftCoverHiddenLayout;
@property(readonly, nonatomic) KHProjectLayout *leftEndSheetLayout;
@property(readonly, nonatomic) KHProjectLayout *rightEndSheetLayout;
- (BOOL)removeLayoutsAtIndexPaths:(id)arg1;
- (BOOL)removeLayoutAtIndexPath:(id)arg1;
- (BOOL)_addLayoutAtIndexPath:(id)arg1 spread:(BOOL)arg2;
- (BOOL)addSpreadLayoutAtIndexPath:(id)arg1;
- (BOOL)addLayoutAtIndexPath:(id)arg1;
- (BOOL)_isSoftcoverProductType;
- (BOOL)_placementIsCoverOrFlapForLayoutAtIndexPath:(id)arg1;
- (void)resetCollectionLayouts;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

