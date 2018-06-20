//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CPKFont, NSString;

__attribute__((visibility("hidden")))
@interface CPKCellDrawingInfo : NSObject
{
    BOOL _drawIt;
    BOOL _foundFallback;
    unsigned short _glyph;
    long long _index;
    CPKFont *_font;
    NSString *_character;
    struct CGRect _frame;
}

@property BOOL foundFallback; // @synthesize foundFallback=_foundFallback;
@property BOOL drawIt; // @synthesize drawIt=_drawIt;
@property unsigned short glyph; // @synthesize glyph=_glyph;
@property(copy) NSString *character; // @synthesize character=_character;
@property(retain) CPKFont *font; // @synthesize font=_font;
@property struct CGRect frame; // @synthesize frame=_frame;
@property long long index; // @synthesize index=_index;
- (void)dealloc;

@end
