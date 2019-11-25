//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary, NSString;

@interface PKPaper : NSObject
{
    NSString *name;
    NSString *_baseName;
    int width;
    int height;
    int leftMargin;
    int topMargin;
    int rightMargin;
    int bottomMargin;
    BOOL _isTransverse;
    NSDictionary *mediaInfo;
}

+ (id)documentPapers;
+ (id)photoPapers;
+ (BOOL)willAdjustMarginsForDuplexMode:(id)arg1;
+ (id)genericBorderlessWithName:(id)arg1;
+ (id)genericWithName:(id)arg1;
+ (id)genericPRC32KPaper;
+ (id)genericHagakiPaper;
+ (id)genericA6Paper;
+ (id)generic4x6Paper;
+ (id)generic3_5x5Paper;
+ (id)genericLegalPaper;
+ (id)genericLetterPaper;
+ (id)genericA4Paper;
+ (id)rollPaperWithAttributes:(id)arg1;
+ (id)paperWithAttributes:(id)arg1;
+ (id)mediaNameForWidth:(int)arg1 Height:(int)arg2 mediaType:(id)arg3 Borderless:(BOOL)arg4 Simplex:(BOOL)arg5;
+ (BOOL)useMetric;
+ (id)defaultGenericPaperForLocale:(id)arg1;
@property(readonly, nonatomic) BOOL isTransverse; // @synthesize isTransverse=_isTransverse;
@property(copy, nonatomic) NSDictionary *mediaInfo; // @synthesize mediaInfo;
@property(nonatomic) int bottomMargin; // @synthesize bottomMargin;
@property(nonatomic) int rightMargin; // @synthesize rightMargin;
@property(nonatomic) int topMargin; // @synthesize topMargin;
@property(nonatomic) int leftMargin; // @synthesize leftMargin;
@property(nonatomic) int height; // @synthesize height;
@property(nonatomic) int width; // @synthesize width;
@property(retain, nonatomic) NSString *name; // @synthesize name;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)paperWithMarginsAdjustedForDuplexMode:(id)arg1;
@property(readonly, retain, nonatomic) NSString *localizedName; // @dynamic localizedName;
- (long long)sizeMediaTypeAndImageableCompare:(id)arg1;
- (long long)sizeAndImageableCompare:(id)arg1;
- (BOOL)isEqualSize:(id)arg1;
- (BOOL)isEqualSizeAndMediaType:(id)arg1;
- (id)localizedNameFromDimensions;
- (struct _ipp_s *)createMediaColAndDoMargins:(BOOL)arg1;
- (void)addToMediaCol:(struct _ipp_s *)arg1;
- (void)dealloc;
@property(readonly, retain, nonatomic) NSString *mediaTypeName; // @dynamic mediaTypeName;
@property(readonly, retain, nonatomic) NSString *mediaType;
@property(readonly, nonatomic) BOOL isRoll; // @dynamic isRoll;
@property(readonly, nonatomic) int maxHeight;
@property(readonly, nonatomic) int minHeight;
@property(readonly, nonatomic) NSString *baseName; // @dynamic baseName;
- (id)nameWithoutSuffixes:(id)arg1;
@property(readonly, nonatomic) BOOL isBorderless;
@property(readonly, nonatomic) double imageableArea; // @dynamic imageableArea;
@property(readonly, nonatomic) struct CGRect imageableAreaRect;
@property(readonly, nonatomic) struct CGSize paperSize;
- (id)initWithPWGSize:(struct pwg_size_s *)arg1 localizedName:(id)arg2 codeName:(id)arg3;
- (id)initWithWidth:(int)arg1 Height:(int)arg2 Left:(int)arg3 Top:(int)arg4 Right:(int)arg5 Bottom:(int)arg6 localizedName:(id)arg7 codeName:(id)arg8;
- (id)cutToPWGLength:(int)arg1;
- (id)cutToLength:(double)arg1;
@property(readonly, nonatomic) unsigned long long maxCutLength; // @dynamic maxCutLength;
@property(readonly, nonatomic) unsigned long long minCutLength; // @dynamic minCutLength;
@property(readonly, nonatomic) unsigned long long bottomMarginInPoints; // @dynamic bottomMarginInPoints;
@property(readonly, nonatomic) unsigned long long topMarginInPoints; // @dynamic topMarginInPoints;

@end

