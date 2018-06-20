//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Safari/ExtensionBuilderIndexedItemViewController.h>

#import "ExtensionBuilderSettingItemDetailsViewControllerDelegate.h"

@class ExtensionBuilderSettingItemDetailsViewController, NSButton, NSDictionary, NSLayoutConstraint, NSPopUpButton, NSString, NSTextField, NSView;

__attribute__((visibility("hidden")))
@interface ExtensionBuilderSettingItemViewController : ExtensionBuilderIndexedItemViewController <ExtensionBuilderSettingItemDetailsViewControllerDelegate>
{
    ExtensionBuilderSettingItemDetailsViewController *_itemDetailsViewController;
    NSLayoutConstraint *_typePopUpLabelToLayoutGuideLeadingConstraint;
    NSLayoutConstraint *_typePopUpLabelToLayoutGuideTrailingConstraint;
    NSLayoutConstraint *_typePopUpLabelToFirstItemDetailLabelLeadingConstraint;
    NSLayoutConstraint *_typePopUpLabelToFirstItemDetailLabelTrailingConstraint;
    BOOL _shouldIgnoreRepresentedObjectDidChange;
    NSButton *_deleteButton;
    NSTextField *_typePopUpLabel;
    NSPopUpButton *_typePopUpButton;
    NSView *_itemDetailsContainerView;
}

+ (id)keyPathsForValuesAffectingTagOfSettingTypeMenuItem;
+ (id)keyPathsForValuesAffectingSettingItemName;
@property(nonatomic) __weak NSView *itemDetailsContainerView; // @synthesize itemDetailsContainerView=_itemDetailsContainerView;
@property(nonatomic) __weak NSPopUpButton *typePopUpButton; // @synthesize typePopUpButton=_typePopUpButton;
@property(nonatomic) __weak NSTextField *typePopUpLabel; // @synthesize typePopUpLabel=_typePopUpLabel;
@property(nonatomic) __weak NSButton *deleteButton; // @synthesize deleteButton=_deleteButton;
- (void).cxx_destruct;
- (void)extensionBuilderSettingItemDetailsViewController:(id)arg1 setItem:(id)arg2;
- (void)_representedObjectDidChange;
- (id)initialFirstResponder;
- (id)lastKeyView;
- (id)firstKeyView;
- (void)setBackgroundColor:(id)arg1;
- (id)nibName;
@property(nonatomic) long long tagOfSettingTypeMenuItem;
@property(readonly, nonatomic) NSString *settingItemName;
@property(retain) NSDictionary *representedObject; // @dynamic representedObject;
- (void)_updateItemDetails;
- (void)_updateKeyViewLoop;
- (Class)_itemDetailsViewControllerClass;
- (void)_addConstraintsToFirstItemDetailLabel;
- (void)addConstraintsForTypePopUpLabelUsingLayoutGuide:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

