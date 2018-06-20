//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSViewController.h"

@class NSBox, NSColor, NSTextField, NSView;

__attribute__((visibility("hidden")))
@interface ExtensionBuilderIndexedItemViewController : NSViewController
{
    id <ExtensionBuilderIndexedItemViewControllerDelegate> _delegate;
    NSTextField *_itemLabelTextField;
}

+ (id)setWithRepresentedObjectKeyPath;
@property(retain, nonatomic) NSTextField *itemLabelTextField; // @synthesize itemLabelTextField=_itemLabelTextField;
@property(nonatomic) __weak id <ExtensionBuilderIndexedItemViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSView *initialFirstResponder;
@property(readonly, nonatomic) NSView *lastKeyView;
@property(readonly, nonatomic) NSView *firstKeyView;
@property(retain, nonatomic) NSColor *backgroundColor;
@property(retain, nonatomic) NSBox *view; // @dynamic view;
- (void)setRepresentedObject:(id)arg1;
- (id)nibName;
- (void)_removeItem:(id)arg1;
- (void)_representedObjectDidChange;
- (void)refreshFileMenus;

@end

