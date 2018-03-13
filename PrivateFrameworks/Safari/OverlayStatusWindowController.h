//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSWindowController.h"

@class NSLayoutConstraint, NSTimer, NSTrackingArea, NSView, StatusMessage, TextFieldWithVibrancy;

__attribute__((visibility("hidden")))
@interface OverlayStatusWindowController : NSWindowController
{
    NSView *_parentContentView;
    TextFieldWithVibrancy *_mainTextField;
    NSLayoutConstraint *_maximumWidthConstraint;
    unsigned long long _pendingShowAnimations;
    NSTrackingArea *_mouseTrackingArea;
    BOOL _suppressUpdatingPlacement;
    long long _lastStatusPlacement;
    NSTimer *_clearStatusBarIsOnStatusTimer;
    StatusMessage *_statusMessage;
    id <OverlayStatusWindowDelegate> _delegate;
}

@property(nonatomic) __weak id <OverlayStatusWindowDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_hideFromParentWindowAfterDelay;
- (void)_cancelDelayBeforeStartingHideAnimation;
- (void)_hideFromParentWindow;
- (void)_showInParentWindow;
- (void)mouseMoved:(id)arg1;
- (void)_parentWindowDidResize:(id)arg1;
- (BOOL)_shouldAnchorStatusBarToLeftForPlacement:(long long)arg1;
- (double)_maximumContentWidthForPlacement:(long long)arg1;
- (struct CGRect)_rectWithinWhichMouseMayOccludeStatusInScreenCoordinates;
- (void)_updateMetrics;
- (void)clearStatus;
- (id)_statusBarIsOnStatusMessage;
- (void)_clearStatusBarIsOnTimerFired:(id)arg1;
- (void)displayStatusBarIsOnMessage;
- (id)_attributedStringForStatusMessage:(id)arg1;
- (void)setStatusMessage:(id)arg1;
- (void)_createMainTextField;
- (void)dealloc;
- (id)init;

@end

