//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSData, NSDictionary, NSString, _SFPBColor, _SFPBImage, _SFPBKeyValueTuple, _SFPBPunchout;

@protocol _SFPBKeyValueDataCardSection <NSObject>
@property(readonly, nonatomic) NSData *jsonData;
@property(readonly, nonatomic) BOOL hasAccessoryImage;
@property(retain, nonatomic) _SFPBImage *accessoryImage;
@property(copy, nonatomic) NSArray *datas;
@property(readonly, nonatomic) BOOL hasBackgroundColor;
@property(retain, nonatomic) _SFPBColor *backgroundColor;
@property(readonly, nonatomic) BOOL hasSeparatorStyle;
@property(nonatomic) int separatorStyle;
@property(readonly, nonatomic) BOOL hasType;
@property(copy, nonatomic) NSString *type;
@property(readonly, nonatomic) BOOL hasHasBottomPadding;
@property(nonatomic) BOOL hasBottomPadding;
@property(readonly, nonatomic) BOOL hasHasTopPadding;
@property(nonatomic) BOOL hasTopPadding;
@property(readonly, nonatomic) BOOL hasCanBeHidden;
@property(nonatomic) BOOL canBeHidden;
@property(readonly, nonatomic) BOOL hasPunchoutPickerDismissText;
@property(copy, nonatomic) NSString *punchoutPickerDismissText;
@property(readonly, nonatomic) BOOL hasPunchoutPickerTitle;
@property(copy, nonatomic) NSString *punchoutPickerTitle;
@property(copy, nonatomic) NSArray *punchoutOptions;
- (id)initWithDictionary:(NSDictionary *)arg1;
- (id)initWithJSON:(NSData *)arg1;
- (_SFPBKeyValueTuple *)dataAtIndex:(unsigned long long)arg1;
- (unsigned long long)dataCount;
- (void)addData:(_SFPBKeyValueTuple *)arg1;
- (void)clearData;
- (_SFPBPunchout *)punchoutOptionsAtIndex:(unsigned long long)arg1;
- (unsigned long long)punchoutOptionsCount;
- (void)addPunchoutOptions:(_SFPBPunchout *)arg1;
- (void)clearPunchoutOptions;
@end

