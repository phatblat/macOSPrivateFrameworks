//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSViewController.h"

@class NSArray, NSColor, OBBundle, OBPrivacyFlow;

@interface OBPrivacyLinkController : NSViewController
{
    NSArray *_bundles;
    NSArray *_bundleIdentifiers;
    BOOL _displayIcon;
    BOOL _displayLargeIcon;
    BOOL _displayCaptionText;
    BOOL _allowsOpeningSafari;
    NSColor *_iconTintColor;
    NSColor *_textTintColor;
}

+ (id)linkWithBundleIdentifier:(id)arg1;
+ (id)linkWithBundleIdentifiers:(id)arg1;
+ (Class)_platformSpecificClass;
@property BOOL allowsOpeningSafari; // @synthesize allowsOpeningSafari=_allowsOpeningSafari;
@property BOOL displayCaptionText; // @synthesize displayCaptionText=_displayCaptionText;
@property BOOL displayLargeIcon; // @synthesize displayLargeIcon=_displayLargeIcon;
@property BOOL displayIcon; // @synthesize displayIcon=_displayIcon;
@property(retain) NSColor *textTintColor; // @synthesize textTintColor=_textTintColor;
@property(retain) NSColor *iconTintColor; // @synthesize iconTintColor=_iconTintColor;
- (void).cxx_destruct;
- (void)linkPressed;
- (void)setLinkEnabled:(BOOL)arg1;
@property(readonly) OBPrivacyFlow *flow;
@property(readonly) NSArray *bundles;
@property(readonly) OBBundle *bundle;
- (id)initWithBundleIdentifiers:(id)arg1;
- (id)initWithPrivacyBundle:(id)arg1;

@end

