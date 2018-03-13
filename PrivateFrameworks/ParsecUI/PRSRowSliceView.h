//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSView.h"

@class NSColor, NSFont, NSImage, NSString, NSURL, PRSAppearanceTextField, PRSImageView, PRSLinkButton;

@interface PRSRowSliceView : NSView
{
    BOOL _clickable;
    NSImage *_attributionImage;
    NSURL *_attributionURL;
    PRSAppearanceTextField *_leadingTextField;
    PRSAppearanceTextField *_trailingTextField;
    PRSImageView *_trailingImageView;
    PRSLinkButton *_attributionButton;
}

@property PRSLinkButton *attributionButton; // @synthesize attributionButton=_attributionButton;
@property PRSImageView *trailingImageView; // @synthesize trailingImageView=_trailingImageView;
@property PRSAppearanceTextField *trailingTextField; // @synthesize trailingTextField=_trailingTextField;
@property PRSAppearanceTextField *leadingTextField; // @synthesize leadingTextField=_leadingTextField;
@property(nonatomic) BOOL clickable; // @synthesize clickable=_clickable;
@property(retain, nonatomic) NSURL *attributionURL; // @synthesize attributionURL=_attributionURL;
@property(retain, nonatomic) NSImage *attributionImage; // @synthesize attributionImage=_attributionImage;
- (void).cxx_destruct;
- (void)_setNoWrap:(BOOL)arg1 forTextField:(id)arg2;
- (BOOL)_getNoWrapForTextField:(id)arg1;
@property(retain, nonatomic) NSImage *trailingImage;
@property(nonatomic) BOOL trailingNoWrap;
@property(retain, nonatomic) NSColor *trailingTextColor;
@property(retain, nonatomic) NSFont *trailingFont;
@property(retain, nonatomic) NSString *trailingString;
@property(nonatomic) BOOL leadingNoWrap;
@property(retain, nonatomic) NSColor *leadingTextColor;
@property(retain, nonatomic) NSFont *leadingFont;
@property(retain, nonatomic) NSString *leadingString;
- (BOOL)accessibilityPerformPress;
- (BOOL)isAccessibilityElement;
- (BOOL)allowsVibrancy;
- (void)updateTrackingAreas;
- (void)cursorUpdate:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

