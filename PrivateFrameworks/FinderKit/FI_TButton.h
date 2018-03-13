//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSButton.h"

@class NSColor;

__attribute__((visibility("hidden")))
@interface FI_TButton : NSButton
{
    struct TNSRef<NSColor *, void> _titleColor;
    struct CGSize _maxSize;
    struct CGSize _minSize;
    BOOL _acceptsFirstMouse;
    struct TriStateBool _isEnabledCacheWhenNotKey;
    _Bool _isInsideWindowChangedKeyState;
    struct TNSRef<FI_TTargetActionFunctor *, void> _action;
}

+ (Class)cellClass;
@property(nonatomic) struct CGSize minSize; // @synthesize minSize=_minSize;
@property(nonatomic) struct CGSize maxSize; // @synthesize maxSize=_maxSize;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)setAccessibilityElement:(BOOL)arg1;
- (void)_windowChangedKeyState;
- (void)setEnabled:(BOOL)arg1;
- (void)setBoundsSize:(struct CGSize)arg1;
- (void)setFrameSize:(struct CGSize)arg1;
- (unsigned long long)controlSize;
- (void)setControlSize:(unsigned long long)arg1;
- (id)copyButton;
- (BOOL)acceptsFirstMouse:(id)arg1;
@property BOOL acceptsFirstMouse; // @dynamic acceptsFirstMouse;
- (void)setAttributedTitle:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)setObjectValue:(id)arg1;
@property(retain, nonatomic) NSColor *titleColor;
- (void)updateTitleColor;
- (void)setActionWithValidator:(long long)arg1 action:(const function_b1fce659 *)arg2;
- (void)setButtonAction:(const function_b1fce659 *)arg1;
- (void)awakeCommon;
- (void)initCommon;
- (void)awakeFromNib;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

