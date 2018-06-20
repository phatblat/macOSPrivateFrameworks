//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <FinderKit/FI_TButton.h>

@class FI_TInlineProgressView;

__attribute__((visibility("hidden")))
@interface FI_TMouseOverButton : FI_TButton
{
    int _mouseState;
    function_14166bfe _imageForStateGetter;
    struct TNSRef<NSTrackingArea, void> _trackingArea;
    struct vector<TNotificationCenterObserver, std::__1::allocator<TNotificationCenterObserver>> _observers;
    struct TNSRef<FI_TInlineProgressView, void> _progressView;
}

@property(nonatomic) int mouseState; // @synthesize mouseState=_mouseState;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)setHidden:(BOOL)arg1;
- (void)windowDidResignKey;
- (void)windowDidBecomeKey;
- (void)mouseExited:(id)arg1;
- (void)mouseEntered:(id)arg1;
- (void)updateForMouseOut;
- (void)updateForMouseOver;
- (void)mouseUp:(id)arg1;
- (void)mouseDown:(id)arg1;
- (void)setImageForStateGetter:(const function_14166bfe *)arg1;
- (void)updateImage;
- (void)updateTrackingAreas;
- (void)initTracking;
- (void)aboutToTearDown;
- (void)layout;
- (void)viewWillMoveToWindow:(id)arg1;
@property(readonly) FI_TInlineProgressView *progressView; // @dynamic progressView;
- (void)updateProgressViewColor;
- (void)removeProgressViewIfNeeded;
- (void)addProgressViewIfNeeded;
- (void)initCommon;

@end

