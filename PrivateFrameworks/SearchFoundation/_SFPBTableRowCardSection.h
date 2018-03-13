//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSSecureCoding.h"
#import "_SFPBTableRowCardSection.h"

@class NSArray, NSData, NSString, _SFPBColor, _SFPBTableAlignmentSchema;

@interface _SFPBTableRowCardSection : PBCodable <_SFPBTableRowCardSection, NSSecureCoding>
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
    _SFPBColor *_backgroundColor;
    NSString *_tableIdentifier;
    _SFPBTableAlignmentSchema *_alignmentSchema;
    NSArray *_datas;
    NSString *_tabGroupIdentifier;
}

@property(nonatomic) BOOL alignRowsToHeader; // @synthesize alignRowsToHeader=_alignRowsToHeader;
@property(nonatomic) int verticalAlign; // @synthesize verticalAlign=_verticalAlign;
@property(nonatomic) BOOL reducedRowHeight; // @synthesize reducedRowHeight=_reducedRowHeight;
@property(copy, nonatomic) NSString *tabGroupIdentifier; // @synthesize tabGroupIdentifier=_tabGroupIdentifier;
@property(nonatomic) BOOL isSubHeader; // @synthesize isSubHeader=_isSubHeader;
@property(copy, nonatomic) NSArray *datas; // @synthesize datas=_datas;
@property(retain, nonatomic) _SFPBTableAlignmentSchema *alignmentSchema; // @synthesize alignmentSchema=_alignmentSchema;
@property(copy, nonatomic) NSString *tableIdentifier; // @synthesize tableIdentifier=_tableIdentifier;
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
@property(readonly, nonatomic) BOOL hasAlignRowsToHeader;
@property(readonly, nonatomic) BOOL hasVerticalAlign;
@property(readonly, nonatomic) BOOL hasReducedRowHeight;
@property(readonly, nonatomic) BOOL hasTabGroupIdentifier;
@property(readonly, nonatomic) BOOL hasIsSubHeader;
- (id)dataAtIndex:(unsigned long long)arg1;
- (unsigned long long)dataCount;
- (void)addData:(id)arg1;
- (void)clearData;
- (void)setData:(id)arg1;
@property(readonly, nonatomic) BOOL hasAlignmentSchema;
@property(readonly, nonatomic) BOOL hasTableIdentifier;
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

