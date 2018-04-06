//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "BrowserPersistentState.h"

@class NSArray, NSDate, NSMutableArray, NSString, NSUUID;

__attribute__((visibility("hidden")))
@interface BrowserWindowPersistentState : NSObject <BrowserPersistentState>
{
    NSMutableArray *_tabStates;
    unsigned long long _selectedUnpinnedTabIndex;
    unsigned long long _selectedPinnedTabIndex;
    struct CGRect _windowContentRect;
    NSString *_customUnifiedFieldText;
    BOOL _favoritesBarHidden;
    BOOL _isMinimized;
    BOOL _prefersSidebarVisible;
    BOOL _isPopupWindow;
    BOOL _privateWindow;
    BOOL _tabBarHidden;
    NSDate *_dateClosed;
    NSUUID *_windowUUID;
}

@property(readonly, nonatomic, getter=isTabBarHidden) BOOL tabBarHidden; // @synthesize tabBarHidden=_tabBarHidden;
@property(readonly, nonatomic) NSUUID *windowUUID; // @synthesize windowUUID=_windowUUID;
@property(readonly, nonatomic) NSDate *dateClosed; // @synthesize dateClosed=_dateClosed;
@property(readonly, nonatomic, getter=isPrivateWindow) BOOL privateWindow; // @synthesize privateWindow=_privateWindow;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSArray *tabUUIDs;
- (id)dictionaryRepresentation;
- (void)restoreWindowContents:(id)arg1;
- (void)restoreBrowserWindow;
- (id)_tabStatesToRestore;
- (BOOL)_shouldRestoreTabStateInWindow:(id)arg1;
@property(readonly, nonatomic) BOOL hasTabsToRestore;
- (void)enumerateTabStatesUsingBlock:(CDUnknownBlockType)arg1;
- (void)removeTabStateWithUUID:(id)arg1;
- (void)removeStateWithURLs:(id)arg1;
@property(readonly, nonatomic) unsigned long long numberOfTabs;
- (unsigned long long)numberOfNonDisposableTabs;
- (BOOL)containsTabStateWithUUID:(id)arg1;
- (id)selectedTab;
- (BOOL)containsAnyURLs;
- (id)initWithDictionaryRepresentation:(id)arg1 encryptionProvider:(id)arg2;
- (id)_initWithV2DictionaryRepresentation:(id)arg1 encryptionProvider:(id)arg2;
- (id)_initWithV1DictionaryRepresentation:(id)arg1 encryptionProvider:(id)arg2;
- (void)_initWithDictionaryRepresentationCommon:(id)arg1;
- (id)initWithBrowserWindowController:(id)arg1 encryptionProvider:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
