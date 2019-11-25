//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <SpotlightServices/PRSCardSection.h>

@class NSArray, NSImage, NSString;

@interface PRSTwitterCardSection : PRSCardSection
{
    BOOL _isMultiTweet;
    BOOL _title_nowrap;
    int _image_align;
    long long _title_maxlines;
    NSString *_subtitle;
    NSImage *_thumbnail;
    NSString *_date;
    NSArray *_formattedText;
    NSString *_footnote;
    NSImage *_title_glyph;
    NSImage *_image;
    double _round_corner_pt;
    double _inline_round_corner_pt;
}

+ (BOOL)supportsSecureCoding;
@property(readonly, nonatomic) double inline_round_corner_pt; // @synthesize inline_round_corner_pt=_inline_round_corner_pt;
@property(readonly, nonatomic) double round_corner_pt; // @synthesize round_corner_pt=_round_corner_pt;
@property(readonly, nonatomic) NSImage *image; // @synthesize image=_image;
@property(readonly, nonatomic) NSImage *title_glyph; // @synthesize title_glyph=_title_glyph;
@property(readonly, nonatomic) NSString *footnote; // @synthesize footnote=_footnote;
@property(readonly, nonatomic) int image_align; // @synthesize image_align=_image_align;
@property(readonly, nonatomic) NSArray *formattedText; // @synthesize formattedText=_formattedText;
@property(readonly, nonatomic) NSString *date; // @synthesize date=_date;
@property(readonly, nonatomic) NSImage *thumbnail; // @synthesize thumbnail=_thumbnail;
@property(readonly, nonatomic) NSString *subtitle; // @synthesize subtitle=_subtitle;
@property(readonly, nonatomic) long long title_maxlines; // @synthesize title_maxlines=_title_maxlines;
@property(readonly, nonatomic) BOOL title_nowrap; // @synthesize title_nowrap=_title_nowrap;
- (void).cxx_destruct;
- (long long)type;
@property BOOL isMultiTweet;
- (id)initWithSFSearchResult:(id)arg1 cardSection:(id)arg2;
- (id)initWithTitle:(id)arg1 glyph:(id)arg2 subtitle:(id)arg3 image:(id)arg4 title_nowrap:(BOOL)arg5 title_maxlines:(long long)arg6 thumbnail:(id)arg7 date:(id)arg8 formattedText:(id)arg9 image_align:(int)arg10 footnote:(id)arg11;

@end

