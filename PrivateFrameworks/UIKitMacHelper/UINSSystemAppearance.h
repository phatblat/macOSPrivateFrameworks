//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "UINSSystemAppearance.h"

__attribute__((visibility("hidden")))
@interface UINSSystemAppearance : NSObject <UINSSystemAppearance>
{
    BOOL _hasDarkWindowChrome;
    BOOL _accessibilityDisplayShouldIncreaseContrast;
    BOOL _accessibilityDisplayShouldReduceMotion;
    BOOL _accessibilityDisplayShouldInvertColors;
    BOOL _accessibilityDisplayShouldReduceTransparency;
    BOOL _accessibilityDisplayShouldUseGrayscale;
    BOOL _accessibilityDisplayShouldDifferentiateWithoutColor;
    BOOL _accessibilityIsVoiceOverEnabled;
    BOOL _accessibilityIsSwitchControlEnabled;
    BOOL _accessibilityIsZoomEnabled;
    id _encodedTextHighlightColor;
    id _encodedDarkTextHighlightColor;
    id _encodedUnemphasizedTextHighlightColor;
    id _encodedDarkUnemphasizedTextHighlightColor;
    id _encodedTableHighlightColor;
    id _encodedDarkTableHighlightColor;
    id _encodedSelectionMaterialTintColor;
    id _encodedDarkSelectionMaterialTintColor;
    id _encodedKeyboardFocusIndicatorColor;
    id _encodedDarkKeyboardFocusIndicatorColor;
}

@property(readonly, nonatomic) BOOL accessibilityIsZoomEnabled; // @synthesize accessibilityIsZoomEnabled=_accessibilityIsZoomEnabled;
@property(readonly, nonatomic) BOOL accessibilityIsSwitchControlEnabled; // @synthesize accessibilityIsSwitchControlEnabled=_accessibilityIsSwitchControlEnabled;
@property(readonly, nonatomic) BOOL accessibilityIsVoiceOverEnabled; // @synthesize accessibilityIsVoiceOverEnabled=_accessibilityIsVoiceOverEnabled;
@property(readonly, nonatomic) BOOL accessibilityDisplayShouldDifferentiateWithoutColor; // @synthesize accessibilityDisplayShouldDifferentiateWithoutColor=_accessibilityDisplayShouldDifferentiateWithoutColor;
@property(readonly, nonatomic) BOOL accessibilityDisplayShouldUseGrayscale; // @synthesize accessibilityDisplayShouldUseGrayscale=_accessibilityDisplayShouldUseGrayscale;
@property(readonly, nonatomic) BOOL accessibilityDisplayShouldReduceTransparency; // @synthesize accessibilityDisplayShouldReduceTransparency=_accessibilityDisplayShouldReduceTransparency;
@property(readonly, nonatomic) BOOL accessibilityDisplayShouldInvertColors; // @synthesize accessibilityDisplayShouldInvertColors=_accessibilityDisplayShouldInvertColors;
@property(readonly, nonatomic) BOOL accessibilityDisplayShouldReduceMotion; // @synthesize accessibilityDisplayShouldReduceMotion=_accessibilityDisplayShouldReduceMotion;
@property(readonly, nonatomic) BOOL accessibilityDisplayShouldIncreaseContrast; // @synthesize accessibilityDisplayShouldIncreaseContrast=_accessibilityDisplayShouldIncreaseContrast;
@property(readonly, nonatomic) BOOL hasDarkWindowChrome; // @synthesize hasDarkWindowChrome=_hasDarkWindowChrome;
@property(readonly, nonatomic) id encodedDarkKeyboardFocusIndicatorColor; // @synthesize encodedDarkKeyboardFocusIndicatorColor=_encodedDarkKeyboardFocusIndicatorColor;
@property(readonly, nonatomic) id encodedKeyboardFocusIndicatorColor; // @synthesize encodedKeyboardFocusIndicatorColor=_encodedKeyboardFocusIndicatorColor;
@property(readonly, nonatomic) id encodedDarkSelectionMaterialTintColor; // @synthesize encodedDarkSelectionMaterialTintColor=_encodedDarkSelectionMaterialTintColor;
@property(readonly, nonatomic) id encodedSelectionMaterialTintColor; // @synthesize encodedSelectionMaterialTintColor=_encodedSelectionMaterialTintColor;
@property(readonly, nonatomic) id encodedDarkTableHighlightColor; // @synthesize encodedDarkTableHighlightColor=_encodedDarkTableHighlightColor;
@property(readonly, nonatomic) id encodedTableHighlightColor; // @synthesize encodedTableHighlightColor=_encodedTableHighlightColor;
@property(readonly, nonatomic) id encodedDarkUnemphasizedTextHighlightColor; // @synthesize encodedDarkUnemphasizedTextHighlightColor=_encodedDarkUnemphasizedTextHighlightColor;
@property(readonly, nonatomic) id encodedUnemphasizedTextHighlightColor; // @synthesize encodedUnemphasizedTextHighlightColor=_encodedUnemphasizedTextHighlightColor;
@property(readonly, nonatomic) id encodedDarkTextHighlightColor; // @synthesize encodedDarkTextHighlightColor=_encodedDarkTextHighlightColor;
@property(readonly, nonatomic) id encodedTextHighlightColor; // @synthesize encodedTextHighlightColor=_encodedTextHighlightColor;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
@property(readonly, nonatomic) unsigned long long scrollBarClickBehavior;
@property(readonly, nonatomic) unsigned long long scrollerStyle;
- (id)init;

@end
