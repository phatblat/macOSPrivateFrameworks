//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray, NSMutableDictionary, NSObject<OS_dispatch_queue>, WBSCoalescedAsynchronousWriter;

__attribute__((visibility("hidden")))
@interface ClosedTabOrWindowStateManager : NSObject
{
    NSMutableArray *_closedTabOrWindowPersistentStates;
    WBSCoalescedAsynchronousWriter *_recentlyClosedTabsOrWindowsWriter;
    NSObject<OS_dispatch_queue> *_loadClosedTabsDataFromDiskSynchronizationQueue;
    // Error parsing type: {atomic<LoadingStatus>="__a_"Aq}, name: _savedStateLoadingStatus
    NSMutableDictionary *_closingWindowUUIDsToClosedTabStateArrays;
    id <TabSnapshotSensitiveDataPurging> _purger;
    id <EncryptionProvider> _encryptionProvider;
    unsigned long long _numberOfSavedTabStates;
}

+ (id)sharedManager;
@property unsigned long long numberOfSavedTabStates; // @synthesize numberOfSavedTabStates=_numberOfSavedTabStates;
- (void).cxx_destruct;
- (void)_didUndoTabOrTabGroupClose;
- (void)_didReopenTabOrWindowFromPersistedState;
- (void)_didReopenTabOrWindow;
- (unsigned long long)_maximumNumberOfTabStatesToPersist;
- (id)_dictionaryRepresentation;
- (void)_loadRecentlyClosedTabsOrWindowsFromDisk;
- (void)savePendingChangesBeforeTermination;
- (void)_recentlyClosedTabsOrWindowsStateDidChange;
- (void)didReopenAllWindowsInSession:(id)arg1;
- (void)_invalidateUndoClosedTabForAllWindows;
- (void)_historyItemsWereRemoved:(id)arg1;
- (void)clearStatesAddedAfterDate:(id)arg1 beforeDate:(id)arg2;
- (void)clearStates;
- (id)_closedStatesToPersist;
- (id)closedStates;
- (void)_pruneSavedStates;
- (void)_performInternalBookkeepingWithAddedState:(id)arg1;
- (void)_performInternalBookkeepingWithAddedStates:(id)arg1;
- (void)_updateNumberOfSavedTabStatesWithRemovedState:(id)arg1;
- (void)_removeAllState;
- (void)_removeTabPersistentState:(id)arg1;
- (void)_removeState:(id)arg1;
- (void)_removeStatesInArray:(id)arg1;
- (void)windowDidRestoreReplacedTabGroup:(id)arg1;
- (BOOL)_registerTabStateForWindowIfNeeded:(id)arg1;
- (void)registerClosedState:(id)arg1;
- (void)cancelClosingBrowserWindowController:(id)arg1;
- (void)endClosingBrowserWindowController:(id)arg1;
- (void)beginClosingBrowserWindowController:(id)arg1;
- (void)_restoreWindowWithState:(id)arg1;
- (void)_restoreTabWithState:(id)arg1 atIndex:(unsigned long long)arg2 inWindowWithUUID:(id)arg3;
- (void)_restoreTabWithState:(id)arg1 placement:(long long)arg2;
- (void)undoCloseTabGroupWithUUID:(id)arg1;
- (void)undoClosedTabWithUUID:(id)arg1 inWindowWithUUID:(id)arg2;
- (void)reopenTabGroupFromPersistentState:(id)arg1;
- (void)reopenTabFromPersistentStateIntoActiveWindowConsultingPagesOpenInWindowsInsteadOfTabsPreference:(id)arg1;
- (void)reopenTabFromPersistentStateIntoActiveWindow:(id)arg1;
- (void)reopenWindowFromPersistentState:(id)arg1;
- (void)reopenLastClosedTabOrWindow;
- (long long)typeOfLastClosedTabOrWindowState;
- (BOOL)containsAnySavedState;
- (void)closeTabGroupWhileRedoing:(id)arg1 inWindow:(id)arg2;
- (void)closeTabWithoutConfirmingWithUUID:(id)arg1 inWindow:(id)arg2;
- (void)_waitUntilStateHasLoadedFromDisk;
- (void)performDelayedLaunchOperations;
- (id)initWithTabSnapshotSensitiveDataPurger:(id)arg1 encryptionProvider:(id)arg2;
- (id)init;
- (id)_recentlyClosedTabsOrWindowsFileURL;

@end
