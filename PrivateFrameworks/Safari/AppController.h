//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "DownloadAlertsManagerDelegate.h"
#import "DownloadsManagerDelegate.h"
#import "FormTextStatusWatcherDelegate.h"
#import "ManagedPlugInsControllerDelegate.h"
#import "NSApplicationDelegate.h"
#import "NSMenuDelegate.h"
#import "NSUserInterfaceValidations.h"

@class AuthenticationSessionController, AutoplayPreferenceManager, AutoplayQuirkWhitelistManager, BookmarksMenuController, BrowserSessionPersistentState, BrowserTabViewItem, BrowserViewControllerNavigationManager, ClosedTabOrWindowStateManager, ContentBlockersPreferenceManager, DownloadAlertsManager, DownloadsManager, ExternalJavaScriptEvaluationPolicyController, FaviconProvider, FormTextStatusWatcher, LaunchTimePerformanceMonitor, ManagedPlugInsController, ManagedPlugInsControllerHistoryListener, NSAlert, NSArray, NSMenu, NSMenuItem, NSMutableArray, NSMutableSet, NSObject<OS_dispatch_queue>, NSStatusItem, NSString, NSTimer, NSUserActivity, PopUpWindowPreferenceManager, ResourcePreferencesController, SFAuthorization, SafariAutomationController, SandboxFileExtensionController, SandboxRuntimeExtensionController, TabSnapshotSensitiveDataPurger, TemplateIconCache, WBSAutomaticReaderActivationManager, WBSCoalescedAsynchronousWriter, WBSCyclerConnectionManager, WBSFormAutoFillCorrectionsHistoryObserver, WBSOneTimeCodeMonitor, WBSPeriodicActivityScheduler, WBSQuickWebsiteSearchController, WBSSiteMetadataManager, WBSTabDialogManager, WKProcessPool, ZoomPreferenceManager;

__attribute__((visibility("hidden")))
@interface AppController : NSObject <ManagedPlugInsControllerDelegate, DownloadAlertsManagerDelegate, DownloadsManagerDelegate, NSApplicationDelegate, NSMenuDelegate, NSUserInterfaceValidations, FormTextStatusWatcherDelegate>
{
    NSMenuItem *_aboutSafariMenuItem;
    NSMenuItem *_openPreferencesMenuItem;
    NSMenuItem *viewMenuItem;
    NSMenuItem *windowMenuItem;
    NSMenuItem *selectNextTabMenuItem;
    NSMenuItem *selectPreviousTabMenuItem;
    NSMenuItem *goBackMenuItem;
    NSMenuItem *goForwardMenuItem;
    NSMenuItem *textEncodingMenuItem;
    NSMenuItem *shareMenuItem;
    NSMenuItem *closeTabMenuItem;
    NSMenuItem *closeOtherTabsMenuItem;
    NSMenuItem *closeWindowMenuItem;
    NSMenuItem *closeAllWindowsMenuItem;
    NSMenuItem *newTabMenuItem;
    NSMenuItem *openFileMenuItem;
    NSMenuItem *openLocationMenuItem;
    NSMenuItem *quitMenuItem;
    NSMenuItem *reloadMenuItem;
    NSMenuItem *reloadFromOriginMenuItem;
    NSMenuItem *reloadWithoutContentBlockersMenuItem;
    NSMenuItem *hideMenuItem;
    NSMenuItem *minimizeMenuItem;
    NSMenuItem *minimizeAllMenuItem;
    NSMenuItem *_visualTabPickerMenuItem;
    NSMenuItem *reopenRecentlyClosedTabsMenuItem;
    NSMenuItem *showTabBarMenuItem;
    SFAuthorization *parentalControlAuthorization;
    NSMenu *_dockMenu;
    NSMenuItem *_shiftedCloseMenuItem;
    NSMenuItem *_shiftedCloseAllMenuItem;
    BrowserSessionPersistentState *_lastSessionState;
    WBSCoalescedAsynchronousWriter *_saveSessionStateWriter;
    BOOL _closeKeyEquivalentClosesTab;
    BOOL _textEncodingMenuLoaded;
    BOOL _bookmarksMenuLoaded;
    BOOL _awaitingModalCloseAllConfirmation;
    BOOL _isTerminating;
    BOOL _lastSessionStateComputed;
    BOOL _hasFinishedLaunching;
    NSMutableArray *_deferredURLsToOpen;
    NSMutableArray *_deferredURLsAsHTML;
    int _bookmarksMenuItemIndex;
    struct unique_ptr<Safari::AutomaticTerminationDisabler, std::__1::default_delete<Safari::AutomaticTerminationDisabler>> _automaticTerminationDisabler;
    id _appSleepAssertion;
    struct unique_ptr<SafariShared::SuddenTerminationDisabler, std::__1::default_delete<SafariShared::SuddenTerminationDisabler>> _emptyCacheSuddenTerminationDisabler;
    unsigned long long _emptyCachePendingOperationsCount;
    BookmarksMenuController *_bookmarksMenuController;
    NSUserActivity *_continuityActivity;
    NSTimer *_updateContinuityTimer;
    BOOL _didFinishLaunching;
    BOOL _shouldPrepareBrowserContentViewControllerForNewUserActivityWhenFinishedLaunching;
    NSStatusItem *_mediaCaptureStatusItem;
    SafariAutomationController *_automationController;
    struct Context _processContext;
    struct PageGroup _contentPageGroup;
    struct MutableDictionary _initializationMessages;
    NSAlert *_unresponsiveWebProcessAlert;
    struct HashSet<Safari::WK::Page, Safari::WK::ObjectSubclassHash<Safari::WK::Page>, WTF::HashTraits<Safari::WK::Page>> _unresponsivePages;
    NSMutableSet *_pagesWaitingToCloseAtTermination;
    BOOL _tryCloseAtTerminationWasCanceled;
    BOOL _isProcessingWebProcessCrash;
    BOOL _isTerminatingAllPagesInUnresponsiveWebProcesses;
    FormTextStatusWatcher *_formTextStatusWatcherForCloseAllWindows;
    FormTextStatusWatcher *_formTextStatusWatcherForQuit;
    NSTimer *_collectWindowsAndTabsDataTimer;
    WBSTabDialogManager *_tabDialogManager;
    WBSSiteMetadataManager *_siteMetadataManager;
    FaviconProvider *_faviconProvider;
    TemplateIconCache *_templateIconCache;
    DownloadsManager *_downloadsManager;
    DownloadAlertsManager *_downloadAlertsManager;
    ManagedPlugInsControllerHistoryListener *_managedPlugInsHistoryListener;
    ManagedPlugInsController *_managedPlugInsController;
    WBSFormAutoFillCorrectionsHistoryObserver *_formAutoFillHistoryObserver;
    unsigned long long _mutableMediaState;
    NSTimer *_stalledTerminationDetectionTimer;
    WBSCyclerConnectionManager *_cyclerConnectionManager;
    NSObject<OS_dispatch_queue> *_siteMetadataManagerAccessSynchronizationQueue;
    NSObject<OS_dispatch_queue> *_tabSnapshotMachineryAccessQueue;
    id <TabSnapshotVending> _tabSnapshotVendor;
    TabSnapshotSensitiveDataPurger *_tabSnapshotSensitiveDataPurger;
    AuthenticationSessionController *_authenticationSessionController;
    WBSPeriodicActivityScheduler *_sandboxFileExtensionMaintenanceScheduler;
    BOOL _allPagesPlayingMutableMediaAreMuted;
    BrowserViewControllerNavigationManager *_navigationManager;
    AutoplayPreferenceManager *_autoplayPreferenceManager;
    AutoplayQuirkWhitelistManager *_autoplayQuirksWhitelistManager;
    SandboxFileExtensionController *_sandboxFileExtensionController;
    SandboxRuntimeExtensionController *_sandboxRuntimeExtensionController;
    WBSOneTimeCodeMonitor *_oneTimeCodeMonitor;
    ResourcePreferencesController *_resourcePreferencesController;
    NSString *_defaultUserAgent;
    LaunchTimePerformanceMonitor *_launchTimePerformanceMonitor;
    NSMenuItem *_bookmarksMenuItem;
    NSMenuItem *_newWindowMenuItem;
    ClosedTabOrWindowStateManager *_closedTabOrWindowStateManager;
    BrowserTabViewItem *_mostRecentlyMutedTab;
    ZoomPreferenceManager *_zoomPreferenceManager;
    ContentBlockersPreferenceManager *_contentBlockersPreferenceManager;
    WBSAutomaticReaderActivationManager *_automaticReaderActivationManager;
    PopUpWindowPreferenceManager *_popUpWindowPreferenceManager;
    ExternalJavaScriptEvaluationPolicyController *_externalJavaScriptEvaluationPolicyController;
    id <EncryptionProvider> _sessionStateEncryptionProvider;
    NSMenu *_fileMenu;
    NSMenu *_historyMenu;
    NSMenu *_helpMenu;
    NSMenuItem *_importBookmarksMenuItem;
    NSMenuItem *_showHistoryMenuItem;
    NSMenuItem *_muteCurrentTabToggleMenuItem;
    NSMenuItem *_muteOtherTabsToggleMenuItem;
}

+ (id)localizedPerSitePreferencesMenuItemTitle;
+ (BOOL)mailApplicationSupportsShareKit;
+ (BOOL)mailApplicationAtURL:(id)arg1 supportsKey:(id)arg2;
+ (id)mailApplicationURL;
+ (id)webWidgetIdentifier;
+ (id)appSleepAssertionWithReason:(id)arg1;
+ (id)sharedAppController;
@property(nonatomic) __weak NSMenuItem *muteOtherTabsToggleMenuItem; // @synthesize muteOtherTabsToggleMenuItem=_muteOtherTabsToggleMenuItem;
@property(nonatomic) __weak NSMenuItem *muteCurrentTabToggleMenuItem; // @synthesize muteCurrentTabToggleMenuItem=_muteCurrentTabToggleMenuItem;
@property(nonatomic) __weak NSMenuItem *showHistoryMenuItem; // @synthesize showHistoryMenuItem=_showHistoryMenuItem;
@property(nonatomic) __weak NSMenuItem *importBookmarksMenuItem; // @synthesize importBookmarksMenuItem=_importBookmarksMenuItem;
@property(nonatomic) __weak NSMenu *helpMenu; // @synthesize helpMenu=_helpMenu;
@property(nonatomic) __weak NSMenu *historyMenu; // @synthesize historyMenu=_historyMenu;
@property(nonatomic) __weak NSMenu *fileMenu; // @synthesize fileMenu=_fileMenu;
@property(readonly, nonatomic) id <EncryptionProvider> sessionStateEncryptionProvider; // @synthesize sessionStateEncryptionProvider=_sessionStateEncryptionProvider;
@property(readonly, nonatomic) ExternalJavaScriptEvaluationPolicyController *externalJavaScriptEvaluationPolicyController; // @synthesize externalJavaScriptEvaluationPolicyController=_externalJavaScriptEvaluationPolicyController;
@property(readonly, nonatomic) SafariAutomationController *automationController; // @synthesize automationController=_automationController;
@property(readonly, nonatomic) PopUpWindowPreferenceManager *popUpWindowPreferenceManager; // @synthesize popUpWindowPreferenceManager=_popUpWindowPreferenceManager;
@property(readonly, nonatomic) WBSAutomaticReaderActivationManager *automaticReaderActivationManager; // @synthesize automaticReaderActivationManager=_automaticReaderActivationManager;
@property(readonly, nonatomic) ContentBlockersPreferenceManager *contentBlockersPreferenceManager; // @synthesize contentBlockersPreferenceManager=_contentBlockersPreferenceManager;
@property(readonly, nonatomic) ZoomPreferenceManager *zoomPreferenceManager; // @synthesize zoomPreferenceManager=_zoomPreferenceManager;
@property(nonatomic) __weak BrowserTabViewItem *mostRecentlyMutedTab; // @synthesize mostRecentlyMutedTab=_mostRecentlyMutedTab;
@property(readonly, nonatomic) BOOL allPagesPlayingMutableMediaAreMuted; // @synthesize allPagesPlayingMutableMediaAreMuted=_allPagesPlayingMutableMediaAreMuted;
@property(readonly, nonatomic) ClosedTabOrWindowStateManager *closedTabOrWindowStateManager; // @synthesize closedTabOrWindowStateManager=_closedTabOrWindowStateManager;
@property(nonatomic) __weak NSMenuItem *newWindowMenuItem; // @synthesize newWindowMenuItem=_newWindowMenuItem;
@property(retain, nonatomic) NSMenuItem *bookmarksMenuItem; // @synthesize bookmarksMenuItem=_bookmarksMenuItem;
@property(readonly, nonatomic) LaunchTimePerformanceMonitor *launchTimePerformanceMonitor; // @synthesize launchTimePerformanceMonitor=_launchTimePerformanceMonitor;
@property(readonly, nonatomic) const struct PageGroup *contentPageGroup; // @synthesize contentPageGroup=_contentPageGroup;
@property(readonly, nonatomic) const struct Context *processContext; // @synthesize processContext=_processContext;
@property(readonly, nonatomic) NSString *defaultUserAgent; // @synthesize defaultUserAgent=_defaultUserAgent;
- (id).cxx_construct;
- (void).cxx_destruct;
@property(readonly, nonatomic) id <TabSnapshotSensitiveDataPurging> tabSnapshotSensitiveDataPurger;
- (id)_tabSnapshotSensitiveDataPurger;
@property(readonly, nonatomic) id <TabSnapshotVending> tabSnapshotVendor;
- (void)_ensureTabSnapshotVendor;
@property(readonly, nonatomic) AutoplayQuirkWhitelistManager *autoplayQuirksWhitelistManager; // @synthesize autoplayQuirksWhitelistManager=_autoplayQuirksWhitelistManager;
@property(readonly, nonatomic) AutoplayPreferenceManager *autoplayPreferenceManager; // @synthesize autoplayPreferenceManager=_autoplayPreferenceManager;
@property(readonly, nonatomic) TemplateIconCache *templateIconCache;
@property(readonly, nonatomic) FaviconProvider *faviconProvider;
@property(readonly, nonatomic) WBSSiteMetadataManager *siteMetadataManager;
@property(readonly, nonatomic) WBSQuickWebsiteSearchController *quickWebsiteSearchController;
@property(readonly, nonatomic) WBSTabDialogManager *tabDialogManager;
- (void)formTextStatusWasVerified:(id)arg1;
@property(readonly, nonatomic) BOOL isAnyWebProcessUnresponsive;
- (void)managedPlugInsController:(id)arg1 resetPlugInLoadPolicies:(id)arg2;
- (void)managedPlugInsController:(id)arg1 getInfoForInstalledPlugInsUsingBlock:(CDUnknownBlockType)arg2;
- (void)managedPlugInsControllerWillDetermineFlashAvailability:(id)arg1;
- (void)_setSupportedPlugIns;
@property(readonly, nonatomic) ManagedPlugInsController *managedPlugInsController;
- (void)downloadsManager:(id)arg1 willStartDownloadAtURL:(id)arg2 onPage:(const struct Page *)arg3;
- (void)downloadAlertsManagerWillAbortShowingTerminationAlert:(id)arg1;
- (void)downloadAlertsManager:(id)arg1 didShowTerminationAlertWithResult:(BOOL)arg2;
- (void)alertInsufficientDiskSpaceSheetForDownloadWithFilename:(id)arg1 atPath:(id)arg2;
- (void)alertInvalidDownloadFileErrorForPath:(id)arg1;
- (void)showDownloadAlert:(id)arg1;
- (id)_downloadAlertsManager;
@property(readonly, nonatomic) DownloadsManager *downloadsManager;
- (void)_abortModalBeforeTerminating;
- (void)_tryToTerminate;
- (void)_tryToCloseAllWindows;
- (void)tryToTerminateWhenReady;
- (void)tryToCloseAllWindowsWhenReady;
- (void)_didDisplayUnresponsiveWebProcessDialog;
- (void)_willDisplayUnresponsiveWebProcessDialog;
- (void)_handleUnresponsiveWebProcessDialogResponse:(long long)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)displayUnresponsiveWebProcessDialogForPage:(const struct Page *)arg1 withDialogTitle:(id)arg2 dialogMessage:(id)arg3 terminateButtonTitle:(id)arg4 cancelButtonTitle:(id)arg5 completionHandler:(CDUnknownBlockType)arg6;
- (void)_webProcessDidBecomeUnresponsiveForPage:(const struct Page *)arg1;
- (void)_resetUnresponsiveWebProcessState:(int)arg1;
- (BOOL)_areAnyUnresponsiveRelatedPagesInArrayDisplayingWebContent:(const struct Array *)arg1;
- (void)_terminateAndReloadUnresponsivePage:(const struct Page *)arg1;
- (void)_terminateUnresponsivePageForClosing:(const struct Page *)arg1;
- (void)_terminateAndClosePage:(const struct Page *)arg1 andAllRelatedPages:(const struct Array *)arg2 forWebProcessID:(int)arg3;
- (void)terminateAndReloadPage:(const struct Page *)arg1 andAllRelatedPages:(const struct Array *)arg2 forWebProcessID:(int)arg3;
- (unsigned long long)_tryCloseAllPagesToTerminate;
- (BOOL)browserViewControllerShouldIgnoreUnloadHandler:(id)arg1;
- (void)browserViewControllerDidIgnoreUnloadHandler:(id)arg1;
- (void)pageDidRefuseToUnloadForBrowserViewController:(id)arg1;
- (long long)handlePageCloseRequestForBrowserViewController:(id)arg1;
- (void)pageDidClose:(const struct Page *)arg1 withRelatedPages:(const struct Array *)arg2 webProcessID:(int)arg3;
- (void)terminateAllPagesInUnresponsiveWebProcesses;
- (void)processDidCrashForPage:(const struct Page *)arg1 reason:(long long)arg2;
@property(readonly, nonatomic) BOOL reloadsPagesWhenWebProcessExits;
- (void)pageDidBecomeResponsive:(const struct Page *)arg1;
- (void)pageDidBecomeUnresponsive:(const struct Page *)arg1;
- (BOOL)_terminateApplicationOrCloseWindowIfUnresponsivePageIsBeingClosed:(id)arg1;
- (void)_terminatePageInUnresponsiveWebProcessWithoutReloading:(const struct Page *)arg1;
- (BOOL)_shouldTerminatePageAndRelatedPagesIfUnresponsive:(const struct Page *)arg1;
- (BOOL)_shouldTerminatePageIfUnresponsive:(const struct Page *)arg1;
- (BOOL)isPageUnresponsive:(const struct Page *)arg1;
@property(readonly, nonatomic) BrowserViewControllerNavigationManager *navigationManager; // @synthesize navigationManager=_navigationManager;
- (void)_safeBrowsingControllerDatabasesDidUpdate:(id)arg1;
- (void)updateSafeBrowsingEnabled;
- (void)contentBlockerCrashReporterMessageChanged;
- (void)appExtensionCrashReporterMessageChanged;
- (void)appExtensionBaseURIMapChanged;
- (void)extensionsCrashReporterMessageChanged;
- (void)localFileRestrictionsChanged;
- (void)permissionToPromptForPushNotificationsChanged;
- (void)remoteNotificationPermissionsChanged;
- (void)sendDoNotTrackHTTPHeaderChanged;
- (void)userStyleSheetPreferencesUpdated;
- (void)updatePasswordAutoFillEnabled;
- (void)updatePerformanceTestingBindingsEnabled;
- (void)updateAddressBookAutoFillEnabled;
@property(readonly, nonatomic, getter=isDevelopMenuEnabled) BOOL developMenuEnabled;
@property(readonly, nonatomic, getter=isOverlayStatusBarEnabled) BOOL overlayStatusBarEnabled;
- (void)toggleStatusBar:(id)arg1;
- (BOOL)updateMuteOtherTabsMenuItemStateWithNumberOfOtherTabsPlayingMutableMedia:(unsigned long long)arg1 numberOfOtherUnmutedTabsPlayingMutableMedia:(unsigned long long)arg2 isCurrentTabPlayingMutableMedia:(BOOL)arg3;
- (BOOL)updateMuteCurrentTabMenuItemStateIsCurrentTabPlayingMutableMedia:(BOOL)arg1 isCurrentTabMuted:(BOOL)arg2 isShowingVisualTabPicker:(BOOL)arg3;
@property(readonly, copy, nonatomic) NSArray *browserViewControllersWithCaptureDevices;
@property(readonly, nonatomic) unsigned long long numberOfTabsCapturingMedia;
@property(readonly, copy, nonatomic) NSArray *browserViewControllersPlayingMutableMedia;
- (void)toggleMediaCaptureInBrowserViewController:(id)arg1;
- (id)browserViewControllerToToggleMute;
@property(readonly, nonatomic, getter=isAnyPageUsingMicrophone) BOOL anyPageUsingMicrophone;
@property(readonly, nonatomic, getter=isAnyPageUsingCamera) BOOL anyPageUsingCamera;
@property(readonly, nonatomic, getter=isAnyPageUsingMicrophoneOnly) BOOL anyPageUsingMicrophoneOnly;
@property(readonly, nonatomic, getter=isAnyPageUsingCameraOnly) BOOL anyPageUsingCameraOnly;
@property(readonly, nonatomic) BOOL doesAnyPageHaveMutedCaptureDevice;
@property(readonly, nonatomic) BOOL doesAnyPageHaveActiveCaptureDevice;
@property(readonly, nonatomic) BOOL doesAnyPageHaveCaptureDevice;
@property(readonly, nonatomic, getter=isAnyPagePlayingAudio) BOOL anyPagePlayingAudio;
- (void)_didSelectMediaCaptureTabFromMenuBar:(id)arg1;
- (id)_tabSwitchingMenuItemsForBrowserViewControllers:(id)arg1;
- (void)_updateMediaCaptureIconInMenuBar;
- (void)updateOverallAudioState;
- (void)muteAllPagesPlayingMutableMediaExcludingPageWithBrowserViewController:(id)arg1;
- (void)saveCloudTabsAndContinuityActivityForCurrentDeviceSoon;
- (void)_cancelPendingUpdateContinuityActivityTimer;
- (void)_updateContinuityActivityWithCloudTab:(id)arg1;
- (void)_updateContinuityActivityTimerFired;
- (BOOL)_eventIsOpenPreferencesKeyEquivalent:(id)arg1 ignoreModifierKeys:(BOOL)arg2;
- (BOOL)_eventIsReloadKeyEquivalent:(id)arg1 ignoreModifierKeys:(BOOL)arg2;
- (BOOL)_eventIsSelectPreviousTabKeyEquivalent:(id)arg1 ignoreModifierKeys:(BOOL)arg2;
- (BOOL)_eventIsMinimizeAllKeyEquivalent:(id)arg1 ignoreModifierKeys:(BOOL)arg2;
- (BOOL)_eventIsMinimizeKeyEquivalent:(id)arg1 ignoreModifierKeys:(BOOL)arg2;
- (BOOL)_eventIsHideKeyEquivalent:(id)arg1 ignoreModifierKeys:(BOOL)arg2;
- (BOOL)_eventIsQuitKeyEquivalent:(id)arg1 ignoreModifierKeys:(BOOL)arg2;
- (BOOL)_eventIsSelectNextTabKeyEquivalent:(id)arg1 ignoreModifierKeys:(BOOL)arg2;
- (BOOL)_eventIsOpenFileOrLocationKeyEquivalent:(id)arg1 ignoreModifierKeys:(BOOL)arg2;
- (BOOL)_eventIsNewTabOrWindowKeyEquivalent:(id)arg1 ignoreModifierKeys:(BOOL)arg2;
- (BOOL)_eventIsCloseTabOrWindowKeyEquivalent:(id)arg1 ignoreModifierKeys:(BOOL)arg2;
- (BOOL)_eventIsOldSelectNextPreviousTabKeyEquivalent:(id)arg1 direction:(char *)arg2 ignoreModifierKeys:(BOOL)arg3;
- (BOOL)_event:(id)arg1 isKeyEquivalentForMenuItem:(id)arg2 ignoreModifierKeys:(BOOL)arg3;
@property(readonly, nonatomic) ResourcePreferencesController *resourcePreferencesController; // @synthesize resourcePreferencesController=_resourcePreferencesController;
- (void)_waitForEmptyCache;
- (void)_updateImportBrowserDataMenuItems;
- (void)_updateTextEncodingMenu;
- (void)installBookmarksMenuIfNeeded;
@property(readonly, nonatomic, getter=isUsingPrivateBrowsingInAnyWindow) BOOL usingPrivateBrowsingInAnyWindow;
- (void)_updateCloseKeyEquivalents;
- (void)_showResourceFileWithName:(id)arg1 extension:(id)arg2;
- (void)_showHTMLResourceFile:(id)arg1;
- (void)_showBookmarksMenu;
- (void)_setKeyEquivalentForMenuItem:(id)arg1 toIncludeShiftKey:(BOOL)arg2;
- (void)_savePendingData:(id)arg1;
- (void)_performDelayedLaunchOperations;
- (BOOL)_OKToCloseBrowserWindowsForExplicitCloseAllCommand:(BOOL)arg1;
- (id)_firstTabWithVideoPlayingInPIP:(id)arg1;
- (id)_tabWithUnsavedCredentials;
- (void)_newPrivateWindowFromDock:(id)arg1;
- (void)_newWindowFromDock:(id)arg1;
- (id)_lastSessionState;
- (void)_updateExtensionBarMenuItems;
- (void)_initializeNSUserDefaults;
- (void)_initializeLaunchPerformanceMonitor;
- (void)_appExtensionBlacklistDidChange:(id)arg1;
- (void)contentBlockerDidChange;
- (void)_hideBookmarksMenu;
- (void)_handleAuthenticationSessionsAvailableEvent:(id)arg1 withReplyEvent:(id)arg2;
- (void)_handleURLEvent:(id)arg1 withReplyEvent:(id)arg2;
- (void)_handleRemovingWebsiteDataEvent:(id)arg1 withReplyEvent:(id)arg2;
- (void)_handleShowingReadingListItemEvent:(id)arg1 withReplyEvent:(id)arg2;
- (void)_handleClearHistoryEvent:(id)arg1 withReplyEvent:(id)arg2;
- (void)_handlePlistEvent:(id)arg1 withReplyEvent:(id)arg2;
- (void)_parentalControlsDidChange;
- (void)_computeLastSessionStateIfNecessary;
- (void)_cancelModalCloseAllConfirmation;
@property(nonatomic) BOOL capsPerTabWebProcess;
@property(nonatomic) BOOL usesPerTabWebProcess;
@property(readonly, nonatomic) BOOL lastSessionHasRestorableContent;
- (void)_openUntitledFileWhileLaunching:(BOOL)arg1;
- (BOOL)_restoreWebInspectorWindowAllowingDeminiaturizing:(BOOL)arg1;
- (BOOL)_shouldSuppressSessionRestoration;
- (BOOL)_restoreSessionDuringLaunchIfNeeded;
- (void)unsubscribeFromFeedsIfNecessary;
- (void)openHelpAnchor:(id)arg1;
- (BOOL)hasDeferredURLsToOpen;
- (id)environmentForSafariProcesses;
- (id)viewMenuItem;
- (id)windowMenuItem;
- (void)resetTextEncodingMenu;
- (id)localizedHelpBookName;
- (void)emptyWebKit1Cache:(unsigned long long)arg1;
- (void)emptyCache:(unsigned long long)arg1;
- (void)clearPageCaches;
- (void)emptyCacheOperationDidFinish;
- (void)emptyCacheOperationWillBeAddedToQueue;
- (BOOL)confirmClosingAllWindows;
- (BOOL)smoothScrollingIsEnabled;
- (BOOL)fullKeyboardAccessIsEnabled;
- (BOOL)dashboardIsAvailable;
- (BOOL)printingIsAvailable;
- (BOOL)eventIsOpenPreferencesKeyEquivalent:(id)arg1;
- (BOOL)eventIsReloadKeyEquivalent:(id)arg1;
- (BOOL)eventIsOpenFileOrLocationKeyEquivalent:(id)arg1;
- (BOOL)eventIsNewTabOrWindowKeyEquivalent:(id)arg1;
- (BOOL)eventIsMinimizeAllKeyEquivalent:(id)arg1;
- (BOOL)eventIsMinimizeKeyEquivalent:(id)arg1;
- (BOOL)eventIsHideKeyEquivalent:(id)arg1;
- (BOOL)eventIsQuitKeyEquivalent:(id)arg1;
- (BOOL)eventIsCloseTabOrWindowKeyEquivalent:(id)arg1;
- (BOOL)eventIsLegacySelectPreviousTabKeyEquivalent:(id)arg1;
- (BOOL)eventIsLegacySelectNextTabKeyEquivalent:(id)arg1;
- (BOOL)eventIsSelectPreviousTabKeyEquivalent:(id)arg1;
- (BOOL)eventIsSelectNextTabKeyEquivalent:(id)arg1;
- (void)updateCloseKeyEquivalents;
- (id)parentalControlsAuthorizationWithFlags:(unsigned int)arg1;
- (BOOL)authorizeParent;
- (id)parentalControlAuthorization;
- (void)_historyItemsWereRemoved:(id)arg1;
- (void)_historyWasCleared:(id)arg1;
- (void)_clearHistorySandboxTokensPassingTest:(CDUnknownBlockType)arg1;
- (void)_historyWasLoaded:(id)arg1;
- (void)_collectWindowsAndTabsDataTimerFired:(id)arg1;
- (void)sessionStateDidChange;
- (void)createPrivateBrowsingWindow:(id)arg1;
- (void)clearHistoryAndKeepWebsiteData:(id)arg1;
- (void)clearHistoryAndWebsiteData:(id)arg1;
- (void)toggleJavaScriptCanNotOpenWindows:(id)arg1;
- (void)showPreferences:(id)arg1;
- (void)showExtensionsGallery:(id)arg1;
- (void)showDownloads:(id)arg1;
- (void)showAcknowledgments:(id)arg1;
- (void)reopenLastClosedTabOrWindow:(id)arg1;
- (void)reopenLastSession:(id)arg1;
- (void)consolidateTabsAndWindows:(id)arg1;
- (void)_consolidateTabsAndWindowsNow;
- (void)importBookmarks:(id)arg1;
- (void)exportBookmarks:(id)arg1;
- (void)reloadWithPlugIns:(id)arg1;
- (void)reloadFromOrigin:(id)arg1;
- (void)reloadWithoutContentBlockers:(id)arg1;
- (void)reloadObeyingUnifiedField:(id)arg1;
- (void)stopLoading:(id)arg1;
- (void)addBookmarksForTabs:(id)arg1;
- (BOOL)validateUserInterfaceItem:(id)arg1;
- (BOOL)updateMenu:(id)arg1 withEvent:(id)arg2 withFlags:(unsigned long long)arg3;
- (BOOL)menuHasKeyEquivalent:(id)arg1 forEvent:(id)arg2 target:(id *)arg3 action:(SEL *)arg4;
- (id)applicationDockMenu:(id)arg1;
- (BOOL)applicationShouldHandleReopen:(id)arg1 hasVisibleWindows:(BOOL)arg2;
- (void)application:(id)arg1 runTest:(unsigned long long)arg2 duration:(double)arg3;
- (BOOL)application:(id)arg1 openFile:(id)arg2;
- (BOOL)hasFinishedLaunching;
- (BOOL)isTerminating;
- (void)applicationWillTerminate:(id)arg1;
- (void)_clearICloudTabsIfNecessaryDuringTermination;
- (void)_replyToApplicationShouldTerminate:(BOOL)arg1;
- (void)_continueDeferredTerminationDeterminationFromState:(int)arg1;
- (void)shouldTerminateAfterTryingToCloseAllPages:(BOOL)arg1;
- (void)shouldTerminateAfterTryingToSaveChangesToCloudHistory;
- (void)shouldTerminateAfterShowingDownloadsTerminationPrompt:(BOOL)arg1;
- (void)_stalledTerminationDetected:(id)arg1;
- (void)_invalidateStalledTerminationDetectionTimer;
- (void)_scheduleStalledTerminationDetectionTimer;
- (unsigned long long)_applicationShouldTerminateFromState:(int)arg1;
- (unsigned long long)applicationShouldTerminate:(id)arg1;
- (BOOL)systemRestoresWindowsWhenReopeningApps;
- (void)_openURL:(id)arg1 forcingHTMLMIMEType:(BOOL)arg2 preferSelectingExistingTabWithoutReloading:(BOOL)arg3;
- (BOOL)application:(id)arg1 continueUserActivity:(id)arg2 restorationHandler:(CDUnknownBlockType)arg3;
- (void)application:(id)arg1 didFailToContinueUserActivityWithType:(id)arg2 error:(id)arg3;
- (BOOL)application:(id)arg1 willContinueUserActivityWithType:(id)arg2;
- (id)_browserViewControllerForPendingUserActivity;
@property(readonly, nonatomic) WBSOneTimeCodeMonitor *oneTimeCodeMonitor; // @synthesize oneTimeCodeMonitor=_oneTimeCodeMonitor;
@property(readonly, nonatomic) SandboxFileExtensionController *sandboxFileExtensionController; // @synthesize sandboxFileExtensionController=_sandboxFileExtensionController;
@property(readonly, nonatomic) SandboxRuntimeExtensionController *sandboxRuntimeExtensionController; // @synthesize sandboxRuntimeExtensionController=_sandboxRuntimeExtensionController;
- (void)_prepareBrowserContentViewControllerForNewUserActivity;
- (void)_prepareBrowserContentViewControllerForNewUserActivityUsingPrivateBrowsingForNewWindow:(BOOL)arg1;
- (void)_connectToCyclerIfNecessary;
- (void)applicationDidFinishLaunching:(id)arg1;
- (BOOL)applicationOpenUntitledFile:(id)arg1;
- (BOOL)applicationShouldOpenUntitledFile:(id)arg1;
- (void)applicationDidResignActive:(id)arg1;
- (void)applicationDidBecomeActive:(id)arg1;
- (void)dealloc;
- (void)awakeFromNib;
- (BOOL)_ensureCookieDirectoryIsCreated;
- (void)setInjectedBundleInitializationMessagesData:(const struct Type *)arg1 forKey:(id)arg2;
@property(readonly, nonatomic) struct Dictionary initializationMessages;
@property(readonly, nonatomic) WKProcessPool *processPool;
- (struct Dictionary)_userStyleSheetPreferences;
- (void)_initializeProcessContext;
@property(readonly, nonatomic) const struct String *injectedBundlePath;
@property(readonly, nonatomic) NSString *bundleVersionString;
- (id)init;
- (void)validate_enableCloudKitBugNotifications:(id)arg1;
- (void)enableCloudKitBugNotifications:(id)arg1;
- (BOOL)validate_beginMigrationFromDAV;
- (void)beginMigrationFromDAV:(id)arg1;
- (BOOL)validate_openNewAutomationWindow:(id)arg1;
- (void)openNewAutomationWindow:(id)arg1;
- (BOOL)validate_toggleAutomationSession:(id)arg1;
- (void)toggleAutomationSession:(id)arg1;
- (void)resetAppExtensionsState:(id)arg1;
- (void)resetTopSites:(id)arg1;
- (void)recomputeTopSites:(id)arg1;
- (BOOL)validate_toggleHiddenPageTimerThrottlingIncreases:(id)arg1;
- (void)toggleHiddenPageTimerThrottlingIncreases:(id)arg1;
- (BOOL)validate_toggleHiddenPageTimerThrottling:(id)arg1;
- (void)toggleHiddenPageTimerThrottling:(id)arg1;
- (BOOL)validate_toggleAppNap:(id)arg1;
- (void)toggleAppNap:(id)arg1;
- (void)saveCloudTabsAsNewDevice:(id)arg1;
- (void)clearCloudTabsForAllDevices:(id)arg1;
- (BOOL)validate_takeWorldLeakCheckingPolicyFrom:(id)arg1;
- (void)takeWorldLeakCheckingPolicyFrom:(id)arg1;
- (BOOL)validate_toggleDiscolorFluidSwipeSnapshots:(id)arg1;
- (void)toggleDiscolorFluidSwipeSnapshots:(id)arg1;
- (BOOL)validate_toggleLocalFileContentSniffing:(id)arg1;
- (void)toggleLocalFileContentSniffing:(id)arg1;
- (BOOL)validate_toggleWebArchiveDebugMode:(id)arg1;
- (void)toggleWebArchiveDebugMode:(id)arg1;
- (BOOL)validate_toggleTiledFullScreenScalingMode:(id)arg1;
- (void)toggleTiledFullScreenScalingMode:(id)arg1;
- (BOOL)validate_toggleDiskCacheSpeculativeValidationDisabled:(id)arg1;
- (void)toggleDiskCacheSpeculativeValidationDisabled:(id)arg1;
- (BOOL)validate_toggleDOMTimersThrottlingDisabled:(id)arg1;
- (void)toggleDOMTimersThrottlingDisabled:(id)arg1;
- (BOOL)validate_toggleBackForwardCacheDisabled:(id)arg1;
- (void)toggleBackForwardCacheDisabled:(id)arg1;
- (BOOL)validate_toggleSuppressesIncrementalRendering:(id)arg1;
- (void)toggleSuppressesIncrementalRendering:(id)arg1;
- (BOOL)validate_toggleAcceleratedCompositingDebugBorders:(id)arg1;
- (void)toggleAcceleratedCompositingDebugBorders:(id)arg1;
- (BOOL)validate_toggleSubpixelAntialiasedLayerTextEnabled:(id)arg1;
- (void)toggleSubpixelAntialiasedLayerTextEnabled:(id)arg1;
- (BOOL)validate_toggleResourceUsageOverlay:(id)arg1;
- (void)toggleResourceUsageOverlay:(id)arg1;
- (BOOL)validate_toggleTiledScrollingIndicator:(id)arg1;
- (void)toggleTiledScrollingIndicator:(id)arg1;
- (BOOL)validate_toggleAcceleratedCompositingDisabled:(id)arg1;
- (void)toggleAcceleratedCompositingDisabled:(id)arg1;
- (BOOL)validate_toggleCanvasAcceleratedDrawingDisabled:(id)arg1;
- (void)toggleCanvasAcceleratedDrawingDisabled:(id)arg1;
- (BOOL)validate_toggleWebKitFullScreenDisabled:(id)arg1;
- (void)toggleWebKitFullScreenDisabled:(id)arg1;
- (BOOL)validate_toggleInlineRequiresPlaysInlineAttribute:(id)arg1;
- (void)toggleInlineRequiresPlaysInlineAttribute:(id)arg1;
- (BOOL)validate_toggleAllowInlineVideo:(id)arg1;
- (void)toggleAllowInlineVideo:(id)arg1;
- (BOOL)validate_toggleAllowMainContentAutoplay:(id)arg1;
- (void)toggleAllowMainContentAutoplay:(id)arg1;
- (BOOL)validate_toggleAudioNeedsUserAction:(id)arg1;
- (void)toggleAudioNeedsUserAction:(id)arg1;
- (BOOL)validate_toggleVideoNeedsUserAction:(id)arg1;
- (void)toggleVideoNeedsUserAction:(id)arg1;
- (BOOL)validate_toggleNetworkInterfacesEnumeration:(id)arg1;
- (void)toggleNetworkInterfacesEnumeration:(id)arg1;
- (BOOL)validate_toggleShouldCaptureAudioInUIProcess:(id)arg1;
- (void)toggleShouldCaptureAudioInUIProcess:(id)arg1;
- (BOOL)validate_toggleMediaSourceEnabled:(id)arg1;
- (void)toggleMediaSourceEnabled:(id)arg1;
- (BOOL)validate_toggleLegacyEncryptedMediaAPIEnabled:(id)arg1;
- (void)toggleLegacyEncryptedMediaAPIEnabled:(id)arg1;
- (BOOL)validate_toggleAVFoundationDisabled:(id)arg1;
- (void)toggleAVFoundationDisabled:(id)arg1;
- (BOOL)validate_toggleSimpleLineLayoutDebugBorders:(id)arg1;
- (void)toggleSimpleLineLayoutDebugBorders:(id)arg1;
- (BOOL)validate_toggleSimpleLineLayoutDisabled:(id)arg1;
- (void)toggleSimpleLineLayoutDisabled:(id)arg1;
- (BOOL)validate_toggleAcceleratedDrawingDisabled:(id)arg1;
- (void)toggleAcceleratedDrawingDisabled:(id)arg1;
- (BOOL)validate_toggleJavaScriptGarbageCollectorTimerEnabled:(id)arg1;
- (void)toggleJavaScriptGarbageCollectorTimerEnabled:(id)arg1;
- (BOOL)validate_toggleJavaScriptConfigurationEnabled:(id)arg1;
- (void)toggleJavaScriptConfigurationEnabled:(id)arg1;
- (BOOL)validate_toggleTelephoneNumberDetection:(id)arg1;
- (void)toggleTelephoneNumberDetection:(id)arg1;
- (BOOL)validate_toggleBackgroundTabSuspensionDisabled:(id)arg1;
- (void)toggleBackgroundTabSuspensionDisabled:(id)arg1;
- (BOOL)validate_togglePluginInitializationDelay:(id)arg1;
- (void)togglePluginInitializationDelay:(id)arg1;
- (BOOL)validate_toggleAsynchronousPluginInitializationDisabled:(id)arg1;
- (void)toggleAsynchronousPluginInitializationDisabled:(id)arg1;
- (void)syncCloudHistory:(id)arg1;
- (BOOL)validate_syncCloudHistory:(id)arg1;
- (BOOL)validate_togglePasswordGenerationBlacklist:(id)arg1;
- (void)togglePasswordGenerationBlacklist:(id)arg1;
- (void)toggleCSSAnimationTriggers:(id)arg1;
- (BOOL)validate_toggleCSSAnimationTriggers:(id)arg1;
- (BOOL)validate_toggleKeepAndReuseSwappedProcesses:(id)arg1;
- (void)toggleKeepAndReuseSwappedProcesses:(id)arg1;
- (BOOL)validate_toggleProcessSwapsOnNavigation:(id)arg1;
- (void)toggleProcessSwapsOnNavigation:(id)arg1;
- (BOOL)validate_toggleShowWebProcessIDsInPageTitles:(id)arg1;
- (void)toggleShowWebProcessIDsInPageTitles:(id)arg1;
- (BOOL)validate_toggleJavaScriptJITDisabled:(id)arg1;
- (void)toggleJavaScriptJITDisabled:(id)arg1;
- (BOOL)validate_toggleCapPerTabWebProcessesPreference:(id)arg1;
- (BOOL)validate_togglePerTabWebProcessesPreference:(id)arg1;
- (void)toggleCapPerTabWebProcessesPreference:(id)arg1;
- (void)togglePerTabWebProcessesPreference:(id)arg1;
- (BOOL)validate_toggleAlwaysLoadReadingListArchives:(id)arg1;
- (void)toggleAlwaysLoadReadingListArchives:(id)arg1;
- (BOOL)validate_toggleRocketEffectTestEnabled:(id)arg1;
- (void)toggleRocketEffectTestEnabled:(id)arg1;
- (BOOL)validate_toggleUseNewWebProcessCrashRecoveryUI:(id)arg1;
- (void)toggleUseNewWebProcessCrashRecoveryUI:(id)arg1;
- (void)toggleAlwaysUseComplexTextCodePath:(id)arg1;
- (BOOL)validate_toggleNewWindowsHavePerformanceBindings:(id)arg1;
- (void)toggleNewWindowsHavePerformanceBindings:(id)arg1;
- (BOOL)validate_showNetworkingWindow:(id)arg1;
- (void)showNetworkingWindow:(id)arg1;
- (BOOL)validate_toggleDebugRegionOverlayVisible:(id)arg1;
- (void)toggleDebugRegionOverlayVisible:(id)arg1;
- (BOOL)validate_toggleUseGiantTiles:(id)arg1;
- (void)toggleUseGiantTiles:(id)arg1;
- (BOOL)validate_toggleUseUISideCompositing:(id)arg1;
- (void)toggleUseUISideCompositing:(id)arg1;
- (BOOL)validate_toggleHostLayersInSafari:(id)arg1;
- (void)toggleHostLayersInSafari:(id)arg1;
- (BOOL)validate_getSafariTechnologyPreview:(id)arg1;
- (void)getSafariTechnologyPreview:(id)arg1;
- (BOOL)validate_toggleMockCaptureDevices:(id)arg1;
- (void)toggleMockCaptureDevices:(id)arg1;
- (BOOL)validate_toggleLegacyWebRTCAPI:(id)arg1;
- (void)toggleLegacyWebRTCAPI:(id)arg1;
- (BOOL)validate_toggleICECandidateRestrictions:(id)arg1;
- (void)toggleICECandidateRestrictions:(id)arg1;
- (BOOL)validate_toggleMediaCaptureOnInsecureSites:(id)arg1;
- (void)toggleMediaCaptureOnInsecureSites:(id)arg1;
- (BOOL)validate_toggleAllowRemoteAutomation:(id)arg1;
- (void)toggleAllowRemoteAutomation:(id)arg1;
- (BOOL)validate_toggleCrossOriginRestrictionsDisabled:(id)arg1;
- (void)toggleCrossOriginRestrictionsDisabled:(id)arg1;
- (BOOL)validate_toggleLocalFileRestrictionsDisabled:(id)arg1;
- (void)toggleLocalFileRestrictionsDisabled:(id)arg1;
- (BOOL)validate_toggleSiteSpecificHacksDisabled:(id)arg1;
- (void)toggleSiteSpecificHacksDisabled:(id)arg1;
- (BOOL)validate_toggleJavaScriptDisabled:(id)arg1;
- (void)toggleJavaScriptDisabled:(id)arg1;
- (BOOL)validate_toggleAllowUnsignedExtensions:(id)arg1;
- (void)toggleAllowUnsignedExtensions:(id)arg1;
- (BOOL)validate_toggleDisableExtensions:(id)arg1;
- (void)toggleDisableExtensions:(id)arg1;
- (BOOL)validate_toggleAllowJavaScriptInUnifiedField:(id)arg1;
- (void)toggleAllowJavaScriptInUnifiedField:(id)arg1;
- (BOOL)validate_toggleAllowJavaScriptFromAppleEvents:(id)arg1;
- (void)toggleAllowJavaScriptFromAppleEvents:(id)arg1;
- (void)_togglePropertyWithEnabledStateBlock:(CDUnknownBlockType)arg1 toggleBlock:(CDUnknownBlockType)arg2 securePromptMessageText:(id)arg3;
- (BOOL)validate_toggleStylesDisabled:(id)arg1;
- (void)toggleStylesDisabled:(id)arg1;
- (BOOL)validate_toggleImagesDisabled:(id)arg1;
- (void)toggleImagesDisabled:(id)arg1;
- (void)emptyCaches:(id)arg1;
- (void)showExtensionBuilder:(id)arg1;
- (void)showSnippetEditor:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

