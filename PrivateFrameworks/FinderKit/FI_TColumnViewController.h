//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <FinderKit/FI_TBrowserViewController.h>

#import "FIAliasResolution.h"
#import "TColumnViewDelegate.h"
#import "TDuplicateTaskDelegateProtocol.h"
#import "TListNameFieldDelegate.h"

@class FI_TColumnPreviewController, NSString;

__attribute__((visibility("hidden")))
@interface FI_TColumnViewController : FI_TBrowserViewController <FIAliasResolution, TColumnViewDelegate, TDuplicateTaskDelegateProtocol, TListNameFieldDelegate>
{
    struct TFENode _draggingSourceContainer;
    _Bool _selectedItemNeedsPreviewView;
    struct TNSRef<FI_TColumnPreviewController, void> _previewViewController;
    _Bool _showIcons;
    _Bool _showPreviewColumn;
    _Bool _showsSize;
    _Bool _configuring;
    _Bool _resizingAllColumns;
    _Bool _forwardKeydownsToNextColumn;
    _Bool _delayedOpening;
    int _arrangeBy;
    struct TAliasesTargets _resolvedAliasTable;
    struct StColumnOptimizer *_optimizer;
    struct TFENode _brokenAlias;
    struct TNSRef<NSTimer, void> _delayedContainerSynchingTimer;
    struct TColumnOptimizerContainers _delayedContainers;
    struct shared_ptr<TColumnPreviewQTEjectHelper> _ejectHelper;
    long long _columnIndexOriginatingDrag;
    struct TNSRef<NSFont, void> _cellViewFont;
    _Bool _nextSelectionAllowsRetarget;
    _Bool _settingSelectionPath;
    _Bool _bumpedIn;
    TNSWeakPtr_a131d41e _showDelayedPreviewToken;
    struct TNotificationCenterObserver _adjustColumnWidthAutomaticallyObserver;
    struct TNotificationCenterObserver _userDidResizeColumnsObserver;
    _Bool _editing;
}

+ (id)makeColumnCellViewForBrowserTableView:(id)arg1;
@property(nonatomic) _Bool nextSelectionAllowsRetarget; // @synthesize nextSelectionAllowsRetarget=_nextSelectionAllowsRetarget;
@property(nonatomic) int arrangeBy; // @synthesize arrangeBy=_arrangeBy;
@property(nonatomic, getter=isEditing) _Bool editing; // @synthesize editing=_editing;
@property(nonatomic) _Bool delayedOpening; // @synthesize delayedOpening=_delayedOpening;
@property(nonatomic) _Bool showsSize; // @synthesize showsSize=_showsSize;
@property(nonatomic) _Bool showPreviewColumn; // @synthesize showPreviewColumn=_showPreviewColumn;
@property(nonatomic) _Bool showIcons; // @synthesize showIcons=_showIcons;
- (id).cxx_construct;
- (void).cxx_destruct;
- (id)columnView;
- (long long)focusedColumn;
- (long long)lastContainerColumn;
- (long long)lastColumn;
- (id)selectedItemsForColumn:(long long)arg1;
- (void)draggingSession:(id)arg1 endedAtPoint:(struct CGPoint)arg2 operation:(unsigned long long)arg3;
- (BOOL)browser:(id)arg1 acceptDrop:(id)arg2 atRow:(long long)arg3 column:(long long)arg4 dropOperation:(unsigned long long)arg5;
- (unsigned long long)browser:(id)arg1 validateDrop:(id)arg2 proposedRow:(long long *)arg3 column:(long long *)arg4 dropOperation:(unsigned long long *)arg5;
- (void)mouseDown:(id)arg1;
- (BOOL)browser:(id)arg1 canDragRowsWithIndexes:(id)arg2 inColumn:(long long)arg3 withEvent:(id)arg4;
- (BOOL)browser:(id)arg1 writeRowsWithIndexes:(id)arg2 inColumn:(long long)arg3 toPasteboard:(id)arg4;
- (id)dragFlockIconImageForNode:(const struct TFENode *)arg1 atIconSize:(double)arg2 inView:(id)arg3;
- (id)dragFlockLabelImageForNode:(const struct TFENode *)arg1 outFrame:(struct CGRect *)arg2 inView:(id)arg3;
- (struct CGImage *)newRestoreImageForNode:(const struct TFENode *)arg1 outRect:(struct CGRect *)arg2;
- (id)makeDragImageForNode:(const struct TFENode *)arg1 inView:(id)arg2 includeIcon:(_Bool)arg3 includeText:(_Bool)arg4 outTextFrame:(struct CGRect *)arg5;
- (void)updateDraggingItemsForDrag:(id)arg1 dropTargetView:(id)arg2;
- (id)makeCellViewForDragImage:(const struct TFENode *)arg1 inBrowserTableView:(id)arg2;
@property(nonatomic) double preferredColumnWidth;
- (void)columnViewConfigurationDidChange;
- (struct TFENode)thumbnailTargetNodeFromContainerNode:(const struct TFENode *)arg1;
- (struct TFENode)thumbnailTargetNodeForNode:(const struct TFENode *)arg1;
- (void)selectionChanged:(id)arg1 inColumn:(long long)arg2;
- (BOOL)browser:(id)arg1 shouldAutoExpandItem:(id)arg2;
- (void)browserDidScroll:(id)arg1;
- (double)browser:(id)arg1 shouldSizeColumn:(long long)arg2 forUserResize:(BOOL)arg3 toWidth:(double)arg4;
- (double)browser:(id)arg1 sizeToFitWidthOfColumn:(long long)arg2;
- (double)browser:(id)arg1 heightOfRow:(long long)arg2 inColumn:(long long)arg3;
- (void)columnView:(id)arg1 willStopUsingNodes:(const struct TFENodeVector *)arg2 forColumn:(long long)arg3;
- (void)columnView:(id)arg1 willStopUsingItem:(id)arg2 forColumn:(long long)arg3;
- (void)columnView:(id)arg1 willStartUsingNode:(const struct TFENode *)arg2 forColumn:(long long)arg3;
- (void)columnView:(id)arg1 willStartUsingItem:(id)arg2 forColumn:(long long)arg3;
- (_Bool)shouldObserveOrUnobserveNode:(const struct TFENode *)arg1 forColumn:(long long)arg2;
- (BOOL)browser:(id)arg1 shouldTypeSelectForEvent:(id)arg2 withCurrentSearchString:(id)arg3;
- (id)browser:(id)arg1 headerViewControllerForItem:(id)arg2;
- (id)browser:(id)arg1 previewViewControllerForLeafItem:(id)arg2;
- (void)showDelayedPreview;
- (id)browser:(id)arg1 objectValueForItem:(id)arg2;
- (BOOL)browser:(id)arg1 isLeafItem:(id)arg2;
- (id)browser:(id)arg1 child:(long long)arg2 ofItem:(id)arg3;
- (long long)browser:(id)arg1 numberOfChildrenOfItem:(id)arg2;
- (id)rootItemForBrowser:(id)arg1;
- (const struct TFENode *)rootNode;
- (void)adjustColumnWidthAutomaticallyChanged;
- (void)menuNeedsUpdate:(id)arg1;
- (void)selectionChangedByUserAction:(_Bool)arg1;
- (struct TFENode)focusNode;
- (void)reloadLastColumn;
- (void)setInternalTargetPath:(const struct TFENodeVector *)arg1;
@property(readonly, retain, nonatomic) FI_TColumnPreviewController *previewViewController; // @dynamic previewViewController;
- (id)columnsForContainer:(const struct TFENode *)arg1 upToColumn:(long long)arg2;
- (_Bool)isInitialPopulationComplete;
- (_Bool)shouldCalculateFolderSizesForContainer:(const struct TFENode *)arg1;
- (void)handleNodeChangedPropertyMap:(const unordered_map_f886f0c5 *)arg1 forBrowserTableView:(id)arg2;
- (void)updateColumnCellView:(id)arg1 browserTableView:(id)arg2 masterLayoutGuide:(id)arg3 node:(const struct TFENode *)arg4 row:(long long)arg5;
- (void)updateDisabledStateForColumnCellView:(id)arg1 browserTableView:(id)arg2 node:(const struct TFENode *)arg3 row:(long long)arg4;
- (void)updateHeaderCellView:(id)arg1 node:(const struct TFENode *)arg2;
- (void)attemptToSelectPendingNodes;
- (void)reusingDataSource;
- (void)dataSourceChanged:(const vector_274a36ec *)arg1;
- (struct TFENodeVector)sortedGroups:(const struct TFENodeVector *)arg1 forContainerNode:(const struct TFENode *)arg2;
- (int)editingSelectionType;
- (void)updateSTFEditorLocation;
- (void)stopEditing:(_Bool)arg1;
- (_Bool)startEditingWithNode:(const struct TFENode *)arg1 renameOp:(id)arg2;
- (void)startEditingSelectedRow;
- (BOOL)browser:(id)arg1 shouldEditItem:(id)arg2;
- (id)zoomImageForNode:(const struct TFENode *)arg1 contentRect:(struct CGRect *)arg2;
- (void)deselectAllNodes;
- (void)revealNodes:(const struct TFENodeVector *)arg1 select:(_Bool)arg2;
- (void)itemDoubleClick:(id)arg1;
- (struct TFENode)resolvedNodeForTarget:(const struct TFENode *)arg1;
- (struct TFENode)containerNodeForTarget:(const struct TFENode *)arg1;
- (void)itemSelection:(id)arg1;
- (void)enumerateAvailableCellViews:(const function_f4d4837c *)arg1;
- (void)configureRowHeight;
- (void)setShowIconPreview:(_Bool)arg1;
- (void)setTextSize:(double)arg1;
- (double)calculateIconSize;
- (_Bool)updateRowHeights;
- (void)privateBindSettings;
- (struct CGSize)idealContentSize;
- (struct CGRect)iconFrameForNode:(const struct TFENode *)arg1;
- (struct CGRect)frameForNode:(const struct TFENode *)arg1;
- (double)rowHeightForVariableIconAndText;
- (struct TFENode)nextNodeInViewAfter:(const struct TFENodeVector *)arg1;
- (struct TFENodeVector)typeSelectCandidateNodes;
- (unsigned long long)selectedNodesCountInFocus;
- (unsigned long long)selectedNodesCount;
- (unsigned long long)itemCount;
- (void)updateScrollPosition;
- (_Bool)nodeIsSelected:(const struct TFENode *)arg1;
- (void)getVisibleNodes:(struct TFENodeVector *)arg1;
- (void)selectAllNodes;
- (id)browser:(id)arg1 selectionIndexesForProposedSelection:(id)arg2 inColumn:(long long)arg3;
- (void)setSelectedNodes:(const struct TFENodeVector *)arg1 byExtendingSelection:(_Bool)arg2;
- (void)setSelectedItems:(id)arg1 inColumn:(long long)arg2 byExtendingSelection:(_Bool)arg3;
- (void)updateSubviewContentInsets:(struct NSEdgeInsets)arg1;
- (void)handleMoveToTrashCommand:(const struct TFENodeVector *)arg1 immediately:(_Bool)arg2;
- (void)reloadIconsInView;
- (_Bool)includeBadgeInIconImage;
- (id)popoverAnchorViewForNode:(const struct TFENode *)arg1;
- (struct TFENodeVector)nodesWithViews;
- (_Bool)isItem:(id)arg1 expandedAtRow:(long long)arg2 column:(long long)arg3;
- (_Bool)containsNode:(const struct TFENode *)arg1;
- (unsigned long long)indexForNode:(const struct TFENode *)arg1 getColumn:(long long *)arg2;
- (unsigned long long)indexForNode:(const struct TFENode *)arg1 inColumn:(long long)arg2;
- (unsigned long long)indexForNode:(const struct TFENode *)arg1;
- (struct TFENode)currentNode;
- (void)alias:(const struct TFENode *)arg1 resolvedAs:(const struct TFENode *)arg2 temporaryNode:(const struct TFENode *)arg3;
- (_Bool)handleKeyDown:(id)arg1 currentKey:(unsigned short)arg2;
- (_Bool)shouldDelayNextPreviewPaneRetargetForCurrentKey:(unsigned short)arg1;
- (void)selectAll:(id)arg1;
- (void)setFocusToColumn:(long long)arg1;
- (long long)columnWithKeyboardFocus;
- (void)adjustPreviewColumnWidth;
- (_Bool)isPreviewColumn:(long long)arg1;
- (long long)selectedColumn;
- (_Bool)trimPath:(const struct TFENodeVector *)arg1 forNode:(const struct TFENode *)arg2;
- (const struct TFENode *)browserRoot;
- (void)closeTarget;
- (void)aboutToDestroyBrowserView;
- (void)openTarget;
- (void)setBrowserIsShowingICloud;
- (void)restoreTransientViewState;
- (void)saveTransientViewState;
- (void)computeTargetPathsFor:(const struct TFENodeVector *)arg1;
- (void)invalidateThumbnailForKeyNodes:(const struct TFENodeVector *)arg1;
- (_Bool)syncPathWithColumns:(const struct TColumnOptimizerContainers *)arg1 delayOpening:(_Bool)arg2 forwardKeydownsToNextColumn:(_Bool)arg3;
- (void)delayedContainerSynching;
- (_Bool)syncTargetPath:(_Bool)arg1;
- (struct TFENodeVector)closeContainers:(const struct TFENodeVector *)arg1;
- (struct TFENodeVector)openContainers:(const struct TFENodeVector *)arg1;
- (void)unwindOpenCloseContainers;
- (unsigned long long)getCommandTarget:(SEL)arg1 outNodes:(struct TFENodeVector *)arg2 upTo:(unsigned long long)arg3;
- (struct TriStateBool)includeTargetForCommandSelector:(SEL)arg1;
- (unsigned long long)getTargetSelection:(struct TFENodeVector *)arg1 includeTarget:(_Bool)arg2 upTo:(unsigned long long)arg3;
- (unsigned long long)getSelectedNodesInFocus:(struct TFENodeVector *)arg1 upTo:(unsigned long long)arg2;
- (unsigned long long)getSelectedNodes:(struct TFENodeVector *)arg1 forContainer:(const struct TFENode *)arg2 upTo:(unsigned long long)arg3;
- (unsigned long long)getSelectedNodes:(struct TFENodeVector *)arg1 inColumn:(long long)arg2;
- (unsigned long long)getSelectedNodesFromView:(struct TFENodeVector *)arg1 upTo:(unsigned long long)arg2;
- (unsigned long long)getSelectedNodesFromView:(struct TFENodeVector *)arg1 inColumn:(long long)arg2 upTo:(unsigned long long)arg3;
- (void)getNodes:(struct TFENodeVector *)arg1 fromSet:(id)arg2 forColumn:(long long)arg3 upTo:(unsigned long long)arg4;
- (struct TFENode)nodeOrContainerAtIndex:(long long)arg1 inColumn:(long long)arg2;
- (struct TFENode)nodeAtIndex:(unsigned long long)arg1 inColumn:(long long)arg2;
- (id)itemAtIndex:(unsigned long long)arg1 inColumn:(long long)arg2;
- (struct TFENode)nodeAtPoint:(const struct CGPoint *)arg1 includeTarget:(_Bool)arg2;
- (struct TFENode)nodeAtIndex:(unsigned long long)arg1;
- (id)childAtIndex:(long long)arg1 ofColumnContainer:(const struct TFENode *)arg2;
- (_Bool)isGroupRow:(long long)arg1 inColumn:(long long)arg2;
- (unsigned long long)childrenCountOfNode:(const struct TFENode *)arg1;
- (struct TFENode)containerForColumn:(long long)arg1;
- (struct TFENode)parentNodeForColumn:(long long)arg1;
- (_Bool)shouldShowChildrenForNode:(const struct TFENode *)arg1;
- (struct StColumnOptimizer *)setOptimizer:(struct StColumnOptimizer *)arg1;
- (void)setGrouping:(_Bool)arg1;
- (int)viewStyle;
- (void)restoreBrowserViewState:(id)arg1;
- (id)browserViewState;
- (_Bool)makeBrowserViewFirstResponder;
- (unsigned long long)itemCountForLoadingUI;
- (id)viewToOverlayForLoadingUI;
- (id)nibName;
- (void)aboutToTearDown;
- (void)killDelayedContainerSynchingTimer;
- (void)viewLoaded;
- (void)initCommon;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

