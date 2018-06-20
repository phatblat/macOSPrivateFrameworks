//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSTokenField.h"

#import "CalUIAutocompletingField.h"

@class EKUIGadget, NSColor, NSString;

@interface EKUITokenField : NSTokenField <CalUIAutocompletingField>
{
    BOOL _isExpanded;
    BOOL _isInsideExpandableContainer;
    EKUIGadget *_gadget;
    NSColor *_tokenTextColor;
    struct CGSize _intrinsicContentSize;
}

+ (Class)cellClass;
@property BOOL isInsideExpandableContainer; // @synthesize isInsideExpandableContainer=_isInsideExpandableContainer;
@property BOOL isExpanded; // @synthesize isExpanded=_isExpanded;
@property struct CGSize intrinsicContentSize; // @synthesize intrinsicContentSize=_intrinsicContentSize;
@property(retain) NSColor *tokenTextColor; // @synthesize tokenTextColor=_tokenTextColor;
@property __weak EKUIGadget *gadget; // @synthesize gadget=_gadget;
- (void).cxx_destruct;
- (void)setCalUITextFieldDelegate:(id)arg1;
- (void)effectiveAppearanceDidChange;
- (void)setObjectValue:(id)arg1;
- (id)objectValueAsArray;
- (void)setFrameSize:(struct CGSize)arg1;
- (BOOL)becomeFirstResponder;
- (id)hitTest:(struct CGPoint)arg1;
- (BOOL)canBecomeKeyView;
- (BOOL)acceptsFirstResponder;
- (BOOL)allowsVibrancy;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

