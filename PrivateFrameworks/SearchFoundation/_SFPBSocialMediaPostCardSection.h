//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSSecureCoding.h"
#import "_SFPBSocialMediaPostCardSection.h"

@class NSArray, NSData, NSString, _SFPBColor, _SFPBImage, _SFPBRichText;

@interface _SFPBSocialMediaPostCardSection : PBCodable <_SFPBSocialMediaPostCardSection, NSSecureCoding>
{
    struct {
        unsigned int canBeHidden:1;
        unsigned int hasTopPadding:1;
        unsigned int hasBottomPadding:1;
        unsigned int separatorStyle:1;
        unsigned int nameNoWrap:1;
        unsigned int nameMaxLines:1;
    } _has;
    BOOL _canBeHidden;
    BOOL _hasTopPadding;
    BOOL _hasBottomPadding;
    BOOL _nameNoWrap;
    int _separatorStyle;
    int _nameMaxLines;
    NSArray *_punchoutOptions;
    NSString *_punchoutPickerTitle;
    NSString *_punchoutPickerDismissText;
    NSString *_type;
    _SFPBColor *_backgroundColor;
    NSString *_name;
    NSString *_handle;
    _SFPBImage *_verifiedGlyph;
    _SFPBImage *_profilePicture;
    _SFPBRichText *_post;
    _SFPBImage *_picture;
    NSString *_timestamp;
    NSString *_footnote;
}

@property(copy, nonatomic) NSString *footnote; // @synthesize footnote=_footnote;
@property(copy, nonatomic) NSString *timestamp; // @synthesize timestamp=_timestamp;
@property(retain, nonatomic) _SFPBImage *picture; // @synthesize picture=_picture;
@property(retain, nonatomic) _SFPBRichText *post; // @synthesize post=_post;
@property(retain, nonatomic) _SFPBImage *profilePicture; // @synthesize profilePicture=_profilePicture;
@property(retain, nonatomic) _SFPBImage *verifiedGlyph; // @synthesize verifiedGlyph=_verifiedGlyph;
@property(copy, nonatomic) NSString *handle; // @synthesize handle=_handle;
@property(nonatomic) int nameMaxLines; // @synthesize nameMaxLines=_nameMaxLines;
@property(nonatomic) BOOL nameNoWrap; // @synthesize nameNoWrap=_nameNoWrap;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
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
@property(readonly, nonatomic) BOOL hasFootnote;
@property(readonly, nonatomic) BOOL hasTimestamp;
@property(readonly, nonatomic) BOOL hasPicture;
@property(readonly, nonatomic) BOOL hasPost;
@property(readonly, nonatomic) BOOL hasProfilePicture;
@property(readonly, nonatomic) BOOL hasVerifiedGlyph;
@property(readonly, nonatomic) BOOL hasHandle;
@property(readonly, nonatomic) BOOL hasNameMaxLines;
@property(readonly, nonatomic) BOOL hasNameNoWrap;
@property(readonly, nonatomic) BOOL hasName;
@property(readonly, nonatomic) BOOL hasBackgroundColor;
@property(readonly, nonatomic) BOOL hasSeparatorStyle;
@property(readonly, nonatomic) BOOL hasType;
@property(readonly, nonatomic) BOOL hasHasBottomPadding;
@property(readonly, nonatomic) BOOL hasHasTopPadding;
@property(readonly, nonatomic) BOOL hasCanBeHidden;
@property(readonly, nonatomic) BOOL hasPunchoutPickerDismissText;
@property(readonly, nonatomic) BOOL hasPunchoutPickerTitle;
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
