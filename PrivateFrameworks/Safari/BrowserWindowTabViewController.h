//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSTabViewController.h"

#import "WBSTabOrderProvider.h"

@class BrowserTabViewItem, BrowserWindowTabView, NSArray, NSString, WBSTabOrderManager;

__attribute__((visibility("hidden")))
@interface BrowserWindowTabViewController : NSTabViewController <WBSTabOrderProvider>
{
    BOOL _isAddingOrRemovingTabViewItem;
    BOOL _didSetUpTabView;
    id <BrowserWindowTabViewControllerDelegate> _delegate;
    WBSTabOrderManager *_tabOrderManager;
}

@property(readonly, nonatomic) WBSTabOrderManager *tabOrderManager; // @synthesize tabOrderManager=_tabOrderManager;
@property(nonatomic) __weak id <BrowserWindowTabViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (unsigned long long)indexForTab:(id)arg1;
- (id)tabAtIndex:(unsigned long long)arg1;
@property(readonly, nonatomic) id <WBSOrderedTab> selectedTabForTabOrderProvider;
- (id)originatingTabForTab:(id)arg1;
@property(readonly, nonatomic) unsigned long long numberOfTabs;
@property(readonly, nonatomic) unsigned long long indexOfSelectedTab;
- (id)tabViewItemsWithUnsubmittedFormTextPassingTest:(CDUnknownBlockType)arg1;
- (id)firstTabViewItemWithUnsavedCredentialsPassingTest:(CDUnknownBlockType)arg1;
@property(readonly, copy, nonatomic) NSArray *pinnedTabViewItems;
@property(readonly, nonatomic) long long numberOfPinnedTabViewItems;
@property(readonly, nonatomic) BOOL hasPinnedTabViewItems;
- (id)tabViewItemWithUUID:(id)arg1;
- (id)tabViewItemAtIndex:(long long)arg1;
- (long long)indexOfTabViewItem:(id)arg1;
@property(retain, nonatomic) BrowserTabViewItem *selectedTabViewItem;
- (void)removeTabViewItem:(id)arg1;
- (void)insertTabViewItem:(id)arg1 atIndex:(long long)arg2;
- (void)setSelectedTabViewItemIndex:(long long)arg1;
@property(readonly, nonatomic) long long numberOfTabViewItems;
- (void)_setUpTabView;
@property(retain) BrowserWindowTabView *tabView; // @dynamic tabView;
- (void)loadView;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

