//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CALayer, NSArray, NSByteCountFormatter, NSColor, NSLayoutConstraint, NSString, NSTextField;

@interface MMInfoCapacityBarCategory : NSObject
{
    BOOL _showsSizeInLabel;
    unsigned long long _sizeInBytes;
    NSString *_displayName;
    NSString *_categoryIdentifier;
    NSString *_accessibilityDescription;
    NSArray *_alternateDisplayNames;
    NSString *_toolTipLabel;
    CALayer *_layer;
    NSTextField *_label;
    NSColor *_color;
    NSString *_sizeDescription;
    NSByteCountFormatter *_byteCountFormatter;
    NSLayoutConstraint *_widthLayoutConstraint;
    NSLayoutConstraint *_leadingLayoutConstraint;
}

@property(retain, nonatomic) NSLayoutConstraint *leadingLayoutConstraint; // @synthesize leadingLayoutConstraint=_leadingLayoutConstraint;
@property(retain, nonatomic) NSLayoutConstraint *widthLayoutConstraint; // @synthesize widthLayoutConstraint=_widthLayoutConstraint;
@property(retain, nonatomic) NSByteCountFormatter *byteCountFormatter; // @synthesize byteCountFormatter=_byteCountFormatter;
@property(retain, nonatomic) NSString *sizeDescription; // @synthesize sizeDescription=_sizeDescription;
@property(readonly) NSColor *color; // @synthesize color=_color;
@property(readonly, nonatomic) NSTextField *label; // @synthesize label=_label;
@property(readonly, nonatomic) CALayer *layer; // @synthesize layer=_layer;
@property(nonatomic) BOOL showsSizeInLabel; // @synthesize showsSizeInLabel=_showsSizeInLabel;
@property(retain, nonatomic) NSString *toolTipLabel; // @synthesize toolTipLabel=_toolTipLabel;
@property(copy) NSArray *alternateDisplayNames; // @synthesize alternateDisplayNames=_alternateDisplayNames;
@property(copy) NSString *accessibilityDescription; // @synthesize accessibilityDescription=_accessibilityDescription;
@property(copy) NSString *categoryIdentifier; // @synthesize categoryIdentifier=_categoryIdentifier;
@property(copy) NSString *displayName; // @synthesize displayName=_displayName;
@property unsigned long long sizeInBytes; // @synthesize sizeInBytes=_sizeInBytes;
- (void).cxx_destruct;
@property(nonatomic) long long textAlignment;
- (id)allDisplayNames;
- (id)init;

@end

