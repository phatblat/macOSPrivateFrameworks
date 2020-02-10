//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UXViewController.h"

#import "NSTextFieldDelegate.h"

@class KHFrame, KHTextView, NSImageView, NSMutableDictionary, NSSlider, NSString, NSTextField;

@interface KHTextSpacingController : UXViewController <NSTextFieldDelegate>
{
    KHFrame *_frame;
    NSTextField *_trackingValue;
    NSTextField *_lineHeightValue;
    NSSlider *_trackingSlider;
    NSSlider *_lineHeightSlider;
    NSImageView *_trackingImage;
    NSImageView *_lineHeightImage;
    double _tracking;
    double _leading;
    KHTextView *_textView;
    NSMutableDictionary *_attributes;
}

@property(retain) NSMutableDictionary *attributes; // @synthesize attributes=_attributes;
@property(retain) KHTextView *textView; // @synthesize textView=_textView;
@property(nonatomic) double leading; // @synthesize leading=_leading;
@property(nonatomic) double tracking; // @synthesize tracking=_tracking;
@property(retain) NSImageView *lineHeightImage; // @synthesize lineHeightImage=_lineHeightImage;
@property(retain) NSImageView *trackingImage; // @synthesize trackingImage=_trackingImage;
@property(retain) NSSlider *lineHeightSlider; // @synthesize lineHeightSlider=_lineHeightSlider;
@property(retain) NSSlider *trackingSlider; // @synthesize trackingSlider=_trackingSlider;
@property(retain) NSTextField *lineHeightValue; // @synthesize lineHeightValue=_lineHeightValue;
@property(retain) NSTextField *trackingValue; // @synthesize trackingValue=_trackingValue;
@property(retain) KHFrame *frame; // @synthesize frame=_frame;
- (void).cxx_destruct;
- (double)sliderValueFromLineSpacingValue:(double)arg1;
- (double)lineSpacingValueFromSliderValue:(double)arg1;
- (double)sliderValueFromTrackingValue:(double)arg1;
- (double)trackingValueFromSliderValue:(double)arg1;
- (double)snappedValueForSlider:(id)arg1;
- (BOOL)control:(id)arg1 textShouldEndEditing:(id)arg2;
- (void)leadingSliderAction:(id)arg1;
- (void)trackingSliderAction:(id)arg1;
- (void)populateControls;
- (void)setupDefaultLabelAttributes:(id)arg1 title:(id)arg2;
- (void)loadView;
- (id)initWithTextView:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
