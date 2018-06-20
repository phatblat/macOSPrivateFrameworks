//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <AnnotationKit/AKTextAttributesViewController.h>

@class NSButton, NSSlider, NSStackView;

@interface AKDFRTextAttributesViewController : AKTextAttributesViewController
{
    NSStackView *_stackView;
    NSStackView *_textStyleView;
    NSButton *_boldButton;
    NSButton *_italicsButton;
    NSButton *_underlineButton;
    NSSlider *_fontSizeSlider;
}

@property(retain) NSSlider *fontSizeSlider; // @synthesize fontSizeSlider=_fontSizeSlider;
@property(retain) NSButton *underlineButton; // @synthesize underlineButton=_underlineButton;
@property(retain) NSButton *italicsButton; // @synthesize italicsButton=_italicsButton;
@property(retain) NSButton *boldButton; // @synthesize boldButton=_boldButton;
@property(retain) NSStackView *textStyleView; // @synthesize textStyleView=_textStyleView;
@property(retain) NSStackView *stackView; // @synthesize stackView=_stackView;
- (void).cxx_destruct;
- (void)textStyleAction:(id)arg1;
- (void)fontSizeControlAction:(id)arg1;
- (void)syncFontsToUI:(id)arg1;
- (void)setUnderlineSelected:(BOOL)arg1;
- (void)setItalicsSelected:(BOOL)arg1;
- (void)setItalicsEnabled:(BOOL)arg1;
- (void)setBoldSelected:(BOOL)arg1;
- (void)setBoldEnabled:(BOOL)arg1;
- (BOOL)isItalicsUIEnabled;
- (BOOL)isBoldUIEnabled;
- (void)viewDidLoad;
- (id)initWithController:(id)arg1;

@end

