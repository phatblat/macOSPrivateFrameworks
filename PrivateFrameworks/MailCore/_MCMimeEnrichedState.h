//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSColor, NSString;

@interface _MCMimeEnrichedState : NSObject
{
    unsigned char _excerptLevel;
    BOOL _bold;
    BOOL _italic;
    BOOL _fixed;
    BOOL _underline;
    short _fontDelta;
    unsigned long long _alignment;
    NSString *_fontFamily;
    NSColor *_color;
}

@property(retain, nonatomic) NSColor *color; // @synthesize color=_color;
@property(copy, nonatomic) NSString *fontFamily; // @synthesize fontFamily=_fontFamily;
@property(nonatomic) short fontDelta; // @synthesize fontDelta=_fontDelta;
@property(nonatomic) BOOL underline; // @synthesize underline=_underline;
@property(nonatomic) BOOL fixed; // @synthesize fixed=_fixed;
@property(nonatomic) BOOL italic; // @synthesize italic=_italic;
@property(nonatomic) BOOL bold; // @synthesize bold=_bold;
@property(nonatomic) unsigned long long alignment; // @synthesize alignment=_alignment;
@property(nonatomic) unsigned char excerptLevel; // @synthesize excerptLevel=_excerptLevel;
- (void).cxx_destruct;

@end

