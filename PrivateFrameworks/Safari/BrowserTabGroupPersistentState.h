//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "BrowserPersistentState.h"
#import "WBSClosedTabGroup.h"

@class BrowserTabPersistentState, NSArray, NSDate, NSMutableArray, NSString, NSUUID;

__attribute__((visibility("hidden")))
@interface BrowserTabGroupPersistentState : NSObject <BrowserPersistentState, WBSClosedTabGroup>
{
    NSMutableArray *_tabStates;
    NSUUID *_selectedTabUUID;
    NSUUID *_windowUUID;
    NSDate *_dateClosed;
    NSUUID *_tabGroupUUID;
}

@property(readonly, nonatomic) NSUUID *tabGroupUUID; // @synthesize tabGroupUUID=_tabGroupUUID;
@property(readonly, nonatomic) NSDate *dateClosed; // @synthesize dateClosed=_dateClosed;
- (void).cxx_destruct;
@property(readonly, nonatomic) id <WBSClosedTab> firstNonDisposableClosedTab;
@property(readonly, copy, nonatomic) NSArray *closedTabs;
@property(readonly, nonatomic) long long closedItemType;
@property(readonly, copy, nonatomic) NSArray *tabUUIDs;
- (id)dictionaryRepresentationIncludingSessionState:(BOOL)arg1 forCleanExit:(BOOL)arg2;
- (id)_selectedTab;
@property(readonly, nonatomic) BrowserTabPersistentState *firstNonDisposableTab;
@property(readonly, nonatomic) unsigned long long numberOfNonDisposableTabs;
@property(readonly, nonatomic) unsigned long long numberOfTabs;
- (void)enumerateTabStatesUsingBlock:(CDUnknownBlockType)arg1;
- (void)removeStateWithURLs:(id)arg1;
- (void)removeTabStateWithUUID:(id)arg1;
- (BOOL)containsTabStateWithUUID:(id)arg1;
- (void)restoreTabGroupIntoBrowserWindowController:(id)arg1;
- (void)restoreTabGroup;
- (id)initWithDictionaryRepresentation:(id)arg1 encryptionProvider:(id)arg2;
- (id)initWithBrowserWindowController:(id)arg1 encryptionProvider:(id)arg2;
- (id)initWithBrowserTabViewItems:(id)arg1 encryptionProvider:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

