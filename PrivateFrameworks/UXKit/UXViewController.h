//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSViewController.h"

@class NSArray, NSResponder, NSView, UXNavigationController, UXNavigationItem, UXSourceController, UXTabBarController, UXTabBarItem, UXView;

@interface UXViewController : NSViewController
{
    UXNavigationItem *_navigationItem;
    UXTabBarItem *_tabBarItem;
    UXViewController *_accessoryViewController;
    NSArray *_accessoryBarItems;
    UXViewController *_toolbarViewController;
    NSArray *_toolbarItems;
    NSArray *_subtoolbarItems;
    BOOL _hidesBottomBarWhenPushed;
    struct CGSize _ux_preferredContentSize;
    BOOL _viewDidLoad;
    BOOL _ignoreViewController;
    id <UXLayoutSupport> _topLayoutGuide;
    id <UXLayoutSupport> _bottomLayoutGuide;
    BOOL _isEditing;
    BOOL _automaticallyAdjustsScrollViewInsets;
    long long _modalPresentationStyle;
    unsigned long long _edgesForExtendedLayout;
    UXView *_presentedViewControllerContainerView;
    double _preferredToolbarHeight;
    double _preferredToolbarBaselineOffsetFromBottom;
    long long _preferredSubtoolbarPosition;
    double _preferredSubtoolbarHeight;
    double _preferredSubtoolbarBaselineOffsetFromBottom;
    long long _preferredToolbarStyle;
    struct NSEdgeInsets _preferredToolbarDecorationInsets;
}

+ (id)toolbarPropertyNames;
+ (Class)viewClass;
+ (double)defaultToolbarHeight;
@property(nonatomic) struct NSEdgeInsets preferredToolbarDecorationInsets; // @synthesize preferredToolbarDecorationInsets=_preferredToolbarDecorationInsets;
@property(nonatomic) long long preferredToolbarStyle; // @synthesize preferredToolbarStyle=_preferredToolbarStyle;
@property(nonatomic) double preferredSubtoolbarBaselineOffsetFromBottom; // @synthesize preferredSubtoolbarBaselineOffsetFromBottom=_preferredSubtoolbarBaselineOffsetFromBottom;
@property(nonatomic) double preferredSubtoolbarHeight; // @synthesize preferredSubtoolbarHeight=_preferredSubtoolbarHeight;
@property(nonatomic) long long preferredSubtoolbarPosition; // @synthesize preferredSubtoolbarPosition=_preferredSubtoolbarPosition;
@property(nonatomic) double preferredToolbarBaselineOffsetFromBottom; // @synthesize preferredToolbarBaselineOffsetFromBottom=_preferredToolbarBaselineOffsetFromBottom;
@property(nonatomic) double preferredToolbarHeight; // @synthesize preferredToolbarHeight=_preferredToolbarHeight;
@property(retain, nonatomic) UXView *presentedViewControllerContainerView; // @synthesize presentedViewControllerContainerView=_presentedViewControllerContainerView;
@property(nonatomic) BOOL automaticallyAdjustsScrollViewInsets; // @synthesize automaticallyAdjustsScrollViewInsets=_automaticallyAdjustsScrollViewInsets;
@property(nonatomic) unsigned long long edgesForExtendedLayout; // @synthesize edgesForExtendedLayout=_edgesForExtendedLayout;
@property(nonatomic) long long modalPresentationStyle; // @synthesize modalPresentationStyle=_modalPresentationStyle;
@property(nonatomic) BOOL isEditing; // @synthesize isEditing=_isEditing;
- (void).cxx_destruct;
- (id)menuForEvent:(id)arg1;
- (id)bottomLayoutGuide;
- (id)topLayoutGuide;
- (void)_setupLayoutGuidesForView:(id)arg1;
- (void)didUpdateLayoutGuides;
- (void)invalidateIntrinsicLayoutInsets;
- (struct NSEdgeInsets)intrinsicLayoutInsets;
- (struct CGSize)preferredContentSizeCappedToSize:(struct CGSize)arg1;
@property struct CGSize preferredContentSize;
- (void)contentRepresentingViewControllerDidChange;
@property(readonly, nonatomic) UXViewController *contentRepresentingViewController;
- (BOOL)_requiresWindowForTransitionPreparation;
- (id)_ancestorViewControllerOfClass:(Class)arg1;
- (void)_animateView:(id)arg1 fromFrame:(struct CGRect)arg2 toFrame:(struct CGRect)arg3;
- (id)transitionCoordinator;
- (void)setEditing:(BOOL)arg1 animated:(BOOL)arg2;
- (void)dismissViewControllerAnimated:(BOOL)arg1 completion:(CDUnknownBlockType)arg2;
- (void)presentViewController:(id)arg1 animated:(BOOL)arg2 completion:(CDUnknownBlockType)arg3;
@property(readonly, nonatomic) UXViewController *ux_presentingViewController;
@property(readonly, nonatomic) UXViewController *ux_parentViewController;
@property(readonly, nonatomic) UXViewController *presentedViewController;
- (void)didMoveToParentViewController:(id)arg1;
- (void)willMoveToParentViewController:(id)arg1;
- (void)removeFromParentViewController;
- (void)removeChildViewControllerAtIndex:(long long)arg1;
- (void)addChildViewController:(id)arg1;
- (void)windowDidRecalculateKeyViewLoop;
- (void)windowWillRecalculateKeyViewLoop;
- (void)viewDidLiveResize;
- (void)viewWillLiveResize;
- (void)viewDidLayoutSubviews;
- (void)viewWillLayoutSubviews;
- (void)viewUpdateLayer;
- (void)viewDidDisappear;
- (void)viewWillDisappear;
- (void)viewDidAppear;
- (void)viewWillAppear;
- (void)_sendViewDidLoad;
- (void)loadView;
- (struct CGRect)_defaultInitialFrame;
- (BOOL)acceptsFirstResponder;
- (id)description;
- (void)updateFirstResponderIfNeeded;
@property(readonly, nonatomic) NSResponder *preferredFirstResponder;
- (void)setTitle:(id)arg1;
@property(readonly, nonatomic) NSView *viewIfLoaded;
- (void)setView:(id)arg1;
@property(readonly, nonatomic) UXView *uxView;
- (void)_loadViewIfNotLoaded;
- (void)_prepareForAnimationInContext:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)init;
@property(nonatomic) BOOL hidesBottomBarWhenPushed;
- (long long)preferredToolbarPosition;
- (id)toolbarViewController;
- (id)subtoolbarItems;
- (void)setSubtoolbarItems:(id)arg1;
- (void)setToolbarViewController:(id)arg1;
- (id)toolbarItems;
- (void)setToolbarItems:(id)arg1 animated:(BOOL)arg2;
- (void)setToolbarItems:(id)arg1;
- (id)accessoryBarItems;
- (void)setAccessoryBarItems:(id)arg1;
- (id)accessoryViewController;
- (void)setAccessoryViewController:(id)arg1;
@property(readonly, nonatomic) UXNavigationItem *navigationItem;
@property(readonly, nonatomic) UXNavigationController *navigationController;
@property(readonly, nonatomic) __weak UXTabBarController *tabBarController;
@property(retain, nonatomic) UXTabBarItem *tabBarItem;
- (id)preferredTabBarItemSegmentForNavigationDestination:(id)arg1;
- (void)performActionForSelectingCurrentTabBarItemSegment;
- (void)prepareForTransitionToSelectedTabBarItemSegmentWithCompletion:(CDUnknownBlockType)arg1;
- (id)popoverController;
- (void)updateViewConstraints;
- (void)prepareForTransitionWithContext:(id)arg1 completion:(CDUnknownBlockType)arg2;
@property(readonly, nonatomic) long long interfaceOrientation;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
@property(nonatomic) BOOL hidesSourceListWhenPushed;
- (BOOL)isTransitory;
- (void)setTransitory:(BOOL)arg1;
- (void)updateForEqualNavigationDestination:(id)arg1;
- (void)requestViewControllersForNavigationDestination:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (BOOL)canProvideViewControllersForNavigationDestination:(id)arg1;
- (void)willEncodeNavigationDestination:(id)arg1;
@property(readonly, nonatomic) id <UXNavigationDestination> navigationDestination;
@property(readonly, nonatomic) UXSourceController *sourceController;
- (void)setShouldAnimateToolbarsChanges;
- (void)performToolbarsChanges:(CDUnknownBlockType)arg1;

@end

