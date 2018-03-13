//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <SearchFoundation/SFCardSection.h>

#import "NSCopying.h"
#import "NSSecureCoding.h"
#import "SFTableRowCardSection.h"

@class NSArray, NSData, NSDictionary, NSString, SFCard, SFColor, SFTableAlignmentSchema;

@interface SFTableRowCardSection : SFCardSection <SFTableRowCardSection, NSSecureCoding, NSCopying>
{
    CDStruct_dff33cb6 _has;
    BOOL _canBeHidden;
    BOOL _hasTopPadding;
    BOOL _hasBottomPadding;
    BOOL _isSubHeader;
    BOOL _reducedRowHeight;
    BOOL _alignRowsToHeader;
    int _separatorStyle;
    int _verticalAlign;
    NSArray *_punchoutOptions;
    NSString *_punchoutPickerTitle;
    NSString *_punchoutPickerDismissText;
    NSString *_type;
    SFColor *_backgroundColor;
    NSString *_tableIdentifier;
    SFTableAlignmentSchema *_alignmentSchema;
    NSArray *_data;
    NSString *_tabGroupIdentifier;
}

+ (BOOL)supportsSecureCoding;
@property(nonatomic) BOOL alignRowsToHeader; // @synthesize alignRowsToHeader=_alignRowsToHeader;
@property(nonatomic) int verticalAlign; // @synthesize verticalAlign=_verticalAlign;
@property(nonatomic) BOOL reducedRowHeight; // @synthesize reducedRowHeight=_reducedRowHeight;
@property(copy, nonatomic) NSString *tabGroupIdentifier; // @synthesize tabGroupIdentifier=_tabGroupIdentifier;
@property(nonatomic) BOOL isSubHeader; // @synthesize isSubHeader=_isSubHeader;
@property(copy, nonatomic) NSArray *data; // @synthesize data=_data;
@property(retain, nonatomic) SFTableAlignmentSchema *alignmentSchema; // @synthesize alignmentSchema=_alignmentSchema;
@property(copy, nonatomic) NSString *tableIdentifier; // @synthesize tableIdentifier=_tableIdentifier;
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
- (BOOL)hasAlignRowsToHeader;
- (BOOL)hasVerticalAlign;
- (BOOL)hasReducedRowHeight;
- (BOOL)hasIsSubHeader;
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

