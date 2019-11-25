//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSViewController.h"

#import "CollectionViewPlusDelegate.h"
#import "NSCollectionViewDataSource.h"
#import "SiriSuggestionsStartPageItemHostedViewControllerProtocol.h"
#import "SiriSuggestionsStartPageLinkRecommendationDelegate.h"

@class BookmarkAddressEditingPopoverViewController, CollectionViewPlus, NSMapTable, NSString, NSTextField, NSTimer, NSView, WBSPair, WBSSiteMetadataManager, WebBookmarkList;

__attribute__((visibility("hidden")))
@interface StartPageFavoritesViewController : NSViewController <NSCollectionViewDataSource, CollectionViewPlusDelegate, SiriSuggestionsStartPageLinkRecommendationDelegate, SiriSuggestionsStartPageItemHostedViewControllerProtocol>
{
    CollectionViewPlus *_collectionView;
    BookmarkAddressEditingPopoverViewController *_addressEditingController;
    WBSSiteMetadataManager *_siteMetadataManager;
    CDUnknownBlockType _combinedFavoritesControllerProvider;
    NSMapTable *_recommendationMetadataTokens;
    WebBookmarkList *_favorites;
    WebBookmarkList *_currentFolder;
    WBSPair *_sourceIndexPathAndFolderUUID;
    NSTimer *_hoverTimer;
    unsigned long long _numberOfTransitionAnimations;
    NSTextField *_emptyStateLabel;
    unsigned long long _numberOfClientsSuppressingFullReloads;
    unsigned long long _numberOfClientsWhoDoNotWantMasking;
    BOOL _usesCompactAppearance;
    BOOL _hasContentToDisplay;
    BOOL _usesPrivateBrowsing;
    NSView *_leadingAccessoryView;
}

+ (unsigned long long)dragOperationForProposedIndexPath:(id *)arg1 proposedDropOperation:(long long *)arg2 currentFolder:(id)arg3 sourceIndexPathAndFolderUUID:(id)arg4 isPerformingSameCollectionViewDrag:(BOOL)arg5 pasteboard:(id)arg6;
@property(nonatomic) BOOL usesPrivateBrowsing; // @synthesize usesPrivateBrowsing=_usesPrivateBrowsing;
@property(nonatomic) BOOL hasContentToDisplay; // @synthesize hasContentToDisplay=_hasContentToDisplay;
@property(retain, nonatomic) NSView *leadingAccessoryView; // @synthesize leadingAccessoryView=_leadingAccessoryView;
- (void).cxx_destruct;
- (void)_cancelPendingMetadataRequests;
- (id)_enqueuedSiteMetadataRequestForRecommendationItem:(id)arg1;
- (void)_suppressFullReloadsWhilePerformingBlock:(CDUnknownBlockType)arg1;
- (void)_cancelHoverTimer;
- (id)_sourceFolderUUIDForDrag;
- (id)_sourceIndexPathForDrag;
- (BOOL)_isInSameFolderAsSourceOfDragOperation;
- (id)_bookmarkFolderForUUID:(id)arg1;
- (id)_contextMenuForBookmark:(id)arg1;
- (void)_beginRenamingBookmark:(id)arg1;
- (void)_reloadCellForBookmark:(id)arg1 invalidatingIcon:(BOOL)arg2;
- (id)_bookmarksUndoController;
- (void)_beginEditingAddressOfBookmark:(id)arg1;
- (void)_removeBookmark:(id)arg1;
- (void)_replaceTabsWithContentsOfFolder:(id)arg1;
- (void)_openContentsOfFolderInNewTabs:(id)arg1;
- (struct TabPlacementHint)_tabPlacementHint;
- (void)_navigateToBookmark:(id)arg1;
@property(readonly, nonatomic) BOOL isPerformingSizingAnimation;
- (void)_updateControlsForFolderChange;
- (void)_openFolder:(id)arg1 withAnimation:(BOOL)arg2;
- (void)_openFolderHonoringKeyModifiers:(id)arg1 withAnimation:(BOOL)arg2;
- (void)_goBack:(id)arg1;
- (void)resetToRootFolder;
- (void)willReuseItem:(id)arg1;
- (void)didRenameTitleOfItem:(id)arg1;
- (void)didPerformContextMenuShowingEventForItem:(id)arg1 withEvent:(id)arg2;
- (void)didSelectItem:(id)arg1 withEvent:(id)arg2;
- (void)_hoverTimerFired:(id)arg1;
- (void)collectionViewPlus:(id)arg1 draggingSession:(id)arg2 movedToPoint:(struct CGPoint)arg3;
- (void)_updateCollectionViewMasksToBounds;
- (void)collectionView:(id)arg1 draggingSession:(id)arg2 endedAtPoint:(struct CGPoint)arg3 dragOperation:(unsigned long long)arg4;
- (void)collectionView:(id)arg1 draggingSession:(id)arg2 willBeginAtPoint:(struct CGPoint)arg3 forItemsAtIndexPaths:(id)arg4;
- (unsigned long long)collectionView:(id)arg1 validateDrop:(id)arg2 proposedIndexPath:(id *)arg3 dropOperation:(long long *)arg4;
- (BOOL)collectionView:(id)arg1 acceptDrop:(id)arg2 indexPath:(id)arg3 dropOperation:(long long)arg4;
- (id)collectionView:(id)arg1 pasteboardWriterForItemAtIndexPath:(id)arg2;
- (BOOL)collectionView:(id)arg1 canDragItemsAtIndexPaths:(id)arg2 withEvent:(id)arg3;
- (id)collectionView:(id)arg1 itemForRepresentedObjectAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (void)_reloadPostingSizeChangeNotifications:(BOOL)arg1;
- (void)reloadData;
@property(readonly, nonatomic) BOOL supportsCollapsing;
- (long long)_numberOfItemsThatFitInWidth:(double)arg1 withItemWidth:(double)arg2 interitemWidth:(double)arg3;
- (unsigned long long)_requiredNumberOfRowsGivenNumberOfItemsPerRow:(unsigned long long)arg1;
@property(readonly, nonatomic) double collapsedHeight;
@property(readonly, nonatomic) double expandedHeight;
- (unsigned long long)_requiredNumberOfItemsPerRow;
- (struct CGSize)_collectionViewItemSize;
- (void)_updateTitle;
- (void)_updateEmptyStateLabelVisibility;
- (void)_updateBackButton;
- (void)_reloadFromNotification;
- (void)_updateFavoritesWithNotification:(id)arg1;
- (void)_cleanUp;
- (void)dealloc;
- (void)viewWillDisappear;
- (void)viewDidAppear;
- (void)viewDidLoad;
- (void)loadView;
- (id)_collectionView;
- (id)initWithCombinedFavoritesControllerProvider:(CDUnknownBlockType)arg1 siteMetadataManager:(id)arg2 usesCompactAppearance:(BOOL)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSString *identifier;
@property(readonly) Class superclass;
@property(readonly, nonatomic) NSString *title;

@end

