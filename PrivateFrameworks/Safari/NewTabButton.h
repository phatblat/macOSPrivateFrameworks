//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSButton.h"

#import "ButtonInTabSyncGroup.h"
#import "NSDraggingDestination.h"
#import "NSMenuDelegate.h"

@class BackgroundColorView, CALayer, NSColor, NSString, NSTitlebarSeparatorView, NSTrackingArea;

__attribute__((visibility("hidden")))
@interface NewTabButton : NSButton <NSMenuDelegate, NSDraggingDestination, ButtonInTabSyncGroup>
{
    NSTrackingArea *_trackingArea;
    NSColor *_backgroundColor;
    NSTitlebarSeparatorView *_topBorderView;
    BackgroundColorView *_leadingBorderView;
    CALayer *_backgroundLayer;
    BOOL _mouseIsOverButton;
    BOOL _syncedWithOtherButton;
    BOOL _forcesActiveWindowState;
    id <ButtonInTabSyncGroupDelegate> _buttonInTabSyncGroupDelegate;
}

+ (double)width;
+ (id)installNewTabButtonInView:(id)arg1;
+ (void)initialize;
@property(nonatomic) BOOL forcesActiveWindowState; // @synthesize forcesActiveWindowState=_forcesActiveWindowState;
@property(nonatomic, getter=isSyncedWithOtherButton) BOOL syncedWithOtherButton; // @synthesize syncedWithOtherButton=_syncedWithOtherButton;
@property(nonatomic) __weak id <ButtonInTabSyncGroupDelegate> buttonInTabSyncGroupDelegate; // @synthesize buttonInTabSyncGroupDelegate=_buttonInTabSyncGroupDelegate;
- (void).cxx_destruct;
- (void)setHighlightStateToPressed:(BOOL)arg1 hovered:(BOOL)arg2;
- (unsigned long long)_draggedURLOperationForDraggingInfo:(id)arg1;
- (void)concludeDragOperation:(id)arg1;
- (BOOL)performDragOperation:(id)arg1;
- (unsigned long long)draggingEntered:(id)arg1;
- (BOOL)_windowIsActive;
- (void)_windowChangedKeyState;
- (id)_topBorderDefaultColor;
- (id)_leadingBorderDefaultColor;
- (id)_backgroundDefaultColor;
- (void)_updateButtonColors;
- (void)awakeFromNib;
- (void)mouseExited:(id)arg1;
- (void)mouseEntered:(id)arg1;
- (void)mouseDown:(id)arg1;
- (struct CGSize)intrinsicContentSize;
- (void)layout;
- (void)_finishInitialization;
- (void)menuDidClose:(id)arg1;
- (void)menuWillOpen:(id)arg1;
- (void)_setLeadingBorderColor:(id)arg1 topBorderColor:(id)arg2 withAnimation:(id)arg3;
- (void)_setBackgroundColor:(id)arg1 withAnimation:(id)arg2;
- (void)_updateButtonHighlightWhenPressed:(BOOL)arg1 hovered:(BOOL)arg2 notifyButtonInTabSyncGroupDelegate:(BOOL)arg3;
- (void)_updateButtonHighlightWhenPressed:(BOOL)arg1 hovered:(BOOL)arg2;
- (void)drawRect:(struct CGRect)arg1;
- (BOOL)allowsVibrancy;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)init;
- (id)menuForEvent:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
