//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSViewController.h"

@class BrowserViewController, BrowserWindowController, ContinuousReadingListPageItem, ContinuousReadingListViewController, NSView, TabContentView;

__attribute__((visibility("hidden")))
@interface TabContentViewController : NSViewController
{
    BrowserViewController *_browserViewController;
    BrowserViewController *_currentBrowserViewController;
    ContinuousReadingListViewController *_continuousReadingListViewController;
}

@property(readonly, nonatomic) ContinuousReadingListViewController *continuousReadingListViewController; // @synthesize continuousReadingListViewController=_continuousReadingListViewController;
@property(readonly, nonatomic) BrowserViewController *currentBrowserViewController; // @synthesize currentBrowserViewController=_currentBrowserViewController;
@property(readonly, nonatomic) BrowserViewController *browserViewController; // @synthesize browserViewController=_browserViewController;
- (void).cxx_destruct;
- (void)continuousBrowserPageViewController:(id)arg1 didTransitionToBrowserViewController:(id)arg2;
- (void)_installContinuousReadingListViewControllerIfNeeded;
- (void)exitContinuousMode;
- (void)loadContinuousReadingListPageItem:(id)arg1;
@property(readonly, nonatomic) ContinuousReadingListPageItem *currentContinuousReadingListPageItem;
@property(readonly, nonatomic) BOOL continuousPageViewIsHandlingPageTransitionOrLoadingPageItem;
@property(readonly, nonatomic, getter=isInContinuousMode) BOOL inContinuousMode;
- (BOOL)handleScrollWheelEvent:(id)arg1;
- (void)_setCurrentBrowserViewController:(id)arg1 inBrowserDocument:(id)arg2;
- (void)_replaceBrowserViewControllerWithBrowserViewController:(id)arg1 inBrowserDocument:(id)arg2;
- (void)replaceBrowserViewControllerWithBrowserViewController:(id)arg1;
- (id)_browserTabViewItem;
@property(readonly, nonatomic) BOOL shouldDisableTitlebarBlurringForCurrentContentView;
@property(readonly, nonatomic) BOOL isActiveWebViewMagnified;
@property(readonly, nonatomic) NSView *dockedInspectorView;
@property(readonly, nonatomic) TabContentView *tabContentView;
@property(readonly, nonatomic) BrowserWindowController *browserWindowController;
- (void)viewWillAppear;
- (void)loadView;
- (void)dealloc;
- (id)initWithBrowserViewController:(id)arg1;
- (id)init;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithCoder:(id)arg1;

// Remaining properties
@property(retain) TabContentView *view; // @dynamic view;

@end
