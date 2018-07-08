//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSColor.h"

@class NSString;

@interface NSColor (MailCoreAdditions)
+ (BOOL)isDarkEffectiveAppearance:(id)arg1;
+ (BOOL)isDarkAppearance;
+ (id)scriptingRGBColorWithDescriptor:(id)arg1;
+ (id)stationeryPaneBackgroundColor;
+ (id)aquaBlueColor;
+ (id)junkMailColor;
+ (id)threadBackgroundColor;
+ (void)_clearThreadBackgroundColors;
+ (id)lighterThreadBackgroundColor;
+ (void)setThreadBackgroundColor:(id)arg1;
+ (id)colorWithIntValue:(int)arg1;
+ (id)newSwatchForColor:(id)arg1;
+ (void)configureColorMenu:(id)arg1;
+ (id)_legacyColorForIdentifier:(id)arg1;
+ (id)_assetBasedColorForIdentifier:(id)arg1;
+ (id)colorForIdentifier:(id)arg1;
+ (id)_identifierForLegacyColor:(id)arg1;
+ (id)_identifierForAssetBasedColor:(id)arg1;
+ (id)identifierForColor:(id)arg1;
+ (id)_colorPlist;
+ (id)colorForHighlightColorValue:(unsigned int)arg1;
+ (unsigned int)highlightColorValueForColor:(id)arg1;
+ (id)colorForQuoteLevel:(unsigned long long)arg1;
+ (void)setQuotingColorList:(id)arg1;
+ (id)quotingColorList;
+ (id)defaultQuotingColors;
- (id)cssColorStringForAppearance:(id)arg1;
@property(readonly, copy, nonatomic) NSString *cssColorString;
- (id)scriptingRGBColorDescriptor;
@property(readonly, nonatomic) int intValue;
@end

