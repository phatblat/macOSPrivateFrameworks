//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSViewController.h"

#import "SidebarContentViewController.h"

@class BrowserWindowController, NSString, ReadingListTableViewController;

__attribute__((visibility("hidden")))
@interface ReadingListSidebarViewControllerBase : NSViewController <SidebarContentViewController>
{
    ReadingListTableViewController *_tableViewController;
    BrowserWindowController *_windowController;
}

@property(nonatomic) __weak BrowserWindowController *windowController; // @synthesize windowController=_windowController;
@property(retain, nonatomic) ReadingListTableViewController *tableViewController; // @synthesize tableViewController=_tableViewController;
- (void).cxx_destruct;
- (id)_readingListTableView;
- (void)_selectReadingListItemWithRowIndexFromBlock:(CDUnknownBlockType)arg1;
- (void)wasInstalledBySidebarViewController:(id)arg1;
- (void)selectNextReadingListItem;
- (void)selectPreviousReadingListItem;
- (void)selectCurrentlyLoadedReadingListItem;
@property(readonly, nonatomic) BOOL canSelectAnyReadingListItem;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

