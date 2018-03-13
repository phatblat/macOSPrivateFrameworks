//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "BookmarkGroupDelegate.h"
#import "Command1Through9Receiver.h"
#import "FileChangeObserverClient.h"
#import "FileLockerClient.h"
#import "FileLockerLogDelegate.h"

@class CloudBookmarksMigrationCoordinationConsul, FileChangeObserver, NSMutableArray, NSMutableDictionary, NSString, NSTimer, NSURL, SpotlightBookmarksWriter, WebBookmark, WebBookmarkGroup, WebBookmarkList;

@interface BookmarksController : NSObject <BookmarkGroupDelegate, FileChangeObserverClient, FileLockerClient, FileLockerLogDelegate, Command1Through9Receiver>
{
    BOOL _loaded;
    NSMutableDictionary *_proxiesByIdentifier;
    SpotlightBookmarksWriter *_spotlightBookmarksWriter;
    unsigned long long _bookmarksFileSize;
    double _bookmarksFileTime;
    unsigned long long _bookmarksGeneration;
    struct unique_ptr<Safari::FileLocker, std::__1::default_delete<Safari::FileLocker>> _fileLocker;
    BOOL _waitingForLock;
    NSMutableArray *_completionHandlersPendingLockAcquisition;
    unsigned long long _numberOfPendingSaveRequests;
    long long _pendingSavePriority;
    NSTimer *_pendingSaveTimer;
    double _pendingSaveTimerInterval;
    FileChangeObserver *_fileChangeObserver;
    BOOL _userIsOffline;
    NSMutableArray *_bookmarksThatRequestedMetadataFetchWhileOffline;
    NSMutableArray *_migratedNonSafariBookmarkFiles;
    NSString *_bookmarksFileLockPath;
    BOOL _isReadOnly;
    BOOL _shouldResetCloudKitMigrationStateOnNextLoad;
    BOOL _didFillWithBuiltInBookmarks;
    BOOL _reloadingBookmarks;
    BOOL _savePending;
    WebBookmarkGroup *_allBookmarks;
    WebBookmarkList *_bookmarksBarCollection;
    WebBookmarkList *_bookmarksMenuCollection;
    NSString *_bookmarksFilePath;
    CloudBookmarksMigrationCoordinationConsul *_bookmarksMigrationCoordinationConsul;
    NSURL *_migratedBookmarksFolder;
    struct SHA256Hash _builtInBookmarksStateHash;
}

+ (void)_syncAgentDidDetectHierarchyIssue:(id)arg1;
+ (void)_syncAgentDidDetectBug:(id)arg1;
+ (id)bookmarkTitleForProxyIdentifier:(id)arg1;
+ (id)bookmarkSourceForProxyIdentifier:(id)arg1;
+ (void)_tellUserThatExternalChangePreemptedLocalChange;
+ (void)tellUserThatSyncWon;
+ (void)_requestSyncClientTriggerSyncForBookmarkGroup:(id)arg1 skipRequestIfNoChanges:(BOOL)arg2;
+ (void)requestSyncClientTriggerSyncForBookmarkGroup:(id)arg1 skipRequestIfNoChanges:(BOOL)arg2;
+ (void)requestSyncClientTriggerSyncForBookmarkGroup:(id)arg1;
+ (id)_bookmarksMenuCollectionTitle;
+ (id)existingSharedController;
+ (id)sharedController;
+ (id)_sharedControllerWithInstance:(id *)arg1 spotlightCacheController:(id)arg2;
+ (id)_defaultMigratedBookmarksFolderURL;
+ (id)defaultBookmarksFileLockURL;
+ (id)defaultBookmarksFileURL;
+ (void)makePermanentAllTestDriveBookmarksRootedAtFolder:(id)arg1;
+ (void)removeAllTestDriveBookmarksRootedAtFolder:(id)arg1;
@property(retain, nonatomic) NSURL *migratedBookmarksFolder; // @synthesize migratedBookmarksFolder=_migratedBookmarksFolder;
@property(nonatomic, getter=isSavePending) BOOL savePending; // @synthesize savePending=_savePending;
@property(nonatomic, getter=isReloadingBookmarks) BOOL reloadingBookmarks; // @synthesize reloadingBookmarks=_reloadingBookmarks;
@property(nonatomic) BOOL didFillWithBuiltInBookmarks; // @synthesize didFillWithBuiltInBookmarks=_didFillWithBuiltInBookmarks;
@property(nonatomic) struct SHA256Hash builtInBookmarksStateHash; // @synthesize builtInBookmarksStateHash=_builtInBookmarksStateHash;
@property(nonatomic) BOOL shouldResetCloudKitMigrationStateOnNextLoad; // @synthesize shouldResetCloudKitMigrationStateOnNextLoad=_shouldResetCloudKitMigrationStateOnNextLoad;
@property(readonly, nonatomic) CloudBookmarksMigrationCoordinationConsul *bookmarksMigrationCoordinationConsul; // @synthesize bookmarksMigrationCoordinationConsul=_bookmarksMigrationCoordinationConsul;
@property(readonly, copy, nonatomic) NSString *bookmarksFileLockPath; // @synthesize bookmarksFileLockPath=_bookmarksFileLockPath;
@property(readonly, copy, nonatomic) NSString *bookmarksFilePath; // @synthesize bookmarksFilePath=_bookmarksFilePath;
@property(readonly, retain, nonatomic) WebBookmarkList *bookmarksMenuCollection; // @synthesize bookmarksMenuCollection=_bookmarksMenuCollection;
@property(readonly, retain, nonatomic) WebBookmarkList *bookmarksBarCollection; // @synthesize bookmarksBarCollection=_bookmarksBarCollection;
@property(readonly, nonatomic) WebBookmarkGroup *allBookmarks; // @synthesize allBookmarks=_allBookmarks;
@property(nonatomic) BOOL isReadOnly; // @synthesize isReadOnly=_isReadOnly;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)_stopObservingNetworkChangeNotifications;
- (void)_didReceiveNetworkChangeNotification:(id)arg1;
- (void)_beginObservingNetworkChangeNotifications;
- (BOOL)_shouldTryToFetchMetadataForBookmarkLeaf:(id)arg1;
- (void)fetchMetadataForBookmark:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)handleCommand1Through9ActionForIndex:(unsigned long long)arg1;
- (BOOL)canHandleCommand1Through9ActionForIndex:(unsigned long long)arg1;
- (void)displayNewBookmarksSheetForBookmark:(id)arg1 inWindow:(id)arg2;
- (void)_addBookmark:(id)arg1 parent:(id)arg2;
- (void)_addBookmarkToTopSites:(id)arg1 customizedTitle:(id)arg2;
- (void)addTopLevelBookmark:(id)arg1;
- (void)addTopLevelBookmark:(id)arg1 title:(id)arg2;
- (void)_updateDisplayedTitlesForBuiltInBookmarks:(id)arg1;
- (void)_updateBookmarkSourcesSkippingSave:(BOOL)arg1;
- (void)_fillBookmarksBarWithBuiltInBookmarksIfNecessary;
- (id)_builtInBookmarksBarBookmark;
- (void)_fillWithBuiltInBookmarks;
- (void)_copyChildBookmarksFromBookmark:(id)arg1 toBookmark:(id)arg2;
- (void)_sendFavoritesChangedNotification;
- (BOOL)_favoritesContainsBookmark:(id)arg1;
- (BOOL)_menuContainsBookmark:(id)arg1;
- (void)fetchBookmarksMenuCollectionWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)fetchBookmarksBarCollectionWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)dealloc;
@property(readonly, nonatomic) WebBookmark *historyCollection;
- (id)_initWithBookmarksFilePath:(id)arg1 migratedBookmarksFolder:(id)arg2 spotlightCacheController:(id)arg3;
- (void)resetWithBookmarksFilePath:(id)arg1 migratedBookmarksFolder:(id)arg2 spotlightCacheController:(id)arg3;
- (void)_deleteMigratedNonSafariBookmarkFiles;
- (void)_importMigratedNonSafariBookmarks;
- (int)_importMigratedSafariBookmarks;
- (void)_deleteMigratedBookmarksDirectoryIfContainsNoMigratableFiles;
- (void)exportBookmarks;
- (void)exportBookmarksToPath:(id)arg1 shouldHideExtension:(BOOL)arg2;
- (void)bookmarkGroup:(id)arg1 bookmarkDidChange:(id)arg2 changeWasInteractive:(BOOL)arg3;
- (void)bookmarkGroup:(id)arg1 bookmarkWasRemoved:(id)arg2 fromParent:(id)arg3;
- (void)bookmarkGroup:(id)arg1 bookmarkWasAdded:(id)arg2 toParent:(id)arg3;
- (void)bookmarksWereReloadedInGroup:(id)arg1;
- (void)_postDidRemoveNotificationForBookmark:(id)arg1 parent:(id)arg2;
- (void)_postDidAddNotificationForBookmark:(id)arg1 parent:(id)arg2;
- (void)_postDidChangeNotificationForBookmark:(id)arg1;
- (void)_postBookmarksWereReloadedNotification;
- (void)_savePendingChangesSoonForPossiblyInteractiveBookmarkChange:(BOOL)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_postFavoritesChangedNotificationsIfNecessaryForChangeToBookmark:(id)arg1 parent:(id)arg2;
- (id)bookmarkForNewWindowTabsPreference;
- (void)clearProxiesByIdentifier;
- (void)insertProxyBookmarkWithIdentifier:(id)arg1 atIndex:(unsigned long long)arg2;
- (id)bookmarkForPersistentIdentifier:(id)arg1;
- (id)persistentIdentifierForBookmark:(id)arg1;
- (BOOL)_shouldTellUserAboutBookmarkSaveProblems;
- (void)_savePendingChangesWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)savePendingChangesSynchronously;
- (void)__savePendingChangesSoonWithPriority:(long long)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_savePendingChangesSoonWithPriority:(long long)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)fileLocker:(const struct FileLocker *)arg1 logPrivacyPreservingString:(const char *)arg2 ofType:(unsigned char)arg3;
- (void)_resetPendingSavePriority;
- (void)_unlockFileLockerWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)_lockFileLockerWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)fileLocker:(const struct FileLocker *)arg1 lockWasStolen:(id)arg2;
- (int)fileLocker:(const struct FileLocker *)arg1 actionForApparentlyAbandonedLock:(id)arg2;
- (id)_bookmarkSourceCreateIfNeededWithPossibleTitles:(id)arg1 displayTitle:(id)arg2 indexInTopBookmark:(unsigned long long)arg3 fileNeedsUpdate:(char *)arg4;
- (id)_bookmarkSourceWithPossibleTitles:(id)arg1 displayTitle:(id)arg2 bookmarkIndex:(unsigned long long *)arg3 isFirstTitle:(char *)arg4;
- (void)fetchBookmarkSourceWithStoredTitle:(id)arg1 displayedTitle:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (BOOL)_reloadBookmarksCheckingIfFileChanged:(BOOL)arg1;
- (BOOL)reloadBookmarksFromFileIfChanged;
- (BOOL)_bookmarksFileHasChanged;
- (void)fileChangeObserverFileDidChange:(id)arg1;
- (void)_flushPendingSaveCompletionHandlersWithSuccess:(BOOL)arg1;
- (void)_enqueueSaveCompletionHandler:(CDUnknownBlockType)arg1;
- (void)performUpdatesAtomically:(CDUnknownBlockType)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_schedulePendingSaveTimerWithPriority:(long long)arg1 previousTimerInterval:(double)arg2;
- (void)_invalidatePendingSaveTimer;
- (void)_pendingSaveTimerFired:(id)arg1;
- (void)_rememberBookmarksFileInfo;
- (id)_findNthFavoriteLeaf:(unsigned long long)arg1;
@property(readonly, nonatomic) WebBookmarkList *topBookmarkIfLoaded;
- (id)builtInBookmarks;
- (id)_bookmarksBarCollectionPossibleTitles;
@property(readonly, nonatomic) NSString *bookmarksBarCollectionTitle;
- (id)_bookmarksMenuCollectionPossibleTitles;
- (BOOL)clearLocalDataForAutomatedTestingPurposes;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

