//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <AssistiveControlSupport/ACSHPanelElementView.h>

@class ACSHPanelButton, ACSHTextField, CATextLayer, NSColor, NSImage, NSNumber, NSString, NSView;

@interface ACSHPanelButtonView : ACSHPanelElementView
{
    BOOL _depressed;
    BOOL _locked;
    BOOL _toggleOn;
    BOOL __hasExtraRect;
    ACSHPanelButton *_button;
    NSColor *_displayColor;
    unsigned long long _textDisplayPosition;
    NSView *__textViewsContainerView;
    NSView *__backgroundView;
    NSView *__imageView;
    ACSHTextField *__primaryTextView;
    ACSHTextField *__secondaryTextView;
    CATextLayer *__textLayer;
    NSImage *__displayImage;
    NSString *__accessibilityTitle;
    NSString *__currentBackgroundResourceName;
    double __currentBackgroundScaleFactor;
    struct CGSize __extraRectRatio;
    struct CGRect __currentBackgroundRect;
    struct CGRect __currentBackgroundExtraRect;
}

+ (id)_descriptionForPanelButtonViewState:(unsigned long long)arg1;
+ (void)initialize;
@property(nonatomic) double _currentBackgroundScaleFactor; // @synthesize _currentBackgroundScaleFactor=__currentBackgroundScaleFactor;
@property(nonatomic) struct CGRect _currentBackgroundExtraRect; // @synthesize _currentBackgroundExtraRect=__currentBackgroundExtraRect;
@property(nonatomic) struct CGRect _currentBackgroundRect; // @synthesize _currentBackgroundRect=__currentBackgroundRect;
@property(retain, nonatomic) NSString *_currentBackgroundResourceName; // @synthesize _currentBackgroundResourceName=__currentBackgroundResourceName;
@property(copy) NSString *_accessibilityTitle; // @synthesize _accessibilityTitle=__accessibilityTitle;
@property(nonatomic) struct CGSize _extraRectRatio; // @synthesize _extraRectRatio=__extraRectRatio;
@property(nonatomic) BOOL _hasExtraRect; // @synthesize _hasExtraRect=__hasExtraRect;
@property(retain, getter=_displayImage, setter=_setDisplayImage:) NSImage *_displayImage; // @synthesize _displayImage=__displayImage;
@property(retain) CATextLayer *_textLayer; // @synthesize _textLayer=__textLayer;
@property(retain, nonatomic) ACSHTextField *_secondaryTextView; // @synthesize _secondaryTextView=__secondaryTextView;
@property(retain, nonatomic) ACSHTextField *_primaryTextView; // @synthesize _primaryTextView=__primaryTextView;
@property(retain) NSView *_imageView; // @synthesize _imageView=__imageView;
@property(retain) NSView *_backgroundView; // @synthesize _backgroundView=__backgroundView;
@property(retain) NSView *_textViewsContainerView; // @synthesize _textViewsContainerView=__textViewsContainerView;
@property(nonatomic) unsigned long long textDisplayPosition; // @synthesize textDisplayPosition=_textDisplayPosition;
@property(retain, nonatomic) NSColor *displayColor; // @synthesize displayColor=_displayColor;
@property(nonatomic) BOOL toggleOn; // @synthesize toggleOn=_toggleOn;
@property(nonatomic) BOOL locked; // @synthesize locked=_locked;
@property(nonatomic) BOOL depressed; // @synthesize depressed=_depressed;
@property(nonatomic) __weak ACSHPanelButton *button; // @synthesize button=_button;
- (void).cxx_destruct;
- (id)accessibilityAttributeValue:(id)arg1;
- (void)accessibilitySetValue:(id)arg1 forAttribute:(id)arg2;
- (BOOL)accessibilityIsAttributeSettable:(id)arg1;
- (id)accessibilityAttributeNames;
- (BOOL)accessibilityIsIgnored;
- (id)_accessibilityDescription;
- (id)_currentAccessibilityTitle;
- (void)_updateAccessibilityTitle;
@property(readonly, nonatomic) NSNumber *_accessibilityValue;
- (void)_accessibilityValueChanged;
@property(readonly, nonatomic) NSString *_accessibilityValueDescription;
- (id)view:(id)arg1 stringForToolTip:(long long)arg2 point:(struct CGPoint)arg3 userData:(void *)arg4;
@property(readonly) NSString *_currentToolTip;
- (void)_updateToolTip;
- (void)setSelected:(BOOL)arg1;
- (void)setSemiHighlighted:(BOOL)arg1;
- (void)setHighlighted:(BOOL)arg1;
- (void)_panelButtonViewStateChanged;
@property(readonly, nonatomic) unsigned long long _panelButtonViewState;
- (void)resetLook;
- (void)clearImageCache;
- (id)description;
- (void)resizeSubviewsWithOldSize:(struct CGSize)arg1;
- (void)_updateFrames;
- (void)updateLayer;
- (BOOL)wantsUpdateLayer;
- (void)viewWillDraw;
- (id)snapshotFromRect:(struct CGRect)arg1;
- (id)hitTest:(struct CGPoint)arg1;
- (void)mouseExited:(id)arg1;
- (void)mouseEntered:(id)arg1;
- (void)inputMethodWasUpdated;
- (void)_updateDisplayTextPosition;
- (void)_updateDisplayColor;
- (void)_updateDisplayImage;
- (void)_updateButtonBackground;
- (id)_validateDisplayText:(id)arg1;
- (struct CGSize)sizeForFittingDisplayText;
- (void)_updateDisplayText;
- (id)_foregroundColorForTextColorAttribute:(unsigned long long)arg1 textNotImage:(BOOL)arg2;
@property(readonly, nonatomic) BOOL _shouldDisplaySecondaryKeyText;
- (id)_textFontForText:(id)arg1 baseFontSize:(double)arg2 frame:(struct CGRect)arg3;
@property(retain, nonatomic) NSImage *displayImage; // @dynamic displayImage;
- (id)imageIdentifierToDisplayReturningFunctionKey:(char *)arg1;
- (BOOL)supportsResizeHandleDrawing;
- (void)viewDidMoveToWindow;
- (void)setPanelElement:(id)arg1 animated:(BOOL)arg2;
- (BOOL)performDragOperation:(id)arg1;
- (BOOL)setImage:(id)arg1 name:(id)arg2;
- (unsigned long long)draggingEntered:(id)arg1;
- (void)initView;
- (struct CGRect)resizeHandleRect;
@property(readonly, nonatomic) struct CGRect _buttonBackgroundFrame;
@property(readonly, nonatomic) struct CGRect _insetTextFrame;
@property(readonly, nonatomic) double _baseTextFrameInset;
@property(readonly, nonatomic) struct CGRect _textFrameForDrawing;
@property(readonly, nonatomic) struct CGRect _imageFrame;
@property(readonly, nonatomic) BOOL _hasCustomTextFrame;
@property(readonly, nonatomic) BOOL _shouldShowTextLabel;
@property(readonly, nonatomic) double _scaleFactorToDrawAt;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)clearAndUpdateDisplayImage;
- (struct CGImage *)_copyImageForResource:(id)arg1;
- (struct CGImage *)_copyImageForResource:(id)arg1 rect:(struct CGRect)arg2 extraRect:(struct CGRect)arg3;

@end

