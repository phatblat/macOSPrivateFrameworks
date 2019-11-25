//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSViewController.h"

#import "AFQueueDelegate.h"
#import "NSCollectionViewDataSource.h"
#import "NSCollectionViewDelegate.h"
#import "NSScrollViewDelegate.h"
#import "SVSSuggestionsViewControllerDelegate.h"
#import "SVSTranscriptDataSource.h"
#import "SVSTranscriptDelegate.h"
#import "SVSTranscriptFlowLayoutDelegate.h"
#import "SiriUIAceObjectViewControllerDelegate.h"
#import "SiriUIAceObjectViewControllerDelegatePrivate.h"
#import "SiriUICardDelegate.h"
#import "SiriUIClumpViewDelegate.h"
#import "SiriUISnippetViewControllerDelegate.h"
#import "SiriUISnippetViewControllerDelegatePrivate.h"

@class NSClickGestureRecognizer, NSCollectionView, NSMutableDictionary, NSMutableSet, NSString, NSUUID, NSViewController<SiriUIViewController>, SVSSuggestionsViewController, SVSTranscript, SVSTranscriptAnimationQueue, SVSTranscriptFlowLayout, SVSTranscriptView, SiriUINavigationController, SiriUITranscriptClumpView, SiriUITranscriptItem;

@interface SVSTranscriptViewController : NSViewController <AFQueueDelegate, SiriUISnippetViewControllerDelegate, SiriUISnippetViewControllerDelegatePrivate, SiriUIAceObjectViewControllerDelegate, SiriUIAceObjectViewControllerDelegatePrivate, SVSSuggestionsViewControllerDelegate, SVSTranscriptDataSource, SVSTranscriptDelegate, NSScrollViewDelegate, NSCollectionViewDelegate, NSCollectionViewDataSource, SiriUIClumpViewDelegate, SiriUICardDelegate, SVSTranscriptFlowLayoutDelegate>
{
    BOOL _viewIsDisappearing;
    BOOL _isWaitingForSpeechStartPoint;
    double _previousContentYOffset;
    BOOL _viewIsInViewHierarchy;
    BOOL _didLoadConversationList;
    BOOL _showsTranscriptEndWhenVisible;
    BOOL _usingReducedMotion;
    BOOL _reachedMaximumContentHeight;
    SiriUINavigationController *_navigationController;
    id <SVSTranscriptViewControllerDataSource> _dataSource;
    id <SVSTranscriptViewControllerDelegate> _delegate;
    NSUUID *_svscvc_itemIdentifier;
    NSCollectionView *_collectionView;
    SVSTranscriptFlowLayout *_layout;
    SVSSuggestionsViewController *_suggestionsViewController;
    SVSTranscript *_transcript;
    SVSTranscriptAnimationQueue *_animationQueue;
    double _lastAnimationTime;
    NSMutableSet *_identifiersOfItemsWithPendingActions;
    NSViewController<SiriUIViewController> *_editingViewController;
    NSClickGestureRecognizer *_editingEndGestureRecognizer;
    double _gridHeight;
    double _lastTranscriptDragStartTime;
    double _lastTranscriptEditingStartTime;
    NSMutableDictionary *_displayTimeByTranscriptIdentifier;
    SiriUITranscriptItem *_anchor;
}

@property(nonatomic) BOOL reachedMaximumContentHeight; // @synthesize reachedMaximumContentHeight=_reachedMaximumContentHeight;
@property(nonatomic) BOOL usingReducedMotion; // @synthesize usingReducedMotion=_usingReducedMotion;
@property(retain, nonatomic) SiriUITranscriptItem *anchor; // @synthesize anchor=_anchor;
@property(readonly, nonatomic, getter=_displayTimeByTranscriptIdentifier) NSMutableDictionary *displayTimeByTranscriptIdentifier; // @synthesize displayTimeByTranscriptIdentifier=_displayTimeByTranscriptIdentifier;
@property(nonatomic, getter=_lastTranscriptEditingStartTime, setter=_setLastTranscriptEditingStartTime:) double lastTranscriptEditingStartTime; // @synthesize lastTranscriptEditingStartTime=_lastTranscriptEditingStartTime;
@property(nonatomic, getter=_lastTranscriptDragStartTime, setter=_setLastTranscriptDragStartTime:) double lastTranscriptDragStartTime; // @synthesize lastTranscriptDragStartTime=_lastTranscriptDragStartTime;
@property(readonly, nonatomic, getter=_gridHeight) double gridHeight; // @synthesize gridHeight=_gridHeight;
@property(nonatomic, getter=_showsTranscriptEndWhenVisible, setter=_setShowsTranscriptEndWhenVisible:) BOOL showsTranscriptEndWhenVisible; // @synthesize showsTranscriptEndWhenVisible=_showsTranscriptEndWhenVisible;
@property(retain, nonatomic, getter=_editingEndGestureRecognizer, setter=_setEditingEndGestureRecognizer:) NSClickGestureRecognizer *editingEndGestureRecognizer; // @synthesize editingEndGestureRecognizer=_editingEndGestureRecognizer;
@property(retain, nonatomic, getter=_editingViewController, setter=_setEditingViewController:) NSViewController<SiriUIViewController> *editingViewController; // @synthesize editingViewController=_editingViewController;
@property(readonly, nonatomic, getter=_identifiersOfItemsWithPendingActions) NSMutableSet *identifiersOfItemsWithPendingActions; // @synthesize identifiersOfItemsWithPendingActions=_identifiersOfItemsWithPendingActions;
@property(nonatomic, getter=_lastAnimationTime, setter=_setLastAnimationTime:) double lastAnimationTime; // @synthesize lastAnimationTime=_lastAnimationTime;
@property(readonly, nonatomic, getter=_animationQueue) SVSTranscriptAnimationQueue *animationQueue; // @synthesize animationQueue=_animationQueue;
@property(nonatomic, getter=_didLoadConversationList, setter=_setDidLoadConversationList:) BOOL didLoadConversationList; // @synthesize didLoadConversationList=_didLoadConversationList;
@property(readonly, nonatomic) SVSTranscript *transcript; // @synthesize transcript=_transcript;
@property(readonly, nonatomic, getter=_suggestionsViewController) SVSSuggestionsViewController *suggestionsViewController; // @synthesize suggestionsViewController=_suggestionsViewController;
@property(nonatomic, getter=_viewIsInViewHierarchy, setter=_setViewIsInViewHierarchy:) BOOL viewIsInViewHierarchy; // @synthesize viewIsInViewHierarchy=_viewIsInViewHierarchy;
@property __weak SVSTranscriptFlowLayout *layout; // @synthesize layout=_layout;
@property __weak NSCollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(copy, nonatomic) NSUUID *svscvc_itemIdentifier; // @synthesize svscvc_itemIdentifier=_svscvc_itemIdentifier;
@property(nonatomic) __weak id <SVSTranscriptViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak id <SVSTranscriptViewControllerDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property __weak SiriUINavigationController *navigationController; // @synthesize navigationController=_navigationController;
- (void).cxx_destruct;
- (id)_accessibilityWindowElementToFocus;
- (void)_accessibilitySetFocusOnWindowLevelElement;
- (void)_accessibilityFocusCard:(id)arg1;
- (void)_accessibilityQueueFocusOnCard:(id)arg1;
- (void)_logMetricsForSnippetAtIndexPath:(id)arg1;
- (void)_logMetricsForVisibleSnippets;
- (void)siriStoppedFingerprintingMusic;
- (void)siriBeganFingerprintingMusic;
- (void)_animateSnippetConfirmation:(id)arg1;
- (void)_animateSnippetCancellation:(id)arg1;
- (id)_fadeAnimationForCell;
- (id)_tossAnimationForCell;
- (void)_animateSnippetTossInCell:(id)arg1;
- (void)_performNextAnimation;
- (void)_processAnimationQueue;
- (void)_scheduleNextAnimationAfterDelay:(double)arg1;
- (double)_nextAnimationTime;
- (void)_performAnchorAnimation;
- (struct CGRect)_frameForItemAtIndex:(unsigned long long)arg1;
- (void)_teardownEditingViewController:(id)arg1;
- (void)_setupEditingForViewController:(id)arg1;
- (id)_indexPathForFirstResponder;
- (id)_indexPathForItemAtIndex:(long long)arg1;
- (id)_indexPathsForItemsAtIndexes:(id)arg1;
- (id)_transcriptItemForSiriViewController:(id)arg1;
- (id)_aceViewControllerIfExistsAtItemIndex:(long long)arg1;
- (id)_snippetViewControllerIfExistsAtItemIndex:(long long)arg1;
- (id)_snippetViewControllerIfExistsForTranscriptItem:(id)arg1;
- (id)_aceViewControllerIfExistsForTranscriptItem:(id)arg1;
- (id)_controllerForItemIndex:(long long)arg1;
- (Class)aceControllerCellClass;
- (Class)snippetControllerCellClass;
- (double)_expectedWidthForItemIndex:(unsigned long long)arg1;
- (BOOL)_itemIndexIsInset:(unsigned long long)arg1;
- (struct NSEdgeInsets)_edgeInsetsForItemIndex:(unsigned long long)arg1;
- (struct NSEdgeInsets)_transcriptItemLayoutMargins;
- (void)didChangeWindowHeight:(BOOL)arg1;
- (double)contentHeight;
- (void)_updateKeylinesForTranscriptClumpView;
- (void)_hideTopKeyline;
- (void)_processHidingSnippetView:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (id)collectionView:(id)arg1 pasteboardWriterForItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 draggingSession:(id)arg2 willBeginAtPoint:(struct CGPoint)arg3 forItemsAtIndexPaths:(id)arg4;
- (BOOL)collectionView:(id)arg1 canDragItemsAtIndexPaths:(id)arg2 withEvent:(id)arg3;
- (double)_heightForFooterAtItemIndex:(long long)arg1;
- (double)_heightForHeaderAtItemIndex:(long long)arg1;
- (double)_heightForSupplementaryHeaderAtIndex:(long long)arg1;
- (double)_heightForCardHeaderAtIndex:(long long)arg1;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 didEndDisplayingItem:(id)arg2 forRepresentedObjectAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 willDisplayItem:(id)arg2 forRepresentedObjectAtIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 itemForRepresentedObjectAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (BOOL)transcriptFlowLayout:(id)arg1 hideItemForInsertAtIndexPath:(id)arg2;
- (void)stashSnippetControllerCard:(id)arg1;
- (void)transcript:(id)arg1 performAceCommands:(id)arg2 conversationItemIdentifier:(id)arg3;
- (void)transcript:(id)arg1 presentationStateDidChangeForItemsAtIndexPaths:(id)arg2;
- (void)transcript:(id)arg1 didRemoveTranscriptItems:(id)arg2 atIndexes:(id)arg3;
- (void)transcript:(id)arg1 didReloadTranscriptItemsAtIndexes:(id)arg2;
- (void)transcript:(id)arg1 didReplaceTranscriptItemsAtIndexes:(id)arg2 replacedTranscriptItems:(id)arg3;
- (id)_invalidIndexesToRemoveBeforeIndex:(long long)arg1;
- (void)transcript:(id)arg1 didDiscardTranscriptItemsWithConversationItemIdentifiers:(id)arg2;
- (void)transcript:(id)arg1 didInsertTranscriptItemsAtIndexes:(id)arg2;
- (BOOL)_shouldPinTranscriptItem:(id)arg1;
- (BOOL)_shouldConditionallyPinToTranscriptItem:(id)arg1;
- (void)_removeConversationItemWithIdentifier:(id)arg1;
- (void)_removeConversationItemsWithIdentifiers:(id)arg1;
- (void)_updateTitle;
- (id)viewControllerDelegateForTranscript:(id)arg1;
- (long long)transcript:(id)arg1 presentationStateForItemAtIndex:(long long)arg2;
- (id)transcript:(id)arg1 aceObjectForItemAtIndex:(long long)arg2;
- (BOOL)transcript:(id)arg1 itemAtIndexIsVirgin:(long long)arg2;
- (id)transcript:(id)arg1 aceCommandIdentifierForItemAtIndex:(long long)arg2;
- (id)transcript:(id)arg1 dialogPhaseForItemAtIndex:(long long)arg2;
- (id)transcript:(id)arg1 identifierOfItemAtIndex:(long long)arg2;
- (id)_aceCommandIdentifierForItemAtIndex:(long long)arg1;
- (id)_dialogPhaseForItemAtIndex:(long long)arg1;
- (id)_conversationItemAtIndex:(long long)arg1;
- (long long)numberOfItemsInTranscript:(id)arg1;
- (void)minimumHeightDidChangeForSuggestionsViewController:(id)arg1;
- (double)statusViewHeightForSuggestionsViewController:(id)arg1;
- (void)suggestionsViewController:(id)arg1 didHideVibrantView:(id)arg2;
- (void)cancelSpeakingForSiriViewController:(id)arg1;
- (void)siriViewController:(id)arg1 speakText:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_speakText:(id)arg1 isPhonetic:(BOOL)arg2 completion:(CDUnknownBlockType)arg3;
- (void)siriSnippetViewController:(id)arg1 shouldPresentPicker:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)siriSnippetViewController:(id)arg1 willDismissViewController:(id)arg2;
- (void)siriSnippetViewController:(id)arg1 willPresentViewController:(id)arg2;
- (void)siriSnippetViewController:(id)arg1 setStatusViewHidden:(BOOL)arg2;
- (void)siriViewController:(id)arg1 didHideVibrantView:(id)arg2;
- (id)persistentStoreForSiriViewController:(id)arg1;
- (id)persistentDataStoreForSiriViewController:(id)arg1;
- (void)cancelRequestForSiriSnippetViewController:(id)arg1;
- (void)siriSnippetViewControllerViewDidLoad:(id)arg1;
- (void)siriSnippetViewControllerWillBecomeFirstResponder:(id)arg1;
- (double)siriSnippetViewControllerExpectedWidth:(id)arg1;
- (void)siriViewController:(id)arg1 setContentOffset:(double)arg2;
- (struct NSEdgeInsets)siriViewControllerTranscriptInsets:(id)arg1;
- (struct NSEdgeInsets)siriViewControllerDisplayInsetsForVisibleSpace:(id)arg1;
- (struct NSEdgeInsets)siriViewControllerBackgroundInsets:(id)arg1;
- (struct CGSize)siriViewControllerVisibleContentArea:(id)arg1;
- (double)siriViewControllerExpectedWidth:(id)arg1;
- (void)siriViewControllerHeightDidChange:(id)arg1 pinTopOfSnippet:(BOOL)arg2;
- (void)siriViewControllerHeightDidChange:(id)arg1;
- (void)siriSnippetViewController:(id)arg1 pushSirilandSnippets:(id)arg2;
- (void)removeSiriViewController:(id)arg1;
- (void)siriViewController:(id)arg1 startCorrectedSpeechRequestWithText:(id)arg2 correctionIdentifier:(id)arg3 userSelectionResults:(id)arg4;
- (void)siriViewControllerDidEndEditing:(id)arg1;
- (void)siriViewControllerWillBeginEditing:(id)arg1;
- (BOOL)siriViewControllerShouldPreventUserInteraction:(id)arg1;
- (void)siriViewController:(id)arg1 addSelectionResponse:(id)arg2;
- (id)siriViewController:(id)arg1 listItemToPickInAutodisambiguationForListItems:(id)arg2;
- (id)siriViewController:(id)arg1 disambiguationItemForListItem:(id)arg2 disambiguationKey:(id)arg3;
- (id)siriViewController:(id)arg1 filteredDisambiguationListItems:(id)arg2;
- (id)siriViewControllerEffectiveBundleForCoreLocation:(id)arg1;
- (BOOL)siriViewController:(id)arg1 openPunchOut:(id)arg2;
- (void)siriViewController:(id)arg1 setDomainObject:(id)arg2 forIdentifier:(id)arg3;
- (id)siriViewController:(id)arg1 domainObjectForIdentifier:(id)arg2;
- (id)_domainObjectStore;
- (void)siriViewController:(id)arg1 sendGenericAceCommands:(id)arg2;
- (void)siriViewController:(id)arg1 didOpenPunchout:(id)arg2;
- (void)siriViewControllerDidPunchout;
- (void)siriViewController:(id)arg1 openURL:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (BOOL)siriViewController:(id)arg1 openURL:(id)arg2;
- (void)siriViewController:(id)arg1 performAceCommands:(id)arg2;
- (id)requestContext;
- (void)siriDidDetectSpeechStartpoint;
- (void)endEditingAndCorrect:(BOOL)arg1;
- (void)preferredScrollerStyleDidChange:(id)arg1;
- (void)siriRequestWillStart;
- (void)siriDidFinishActionsForConversationItemWithIdentifier:(id)arg1;
- (void)presentationStateDidChangeForItemsAtIndexes:(id)arg1;
- (void)removeItemsWithIdentifiers:(id)arg1 atIndexes:(id)arg2;
- (void)reloadItemsAtIndexes:(id)arg1;
- (void)insertItemsAtIndexes:(id)arg1;
- (void)reloadData;
- (void)pinItemWithIdentifier:(id)arg1;
- (void)updateAnchorAndVoiceOverJump:(id)arg1;
- (void)showTranscriptEnd;
@property(readonly, nonatomic) BOOL transcriptEndIsVisible;
@property(readonly, nonatomic) BOOL transcriptStartIsVisible;
- (double)_anchorOffset;
- (double)_contentHeight;
@property(readonly, nonatomic) NSUUID *identifierOfLastDisplayedItem;
- (void)_showHelpIfNecessary;
- (void)_showListeningNudgeIfNecessary;
- (void)_updateViewTopMarginHeight;
- (id)_conversationItemList;
- (void)siriDidStopSpeakingWithIdentifier:(id)arg1 speechQueueIsEmpty:(BOOL)arg2;
- (void)siriDidStartSpeakingWithIdentifier:(id)arg1;
- (void)siriDidDeactivate;
- (void)siriDidTransitionFromState:(long long)arg1 event:(long long)arg2;
- (void)siriWillActivateFromSource:(long long)arg1;
- (void)queueContentHeightDidChange;
- (void)performContentHeightDidChange;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewWillDisappear;
- (void)viewWillAppear;
- (void)viewDidAppear;
- (void)_runSirilandTransitionTestWithIterations:(int)arg1;
- (BOOL)_isRootViewController;
- (double)_navigationControllerContentOffsetAdjustment;
- (void)_setNavigationControllerContentInsetAdjustment:(struct NSEdgeInsets)arg1;
- (void)_updateGridHeight;
- (double)_bottomBarInset;
@property(readonly, nonatomic) SiriUITranscriptClumpView *transcriptClumpView;
- (void)viewDidLayout;
- (void)viewDidLoad;
- (void)loadView;
- (void)dealloc;
- (void)invalidate;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (void)commonInit;

// Remaining properties
@property(setter=_setWantsPageAlignedHorizontalAxis:) BOOL _wantsPageAlignedHorizontalAxis;
@property(setter=_setWantsPageAlignedVerticalAxis:) BOOL _wantsPageAlignedVerticalAxis;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(retain, nonatomic) SVSTranscriptView *view; // @dynamic view;

@end

