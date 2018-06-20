//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSPopUpButton.h"

__attribute__((visibility("hidden")))
@interface FI_TPopUpButton : NSPopUpButton
{
    BOOL _acceptsFirstMouse;
    struct TriStateBool _isEnabledCacheWhenNotKey;
    _Bool _isInsideWindowChangedKeyState;
    double _widthPadding;
}

@property(nonatomic) double widthPadding; // @synthesize widthPadding=_widthPadding;
@property BOOL acceptsFirstMouse; // @synthesize acceptsFirstMouse=_acceptsFirstMouse;
- (id).cxx_construct;
- (struct CGSize)intrinsicContentSize;
- (void)_windowChangedKeyState;
- (void)setEnabled:(BOOL)arg1;
- (BOOL)acceptsFirstMouse:(id)arg1;
- (id)description;
- (void)awakeCommon;
- (void)initCommon;
- (void)awakeFromNib;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

