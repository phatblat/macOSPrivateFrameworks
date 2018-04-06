//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <SearchFoundation/SFTitleCardSection.h>

#import "NSCopying.h"
#import "NSSecureCoding.h"
#import "SFRichTitleCardSection.h"

@class NSArray, NSData, NSDictionary, NSNumber, NSString, SFActionItem, SFCard, SFColor, SFImage;

@interface SFRichTitleCardSection : SFTitleCardSection <SFRichTitleCardSection, NSSecureCoding, NSCopying>
{
    struct {
        unsigned int canBeHidden:1;
        unsigned int hasTopPadding:1;
        unsigned int hasBottomPadding:1;
        unsigned int separatorStyle:1;
        unsigned int isCentered:1;
        unsigned int reviewNewLine:1;
        unsigned int auxiliaryBottomTextColor:1;
        unsigned int hideVerticalDivider:1;
        unsigned int titleAlign:1;
        unsigned int titleNoWrap:1;
        unsigned int thumbnailCropCircle:1;
        unsigned int playActionAlign:1;
    } _has;
    BOOL _canBeHidden;
    BOOL _hasTopPadding;
    BOOL _hasBottomPadding;
    BOOL _isCentered;
    BOOL _reviewNewLine;
    BOOL _hideVerticalDivider;
    BOOL _titleNoWrap;
    BOOL _thumbnailCropCircle;
    int _separatorStyle;
    int _auxiliaryBottomTextColor;
    int _titleAlign;
    int _playActionAlign;
    NSArray *_punchoutOptions;
    NSString *_punchoutPickerTitle;
    NSString *_punchoutPickerDismissText;
    NSString *_type;
    SFColor *_backgroundColor;
    NSString *_title;
    NSString *_subtitle;
    NSString *_contentAdvisory;
    SFImage *_titleImage;
    NSString *_descriptionText;
    NSNumber *_rating;
    NSString *_ratingText;
    SFImage *_reviewGlyph;
    NSString *_reviewText;
    NSArray *_moreGlyphs;
    NSString *_auxiliaryTopText;
    NSString *_auxiliaryMiddleText;
    NSString *_auxiliaryBottomText;
    NSNumber *_auxiliaryAlignment;
    NSNumber *_titleWeight;
    SFImage *_imageOverlay;
    SFActionItem *_playAction;
    NSArray *_offers;
    NSString *_footnote;
}

+ (BOOL)supportsSecureCoding;
@property(copy, nonatomic) NSString *footnote; // @synthesize footnote=_footnote;
@property(copy, nonatomic) NSArray *offers; // @synthesize offers=_offers;
@property(nonatomic) int playActionAlign; // @synthesize playActionAlign=_playActionAlign;
@property(retain, nonatomic) SFActionItem *playAction; // @synthesize playAction=_playAction;
@property(retain, nonatomic) SFImage *imageOverlay; // @synthesize imageOverlay=_imageOverlay;
@property(nonatomic) BOOL thumbnailCropCircle; // @synthesize thumbnailCropCircle=_thumbnailCropCircle;
@property(nonatomic) BOOL titleNoWrap; // @synthesize titleNoWrap=_titleNoWrap;
@property(copy, nonatomic) NSNumber *titleWeight; // @synthesize titleWeight=_titleWeight;
@property(nonatomic) int titleAlign; // @synthesize titleAlign=_titleAlign;
@property(nonatomic) BOOL hideVerticalDivider; // @synthesize hideVerticalDivider=_hideVerticalDivider;
@property(copy, nonatomic) NSNumber *auxiliaryAlignment; // @synthesize auxiliaryAlignment=_auxiliaryAlignment;
@property(nonatomic) int auxiliaryBottomTextColor; // @synthesize auxiliaryBottomTextColor=_auxiliaryBottomTextColor;
@property(copy, nonatomic) NSString *auxiliaryBottomText; // @synthesize auxiliaryBottomText=_auxiliaryBottomText;
@property(copy, nonatomic) NSString *auxiliaryMiddleText; // @synthesize auxiliaryMiddleText=_auxiliaryMiddleText;
@property(copy, nonatomic) NSString *auxiliaryTopText; // @synthesize auxiliaryTopText=_auxiliaryTopText;
@property(copy, nonatomic) NSArray *moreGlyphs; // @synthesize moreGlyphs=_moreGlyphs;
@property(nonatomic) BOOL reviewNewLine; // @synthesize reviewNewLine=_reviewNewLine;
@property(copy, nonatomic) NSString *reviewText; // @synthesize reviewText=_reviewText;
@property(retain, nonatomic) SFImage *reviewGlyph; // @synthesize reviewGlyph=_reviewGlyph;
@property(copy, nonatomic) NSString *ratingText; // @synthesize ratingText=_ratingText;
@property(copy, nonatomic) NSNumber *rating; // @synthesize rating=_rating;
@property(copy, nonatomic) NSString *descriptionText; // @synthesize descriptionText=_descriptionText;
@property(nonatomic) BOOL isCentered;
@property(retain, nonatomic) SFImage *titleImage; // @synthesize titleImage=_titleImage;
@property(copy, nonatomic) NSString *contentAdvisory; // @synthesize contentAdvisory=_contentAdvisory;
@property(copy, nonatomic) NSString *subtitle;
@property(copy, nonatomic) NSString *title;
@property(retain, nonatomic) SFColor *backgroundColor;
@property(nonatomic) int separatorStyle;
@property(copy, nonatomic) NSString *type;
@property(nonatomic) BOOL hasBottomPadding;
@property(nonatomic) BOOL hasTopPadding;
@property(nonatomic) BOOL canBeHidden;
@property(copy, nonatomic) NSString *punchoutPickerDismissText;
@property(copy, nonatomic) NSString *punchoutPickerTitle;
@property(copy, nonatomic) NSArray *punchoutOptions;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, nonatomic) NSData *jsonData;
@property(readonly, nonatomic) NSDictionary *dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (BOOL)hasPlayActionAlign;
- (BOOL)hasThumbnailCropCircle;
- (BOOL)hasTitleNoWrap;
- (BOOL)hasTitleAlign;
- (BOOL)hasHideVerticalDivider;
- (BOOL)hasAuxiliaryBottomTextColor;
- (BOOL)hasReviewNewLine;
- (BOOL)hasIsCentered;
- (BOOL)hasSeparatorStyle;
- (BOOL)hasHasBottomPadding;
- (BOOL)hasHasTopPadding;
- (BOOL)hasCanBeHidden;
- (id)initWithProtobuf:(id)arg1;

// Remaining properties
@property(copy, nonatomic) NSString *cardSectionId;
@property(copy, nonatomic) NSArray *commands;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(nonatomic) BOOL hideDivider;
@property(retain, nonatomic) SFCard *nextCard;
@property(copy, nonatomic) NSArray *parameterKeyPaths;
@property(copy, nonatomic) NSString *resultIdentifier;
@property(readonly) Class superclass;

@end
