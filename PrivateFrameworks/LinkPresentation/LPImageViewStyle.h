//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "LPEmailCompatibleCaptionBarItemChild.h"
#import "NSCopying.h"

@class LPPadding, LPPointUnit, LPSize, NSColor;

__attribute__((visibility("hidden")))
@interface LPImageViewStyle : NSObject <LPEmailCompatibleCaptionBarItemChild, NSCopying>
{
    LPSize *_size;
    LPPadding *_margin;
    LPPadding *_padding;
    long long _filter;
    long long _verticalAlignment;
    NSColor *_backgroundColor;
    LPPointUnit *_backgroundInset;
    double _foregroundOpacity;
    LPPointUnit *_cornerRadius;
    double _darkeningAmount;
    NSColor *_maskColor;
}

@property(retain, nonatomic) NSColor *maskColor; // @synthesize maskColor=_maskColor;
@property(nonatomic) double darkeningAmount; // @synthesize darkeningAmount=_darkeningAmount;
@property(retain, nonatomic) LPPointUnit *cornerRadius; // @synthesize cornerRadius=_cornerRadius;
@property(nonatomic) double foregroundOpacity; // @synthesize foregroundOpacity=_foregroundOpacity;
@property(retain, nonatomic) LPPointUnit *backgroundInset; // @synthesize backgroundInset=_backgroundInset;
@property(retain, nonatomic) NSColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
@property(nonatomic) long long verticalAlignment; // @synthesize verticalAlignment=_verticalAlignment;
@property(nonatomic) long long filter; // @synthesize filter=_filter;
@property(readonly, retain, nonatomic) LPPadding *padding; // @synthesize padding=_padding;
@property(readonly, retain, nonatomic) LPPadding *margin; // @synthesize margin=_margin;
@property(retain, nonatomic) LPSize *size; // @synthesize size=_size;
- (void).cxx_destruct;
- (id)emailCompatibleMargin;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

@end

