//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSViewController.h"

#import "NSMenuDelegate.h"
#import "NSOutlineViewDataSource.h"
#import "OutlineViewPlusDelegate.h"

@class FaviconRequestsController, ManagedPlugIn, NSArray, NSButton, NSLayoutConstraint, NSMutableSet, NSOutlineView, NSPopUpButton, NSScrollView, NSString, NSTextField, NSView, SegmentedControlWithDynamicWidth;

__attribute__((visibility("hidden")))
@interface ManagedPlugInPoliciesViewController : NSViewController <NSMenuDelegate, NSOutlineViewDataSource, OutlineViewPlusDelegate>
{
    NSArray *_openWebPagePolicies;
    NSArray *_configuredPolicies;
    FaviconRequestsController *_requestController;
    BOOL _didAwakeFromNib;
    NSMutableSet *_visiblePopUpMenus;
    NSLayoutConstraint *_defaultPolicyPopupButtonWidthConstraint;
    ManagedPlugIn *_managedPlugIn;
    NSOutlineView *_policyOutlineView;
    NSTextField *_plugInNamePolicyHeaderField;
    NSView *_policiesPlaceholderView;
    NSView *_policyBorderBox;
    NSLayoutConstraint *_policyBorderBoxBottomSpaceConstraint;
    NSScrollView *_policyScrollView;
    NSView *_policyContainer;
    NSTextField *_policyEmptyStateLabel;
    NSPopUpButton *_defaultPolicyPopUpButton;
    NSView *_warningContentView;
    NSTextField *_warningTextField;
    NSLayoutConstraint *_warningContentViewTopVerticalSpacingConstraint;
    NSLayoutConstraint *_warningContentViewBottomVerticalSpacingConstraint;
    NSLayoutConstraint *_warningContentViewLeadingHorizontalSpacingConstraint;
    NSLayoutConstraint *_warningContentViewTrailingHorizontalSpacingConstraint;
    NSButton *_removeButton;
    SegmentedControlWithDynamicWidth *_removeButtonSegmentedControl;
}

+ (int)_policyForPolicyItemTitle:(id)arg1;
+ (id)_plugInIsUnsafeString;
+ (id)_runInSafeModeString;
+ (id)_enableXProtectString;
+ (id)_askPolicyString;
+ (id)_onPolicyString;
+ (id)_offPolicyString;
+ (id)cautionImage;
@property(nonatomic) __weak SegmentedControlWithDynamicWidth *removeButtonSegmentedControl; // @synthesize removeButtonSegmentedControl=_removeButtonSegmentedControl;
@property(nonatomic) __weak NSButton *removeButton; // @synthesize removeButton=_removeButton;
@property(retain, nonatomic) NSLayoutConstraint *warningContentViewTrailingHorizontalSpacingConstraint; // @synthesize warningContentViewTrailingHorizontalSpacingConstraint=_warningContentViewTrailingHorizontalSpacingConstraint;
@property(retain, nonatomic) NSLayoutConstraint *warningContentViewLeadingHorizontalSpacingConstraint; // @synthesize warningContentViewLeadingHorizontalSpacingConstraint=_warningContentViewLeadingHorizontalSpacingConstraint;
@property(retain, nonatomic) NSLayoutConstraint *warningContentViewBottomVerticalSpacingConstraint; // @synthesize warningContentViewBottomVerticalSpacingConstraint=_warningContentViewBottomVerticalSpacingConstraint;
@property(retain, nonatomic) NSLayoutConstraint *warningContentViewTopVerticalSpacingConstraint; // @synthesize warningContentViewTopVerticalSpacingConstraint=_warningContentViewTopVerticalSpacingConstraint;
@property(retain, nonatomic) NSTextField *warningTextField; // @synthesize warningTextField=_warningTextField;
@property(retain, nonatomic) NSView *warningContentView; // @synthesize warningContentView=_warningContentView;
@property(nonatomic) __weak NSPopUpButton *defaultPolicyPopUpButton; // @synthesize defaultPolicyPopUpButton=_defaultPolicyPopUpButton;
@property(nonatomic) __weak NSTextField *policyEmptyStateLabel; // @synthesize policyEmptyStateLabel=_policyEmptyStateLabel;
@property(nonatomic) __weak NSView *policyContainer; // @synthesize policyContainer=_policyContainer;
@property(nonatomic) __weak NSScrollView *policyScrollView; // @synthesize policyScrollView=_policyScrollView;
@property(nonatomic) __weak NSLayoutConstraint *policyBorderBoxBottomSpaceConstraint; // @synthesize policyBorderBoxBottomSpaceConstraint=_policyBorderBoxBottomSpaceConstraint;
@property(nonatomic) __weak NSView *policyBorderBox; // @synthesize policyBorderBox=_policyBorderBox;
@property(nonatomic) __weak NSView *policiesPlaceholderView; // @synthesize policiesPlaceholderView=_policiesPlaceholderView;
@property(nonatomic) __weak NSTextField *plugInNamePolicyHeaderField; // @synthesize plugInNamePolicyHeaderField=_plugInNamePolicyHeaderField;
@property(nonatomic) __weak NSOutlineView *policyOutlineView; // @synthesize policyOutlineView=_policyOutlineView;
@property(retain, nonatomic) ManagedPlugIn *managedPlugIn; // @synthesize managedPlugIn=_managedPlugIn;
- (void).cxx_destruct;
- (id)_policyItemsForButton:(id)arg1;
- (void)_browserContentDidChange:(id)arg1;
- (void)_didChangeManagedPlugInPolicies:(id)arg1;
- (void)_setUpPolicyPopUpButtonIfNeeded:(id)arg1;
- (id)_createSandboxMenuItem;
- (id)_createXProtectMenuItem;
- (void)_setUpToggleXProtectMenuItemInPolicyPopupButton:(id)arg1 withPolicy:(int)arg2;
- (void)_setCautionImageOnMenuItemsIfNeeded:(id)arg1;
- (void)_setUpToggleSandboxMenuItemInPolicyPopupButton:(id)arg1 runUnsandboxed:(BOOL)arg2;
- (id)_unsafeModeModalMessageText;
- (void)_setUpOutlineHeaderView;
- (BOOL)_shouldSwitchToUnsafeModeModalDialogWithMessageText:(id)arg1;
- (void)selectPolicy:(int)arg1 inPolicyPopupButton:(id)arg2;
- (BOOL)_shouldShowPlugInAsEnabled:(id)arg1;
- (void)menuDidClose:(id)arg1;
- (void)menuWillOpen:(id)arg1;
- (void)menuNeedsUpdate:(id)arg1;
- (BOOL)outlineView:(id)arg1 shouldEditOnSingleClick:(id)arg2 inRow:(long long)arg3 tableColumn:(id)arg4;
- (BOOL)outlineView:(id)arg1 shouldEditOnDoubleClick:(id)arg2 inRow:(long long)arg3 tableColumn:(id)arg4;
- (BOOL)outlineView:(id)arg1 keyDown:(id)arg2;
- (void)outlineViewSelectionDidChange:(id)arg1;
- (id)outlineView:(id)arg1 selectionIndexesForProposedSelection:(id)arg2;
- (double)outlineView:(id)arg1 heightOfRowByItem:(id)arg2;
- (BOOL)outlineView:(id)arg1 isGroupItem:(id)arg2;
- (id)outlineView:(id)arg1 viewForTableColumn:(id)arg2 item:(id)arg3;
- (void)_updateXProtectAndSandboxItemsInPopUpMenu:(id)arg1;
- (BOOL)_shouldShowItem:(id)arg1 inPopUpMenu:(id)arg2;
- (id)outlineView:(id)arg1 child:(long long)arg2 ofItem:(id)arg3;
- (BOOL)outlineView:(id)arg1 isItemExpandable:(id)arg2;
- (long long)outlineView:(id)arg1 numberOfChildrenOfItem:(id)arg2;
- (void)policyDidChange:(id)arg1;
- (void)defaultPolicyDidChange:(id)arg1;
- (void)clear:(id)arg1;
- (void)viewWillDisappear;
- (void)viewWillAppear;
- (void)awakeFromNib;
- (void)updateViewForHostPolicy:(id)arg1;
- (void)updateClearButtonState;
- (void)updatePolicyEmptyState;
- (void)setUpPoliciesAndDates;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

