//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "AXVCaptionWindowActionDelegate.h"
#import "NSWindowDelegate.h"

@class AXVCaptionWindow, NSString;

__attribute__((visibility("hidden")))
@interface SCRVisualsCaptionWindow : NSObject <AXVCaptionWindowActionDelegate, NSWindowDelegate>
{
    BOOL _temporarilyHidden;
    BOOL _temporarilyCenteredAtBottomOfScreen;
    BOOL __enabled;
    AXVCaptionWindow *__captionWindow;
}

@property(nonatomic, setter=_setEnabled:) BOOL _enabled; // @synthesize _enabled=__enabled;
@property(retain, nonatomic, setter=_setCaptionWindow:) AXVCaptionWindow *_captionWindow; // @synthesize _captionWindow=__captionWindow;
@property(nonatomic) BOOL temporarilyCenteredAtBottomOfScreen; // @synthesize temporarilyCenteredAtBottomOfScreen=_temporarilyCenteredAtBottomOfScreen;
@property(nonatomic) BOOL temporarilyHidden; // @synthesize temporarilyHidden=_temporarilyHidden;
- (void).cxx_destruct;
- (struct CGRect)_savedWindowFrame;
- (void)_loadSavedWindowFrame;
- (void)_windowFrameChanged;
- (void)windowDidEndLiveResize:(id)arg1;
- (void)windowDidMove:(id)arg1;
- (void)closeButtonPressedForCaptionWindow:(id)arg1;
- (void)_preferencesChangedForKeyPath:(id)arg1 value:(id)arg2;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)setEnabledAndAnnounceChange:(BOOL)arg1;
- (struct CGPoint)_originToCenterRectInMainWindow:(struct CGRect)arg1;
- (void)showCaptionWindow;
- (void)_captionWindowNeedsDisplay;
- (void)setCaptionFontSize:(double)arg1;
@property(copy, nonatomic) NSString *captionText;
@property(nonatomic) BOOL enabled;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

