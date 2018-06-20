//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSSecureCoding.h"
#import "_SFPBDetailedRowCardSection.h"

@class NSArray, NSData, NSString, _SFPBActionItem, _SFPBButton, _SFPBColor, _SFPBFormattedText, _SFPBImage, _SFPBRichText;

@interface _SFPBDetailedRowCardSection : PBCodable <_SFPBDetailedRowCardSection, NSSecureCoding>
{
    BOOL _canBeHidden;
    BOOL _hasTopPadding;
    BOOL _hasBottomPadding;
    BOOL _preventThumbnailImageScaling;
    BOOL _isSecondaryTitleDetached;
    int _separatorStyle;
    NSArray *_punchoutOptions;
    NSString *_punchoutPickerTitle;
    NSString *_punchoutPickerDismissText;
    NSString *_type;
    _SFPBColor *_backgroundColor;
    _SFPBImage *_thumbnail;
    _SFPBRichText *_title;
    _SFPBFormattedText *_secondaryTitle;
    _SFPBImage *_secondaryTitleImage;
    NSArray *_descriptions;
    _SFPBRichText *_footnote;
    _SFPBFormattedText *_trailingTopText;
    _SFPBFormattedText *_trailingMiddleText;
    _SFPBFormattedText *_trailingBottomText;
    _SFPBActionItem *_action;
    _SFPBButton *_button;
}

@property(retain, nonatomic) _SFPBButton *button; // @synthesize button=_button;
@property(retain, nonatomic) _SFPBActionItem *action; // @synthesize action=_action;
@property(retain, nonatomic) _SFPBFormattedText *trailingBottomText; // @synthesize trailingBottomText=_trailingBottomText;
@property(retain, nonatomic) _SFPBFormattedText *trailingMiddleText; // @synthesize trailingMiddleText=_trailingMiddleText;
@property(retain, nonatomic) _SFPBFormattedText *trailingTopText; // @synthesize trailingTopText=_trailingTopText;
@property(retain, nonatomic) _SFPBRichText *footnote; // @synthesize footnote=_footnote;
@property(copy, nonatomic) NSArray *descriptions; // @synthesize descriptions=_descriptions;
@property(nonatomic) BOOL isSecondaryTitleDetached; // @synthesize isSecondaryTitleDetached=_isSecondaryTitleDetached;
@property(retain, nonatomic) _SFPBImage *secondaryTitleImage; // @synthesize secondaryTitleImage=_secondaryTitleImage;
@property(retain, nonatomic) _SFPBFormattedText *secondaryTitle; // @synthesize secondaryTitle=_secondaryTitle;
@property(retain, nonatomic) _SFPBRichText *title; // @synthesize title=_title;
@property(nonatomic) BOOL preventThumbnailImageScaling; // @synthesize preventThumbnailImageScaling=_preventThumbnailImageScaling;
@property(retain, nonatomic) _SFPBImage *thumbnail; // @synthesize thumbnail=_thumbnail;
@property(retain, nonatomic) _SFPBColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
@property(nonatomic) int separatorStyle; // @synthesize separatorStyle=_separatorStyle;
@property(copy, nonatomic) NSString *type; // @synthesize type=_type;
@property(nonatomic) BOOL hasBottomPadding; // @synthesize hasBottomPadding=_hasBottomPadding;
@property(nonatomic) BOOL hasTopPadding; // @synthesize hasTopPadding=_hasTopPadding;
@property(nonatomic) BOOL canBeHidden; // @synthesize canBeHidden=_canBeHidden;
@property(copy, nonatomic) NSString *punchoutPickerDismissText; // @synthesize punchoutPickerDismissText=_punchoutPickerDismissText;
@property(copy, nonatomic) NSString *punchoutPickerTitle; // @synthesize punchoutPickerTitle=_punchoutPickerTitle;
@property(copy, nonatomic) NSArray *punchoutOptions; // @synthesize punchoutOptions=_punchoutOptions;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
@property(readonly, nonatomic) NSData *jsonData;
- (id)dictionaryRepresentation;
@property(readonly) unsigned long long hash;
- (BOOL)isEqual:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)descriptionsAtIndex:(unsigned long long)arg1;
- (unsigned long long)descriptionsCount;
- (void)addDescriptions:(id)arg1;
- (void)clearDescriptions;
- (id)punchoutOptionsAtIndex:(unsigned long long)arg1;
- (unsigned long long)punchoutOptionsCount;
- (void)addPunchoutOptions:(id)arg1;
- (void)clearPunchoutOptions;
- (id)initWithFacade:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

