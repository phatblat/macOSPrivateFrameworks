//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Safari/KeyLoopSplicingContainerView.h>

#import "ClippedItemsIndicatorDelegate.h"
#import "NSDraggingDestination.h"
#import "NSTextFieldDelegate.h"

@class ClippedItemsIndicator, InlineButtonRetitler, NSArray, NSMutableArray, NSString, SeparatorView, TopSitesButton, WebBookmark;

__attribute__((visibility("hidden")))
@interface FavoritesBarView : KeyLoopSplicingContainerView <ClippedItemsIndicatorDelegate, NSDraggingDestination, NSTextFieldDelegate>
{
    NSMutableArray *_buttons;
    ClippedItemsIndicator *_clipIndicator;
    BOOL _needsRefreshOnMoveToWindow;
    BOOL _preparedForFirstLayout;
    double _firstFavoriteLeadingEdge;
    double _buttonHeight;
    double _lastWidth;
    NSArray *_proxyIdentifiers;
    NSArray *_clippedMenuItems;
    unsigned long long _firstHiddenFavoriteIndex;
    BOOL _windowDidClose;
    BOOL _isLayingOutButtons;
    unsigned long long _dragSourceIndex;
    double _draggedItemWidth;
    WebBookmark *_draggedInBookmark;
    InlineButtonRetitler *_buttonRetitler;
    WebBookmark *_nextBookmarkToEdit;
    TopSitesButton *_startPageButton;
    SeparatorView *_topBorderView;
    unsigned long long _dropIndex;
}

@property(nonatomic) unsigned long long dropIndex; // @synthesize dropIndex=_dropIndex;
- (void).cxx_destruct;
- (id)accessibilityAttributeValue:(id)arg1;
- (id)accessibilityLabel;
- (void)_windowDidResignMain:(id)arg1;
- (void)_cleanUpButtonRetitler;
- (void)_cancelEditingButton;
- (void)_finishEditingButton;
- (void)_editButtonForBookmark:(id)arg1;
- (id)_undoController;
- (unsigned int)_leftSideNonRearrangeableButtonsCount;
- (void)_resetClippedItems;
- (void)_refreshButtonsSoon;
- (void)_ensureButtonIsInViewHierarchy:(id)arg1;
- (void)_slideButtonsIntoPlace;
- (double)_totalWidthOccupiedByButtons;
- (void)_layOutButtons;
- (void)layout;
- (void)_layoutSublayersOfLayer:(id)arg1;
- (void)_favoritesChanged:(id)arg1;
- (void)_bookmarkChanged:(id)arg1;
- (void)_deleteFavoritesWithURLsMatchingBookmarks:(id)arg1;
- (void)_createFolderInFavoritesBar:(id)arg1;
- (id)_buttonForBookmark:(id)arg1;
- (BOOL)_bookmarkWithURLString:(id)arg1 isInArray:(id)arg2;
- (void)_bookmarksReloaded:(id)arg1;
- (void)_moveBookmarkForFavoriteButton:(id)arg1 toDropIndex:(unsigned long long)arg2;
- (BOOL)_dragSourceIndexMatchesDropIndex:(unsigned long long)arg1;
- (unsigned long long)_dropIndexForProposedDropIndex:(unsigned long long)arg1;
- (id)_addButtonForBookmark:(id)arg1;
- (void)_createTab:(id)arg1;
- (void)_setUpStartPageButtonIfNeeded;
- (void)controlTextDidEndEditing:(id)arg1;
- (void)controlTextDidChange:(id)arg1;
- (BOOL)control:(id)arg1 textView:(id)arg2 doCommandBySelector:(SEL)arg3;
- (void)editFavoriteButton:(id)arg1;
- (BOOL)willHandleMouseDownEvent:(id)arg1;
- (void)windowWillClose;
- (void)confirmURLAndTitleForNewBookmark:(id)arg1 bookmarkAdditionBlock:(CDUnknownBlockType)arg2;
- (void)draggingEnded:(id)arg1;
- (unsigned long long)draggingUpdated:(id)arg1;
- (void)draggingExited:(id)arg1;
- (unsigned long long)draggingEntered:(id)arg1;
- (double)_widthOfDraggingInfo:(id)arg1;
- (unsigned long long)_updateDropTarget:(id)arg1;
- (void)_reorderedSlidingView:(id)arg1;
- (void)_refreshButtons;
- (double)paddingBetweenButtons;
- (double)maxButtonXWithoutClipIndicator;
- (double)_maxButtonXWithoutClipIndicator;
- (double)maxButtonXWithClipIndicator;
- (double)minSlidingViewX;
- (double)maxButtonX;
@property(readonly, nonatomic) double minButtonX;
- (double)_borderMarginWithoutClipIndicator;
- (BOOL)isShowingClipIndicator;
- (unsigned long long)lastNonSlidingButtonIndex;
- (unsigned long long)_dropIndexFromLocalPoint:(struct CGPoint)arg1;
- (unsigned long long)_dropIndexFromDraggingInfo:(id)arg1;
- (BOOL)reorderSlidingView:(id)arg1 fromMouseDownEvent:(id)arg2;
- (void)_moveSlidingViewToCurrentDropIndex:(id)arg1;
- (id)_lastDraggedOrUpEventFollowing:(id)arg1;
- (id)_lastDraggedEventFollowing:(id)arg1;
- (struct CGRect)_constrainProposedButtonFrame:(struct CGRect)arg1;
- (void)viewWillBeginDragging:(id)arg1;
- (double)buttonBottomOffset;
- (id)_createClipIndicatorView;
- (id)menuItemsForClippedItemsIndicator:(id)arg1;
- (BOOL)isOpaque;
- (void)drawRect:(struct CGRect)arg1;
- (id)menu;
- (id)menuForEvent:(id)arg1;
- (BOOL)performDragOperation:(id)arg1;
- (void)_startPageModeDidChange:(id)arg1;
- (void)viewDidMoveToWindow;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

