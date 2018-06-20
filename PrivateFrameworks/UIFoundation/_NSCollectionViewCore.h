//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSBox, NSCollectionView, NSCollectionViewData, NSCollectionViewLayout, NSCollectionViewLayoutAttributes, NSCollectionViewUpdate, NSIndexPath, NSMutableArray, NSMutableDictionary, NSMutableSet, NSString, NSTimer, NSView, _NSCollectionViewPrefetchingContext;

@interface _NSCollectionViewCore : NSObject
{
    NSCollectionViewLayout *_layout;
    id <NSCollectionViewCoreDelegate> _delegate;
    id <NSCollectionViewDataSource> _dataSource;
    NSBox *_backgroundColorFillView;
    NSView *_backgroundView;
    NSMutableSet *_indexPathsForSelectedItems;
    NSMutableDictionary *_cellReuseQueues;
    NSMutableDictionary *_supplementaryViewReuseQueues;
    NSMutableSet *_indexPathsForHighlightedItems;
    long long _reloadingSuspendedCount;
    long long _updateAnimationCount;
    NSView *_newContentView;
    long long _firstResponderViewType;
    NSString *_firstResponderViewKind;
    NSIndexPath *_firstResponderIndexPath;
    NSMutableDictionary *_visibleItemsDict;
    NSMutableDictionary *_visibleCellsDict;
    NSMutableDictionary *_visibleSupplementaryViewsDict;
    NSMutableDictionary *_visibleDecorationViewsDict;
    NSMutableDictionary *_clonedCellsDict;
    NSMutableDictionary *_clonedSupplementaryViewsDict;
    NSMutableDictionary *_clonedDecorationViewsDict;
    NSMutableDictionary *_templateLayoutCells;
    NSIndexPath *_pendingSelectionIndexPath;
    NSMutableSet *_pendingDeselectionIndexPaths;
    NSCollectionViewData *_collectionViewData;
    NSCollectionViewUpdate *_currentUpdate;
    struct CGRect _preparedContentRect;
    struct CGRect _visibleBounds;
    struct CGRect _preRotationBounds;
    struct CGPoint _rotationBoundsOffset;
    long long _rotationAnimationCount;
    long long _updateCount;
    NSMutableArray *_insertItems;
    NSMutableArray *_deleteItems;
    NSMutableArray *_reloadItems;
    NSMutableArray *_moveItems;
    NSArray *_originalInsertItems;
    NSArray *_originalDeleteItems;
    CDUnknownBlockType _updateCompletionHandler;
    CDUnknownBlockType _postUpdateBlock;
    NSMutableDictionary *_cellClassDict;
    NSMutableDictionary *_cellNibDict;
    NSMutableDictionary *_supplementaryViewClassDict;
    NSMutableDictionary *_supplementaryViewNibDict;
    NSMutableDictionary *_cellNibExternalObjectsTables;
    NSMutableDictionary *_supplementaryViewNibExternalObjectsTables;
    NSMutableSet *_supplementaryViewRegisteredKinds;
    NSCollectionViewLayoutAttributes *_transitionLayoutAttributes;
    BOOL _isInInteractiveTransition;
    BOOL _shouldAccumulateTrackedLayoutValues;
    NSMutableDictionary *_interactiveTransitionInfos;
    CDUnknownBlockType _interactiveCompletionHandler;
    double _currentInteractiveTransitionTimeStamp;
    double _previousInteractiveTransitionTimeStamp;
    double _startTimeStamp;
    struct CGPoint _currentCenterOffset;
    struct CGPoint _previousCenterOffset;
    double _currentInteractiveTransitionProgress;
    double _previousInteractiveTransitionProgress;
    NSCollectionViewLayout *_nextLayoutForInteractiveTranstion;
    NSMutableDictionary *_interactiveTransitionValueTrackingDict;
    NSMutableArray *_trackedValuesKeys;
    NSMutableSet *_invalidatedItemIndexPaths;
    NSMutableSet *_invalidatedItemIndexPathsToAnimate;
    NSMutableDictionary *_invalidatedSupplementaryIndexPaths;
    NSMutableDictionary *_invalidatedDecorationIndexPaths;
    CDUnknownBlockType _invalidationBlock;
    NSMutableArray *_reorderedItems;
    struct CGPoint _reorderingTargetPosition;
    NSTimer *_autoscrollTimer;
    NSMutableDictionary *_dataSourceToLayoutIndexPathMappingDict;
    long long _focusedViewType;
    struct {
        unsigned int delegateShouldHighlightItemAtIndexPath:1;
        unsigned int delegateDidHighlightItemAtIndexPath:1;
        unsigned int delegateDidUnhighlightItemAtIndexPath:1;
        unsigned int delegateShouldSelectItemAtIndexPath:1;
        unsigned int delegateShouldDeselectItemAtIndexPath:1;
        unsigned int delegateDidSelectItemAtIndexPath:1;
        unsigned int delegateDidDeselectItemAtIndexPath:1;
        unsigned int delegateSupportsMenus:1;
        unsigned int delegateWillDisplayCell:1;
        unsigned int delegateWillDisplaySupplementaryView:1;
        unsigned int delegateDidEndDisplayingCell:1;
        unsigned int delegateDidEndDisplayingSupplementaryView:1;
        unsigned int delegateIndexForReferenceItemDuringLayoutTransition:1;
        unsigned int delegateOverrideForTransitionOffsetSize:1;
        unsigned int delegateTargetContentOffsetForProposedContentOffsetSPI:1;
        unsigned int delegateTargetContentOffsetForProposedContentOffset:1;
        unsigned int delegateTargetIndexPathForMoveSPI:1;
        unsigned int delegateTargetIndexPathForMove:1;
        unsigned int delegateCanFocusItemAtIndexPath_deprecated:1;
        unsigned int delegateDidFocusItemAtIndexPath_deprecated:1;
        unsigned int delegateCanFocusItemAtIndexPath:1;
        unsigned int delegateDidFocusItemAtIndexPath:1;
        unsigned int delegateDidUnfocusItemAtIndexPath:1;
        unsigned int delegateShouldChangeFocusedItem:1;
        unsigned int delegateIndexPathForPreferredFocusedItem:1;
        unsigned int delegateShouldUpdateFocusFromRowAtIndexPathToView:1;
        unsigned int delegateIndexPathForPreferredFocusedView:1;
        unsigned int delegateShouldUpdateFocusInContext:1;
        unsigned int delegateDidUpdateFocusInContext:1;
        unsigned int delegateTemplateLayoutCell:1;
        unsigned int delegateWillLayoutCellUsingTemplateLayoutCell:1;
        unsigned int delegateWasNonNil:1;
        unsigned int dataSourceNumberOfSections:1;
        unsigned int dataSourceViewForSupplementaryElement:1;
        unsigned int dataSourceCanMoveItemAtIndexPathSPI:1;
        unsigned int dataSourceMoveItemAtIndexPathSPI:1;
        unsigned int dataSourceCanMoveItemAtIndexPath:1;
        unsigned int dataSourceMoveItemAtIndexPath:1;
        unsigned int dataSourceWasNonNil:1;
        unsigned int prefetchDataSourcePrefetchItemsAtIndexPaths:1;
        unsigned int prefetchDataSourceCancelPrefetchingForItemsAtIndexPaths:1;
        unsigned int prefetchDataSourceWasNonNil:1;
        unsigned int reloadSkippedDuringSuspension:1;
        unsigned int scheduledUpdateVisibleCells:1;
        unsigned int scheduledUpdateVisibleCellLayoutAttributes:1;
        unsigned int allowsSelection:1;
        unsigned int allowsMultipleSelection:1;
        unsigned int allowsSelectionDuringEditing:1;
        unsigned int allowsMultipleSelectionDuringEditing:1;
        unsigned int fadeCellsForBoundsChange:1;
        unsigned int updatingLayout:1;
        unsigned int needsReload:1;
        unsigned int reloading:1;
        unsigned int skipLayoutDuringSnapshotting:1;
        unsigned int layoutInvalidatedSinceLastCellUpdate:1;
        unsigned int doneFirstLayout:1;
        unsigned int loadingOffscreenViews:1;
        unsigned int updating:1;
        unsigned int updatingVisibleCells:1;
        unsigned int preRotationBoundsSet:1;
        unsigned int updateFocusAfterItemAnimations:1;
        unsigned int remembersLastFocusedIndexPath:1;
        unsigned int updateFocusAfterLoadingCells:1;
        unsigned int performingLayout:1;
        unsigned int keepsFirstResponderVisibleOnBoundsChange:1;
        unsigned int inCreateTemplateCell:1;
        unsigned int editing:1;
        unsigned int shouldDeriveVisibleBoundsFromContainingScrollView:1;
        unsigned int usingCustomLayoutMargins:1;
        unsigned int settingDefaultLayoutMargins:1;
        unsigned int shouldPrefetchCellsWhenPerformingReloadData:1;
        unsigned int scheduledReloadPrefetchDuringNextLayoutPass:1;
        unsigned int visMode:1;
        unsigned int invokingDelegateDidEndDisplayingItem:1;
        unsigned int invokingDelegateWillDisplayItem:1;
        unsigned int finishesBatchUpdateBeforeInvokingCompletionHandler:1;
        unsigned int tellCompletionHandlerAnimationsDidFinish:1;
    } _collectionViewFlags;
    struct CGPoint _lastLayoutOffset;
    _NSCollectionViewPrefetchingContext *_currentPrefetchingContext;
    NSMutableDictionary *_prefetchCacheItems;
    id <NSCollectionViewPrefetching> _prefetchDataSource;
    struct CGRect _bounds;
    struct NSEdgeInsets _contentInset;
    CDUnknownBlockType _navigationCompletion;
    NSIndexPath *_dropTargetIndexPath;
    long long _proposedDropOperation;
    struct CGSize _contentSize;
}

+ (id)_reuseKeyForSupplementaryViewOfKind:(id)arg1 withReuseIdentifier:(id)arg2;
@property struct NSEdgeInsets contentInset; // @synthesize contentInset=_contentInset;
@property(copy, nonatomic, getter=_navigationCompletion, setter=_setNavigationCompletion:) CDUnknownBlockType navigationCompletion; // @synthesize navigationCompletion=_navigationCompletion;
@property(retain, nonatomic) NSView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(nonatomic) __weak id <NSCollectionViewDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property(retain, nonatomic) NSCollectionViewLayout *collectionViewLayout; // @synthesize collectionViewLayout=_layout;
- (void).cxx_destruct;
@property(getter=_proposedDropOperation, setter=_setProposedDropOperation:) long long proposedDropOperation;
@property(retain, getter=_dropTargetIndexPath, setter=_setDropTargetIndexPath:) NSIndexPath *dropTargetIndexPath;
- (void)_stopAutoscrollTimer;
- (double)_trackedLayoutValueForKey:(id)arg1;
- (void)_trackLayoutValue:(double)arg1 forKey:(id)arg2;
- (struct CGPoint)_contentOffsetForNewFrame:(struct CGRect)arg1 oldFrame:(struct CGRect)arg2 newContentSize:(struct CGSize)arg3 andOldContentSize:(struct CGSize)arg4;
- (id)_indexPathsForHighlightedItems;
- (void)_invalidateLayoutWithContext:(id)arg1;
- (void)_invalidateWithBlock:(CDUnknownBlockType)arg1;
- (void)_performBatchUpdates:(CDUnknownBlockType)arg1 completion:(CDUnknownBlockType)arg2 invalidationContext:(id)arg3 tentativelyForReordering:(BOOL)arg4 animator:(id)arg5;
- (void)_performBatchUpdates:(CDUnknownBlockType)arg1 completion:(CDUnknownBlockType)arg2 invalidationContext:(id)arg3 tentativelyForReordering:(BOOL)arg4;
- (void)_performBatchUpdates:(CDUnknownBlockType)arg1 completion:(CDUnknownBlockType)arg2 invalidationContext:(id)arg3;
- (void)performBatchUpdates:(CDUnknownBlockType)arg1 withAnimator:(id)arg2;
- (void)performBatchUpdates:(CDUnknownBlockType)arg1 completion:(CDUnknownBlockType)arg2;
@property(getter=_finishesBatchUpdateBeforeInvokingCompletionHandler, setter=_setFinishesBatchUpdateBeforeInvokingCompletionHandler:) BOOL finishesBatchUpdateBeforeInvokingCompletionHandler;
- (void)_endUpdatesWithInvalidationContext:(id)arg1 tentativelyForReordering:(BOOL)arg2 animator:(id)arg3;
- (void)_beginUpdates;
- (void)_updateAnimationDidStop:(id)arg1 finished:(id)arg2 context:(id)arg3;
- (void)_updateWithItems:(id)arg1 tentativelyForReordering:(BOOL)arg2 animator:(id)arg3;
- (id)_viewAnimationsForCurrentUpdate;
- (void)_prepareLayoutForUpdates;
- (void)_prepareLayoutIfNeeded;
- (void)_endItemAnimationsWithInvalidationContext:(id)arg1 tentativelyForReordering:(BOOL)arg2 animator:(id)arg3;
- (void)_endItemAnimationsWithInvalidationContext:(id)arg1 tentativelyForReordering:(BOOL)arg2;
- (void)_endItemAnimationsWithInvalidationContext:(id)arg1;
- (void)_setupCellAnimations;
- (void)moveItemAtIndexPath:(id)arg1 toIndexPath:(id)arg2;
- (void)reloadItemsAtIndexPaths:(id)arg1;
- (void)deleteItemsAtIndexPaths:(id)arg1;
- (void)insertItemsAtIndexPaths:(id)arg1;
- (void)_updateRowsAtIndexPaths:(id)arg1 updateAction:(int)arg2;
- (void)moveSection:(long long)arg1 toSection:(long long)arg2;
- (void)reloadSections:(id)arg1;
- (void)deleteSections:(id)arg1;
- (void)insertSections:(id)arg1;
- (void)_updateSections:(id)arg1 updateAction:(int)arg2;
- (id)_arrayForUpdateAction:(int)arg1;
@property(readonly, nonatomic, getter=_currentUpdate) NSCollectionViewUpdate *currentUpdate;
- (void)_reuseSupplementaryView:(id)arg1;
- (void)_reuseAllViews;
- (void)_reuseAllSupplementaryOrDecorationViews:(id)arg1;
- (void)_reuseAllItems;
- (void)_reuseCell:(id)arg1 notifyDidEndDisplaying:(BOOL)arg2;
- (void)_reuseCell:(id)arg1;
- (BOOL)_isViewInReuseQueue:(id)arg1;
- (id)_createTemplateLayoutCellForCellsWithIdentifier:(id)arg1;
- (id)dequeueReusableSupplementaryViewOfKind:(id)arg1 withReuseIdentifier:(id)arg2 forIndexPath:(id)arg3;
- (id)dequeueReusableItemWithReuseIdentifier:(id)arg1 forIndexPath:(id)arg2;
- (id)_dequeueReusableViewOfKind:(id)arg1 withIdentifier:(id)arg2 forIndexPath:(id)arg3 viewCategory:(long long)arg4;
- (id)_reuseQueueForViewWithElementCategory:(long long)arg1 elementKind:(id)arg2 reuseIdentifier:(id)arg3;
- (id)_reuseDictionaryForCell:(BOOL)arg1;
- (void)_prepareViewForUse:(id)arg1 withElementCategory:(long long)arg2 elementKind:(id)arg3 reuseIdentifier:(id)arg4 indexPath:(id)arg5 applyDefaultAttributes:(BOOL)arg6;
- (void)_prepareViewForUse:(id)arg1 withElementCategory:(long long)arg2 elementKind:(id)arg3 reuseIdentifier:(id)arg4 indexPath:(id)arg5;
- (id)_registeredCellNibsByReuseIdentifier;
- (id)_registeredCellClassesByReuseIdentifier;
- (void)registerNib:(id)arg1 forSupplementaryViewOfKind:(id)arg2 withReuseIdentifier:(id)arg3;
- (void)registerNib:(id)arg1 forCellWithReuseIdentifier:(id)arg2;
- (void)registerClass:(Class)arg1 forSupplementaryViewOfKind:(id)arg2 withReuseIdentifier:(id)arg3;
- (void)registerClass:(Class)arg1 forCellWithReuseIdentifier:(id)arg2;
- (void)_registeredSupplementaryViewKind:(id)arg1;
- (void)scrollToItemAtIndexPath:(id)arg1 atScrollPosition:(unsigned long long)arg2 animated:(BOOL)arg3;
- (struct CGPoint)_contentOffsetForScrollingToItemAtIndexPath:(id)arg1 atScrollPosition:(unsigned long long)arg2;
- (id)_indexPathsForVisibleDecorationViewsOfKind:(id)arg1;
- (id)_indexPathsForVisibleSupplementaryViewsOfKind:(id)arg1;
- (id)_indexPathsForVisibleSupplementaryViewsOfKind:(id)arg1 isDecorationView:(BOOL)arg2;
- (id)_visibleDecorationViewsOfKind:(id)arg1;
- (id)_visibleSupplementaryViewsOfKind:(id)arg1;
- (id)_visibleSupplementaryViewsOfKind:(id)arg1 isDecorationView:(BOOL)arg2;
- (id)indexPathsForVisibleSupplementaryElementsOfKind:(id)arg1;
- (id)visibleSupplementaryViewsOfKind:(id)arg1;
- (id)supplementaryViewForElementKind:(id)arg1 atIndexPath:(id)arg2;
- (id)_visibleSupplementaryViews;
- (id)indexPathsForVisibleItems;
- (id)visibleItems;
- (id)_itemAtIndexPath:(id)arg1 includePrefetchedCells:(BOOL)arg2;
- (id)itemAtIndexPath:(id)arg1;
- (id)indexPathForItem:(id)arg1;
- (id)_visibleViewDictForElementCategory:(long long)arg1 elementKind:(id)arg2;
- (id)indexPathForItemAtPoint:(struct CGPoint)arg1;
- (id)layoutAttributesForSupplementaryElementOfKind:(id)arg1 atIndexPath:(id)arg2;
- (id)layoutAttributesForItemAtIndexPath:(id)arg1;
- (long long)numberOfItemsInSection:(long long)arg1;
@property(readonly, nonatomic) long long numberOfSections;
- (void)_setCollectionViewLayout:(id)arg1 animated:(BOOL)arg2 isInteractive:(BOOL)arg3 completion:(CDUnknownBlockType)arg4;
- (void)setCollectionViewLayout:(id)arg1 animated:(BOOL)arg2 completion:(CDUnknownBlockType)arg3;
- (void)setCollectionViewLayout:(id)arg1 animated:(BOOL)arg2;
- (BOOL)_visible;
- (void)_layoutItems;
- (void)setNeedsLayout;
- (void)layoutIfNeeded;
@property struct CGRect bounds;
- (id)_subviewAtIndex:(unsigned long long)arg1;
- (void)addSubview:(id)arg1;
@property __weak NSCollectionView *publicCollectionView;
- (void)_applyBlockToAllReusableViews:(CDUnknownBlockType)arg1;
- (void)_setVisibleView:(id)arg1 forLayoutAttributes:(id)arg2;
- (id)_visibleItemForIndexPath:(id)arg1;
- (void)_updateBackgroundView;
- (id)_doubleSidedAnimationsForView:(id)arg1 withStartingLayoutAttributes:(id)arg2 startingLayout:(id)arg3 endingLayoutAttributes:(id)arg4 endingLayout:(id)arg5 withAnimationSetup:(CDUnknownBlockType)arg6 animationCompletion:(CDUnknownBlockType)arg7 enableCustomAnimations:(BOOL)arg8 customAnimationsType:(unsigned long long)arg9;
- (void)prepareContentInRect:(struct CGRect)arg1;
- (unsigned long long)_updateVisibleCellsNow:(BOOL)arg1;
- (void)_sendDidEndDisplayingItem:(id)arg1 indexPath:(id)arg2;
- (void)_resetCurrentPrefetchContext;
- (id)_reorderPrefetchCandidates:(id)arg1 forPrefetchVelocity:(struct CGVector)arg2 visibleBounds:(struct CGRect)arg3;
- (void)_computePrefetchCandidatesForVisibleBounds:(struct CGRect)arg1 futureVisibleBounds:(struct CGRect)arg2 prefetchVector:(struct CGVector)arg3 notifyDelegateIfNeeded:(BOOL)arg4;
- (void)_computePrefetchCandidatesForRect:(struct CGRect)arg1;
- (void)_applyLayoutAttributes:(id)arg1 toView:(id)arg2;
- (void)setContentSize:(struct CGSize)arg1;
- (struct CGSize)contentSize;
- (void)setContentOffset:(struct CGPoint)arg1;
- (struct CGPoint)contentOffset;
- (id)_createPreparedSupplementaryViewForElementOfKind:(id)arg1 atIndexPath:(id)arg2 withLayoutAttributes:(id)arg3 applyAttributes:(BOOL)arg4;
- (id)_createPreparedCellForItemAtIndexPath:(id)arg1 withLayoutAttributes:(id)arg2 applyAttributes:(BOOL)arg3 isFocused:(BOOL)arg4 notify:(BOOL)arg5;
- (id)_createPreparedCellForItemAtIndexPath:(id)arg1 withLayoutAttributes:(id)arg2 applyAttributes:(BOOL)arg3;
- (void)_checkForPreferredAttributesInView:(id)arg1 originalAttributes:(id)arg2;
- (struct CGRect)_visibleBounds;
- (struct CGRect)visibleBounds;
- (void)_addControlledSubview:(id)arg1 atZIndex:(long long)arg2 forced:(BOOL)arg3;
- (void)_invalidateLayoutIfNecessaryForReload;
- (void)prefetchCompleteForItemAtIndexPath:(id)arg1;
- (void)reloadData;
- (void)_setNeedsVisibleCellsUpdate:(BOOL)arg1 withLayoutAttributes:(BOOL)arg2;
- (void)_resumeReloads;
- (void)_suspendReloads;
- (BOOL)_highlightItemAtIndexPath:(id)arg1 animated:(BOOL)arg2 scrollPosition:(unsigned long long)arg3;
- (BOOL)_highlightItemAtIndexPath:(id)arg1 animated:(BOOL)arg2 scrollPosition:(unsigned long long)arg3 notifyDelegate:(BOOL)arg4;
- (void)_unhighlightItemAtIndexPath:(id)arg1 animated:(BOOL)arg2 notifyDelegate:(BOOL)arg3;
- (void)_unhighlightItemAtIndexPath:(id)arg1 animated:(BOOL)arg2;
@property(nonatomic) BOOL allowsMultipleSelection;
@property(nonatomic) BOOL allowsSelection;
- (id)_deselectItemsAtIndexPaths:(id)arg1 animated:(BOOL)arg2 notifyDelegate:(BOOL)arg3;
- (id)_selectItemsAtIndexPaths:(id)arg1 animated:(BOOL)arg2 notifyDelegate:(BOOL)arg3;
- (id)_managedViews;
@property(readonly, nonatomic, getter=_visibleViews) NSArray *visibleViews;
@property(readonly, nonatomic, getter=_collectionViewData) NSCollectionViewData *collectionViewData;
@property(readonly, nonatomic) NSArray *indexPathsForSelectedItems;
- (BOOL)_dataSourceMatchesCurrentCounts;
- (BOOL)_dataSourceImplementsNumberOfSections;
- (void)_reloadDataIfNeeded;
@property(nonatomic) __weak id <NSCollectionViewPrefetching> prefetchDataSource;
@property(nonatomic) __weak id <NSCollectionViewCoreDelegate> delegate;
- (id)_visibleDecorationViewOfKind:(id)arg1 atIndexPath:(id)arg2;
- (id)_visibleSupplementaryViewOfKind:(id)arg1 atIndexPath:(id)arg2;
- (BOOL)_hasRegisteredClassOrNibForSupplementaryViewOfKind:(id)arg1;
- (id)_visibleSupplementaryViewOfKind:(id)arg1 atIndexPath:(id)arg2 isDecorationView:(BOOL)arg3;
- (id)description;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithCollectionViewLayout:(id)arg1;
- (id)_publicCollectionViewDebugDescription;
@property(getter=_debugModeEnabled, setter=_setDebugModeEnabled:) BOOL debugModeEnabled;
- (id)_visibleViewForLayoutAttributes:(id)arg1;
- (id)_visibleCellForIndexPath:(id)arg1;

@end

