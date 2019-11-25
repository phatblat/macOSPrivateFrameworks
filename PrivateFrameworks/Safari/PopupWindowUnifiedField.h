//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Safari/UnifiedField.h>

__attribute__((visibility("hidden")))
@interface PopupWindowUnifiedField : UnifiedField
{
}

+ (double)mediaIndicatorYOffset;
+ (double)urlTextYOffset;
- (void)_windowChangedKeyState;
- (void)setNeedsDisplay:(BOOL)arg1;
- (BOOL)_shouldShowAlternativeStaticURLForAboutBlank;
- (long long)_muteButtonStateForAudioIndicator;
- (id)_mediaCaptureIndicatorWithColor:(id)arg1;
- (BOOL)willHandleMouseDraggedEvent:(id)arg1;
- (BOOL)allowsVibrancy;
- (BOOL)mouseDownCanMoveWindow;
- (id)contextMenuForEvent:(id)arg1;
- (long long)staticTextFieldLineBreakStyle;
- (id)pageStatusStringColor;
- (void)setBrowsingMode:(unsigned long long)arg1;
- (id)lockButtonColor;
- (id)evCertificateTextColorForPrivateWindow;
- (id)evCertificateTextColor;
- (id)deemphasizedTextColor;
- (double)mainContentViewTrailingMarginWithLeadingMargin:(double)arg1;
- (void)_commonInitialization;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithCoder:(id)arg1;

@end

