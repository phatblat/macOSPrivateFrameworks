//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <GameCenterUI/GKLoadingViewController.h>

#import "NSPopoverDelegate.h"
#import "NSUICollectionViewDataSource.h"
#import "NSUICollectionViewDelegate.h"

@class GKCollectionDataSource, GKNoContentView, NSLayoutConstraint, NSMutableIndexSet, NSString, NSUICollectionView, NSView;

@interface GKDashboardCollectionViewController : GKLoadingViewController <NSPopoverDelegate, NSUICollectionViewDataSource, NSUICollectionViewDelegate>
{
    BOOL _autoWidthUsesTwoColumnsWhenSpace;
    NSUICollectionView *_collectionView;
    GKCollectionDataSource *_dataSource;
    NSMutableIndexSet *_sectionsToReload;
    GKNoContentView *_noContentView;
    NSLayoutConstraint *_keyboardConstraint;
    double _keyboardConstraintDefaultConstant;
    NSView *_keyboardAdjustedView;
    NSView *_collectionContainerView;
    struct NSEdgeInsets _contentInsetsBeforeKeyboard;
    struct NSEdgeInsets _scrollInsetsBeforeKeyboard;
}

@property(nonatomic) NSView *collectionContainerView; // @synthesize collectionContainerView=_collectionContainerView;
@property(nonatomic) NSView *keyboardAdjustedView; // @synthesize keyboardAdjustedView=_keyboardAdjustedView;
@property(nonatomic) double keyboardConstraintDefaultConstant; // @synthesize keyboardConstraintDefaultConstant=_keyboardConstraintDefaultConstant;
@property(nonatomic) NSLayoutConstraint *keyboardConstraint; // @synthesize keyboardConstraint=_keyboardConstraint;
@property(nonatomic) struct NSEdgeInsets scrollInsetsBeforeKeyboard; // @synthesize scrollInsetsBeforeKeyboard=_scrollInsetsBeforeKeyboard;
@property(nonatomic) struct NSEdgeInsets contentInsetsBeforeKeyboard; // @synthesize contentInsetsBeforeKeyboard=_contentInsetsBeforeKeyboard;
@property(retain, nonatomic) GKNoContentView *noContentView; // @synthesize noContentView=_noContentView;
@property(retain, nonatomic) NSMutableIndexSet *sectionsToReload; // @synthesize sectionsToReload=_sectionsToReload;
@property(nonatomic) BOOL autoWidthUsesTwoColumnsWhenSpace; // @synthesize autoWidthUsesTwoColumnsWhenSpace=_autoWidthUsesTwoColumnsWhenSpace;
@property(retain, nonatomic) GKCollectionDataSource *dataSource; // @synthesize dataSource=_dataSource;
@property(retain, nonatomic) NSUICollectionView *collectionView; // @synthesize collectionView=_collectionView;
- (void).cxx_destruct;
- (void)collectionView:(id)arg1 didFocusItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didUnfocusItemAtIndexPath:(id)arg2;
- (BOOL)collectionView:(id)arg1 canFocusItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 didDeselectItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (BOOL)collectionView:(id)arg1 shouldSelectItemAtIndexPath:(id)arg2;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForFooterInSection:(long long)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForHeaderInSection:(long long)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (void)windowDidEndSheet:(id)arg1;
- (void)popoverDidClose:(id)arg1;
- (void)clearSelectionForCollectionView:(id)arg1;
- (void)clearSelection;
- (void)setupNoContentView:(id)arg1 withError:(id)arg2;
- (void)hideNoContentPlaceholder;
- (void)showNoContentPlaceholderForError:(id)arg1;
- (void)dataUpdated:(BOOL)arg1 withError:(id)arg2;
- (BOOL)hasData;
- (void)loadData;
- (void)setNeedsRefresh;
- (void)didExitRefreshingState;
- (void)didEnterRefreshingState;
- (void)didEnterLoadingState;
@property(readonly, nonatomic) BOOL isLoading; // @dynamic isLoading;
- (void)setAutoWidthColumns:(long long)arg1;
- (void)contentSizeCategoryDidChangeNotification:(id)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)setupDataSource;
- (void)viewDidLoad;
- (void)createCollectionViewInsideView:(id)arg1;
- (void)loadView;
- (id)verticalCollectionViewLayout;
- (id)horizontalCollectionViewLayout;
- (void)setToHorizontalLayout:(BOOL)arg1;
- (void)dealloc;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
