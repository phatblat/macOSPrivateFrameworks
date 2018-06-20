//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <FinderKit/FI_TIconOrGalleryCollectionViewController.h>

#import "TDesktopInlinePreviewDataSource.h"
#import "TInfoExtractorDelegate.h"
#import "TUpdateLayoutControllerSuspenderProtocol.h"

@class NSColor, NSImage, NSString;

__attribute__((visibility("hidden")))
@interface FI_TIconCollectionViewController : FI_TIconOrGalleryCollectionViewController <TUpdateLayoutControllerSuspenderProtocol, TInfoExtractorDelegate, TDesktopInlinePreviewDataSource>
{
    double _gridSpacing;
    _Bool _isTitleOnBottom;
    _Bool _showItemInfo;
    _Bool _isKeepArranged;
    _Bool _isSnapToGrid;
    int _backgroundType;
    struct TNSRef<NSColor, void> _backgroundColor;
    struct TNSRef<NSImage, void> _backgroundImage;
    _Bool _isUpdateLayoutControllerSuspended;
    _Bool _isUpdateLayoutControllerDirty;
    struct TriStateBool _hasNewDocumentButton;
    struct TNSRef<FI_TIconView, void> _iconViewForDragImage;
    struct TNSRef<FI_TDesktopInlinePreviewController, void> _inlinePreviewController;
    _Bool _isUpdateInlinePreviewSuspended;
    struct shared_ptr<TInfoExtractorController> _infoController;
    struct TNSRef<NSEvent, void> _mouseDownEventForDrag;
    struct TFENode _nodeClickedOnMouseDown;
    _Bool _doubleClickOnMouseUp;
    _Bool _startEditingOnMouseUp;
    struct CGPoint _initialClickAt;
    struct TNotificationCenterObserver _iconSizeSliderWillChangeObserver;
    struct TNotificationCenterObserver _iconSizeSliderDidChangeObserver;
    struct TNotificationCenterObserver _gridSpacingSliderWillChangeObserver;
    struct TNotificationCenterObserver _gridSpacingSliderDidChangeObserver;
    struct TKeyValueObserver _selectionIndexPathsObserver;
    struct vector<TKeyValueBinder, std::__1::allocator<TKeyValueBinder>> _viewSettingsBinders;
    struct TNSRef<FI_TBrowserImmediateActionGestureRecognizerDelegate, void> _immediateActionGestureRecognizerDelegate;
    struct TNSRef<NSImmediateActionGestureRecognizer, void> _quickLookImmediateActionGestureRecognizer;
    struct TNSRef<NSImmediateActionGestureRecognizer, void> _renameImmediateActionGestureRecognizer;
    _Bool _immediateActionGestureRecognizerDidRecognize;
    _Bool _shouldSkipRename;
}

@property(nonatomic) _Bool isUpdateLayoutControllerDirty; // @synthesize isUpdateLayoutControllerDirty=_isUpdateLayoutControllerDirty;
@property(nonatomic) _Bool isUpdateLayoutControllerSuspended; // @synthesize isUpdateLayoutControllerSuspended=_isUpdateLayoutControllerSuspended;
@property(nonatomic) int backgroundType; // @synthesize backgroundType=_backgroundType;
@property(nonatomic) _Bool showItemInfo; // @synthesize showItemInfo=_showItemInfo;
@property(nonatomic, getter=isTitleOnBottom) _Bool titleOnBottom; // @synthesize titleOnBottom=_isTitleOnBottom;
@property(nonatomic, getter=isSnapToGrid) _Bool snapToGrid; // @synthesize snapToGrid=_isSnapToGrid;
@property(nonatomic, getter=isKeepArranged) _Bool keepArranged; // @synthesize keepArranged=_isKeepArranged;
@property(nonatomic) double gridSpacing; // @synthesize gridSpacing=_gridSpacing;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)updateICloudBadgeForIconView:(id)arg1 node:(const struct TFENode *)arg2;
- (void)_setUpImmediateActionGestureRecognizers;
- (void)updateInlinePreviewEnabledState;
- (void)inlinePreviewIsVisible:(_Bool)arg1 forItem:(id)arg2;
- (void)inlinePreviewWillLoadForItem:(id)arg1;
- (struct CGRect)inlinePreviewContentFrameForItem:(id)arg1 inHostingView:(id)arg2;
- (struct CGRect)inlinePreviewFrameForItem:(id)arg1 inHostingView:(id)arg2;
- (id)inlinePreviewPropertiesForItem:(id)arg1;
- (_Bool)inlinePreviewLayerIsInWindowServer;
- (id)quickLookSharedPreviewView;
- (void)concludeDragOperation:(id)arg1 dropTargetView:(id)arg2;
- (void)updateDraggingItemsForDrag:(id)arg1 dropTargetView:(id)arg2;
- (void)collectionView:(id)arg1 didDeselectItemsAtIndexPaths:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemsAtIndexPaths:(id)arg2;
- (void)collectionView:(id)arg1 didEndDisplayingItem:(id)arg2 forRepresentedObjectAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 willDisplayItem:(id)arg2 forRepresentedObjectAtIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 shouldChangeItemsAtIndexPaths:(id)arg2 toHighlightState:(long long)arg3;
- (id)collectionView:(id)arg1 shouldSelectItemsAtIndexPaths:(id)arg2;
- (BOOL)collectionView:(id)arg1 writeItemsAtIndexPaths:(id)arg2 toPasteboard:(id)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForHeaderInSection:(long long)arg3;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 child:(long long)arg2 ofRepresentedObject:(id)arg3;
- (long long)collectionView:(id)arg1 numberOfChildrenOfRepresentedObject:(id)arg2;
- (void)dataSourceItemsDidChange:(const unordered_map_f886f0c5 *)arg1;
- (long long)insertOrResortIndexOffset;
- (void)reusingDataSource;
- (void)performBatchUpdatesCompletionHandler:(const unordered_set_931aff12 *)arg1:(const unordered_map_f8b1458f *)arg2:(_Bool)arg3:(_Bool)arg4:(unsigned long long)arg5;
- (void)configureGroupNodes:(const unordered_set_931aff12 *)arg1 firstPopulation:(_Bool)arg2;
- (void)dataSourceChanged_insert:(const struct TFENode *)arg1:(const struct TBVDSChangedPayload *)arg2:(unordered_set_931aff12 *)arg3:(_Bool *)arg4;
- (void)dataSourceChanged:(const vector_ddb76938 *)arg1;
- (_Bool)handleMouseUp:(id)arg1;
- (_Bool)handleMouseDragged:(id)arg1;
- (_Bool)handleMouseDown:(id)arg1;
- (void)updateSpatialDataAfterGridSizeChange:(const struct CGSize *)arg1 oldFirstIconAnchorPoint:(const struct CGPoint *)arg2;
- (void)getFreeFormLayoutGridSize:(struct CGSize *)arg1 firstIconAnchorPoint:(struct CGPoint *)arg2;
- (void)setAllowsDraggingFilesIn:(_Bool)arg1;
- (_Bool)receiveDrop:(struct TDropOperation *)arg1 draggingInfo:(id)arg2;
- (_Bool)receivePrivateDrag:(id)arg1;
- (unsigned long long)validateDrop:(id)arg1 proposedIndexPath:(id *)arg2 dropOperation:(long long *)arg3 dropTargetNode:(const struct TFENode *)arg4 outDropTargetNodeAcceptsDrop:(_Bool *)arg5;
- (_Bool)determineSnapToGridStateForDrag;
- (id)makeCompleteDragImageForNode:(const struct TFENode *)arg1 outOffset:(struct CGSize *)arg2;
- (id)makeDragImageForNode:(const struct TFENode *)arg1 forTitle:(_Bool)arg2 outFrame:(struct CGRect *)arg3;
- (id)makeDragImageIconViewForNode:(const struct TFENode *)arg1;
- (id)dragFlockIconImageForNode:(const struct TFENode *)arg1 atIconSize:(double)arg2 inView:(id)arg3;
- (id)dragFlockLabelImageForNode:(const struct TFENode *)arg1 outFrame:(struct CGRect *)arg2 inView:(id)arg3;
- (struct TFENode)nextNodeInViewAfter:(const struct TFENodeVector *)arg1;
- (void)unbindViewSettings;
- (void)privateBindSettings;
- (void)viewOptionSliderDidChangeForNode:(const struct TFENode *)arg1;
- (void)viewOptionSliderWillChangeForNode:(const struct TFENode *)arg1;
@property(retain, nonatomic) NSImage *backgroundImage; // @dynamic backgroundImage;
@property(retain, nonatomic) NSColor *backgroundColor; // @dynamic backgroundColor;
- (void)updateIconsToBackgroundColor;
- (id)effectiveFontSmoothingBackgroundColor;
- (id)effectiveBackgroundColor;
- (void)updateDrawSelectionBordered;
- (_Bool)shouldDrawSelectionBordered;
- (_Bool)isSubtitleEnabled;
- (void)setShowIconPreview:(_Bool)arg1;
@property(nonatomic) int arrangeBy; // @dynamic arrangeBy;
- (void)setTextSize:(double)arg1;
- (void)setIconSize:(double)arg1;
- (void)setInitialConfigInProgress:(_Bool)arg1;
- (_Bool)collapseNewSections:(const unordered_set_931aff12 *)arg1 firstPopulation:(_Bool)arg2;
- (_Bool)collapse:(_Bool)arg1 section:(unsigned long long)arg2;
- (_Bool)sectionIsCollapsed:(unsigned long long)arg1;
- (_Bool)isGroupingByDate;
- (_Bool)isInFreeFormLayout;
- (id)iconCollectionViewKeepArrangedLayout;
- (void)invalidateLayout;
- (void)invalidateLayoutForIndexPaths:(id)arg1;
- (void)invalidateLayoutForNodes:(const struct TFENodeVector *)arg1;
- (void)updateLayoutController:(_Bool)arg1;
- (void)updateLayoutController;
- (void)invalidateKeyNodes:(const struct TFENodeVector *)arg1 forThumbnails:(_Bool)arg2;
- (void)unregisterContainerWithNodeKeyCache:(const struct TFENode *)arg1;
- (void)registerContainerWithNodeKeyCache:(const struct TFENode *)arg1;
- (pair_1ddb90c7)fetchItemInfoTextForNode:(const struct TFENode *)arg1;
- (void)invalidateInfoTextForKeyNodes:(const struct TFENodeVector *)arg1;
- (void)invalidateThumbnailForKeyNodes:(const struct TFENodeVector *)arg1;
- (void)menuWillOpen:(id)arg1;
- (void)menu:(id)arg1 prepareForLocation:(struct CGPoint)arg2 inView:(id)arg3;
- (void)cmdContextMenuSortByTags:(id)arg1;
- (_Bool)validateContextMenuSortByTags:(id)arg1;
- (void)cmdContextMenuSortByName:(id)arg1;
- (_Bool)validateContextMenuSortByName:(id)arg1;
- (void)cmdContextMenuSortByDate:(id)arg1;
- (_Bool)validateContextMenuSortByDate:(id)arg1;
- (struct CGRect)iconFrameForNode:(const struct TFENode *)arg1;
- (void)saveScrollPosition;
- (void)restoreBrowserViewState:(id)arg1;
- (id)browserViewState;
- (void)registerCollectionViewItemClassOrNib;
- (id)itemIdentifier;
- (void)reloadIconsInView;
- (struct TFENodeVector)nodesWithViews;
- (void)updateSubtitleForIconView:(id)arg1 node:(const struct TFENode *)arg2;
- (void)updateInlineProgressForIconView:(id)arg1 node:(const struct TFENode *)arg2;
- (void)configureIconView:(id)arg1 forNode:(const struct TFENode *)arg2;
- (void)configureCollectionViewItem:(id)arg1 forNode:(const struct TFENode *)arg2;
- (id)iconImageForNode:(const struct TFENode *)arg1;
- (id)iconCollectionView;
- (int)viewStyle;
- (id)nibName;
- (void)aboutToTearDown;
- (void)viewLoaded;
- (void)initCommon;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

