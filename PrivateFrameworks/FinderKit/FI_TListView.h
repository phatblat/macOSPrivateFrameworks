//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSOutlineView.h"

@class FI_TListViewController;

__attribute__((visibility("hidden")))
@interface FI_TListView : NSOutlineView
{
    FI_TListViewController *_controller;
    unordered_map_f8b1458f _parentToChildrenInTableMap;
    _Bool _itemHitOnMouseDown;
    struct TNSRef<FI_TTableViewShrinkToFitController, void> _stfController;
    struct TNSRef<NSTrackingArea, void> _headerTrackingArea;
    struct TFENode _currentDropNode;
    long long _disabledTrackingRow;
    _Bool _shouldAutoResizeColumns;
    _Bool _visibleRectGreaterThanLastColumn;
    long long _lastVisibleColumnIndex;
    struct TNSRef<FI_TBrowserImmediateActionGestureRecognizerDelegate, void> _immediateActionGestureRecognizerDelegate;
    struct TNSRef<NSImmediateActionGestureRecognizer, void> _quickLookImmediateActionGestureRecognizer;
    struct TNSRef<NSImmediateActionGestureRecognizer, void> _renameImmediateActionGestureRecognizer;
    struct TNotificationCenterObserver _clipViewBoundsChangedObserver;
    long long _retainCount;
}

+ (BOOL)isCompatibleWithResponsiveScrolling;
@property(nonatomic) struct TFENode currentDropNode; // @synthesize currentDropNode=_currentDropNode;
@property(nonatomic) FI_TListViewController *controller; // @synthesize controller=_controller;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)_setUpImmediateActionGestureRecognizers;
- (void)prepareDraggingDestinationView:(id)arg1 forRowIndexes:(id)arg2 draggingStyle:(long long)arg3;
- (void)addDropFeedbackViews;
- (_Bool)_onlyAcceptRowDropOnContent;
- (_Bool)isDroppingOnTagNode;
- (_Bool)_shouldContinueExpandAtLevel:(long long)arg1 beganAtLevel:(long long)arg2;
- (BOOL)wantsPeriodicDraggingUpdates;
- (void)draggingEnded:(id)arg1;
- (void)draggingExited:(id)arg1;
- (BOOL)performDragOperation:(id)arg1;
- (unsigned long long)draggingEntered:(id)arg1;
- (void)updateDraggingItemsForDrag:(id)arg1;
- (BOOL)shouldCollapseAutoExpandedItemsForDeposited:(BOOL)arg1;
- (BOOL)canDragRowsWithIndexes:(id)arg1 atPoint:(struct CGPoint)arg2;
- (void)dragImage:(id)arg1 at:(struct CGPoint)arg2 offset:(struct CGSize)arg3 event:(id)arg4 pasteboard:(id)arg5 source:(id)arg6 slideBack:(BOOL)arg7;
- (id)dragImageForRowsWithIndexes:(id)arg1 tableColumns:(id)arg2 event:(id)arg3 offset:(struct CGPoint *)arg4;
- (void)_drawDropHighlightOutlineForRow:(long long)arg1;
- (id)viewController;
- (id)stfEditorController;
- (void)shrinkToFitTextViewAboutToClose;
- (void)shrinkToFitTextViewEditingComplete:(id)arg1;
- (_Bool)shrinkToFitTextViewAboutToOpen;
- (int)editingSelectionType;
- (void)updateSTFEditorLocation;
- (void)adjustForRowChangesDuringEditing;
- (void)scrollSTFEditorIntoView;
- (void)stopEditing:(_Bool)arg1;
- (_Bool)startEditingWithNode:(const struct TFENode *)arg1 renameOp:(id)arg2;
- (void)renameSelectedItem;
- (id)preparedCellAtColumn:(long long)arg1 row:(long long)arg2;
- (void)editColumn:(long long)arg1 row:(long long)arg2 withEvent:(id)arg3 select:(BOOL)arg4;
- (struct CGRect)frameOfOutlineCellAtRow:(long long)arg1;
- (struct CGRect)frameOfCellAtColumn:(long long)arg1 row:(long long)arg2;
- (void)selectRowIndexes:(id)arg1 byExtendingSelection:(BOOL)arg2;
- (void)selectAll:(id)arg1;
- (void)collapseItem:(id)arg1 collapseChildren:(BOOL)arg2;
- (void)expandItem:(id)arg1 expandChildren:(BOOL)arg2;
- (void)_outlineControlClicked:(id)arg1;
- (void)keyDown:(id)arg1;
- (id)inputContext;
- (_Bool)_canUseWhiteDisclosureTriangles;
- (_Bool)_wantsLiveResizeToUseCachedImage;
- (void)enumerateAvailableBaseCellViewsUsingBlock:(CDUnknownBlockType)arg1;
- (id)nameCellViewAtRow:(long long)arg1;
- (id)cellViewForColumnProperty:(int)arg1 row:(long long)arg2;
- (id)baseCellViewForColumnProperty:(int)arg1 row:(long long)arg2;
- (id)listRowViewAtRow:(long long)arg1 makeIfNecessary:(_Bool)arg2;
- (long long)columnIndexWithColumnProperty:(int)arg1;
- (id)listTableColumnWithColumnProperty:(int)arg1;
- (long long)childIndexForNode:(const struct TFENode *)arg1;
- (const struct TFENode *)nodeAtChildIndex:(unsigned long long)arg1 inParent:(const struct TFENode *)arg2;
- (void)moveNode:(const struct TFENode *)arg1 fromIndex:(long long)arg2 inParent:(const struct TFENode *)arg3 toIndex:(long long)arg4 inParent:(const struct TFENode *)arg5;
- (void)removeNodes:(const struct TFENodeVector *)arg1 atIndexes:(id)arg2 inParent:(const struct TFENode *)arg3 withAnimation:(unsigned long long)arg4;
- (void)insertNodes:(const struct TFENodeVector *)arg1 atIndexes:(id)arg2 inParent:(const struct TFENode *)arg3 withAnimation:(unsigned long long)arg4;
- (void)reloadItem:(id)arg1 reloadChildren:(BOOL)arg2;
- (void)reloadData;
- (void)viewDidEndLiveResize;
- (void)viewWillStartLiveResize;
- (void)_autoresizeToFit;
- (long long)lastVisibleColumnIndex;
- (void)cursorUpdate:(id)arg1;
- (id)menuForEvent:(id)arg1;
- (void)quickLookWithEvent:(id)arg1;
- (unsigned long long)_hitTestForEvent:(id)arg1 atColumn:(long long)arg2 row:(long long)arg3;
- (unsigned long long)hitTestForEvent:(id)arg1 row:(long long)arg2;
- (void)mouseDown:(id)arg1;
- (_Bool)_typeSelectInterpretKeyEvent:(id)arg1;
- (void)mouseDragged:(id)arg1;
- (_Bool)commonMouseDownAndEarlyReturn:(id)arg1 controller:(id)arg2;
- (void)_trackDisabledClickWithEvent:(id)arg1 controller:(id)arg2;
@property long long disabledTrackingRow; // @synthesize disabledTrackingRow=_disabledTrackingRow;
- (_Bool)handleUnicodeTextInput:(id)arg1 atTime:(double)arg2;
- (BOOL)acceptsFirstMouse:(id)arg1;
- (BOOL)acceptsFirstResponder;
- (BOOL)shouldDelayWindowOrderingForEvent:(id)arg1;
- (void)setDelegate:(id)arg1;
- (BOOL)_supportsTrackingAreasForCells;
- (void)viewDidChangeBackingProperties;
- (void)viewDidMoveToSuperview;
- (void)viewWillMoveToSuperview:(id)arg1;
- (void)viewDidMoveToWindow;
- (void)viewWillMoveToWindow:(id)arg1;
- (void)didRemoveRowView:(id)arg1 forRow:(long long)arg2;
- (void)didAddRowView:(id)arg1 forRow:(long long)arg2;
- (void)_sizeToFitForUserColumnResizeWithOriginalWidths:(id)arg1;
- (void)_setNeedsDisplayForColumn:(long long)arg1 draggedDelta:(double)arg2;
- (void)moveColumn:(long long)arg1 toColumn:(long long)arg2;
- (_Bool)isLTRLocalization;
- (void)dealloc;
- (_Bool)_canUseUpdatedIdentation;
- (BOOL)wantsUpdateLayer;
- (BOOL)_isDeallocating;
- (BOOL)_tryRetain;
- (unsigned long long)retainCount;
- (oneway void)release;
- (id)retain;
- (id)initWithCoder:(id)arg1;
- (id)init;
- (void)initCommon;

@end

