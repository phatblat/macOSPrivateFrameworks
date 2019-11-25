//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray;

@interface VTUIStyle : NSObject
{
    NSArray *_deviceStringSuffixes;
    NSArray *_deviceImageSuffixes;
    BOOL _isIpad;
    BOOL _isLargeIpad;
    BOOL _needMoreLineSpacing;
    BOOL _isBuddy;
    BOOL _isHeySiriAlwaysOn;
    long long _enrollmentMode;
}

+ (id)sharedStyle;
@property(nonatomic) BOOL isHeySiriAlwaysOn; // @synthesize isHeySiriAlwaysOn=_isHeySiriAlwaysOn;
@property(nonatomic) BOOL isBuddy; // @synthesize isBuddy=_isBuddy;
@property(nonatomic) long long enrollmentMode; // @synthesize enrollmentMode=_enrollmentMode;
- (void).cxx_destruct;
- (id)deviceSetupImage;
- (id)deviceDoneImage;
- (id)_deviceImageForBaseImageName:(id)arg1;
- (id)deviceSpecificString:(id)arg1;
- (double)radarBtnHorizontalPadding;
- (double)radarBtnVerticalPadding;
- (double)turnOnSiriContinueButtonHeight;
- (double)turnOnSiriContinueButtonWidth;
- (id)turnOnSiriContinueButtonFont;
- (double)turnOnSiriImageOffsetFromTopLandscape;
- (double)turnOnSiriImageOffsetFromTopPortrait;
- (double)turnOnSiriImageOffsetFromTop;
- (double)turnOnSiriHorizontalPaddingLandscape;
- (double)turnOnSiriHorizontalPaddingPortrait;
- (double)turnOnSiriHorizontalPadding;
- (BOOL)shouldShowFooterLine;
- (id)footerTextColor;
- (id)footerButtonFont;
- (double)footerHorizontalPadding;
- (id)footerLabelFont;
- (double)footerLabelLineHeight;
- (double)footerSkipButtonBaselineFromBottom;
- (double)footerSkipButtonBaselineFromContinueButton;
- (double)footerContinueButtonMinBaselineFromText;
- (double)footerTextBaselineFromTop;
- (BOOL)footerShouldPinToImage;
- (double)tickMarkHorizontalSizeRatio;
- (double)skipButtonBaselineBottomMargin;
- (double)statusLabelVerticalOffsetFromCenter;
- (double)statusLabelMinHeight;
- (double)instructionOffsetFromBottom;
- (double)flamesHeight;
- (double)headerTitleLinespacing;
- (double)horizontalPadding;
- (double)imageViewBottomOffsetFromFooter;
- (double)imageViewTopOffset;
- (double)continueButtonBaselineOffset;
- (double)subtitleBaselineOffset;
- (double)titleBaselineOffsetFromTop;
- (double)subtitleLineHeight;
- (id)buttonTextColor;
- (id)statusColor;
- (id)statusFont;
- (id)instructionColor;
- (id)instructionFont;
- (id)subtitleFont;
- (id)titleFont;
- (void)orientationChanged:(id)arg1;
- (id)init;

@end

