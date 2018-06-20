//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CalDrawColorKey, NSColor;

@interface CalDrawOccurrenceColor : NSObject
{
    CalDrawColorKey *_colorKey;
    struct CGColor *_baseColor;
    struct CGColor *_foregroundColor;
    NSColor *_selectedTextColor;
}

+ (id)colorForNSColor:(id)arg1 appearance:(id)arg2;
+ (id)colorForNSColor:(id)arg1;
+ (id)colorForCGColor:(struct CGColor *)arg1 appearance:(id)arg2;
+ (id)colorForCGColor:(struct CGColor *)arg1;
+ (id)adjustedUIOccurrenceColorForUnadjustedCalendarColor:(id)arg1 appearance:(id)arg2;
+ (id)_getCacheForAppearance:(id)arg1;
+ (id)adjustedOccurrenceColor:(id)arg1 darkBackground:(BOOL)arg2;
+ (id)adjustedOccurrenceColor:(id)arg1 forAppearance:(id)arg2;
+ (id)adjustedOccurrenceColor:(id)arg1;
+ (id)styleStringForCGColor:(struct CGColor *)arg1;
@property(retain, nonatomic) NSColor *selectedTextColor; // @synthesize selectedTextColor=_selectedTextColor;
@property(retain) CalDrawColorKey *colorKey; // @synthesize colorKey=_colorKey;
- (void).cxx_destruct;
- (struct CGColor *)foregroundColor;
- (struct CGColor *)baseColor;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (void)dealloc;
- (void)setForegroundColor:(struct CGColor *)arg1;
- (void)setBaseColor:(struct CGColor *)arg1;

@end
