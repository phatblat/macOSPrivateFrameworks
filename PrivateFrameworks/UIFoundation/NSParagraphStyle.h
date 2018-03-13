//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"
#import "NSMutableCopying.h"
#import "NSSecureCoding.h"

@class NSArray;

@interface NSParagraphStyle : NSObject <NSCopying, NSMutableCopying, NSSecureCoding>
{
    double _lineSpacing;
    double _paragraphSpacing;
    double _headIndent;
    double _tailIndent;
    double _firstLineHeadIndent;
    double _minimumLineHeight;
    double _maximumLineHeight;
    NSArray *_tabStops;
    struct {
        unsigned int alignment:4;
        unsigned int lineBreakMode:4;
        unsigned int tabStopsIsMutable:1;
        unsigned int isNaturalDirection:1;
        unsigned int rightToLeftDirection:1;
        unsigned int fixedMultiple:2;
        unsigned int tightensForTruncation:1;
        unsigned int refCount:18;
        unsigned int :32;
    } _flags;
    double _defaultTabInterval;
    id _extraData;
}

+ (BOOL)supportsSecureCoding;
+ (long long)defaultWritingDirectionForLanguage:(id)arg1;
+ (long long)_defaultWritingDirection;
+ (id)defaultParagraphStyle;
+ (void)initialize;
- (id)description;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (BOOL)_isSuitableForFastStringDrawingWithAlignment:(unsigned long long *)arg1 mirrorsTextAlignment:(BOOL)arg2 lineBreakMode:(unsigned long long *)arg3 tighteningFactorForTruncation:(double *)arg4;
@property(readonly) BOOL allowsDefaultTighteningForTruncation;
@property(readonly) long long headerLevel;
@property(readonly) float tighteningFactorForTruncation;
@property(readonly) float hyphenationFactor;
@property(readonly, copy) NSArray *textLists;
@property(readonly, copy) NSArray *textBlocks;
@property(readonly) double defaultTabInterval;
@property(readonly) double paragraphSpacingBefore;
@property(readonly) double lineHeightMultiple;
@property(readonly) long long baseWritingDirection;
@property(readonly) unsigned long long lineBreakMode;
@property(readonly) double maximumLineHeight;
@property(readonly) double minimumLineHeight;
@property(readonly) double firstLineHeadIndent;
- (unsigned long long)lineBreakStrategy;
- (BOOL)usesOpticalAlignment;
- (BOOL)allowsHangingPunctuation;
- (unsigned long long)_lineBoundsOptions;
@property(readonly, copy) NSArray *tabStops;
@property(readonly) double tailIndent;
@property(readonly) double headIndent;
@property(readonly) unsigned long long alignment;
@property(readonly) double paragraphSpacing;
@property(readonly) double lineSpacing;
- (BOOL)isEqual:(id)arg1;
- (void)dealloc;
- (unsigned long long)hash;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;
- (id)_initWithParagraphStyle:(id)arg1;
- (void)_deallocExtraData;
- (void)_allocExtraData;

@end

