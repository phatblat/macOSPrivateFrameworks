//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <FinderKit/FI_TViewController.h>

#import "BrowserContainerDelegate.h"
#import "BrowserContainerSearching.h"
#import "BrowserContainerTargeting.h"
#import "FILocationPopUpDelegate.h"
#import "NSMenuDelegate.h"

@class FIContainerController, FIFinderView, FILocationPopUp, FI_TArrangeBySegmentedControl, FI_TBrowserContentViewController, NSArray, NSBox, NSSearchField, NSSegmentedControl, NSString, NSView;

__attribute__((visibility("hidden")))
@interface FIFinderViewGutsController : FI_TViewController <FILocationPopUpDelegate, NSMenuDelegate, BrowserContainerTargeting, BrowserContainerSearching, BrowserContainerDelegate>
{
    NSView *_topBar;
    NSBox *_horizontalLineAtTop;
    NSSearchField *_searchField;
    NSSegmentedControl *_backForward;
    NSSegmentedControl *_viewSwitcher;
    FI_TArrangeBySegmentedControl *_arrangeView;
    FILocationPopUp *_locationPopUp;
    struct TNSRef<FILocationPopUp *, void> _associatedLocationPopup;
    struct TNSRef<FITopBarTitlebarAccessoryViewController *, void> _topBarTitlebarAccessoryViewController;
    FI_TBrowserContentViewController *_contentViewController;
    FIContainerController *_activeContainer;
    struct TKeyValueBinder _activeContainerBinder;
    _Bool _showing;
    FIFinderView *_finderView;
    struct TNSRef<FI_NewFolderController *, void> _newFolderController;
    struct list<TNSRef<NSURL *, void>, std::__1::allocator<TNSRef<NSURL *, void>>> _pendingTargetURLQueue;
    struct TNSRef<NSURL *, void> _lastTargetedURL;
    _Bool _forcedReloadIsPending;
    struct TNSRef<NSArray *, void> _pendingSelectedURLs;
    struct TFENodeVector _targetPath;
    struct TFENodeVector _pendingSelectionToOpen;
    unsigned long long _mediaBrowserShownTypes;
    _Bool _pendingSelectFirstKeyView;
    _Bool _expanded;
    _Bool _isPopulationInProgress;
    struct TNSRef<FI_TArrangeByMenuController *, void> _arrangeByMenuController;
    NSString *_pendingViewStyle;
    NSString *_previousViewStyle;
    _Bool _treatsFilePackagesAsDirectories;
    _Bool _resolvesAliases;
    _Bool _canClickDisabledFiles;
    _Bool _allowsExpandingMultipleDirectories;
    _Bool _updatingTargetPath;
    _Bool _allowsMultipleSelection;
    _Bool _alreadySetIsSavePanel;
    _Bool _isSavePanel;
    _Bool _enableAppCentricFeatures;
    _Bool _showsNewDocumentButton;
    _Bool _binding;
    _Bool _inDelegateCallback;
    struct mutex _enableStatesCacheLock;
    long long _enableStatesGenerationCount;
    struct map<TFENode, TriStateBool, std::__1::less<TFENode>, std::__1::allocator<std::__1::pair<const TFENode, TriStateBool>>> _enableStatesCache;
    struct TNotificationCenterObserver _nodeDidResolveObserver;
    struct TNotificationCenterObserver _windowWillStartLiveResizeObserver;
    struct TNotificationCenterObserver _windowDidEndLiveResizeObserver;
    struct TNotificationCenterObserver _windowDidLiveResizeObserver;
    struct TNotificationCenterObserver _ubiquityIdentityChangedObserver;
    struct TNotificationCenterObserver _urlResolutionCompletedObserver;
    struct TKeyValueBinder _viewStyleSwitcherBinder;
    struct TKeyValueBinder _isPopulationInProgressBinder;
    struct TKeyValueBinder _arrangeByMenuBinder;
    struct TNSRef<FI_TContainerLayoutManager *, void> _containerLayoutManager;
}

+ (id)instanceMethodSignatureForSelector:(SEL)arg1;
+ (_Bool)shouldForwardSelectorToContainer:(SEL)arg1;
+ (id)keyPathsForValuesAffectingValueForKey:(id)arg1;
+ (struct TFENode)fallbackTargetNode;
+ (_Bool)windowIsSavePanel:(id)arg1;
+ (void)watchForApplicationTermination;
+ (void)finalizeCounted;
+ (void)initializeCounted;
@property(readonly, nonatomic) _Bool isPopulationInProgress; // @synthesize isPopulationInProgress=_isPopulationInProgress;
@property(readonly, nonatomic) _Bool showing; // @synthesize showing=_showing;
@property(readonly, nonatomic) _Bool expanded; // @synthesize expanded=_expanded;
@property(readonly, nonatomic) _Bool forcedReloadIsPending; // @synthesize forcedReloadIsPending=_forcedReloadIsPending;
@property(nonatomic) _Bool enableAppCentricFeatures; // @synthesize enableAppCentricFeatures=_enableAppCentricFeatures;
@property(nonatomic) _Bool isSavePanel; // @synthesize isSavePanel=_isSavePanel;
@property(nonatomic) _Bool allowsMultipleSelection; // @synthesize allowsMultipleSelection=_allowsMultipleSelection;
@property(retain, nonatomic) NSString *previousViewStyle; // @synthesize previousViewStyle=_previousViewStyle;
@property(retain, nonatomic) NSString *pendingViewStyle; // @synthesize pendingViewStyle=_pendingViewStyle;
@property(nonatomic) _Bool binding; // @synthesize binding=_binding;
@property(retain, nonatomic) FIContainerController *activeContainer; // @synthesize activeContainer=_activeContainer;
@property(nonatomic) FIFinderView *finderView; // @synthesize finderView=_finderView;
- (id).cxx_construct;
- (void).cxx_destruct;
- (id)browserViewContainerControllerForContainer:(id)arg1;
- (void)containerCloseContainer:(id)arg1;
- (void)containerConnectBackupDelegate:(id)arg1;
- (void)containerWindowDidChange:(id)arg1;
- (void)containerContentChanged:(id)arg1;
- (void)containerSelectionChanged:(id)arg1;
- (_Bool)containerInBrowseMode:(id)arg1;
- (id)containerWindowState:(id)arg1;
- (id)windowState;
- (void)searchWasChanged;
- (void)searchDidBeginWithScopes:(const vector_e0f53d80 *)arg1 selectedScopeIndex:(unsigned int)arg2;
- (void)toolbarUpdateForSplitterChange;
- (id)toolbarHistorySearchTemplate;
- (_Bool)toolbarMakeSearchFieldFirstResponder;
- (id)toolbarSearchField;
- (_Bool)toolbarSearchFieldIsVisible;
- (id)containerQuerySearchUTIs:(id)arg1;
- (void)containerForgetSpringState:(id)arg1;
- (void)container:(id)arg1 adjustProposedTargetPath:(struct TFENodeVector *)arg2;
- (void)containerHistoryDidChange:(id)arg1;
- (void)containerTargetDidChange:(id)arg1;
- (void)containerTargetWillChange:(id)arg1;
- (void)containerViewStyleChanged:(id)arg1;
- (_Bool)shouldShowBottombarForTarget:(const struct TFENode *)arg1;
- (_Bool)quickLookShouldShowOpenButtonForNode:(const struct TFENode *)arg1;
- (void)openQuickLookNode:(const struct TFENode *)arg1;
- (_Bool)shouldTypeSelectForEvent:(id)arg1 withCurrentSearchString:(id)arg2;
- (_Bool)allowsBrowsingPackages;
- (_Bool)canBrowseNode:(const struct TFENode *)arg1;
- (_Bool)shouldEnableTagsButton;
- (void)cmdEditTagsInOpenPanel:(id)arg1;
- (void)cacheTagsButton:(id)arg1;
- (id)viewSwitcher;
- (void)unbindViewSwitcher;
- (void)bindViewSwitcher;
- (_Bool)shouldEnableShareButton;
- (void)shareWithSharingService:(id)arg1;
- (void)cacheShareButton:(id)arg1;
- (void)associateWithLocationPopUp:(id)arg1;
- (void)setMediaBrowserShownTypes:(unsigned long long)arg1;
- (BOOL)previewPanel:(id)arg1 shouldShowOpenButtonForItem:(id)arg2;
- (id)seamlessOpener:(id)arg1 transitionImageForPreviewItem:(id)arg2 contentRect:(struct CGRect *)arg3;
- (struct CGRect)seamlessOpener:(id)arg1 sourceFrameOnScreenForPreviewItem:(id)arg2;
- (id)selectedSeamlessOpenerPreviewItems;
- (void)disableHistoryAndDoWork:(CDUnknownBlockType)arg1;
- (id)defaultDirectoryURL;
- (_Bool)showGotoWithInitialFilename:(id)arg1;
- (void)_delegateConfigureForGotoWithFilename:(id)arg1;
- (void)finderLocationPopUpWillDisplay:(id)arg1;
- (struct TString)extensionForPanel:(id)arg1;
- (void)cmdToggleFinderKitSidebar:(id)arg1;
- (_Bool)finderLocationPopUpSidebarIsShowing:(id)arg1;
- (_Bool)finderLocationPopUpWantsSidebarMenuItem:(id)arg1;
- (id)finderLocationPopUpRequestRecentPlaces:(id)arg1;
- (void)finderLocationPopUp:(id)arg1 didChangeToDirectoryURL:(id)arg2;
- (void)copySearchFieldFromOther:(id)arg1;
- (void)searchTextChanged:(id)arg1;
- (void)configureWindowForContentChange;
- (_Bool)inBrowseMode;
- (void)searchFieldCancel;
- (void)_windowDidResize;
- (void)_windowDidEndLiveResize:(id)arg1;
- (void)_windowWillStartLiveResize:(id)arg1;
- (void)saveQuery:(_Bool)arg1;
- (BOOL)performKeyEquivalent:(id)arg1;
- (_Bool)containerValidateToolbarItem:(id)arg1;
- (BOOL)validateMenuItem:(id)arg1;
- (BOOL)respondsToSelector:(SEL)arg1;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (void)selectFirstKeyView;
- (_Bool)sidebarContainsURL:(id)arg1;
- (void)refreshContents;
- (_Bool)isNewFolderDialogRunning;
- (_Bool)canSaveNewDocument;
- (_Bool)canCreateNewFolder;
- (_Bool)makeNewFolderForSavePanel:(id)arg1;
- (_Bool)hidesSharedSection;
- (void)setHidesSharedSection:(_Bool)arg1;
- (void)setAllowsExpandingMultipleDirectories:(_Bool)arg1;
- (_Bool)allowsExpandingMultipleDirectories;
- (void)clickedOnDisabledNode:(const struct TFENode *)arg1;
- (_Bool)canClickDimmedNodes;
- (void)setCanClickDisabledFiles:(_Bool)arg1;
- (_Bool)canClickDisabledFiles;
- (void)setResolvesAliases:(_Bool)arg1;
- (_Bool)resolvesAliases;
- (void)setTreatsFilePackagesAsDirectories:(_Bool)arg1;
- (_Bool)treatsFilePackagesAsDirectories;
- (void)setShowsHiddenFiles:(_Bool)arg1;
- (_Bool)showsHiddenFiles;
- (id)rootDirectoryURL;
- (id)directoryURL;
- (void)setRootDirectoryURL:(id)arg1;
- (void)setDirectoryURL:(id)arg1;
- (void)viewWillAppear;
- (void)reloadView;
- (void)urlResolutionCompleted:(id)arg1;
- (void)handleInitialTargeting:(id)arg1;
- (void)deferredRetargetAndReload;
- (void)deferredRetargetAndReloadForNode:(struct TFENode)arg1;
- (id)viewStyle;
- (void)_changeMediaBrowserTypeTo:(unsigned long long)arg1;
- (_Bool)arrangeByEnabled;
- (_Bool)viewSwitcherEnabled;
- (void)_notifyDelegateViewStyleChanged;
- (void)backForwardClicked:(id)arg1;
- (id)topBar;
- (_Bool)adjustTopBarViewSwitcherSegmentCount;
- (void)adjustTopBar;
- (void)adjustBackForwardSegments;
- (void)setTargetPath:(const struct TFENodeVector *)arg1 withViewStyle:(id)arg2;
- (void)historyBeginsNow;
- (void)_internalSetTargetPath:(const struct TFENodeVector *)arg1 withViewStyle:(id)arg2;
- (Class)browserContainerClass;
- (id)_convertViewStyle:(id)arg1 forTargetPath:(const struct TFENodeVector *)arg2;
- (void)setTargetNode:(const struct TFENode *)arg1 withViewStyle:(id)arg2;
- (struct TFENode)validateCloudTarget:(const struct TFENode *)arg1;
- (void)setTargetNode:(const struct TFENode *)arg1;
- (double)fauxToolbarHeightForAppCentric:(BOOL)arg1 runningAsAService:(BOOL)arg2;
- (void)setIsPopulationInProgress:(_Bool)arg1;
- (void)tellDelegatePopulationInProgress:(_Bool)arg1;
- (_Bool)canSelectNode:(const struct TFENode *)arg1;
- (_Bool)panelDisableEvictedNode:(const struct TFENode *)arg1 url:(id)arg2;
- (_Bool)panelDisableNode:(const struct TFENode *)arg1;
- (_Bool)requestEnableStateForNodes:(const struct TFENodeVector *)arg1;
- (_Bool)shouldRequestEnableStatesAsync;
- (_Bool)cachedEnableStateForNode:(const struct TFENode *)arg1 result:(_Bool *)arg2;
- (void)invalidateEnableStates;
- (_Bool)containerIsCompatibleWithSavePanel:(const struct TFENode *)arg1;
- (_Bool)urlIsDimmed:(id)arg1;
- (_Bool)nodeIsDimmed:(const struct TFENode *)arg1;
- (struct TFENode)_quickFollowAliasChainForNode:(const struct TFENode *)arg1;
- (void)openLocation:(const struct TFENode *)arg1 origin:(shared_ptr_524a2e6c)arg2;
- (struct TFENode)target;
- (void)didChangeSelection;
- (void)didChangeTarget;
- (void)openSelection;
- (void)openPendingSelectionIfPossible;
- (_Bool)_delegateHandleOpenSelection;
- (_Bool)_goIntoSelectedFolder;
- (_Bool)_goUpToParentFolder;
@property(copy, nonatomic) NSArray *selectedURLs; // @dynamic selectedURLs;
- (_Bool)_canSelectURL:(id)arg1 itemIsContainer:(_Bool)arg2 itemIsPackage:(_Bool)arg3;
- (_Bool)_canSelectURL:(id)arg1;
@property(readonly, nonatomic) NSArray *selectedRawURLs; // @dynamic selectedRawURLs;
- (void)ubiquityIdentityChanged;
- (_Bool)targetingICloud;
- (id)fileURLOrNil:(id)arg1;
- (const struct TFENodeVector *)targetPath;
- (struct TFENode)targetNode;
- (void)_didResolveNodeNotification:(id)arg1;
- (void)_replaceUnresolvedTarget:(const struct TFENode *)arg1 withTarget:(const struct TFENode *)arg2;
- (void)_searchFieldCancelButton:(id)arg1;
- (id)window;
- (void)dealloc;
- (void)aboutToDestroyBrowserView;
- (void)viewDidMoveToWindow;
- (void)setExpanded:(_Bool)arg1;
- (void)windowOrderedOut;
- (void)windowOrderedIn;
- (void)windowWillOrderOnScreen;
- (void)prepareToHide;
- (void)prepareToShow;
- (void)makeTargetPathValid;
@property(nonatomic) _Bool showsNewDocumentButton; // @dynamic showsNewDocumentButton;
- (_Bool)shouldShowAllMyFiles;
- (_Bool)sidebarInitiallyVisible;
- (id)activeLocationPopUp;
- (void)viewLoaded;
- (void)initCommon;
- (id)initWithView:(id)arg1;
- (id)nibName;
- (void)setInitialTargetWithOptions:(id)arg1;
- (struct TFENode)_initialTargetNode;
- (void)forceContainerToExist;
@property(readonly, nonatomic) _Bool downloadsUbiquitousContents;
- (long long)windowNumber;
- (id)activeBrowserViewController;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

