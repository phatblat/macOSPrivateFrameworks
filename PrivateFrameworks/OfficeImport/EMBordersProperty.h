//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <OfficeImport/CMProperty.h>

#import "NSCopying.h"

@class OITSUColor;

__attribute__((visibility("hidden")))
@interface EMBordersProperty : CMProperty <NSCopying>
{
    OITSUColor *mBorderColor;
    OITSUColor *mBorderTopColor;
    OITSUColor *mBorderLeftColor;
    OITSUColor *mBorderBottomColor;
    OITSUColor *mBorderRightColor;
    int mBorderStyle[5];
    int mBorderWidth[5];
}

- (void).cxx_destruct;
- (id)cssString;
- (id)cssStringForName:(id)arg1;
- (void)setNoneAtLocation:(int)arg1;
- (BOOL)isNoneAtLocation:(int)arg1;
- (int *)borderWidths;
- (int *)borderStyles;
- (id)borderColor;
- (id)initWithEDBorders:(id)arg1;
- (id)initWithOADStroke:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (BOOL)isEqual:(id)arg1;
- (id)widthHashNumber;
- (id)styleHashNumber;
- (BOOL)hasSameColorsAs:(id)arg1;
- (BOOL)hasSameWidthsAs:(id)arg1;
- (BOOL)hasSameStylesAs:(id)arg1;
- (id)colorString;
- (id)widthString;
- (id)styleString;
- (id)stringFromColor:(id)arg1;
- (id)stringFromWidthEnum:(int)arg1;
- (id)stringFromStyleEnum:(int)arg1;
- (void)setBorderStyleAndWidth:(int)arg1 location:(unsigned int)arg2;

@end

