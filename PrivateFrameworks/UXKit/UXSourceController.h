//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <UXKit/UXViewController.h>

#import "UXNavigationControllerDelegate.h"
#import "_UXSourceSplitViewDelegate.h"

@class NSArray, NSLayoutConstraint, NSMapTable, NSOperationQueue, NSPopUpButton, NSSegmentedControl, NSString, NSView, NSWindow, UXNavigationController, UXTransitionController, UXView, UXViewController<UXSourceList>, _UXSourceSplitView, _UXViewControllerOneToOneTransitionContext;

@interface UXSourceController : UXViewController <UXNavigationControllerDelegate, _UXSourceSplitViewDelegate>
{
    NSView *_tabBarView;
    _UXSourceSplitView *_splitView;
    NSLayoutConstraint *_popUpWidthContraint;
    BOOL _needsToSetInitialMasterWidth;
    BOOL _isTransitioning;
    _UXViewControllerOneToOneTransitionContext *_transitionCtx;
    UXTransitionController *_transitionController;
    NSMapTable *_navigationControllerByRootViewController;
    NSMapTable *_transitionControllerClassByToViewControllerClass;
    NSOperationQueue *_viewControllerOperations;
    UXNavigationController *_targetNavigationController;
    id <UXNavigationDestination> _targetNavigationDestination;
    id <UXNavigationControllerDelegate> _currentNavigationDelegate;
    id _localEdgeHoverEventMonitor;
    id _globalEdgeHoverEventMonitor;
    id _windowResizeObserver;
    id _windowDeactivateObserver;
    UXView *_transientlyUncollapsedView;
    BOOL _hasItemToRevealOnEdgeHover;
    long long _preferredStyle;
    long long _style;
    UXViewController<UXSourceList> *_sourceListViewController;
    double _minimumWidthForInlineSourceList;
    NSString *_sourceListAutosaveName;
    NSArray *_rootViewControllers;
    UXViewController *_selectedViewController;
    NSSegmentedControl *_segmentedControl;
    NSPopUpButton *_popUpButton;
    NSWindow *_observedWindow;
}

+ (Class)_defaultTransitionControllerClass;
+ (id)_widthDefaultsKeyForAutosaveName:(id)arg1;
@property(nonatomic) __weak NSWindow *observedWindow; // @synthesize observedWindow=_observedWindow;
@property(readonly, nonatomic) NSPopUpButton *popUpButton; // @synthesize popUpButton=_popUpButton;
@property(readonly, nonatomic) NSSegmentedControl *segmentedControl; // @synthesize segmentedControl=_segmentedControl;
@property(retain, nonatomic) UXViewController *selectedViewController; // @synthesize selectedViewController=_selectedViewController;
@property(copy, nonatomic) NSArray *rootViewControllers; // @synthesize rootViewControllers=_rootViewControllers;
@property(copy, nonatomic) NSString *sourceListAutosaveName; // @synthesize sourceListAutosaveName=_sourceListAutosaveName;
@property(nonatomic) double minimumWidthForInlineSourceList; // @synthesize minimumWidthForInlineSourceList=_minimumWidthForInlineSourceList;
@property(retain, nonatomic) UXViewController<UXSourceList> *sourceListViewController; // @synthesize sourceListViewController=_sourceListViewController;
@property(nonatomic) long long style; // @synthesize style=_style;
@property(nonatomic) long long preferredStyle; // @synthesize preferredStyle=_preferredStyle;
- (void).cxx_destruct;
- (id)fallbackNavigationDestination;
- (void)_setupDelegateForNavigationController:(id)arg1 operation:(long long)arg2 fromViewController:(id)arg3 toViewController:(id)arg4;
- (BOOL)navigationController:(id)arg1 shouldBeginInteractivePopFromViewController:(id)arg2 toViewController:(id)arg3;
- (id)navigationController:(id)arg1 animationControllerForOperation:(long long)arg2 fromViewController:(id)arg3 toViewController:(id)arg4;
- (id)navigationController:(id)arg1 interactionControllerForAnimationController:(id)arg2;
- (void)navigationController:(id)arg1 didShowViewController:(id)arg2;
- (void)navigationController:(id)arg1 willShowViewController:(id)arg2;
- (BOOL)sourceSplitView:(id)arg1 canSpringLoadRevealSubview:(id)arg2;
- (void)sourceSplitView:(id)arg1 didChangeAutoCollapsedValue:(BOOL)arg2;
- (void)sourceSplitView:(id)arg1 didResizeMasterWidth:(double)arg2;
- (id)_contextForTransitionOperation:(long long)arg1 fromViewController:(id)arg2 toViewController:(id)arg3 transition:(unsigned long long)arg4;
- (void)_beginTransitionWithContext:(id)arg1 operation:(long long)arg2;
- (void)_prepareViewController:(id)arg1 forAnimationInContext:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)transitionCoordinator;
- (void)dismissViewControllerAnimated:(BOOL)arg1 completion:(CDUnknownBlockType)arg2;
- (void)presentViewController:(id)arg1 animated:(BOOL)arg2 completion:(CDUnknownBlockType)arg3;
- (void)removeDestination:(id)arg1 animated:(BOOL)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_removeDestination:(id)arg1 animated:(BOOL)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_navigateToDestination:(id)arg1 animated:(BOOL)arg2 completion:(CDUnknownBlockType)arg3;
- (id)_rootViewControllerProvidingViewControllersForNavigationDestination:(id)arg1;
- (void)navigateToDestination:(id)arg1 animated:(BOOL)arg2 completion:(CDUnknownBlockType)arg3;
- (id)preferredFirstResponder;
- (void)viewWillDisappear;
- (void)viewDidAppear;
- (void)viewWillAppear;
- (void)viewDidLoad;
- (void)keyDown:(id)arg1;
- (BOOL)acceptsFirstResponder;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)windowDidUpdateFirstResponder;
- (void)didChangeTopViewControllerForNavigationController:(id)arg1;
- (void)didChangeSelectedViewController;
- (void)willSelectViewController:(id)arg1;
- (void)willAddNavigationController:(id)arg1;
- (void)popUpChanged:(id)arg1;
- (void)segmentChanged:(id)arg1;
- (id)navigationController;
@property(nonatomic) unsigned long long selectedIndex;
- (void)setSelectedIndex:(unsigned long long)arg1 animated:(BOOL)arg2;
- (void)setSelectedViewController:(id)arg1 animated:(BOOL)arg2;
- (void)setRootViewControllers:(id)arg1 destination:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_setRootViewControllers:(id)arg1 destination:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_addRootViewController:(id)arg1;
- (struct CGSize)contentSizeForWantsSourceListCollapsed:(BOOL)arg1;
- (void)_setPreferredStyle:(long long)arg1 animated:(BOOL)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_setStyle:(long long)arg1 animated:(BOOL)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_didChangeCollapsed;
- (void)_setStyle:(long long)arg1;
@property(readonly, nonatomic, getter=isSourceListCollapsed) BOOL sourceListCollapsed;
@property(readonly, nonatomic) BOOL wantsSourceListCollapsed;
- (void)_setWantsSourceListCollapsed:(BOOL)arg1 animated:(BOOL)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_setWantsSourceListCollapsed:(BOOL)arg1;
@property(readonly, nonatomic) BOOL alternateTitleEnabled;
- (id)tabBarView;
- (BOOL)_reduceMotionEnabled;
- (BOOL)_wantsSourceListCollapsedForViewController:(id)arg1;
- (long long)_effectiveStyleForViewController:(id)arg1;
- (void)_setSelectedIndex:(long long)arg1 animated:(BOOL)arg2 sender:(id)arg3;
- (void)_setSelectedViewController:(id)arg1 animated:(BOOL)arg2 sender:(id)arg3;
- (void)_didChangeSelectedViewControllerFromSender:(id)arg1;
- (id)_popTransitoryViewControllersInNavigationController:(id)arg1 animated:(BOOL)arg2;
- (void)_setLeadingContentInset:(double)arg1;
- (double)_preferredSourceListWidth;
- (void)_saveSourceListWidth:(double)arg1;
- (void)_updateSelectionControls;
- (void)_configureManagedNavigationController:(id)arg1;
- (void)unregisterTransitionControllerForTransitionToViewControllerClass:(Class)arg1;
- (void)registerTranistionControllerClass:(Class)arg1 forViewControllerClass:(Class)arg2;
- (void)registerTransitionControllerClass:(Class)arg1 forViewControllerClass:(Class)arg2;
- (void)unregisterTransitoryViewController:(id)arg1;
- (void)registerTransitoryViewController:(id)arg1;
@property(readonly, nonatomic) BOOL isNavigating;
@property(readonly, nonatomic) id <UXNavigationDestination> currentNavigationDestination;
@property(readonly, nonatomic) UXNavigationController *selectedNavigationController;
- (void)removeRootViewControllerAtIndex:(long long)arg1;
- (void)insertRootViewController:(id)arg1 atIndex:(long long)arg2;
- (void)addRootViewController:(id)arg1;
- (void)dealloc;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)_stopObservingFullscreenForWindow:(id)arg1;
- (void)_startObservingFullscreenForWindow:(id)arg1;
- (void)_didExitFullscreen:(id)arg1;
- (void)_didEnterFullscreen:(id)arg1;
- (BOOL)_hasItemToRevealOnEdgeHover;
- (void)_setHasItemToRevealOnEdgeHover:(BOOL)arg1;
- (void)_stopObservingEdgeHover;
- (void)_startObservingEdgeHover;
- (void)_handleEdgeHoverEvent:(id)arg1;
- (void)_cancelOrDismissUncollapsedItem;
- (void)_uncollapseEdgeRevealItem:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

