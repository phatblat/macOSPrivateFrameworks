//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SFTitleCardSection.h"

@class NSArray, NSData, NSDictionary, NSNumber, NSString, SFActionItem, SFColor, SFImage;

@protocol SFRichTitleCardSection <SFTitleCardSection>
@property(readonly, nonatomic) NSData *jsonData;
@property(readonly, nonatomic) NSDictionary *dictionaryRepresentation;
@property(copy, nonatomic) NSString *footnote;
@property(copy, nonatomic) NSArray *offers;
@property(nonatomic) int playActionAlign;
@property(retain, nonatomic) SFActionItem *playAction;
@property(retain, nonatomic) SFImage *imageOverlay;
@property(nonatomic) BOOL thumbnailCropCircle;
@property(nonatomic) BOOL titleNoWrap;
@property(copy, nonatomic) NSNumber *titleWeight;
@property(nonatomic) int titleAlign;
@property(nonatomic) BOOL hideVerticalDivider;
@property(copy, nonatomic) NSNumber *auxiliaryAlignment;
@property(nonatomic) int auxiliaryBottomTextColor;
@property(copy, nonatomic) NSString *auxiliaryBottomText;
@property(copy, nonatomic) NSString *auxiliaryMiddleText;
@property(copy, nonatomic) NSString *auxiliaryTopText;
@property(copy, nonatomic) NSArray *moreGlyphs;
@property(nonatomic) BOOL reviewNewLine;
@property(copy, nonatomic) NSString *reviewText;
@property(retain, nonatomic) SFImage *reviewGlyph;
@property(copy, nonatomic) NSString *ratingText;
@property(copy, nonatomic) NSNumber *rating;
@property(copy, nonatomic) NSString *descriptionText;
@property(nonatomic) BOOL isCentered;
@property(retain, nonatomic) SFImage *titleImage;
@property(copy, nonatomic) NSString *contentAdvisory;
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
@end

