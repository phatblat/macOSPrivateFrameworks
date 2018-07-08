//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <FinderKit/FI_TBrowserViewController.h>

#import "NSCollectionViewDataSourcePrivate.h"
#import "NSCollectionViewDelegate.h"
#import "TCollectionViewDelegateProtocol.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface FI_TBaseCollectionViewController : FI_TBrowserViewController <NSCollectionViewDelegate, NSCollectionViewDataSourcePrivate, TCollectionViewDelegateProtocol>
{
    unsigned long long _pendingNodeToPropertiesToUpdateIndex;
    struct unordered_map<unsigned long, std::__1::unordered_map<TFENode, std::__1::unordered_set<unsigned int, std::__1::hash<unsigned int>, std::__1::equal_to<unsigned int>, std::__1::allocator<unsigned int>>, std::__1::hash<TFENode>, std::__1::equal_to<TFENode>, std::__1::allocator<std::__1::pair<const TFENode, std::__1::unordered_set<unsigned int, std::__1::hash<unsigned int>, std::__1::equal_to<unsigned int>, std::__1::allocator<unsigned int>>>>>, std::__1::hash<unsigned long>, std::__1::equal_to<unsigned long>, std::__1::allocator<std::__1::pair<const unsigned long, std::__1::unordered_map<TFENode, std::__1::unordered_set<unsigned int, std::__1::hash<unsigned int>, std::__1::equal_to<unsigned int>, std::__1::allocator<unsigned int>>, std::__1::hash<TFENode>, std::__1::equal_to<TFENode>, std::__1::allocator<std::__1::pair<const TFENode, std::__1::unordered_set<unsigned int, std::__1::hash<unsigned int>, std::__1::equal_to<unsigned int>, std::__1::allocator<unsigned int>>>>>>>> _pendingNodeToPropertiesToUpdateMaps;
    struct TNotificationCenterObserver _sizeChangedObserver;
    struct TKeyValueObserver _selectionIndexPathsObserver;
    struct TKeyValueObserver _windowFirstResponderObserver;
    _Bool _useActiveAppearance;
    _Bool _supportsPrefetching;
    _Bool _selectionChanged;
    int _selectionCoalescing;
}

@property(nonatomic) _Bool supportsPrefetching; // @synthesize supportsPrefetching=_supportsPrefetching;
@property(nonatomic) _Bool useActiveAppearance; // @synthesize useActiveAppearance=_useActiveAppearance;
- (id).cxx_construct;
- (void).cxx_destruct;
- (_Bool)receiveDrop:(struct TDropOperation *)arg1 draggingInfo:(id)arg2;
- (unsigned long long)validateDrop:(id)arg1 proposedIndexPath:(id *)arg2 dropOperation:(long long *)arg3 dropTargetNode:(const struct TFENode *)arg4 outDropTargetNodeAcceptsDrop:(_Bool *)arg5;
- (void)draggingSession:(id)arg1 endedAtPoint:(struct CGPoint)arg2 operation:(unsigned long long)arg3;
- (id)makeCompleteDragImageForNode:(const struct TFENode *)arg1 outOffset:(struct CGSize *)arg2;
- (id)makeDragImageForNode:(const struct TFENode *)arg1 forTitle:(_Bool)arg2 outFrame:(struct CGRect *)arg3;
- (id)dragFlockIconImageForNode:(const struct TFENode *)arg1 atIconSize:(double)arg2 inView:(id)arg3;
- (id)dragFlockLabelImageForNode:(const struct TFENode *)arg1 outFrame:(struct CGRect *)arg2 inView:(id)arg3;
- (id)makeDragImageIconViewForNode:(const struct TFENode *)arg1;
- (void)draggingEnded:(id)arg1 dropTargetView:(id)arg2;
- (void)draggingExited:(id)arg1 dropTargetView:(id)arg2;
- (void)concludeDragOperation:(id)arg1 dropTargetView:(id)arg2;
- (_Bool)performDragOperation:(id)arg1 dropTargetView:(id)arg2;
- (_Bool)prepareForDragOperation:(id)arg1 dropTargetView:(id)arg2;
- (void)updateDraggingItemsForDrag:(id)arg1 dropTargetView:(id)arg2;
- (unsigned long long)draggingUpdated:(id)arg1 dropTargetView:(id)arg2;
- (unsigned long long)draggingEntered:(id)arg1 dropTargetView:(id)arg2;
- (struct TFENode)thumbnailTargetNodeFromContainerNode:(const struct TFENode *)arg1;
- (struct TFENode)thumbnailTargetNode;
- (struct TFENode)thumbnailTargetNodeForNode:(const struct TFENode *)arg1;
- (void)collectionView:(id)arg1 didEndDisplayingItem:(id)arg2 forRepresentedObjectAtIndexPath:(id)arg3;
- (BOOL)collectionView:(id)arg1 acceptDrop:(id)arg2 indexPath:(id)arg3 dropOperation:(long long)arg4;
- (unsigned long long)collectionView:(id)arg1 validateDrop:(id)arg2 proposedIndexPath:(id *)arg3 dropOperation:(long long *)arg4;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (id)collectionView:(id)arg1 itemForRepresentedObjectAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)collectionView:(id)arg1 itemForRepresentedObject:(id)arg2 atIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 child:(long long)arg2 ofRepresentedObject:(id)arg3;
- (long long)collectionView:(id)arg1 numberOfChildrenOfRepresentedObject:(id)arg2;
- (_Bool)handleKeyDown:(id)arg1 currentKey:(unsigned short)arg2;
- (_Bool)handleMouseUp:(id)arg1;
- (_Bool)handleMouseDragged:(id)arg1;
- (_Bool)handleMouseDown:(id)arg1;
- (void)moveToBeginningOfDocument:(id)arg1;
- (void)moveToEndOfDocument:(id)arg1;
- (void)scrollToAdjustingForContentInsets:(struct CGPoint)arg1;
- (struct TFENode)firstNodeToSelectFromDirection:(int)arg1;
- (void)selectFirstIconFromDirection:(int)arg1;
- (void)prefetchIconsForNodes:(const struct TFENodeVector *)arg1;
- (long long)insertOrResortIndexOffset;
- (void)aboutToRemoveNodes:(const struct TFENodeVector *)arg1;
- (void)prefetchIconsForNewlyInsertedNodes:(const unordered_map_f8b1458f *)arg1;
- (void)selectionChanged;
- (void)endSelectionCoalescing:(id)arg1;
- (void)startSelectionCoalescing:(id)arg1;
- (_Bool)sectionsWillBeReloaded:(const vector_274a36ec *)arg1;
- (_Bool)shouldRevealSelection:(const vector_274a36ec *)arg1;
- (void)performBatchUpdatesCompletionHandler:(const unordered_set_931aff12 *)arg1:(_Bool)arg2:(const unordered_map_f8b1458f *)arg3:(_Bool)arg4:(_Bool)arg5:(unsigned long long)arg6;
- (void)dataSourceItemsDidChange:(const unordered_map_f886f0c5 *)arg1;
- (void)dataSourceChanged:(const vector_274a36ec *)arg1;
- (_Bool)sectionsWillBeReloaded:(const vector_274a36ec *)arg1;
- (void)dataSourceChanged_propChanged:(const struct TFENode *)arg1:(const struct TBVDSChangedPayload *)arg2:(unordered_set_931aff12 *)arg3:(unordered_map_f886f0c5 *)arg4;
- (void)dataSourceChanged_move:(const struct TFENode *)arg1:(const struct TBVDSChangedPayload *)arg2;
- (void)dataSourceChanged_insert:(const struct TFENode *)arg1:(const struct TBVDSChangedPayload *)arg2:(unordered_set_931aff12 *)arg3:(_Bool *)arg4;
- (void)dataSourceChanged_remove:(const struct TFENode *)arg1:(const struct TBVDSChangedPayload *)arg2:(unordered_set_931aff12 *)arg3:(unordered_map_f886f0c5 *)arg4:(_Bool *)arg5;
- (id)popoverAnchorViewForNode:(const struct TFENode *)arg1;
- (struct CGRect)frameForSection:(unsigned long long)arg1;
- (struct CGRect)frameForNode:(const struct TFENode *)arg1;
- (void)selectionIndexPathsChanged:(id)arg1;
- (void)revealNodes:(const struct TFENodeVector *)arg1 select:(_Bool)arg2;
- (void)deselectAllNodes;
- (void)selectAllNodes;
- (struct TFENode)nextNodeInViewAfter:(const struct TFENodeVector *)arg1;
- (_Bool)setSelectedNodeIfAllowed:(const struct TFENode *)arg1;
- (void)setSelectedNodes:(const struct TFENodeVector *)arg1 byExtendingSelection:(_Bool)arg2;
- (unsigned long long)getSelectedNodesFromView:(struct TFENodeVector *)arg1 upTo:(unsigned long long)arg2;
- (unsigned long long)selectedNodesCount;
- (void)browserViewDidMoveToWindow;
- (struct TFENode)nodeAtPoint:(const struct CGPoint *)arg1 includeTarget:(_Bool)arg2;
- (_Bool)nodeIsSelected:(const struct TFENode *)arg1;
- (void)getVisibleNodes:(struct TFENodeVector *)arg1;
- (unsigned long long)itemCount;
- (int)viewStyle;
- (id)iconImageForNode:(const struct TFENode *)arg1;
- (id)indexPathsForNodes:(const struct TFENodeVector *)arg1 upTo:(unsigned long long)arg2;
- (id)indexPathForNode:(const struct TFENode *)arg1;
- (struct TFENode)nodeAtEventPoint:(id)arg1;
- (struct TFENodeVector)nodesForIndexPaths:(id)arg1 upTo:(unsigned long long)arg2;
- (struct TFENode)nodeForSectionIndex:(unsigned long long)arg1;
- (struct TFENode)nodeForIndexPath:(id)arg1;
- (unsigned long long)indexForNode:(const struct TFENode *)arg1;
- (struct TFENode)nodeAtIndex:(unsigned long long)arg1;
- (_Bool)isLTRLocalization;
- (_Bool)isKeepArranged;
- (void)configureCollectionViewItem:(id)arg1 forNode:(const struct TFENode *)arg2;
- (void)registerCollectionViewItemClassOrNib;
- (id)itemIdentifier;
- (id)collectionView;
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

