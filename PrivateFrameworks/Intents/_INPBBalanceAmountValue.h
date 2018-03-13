//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@class PBUnknownFields, _INPBCurrencyAmountValue, _INPBDecimalNumberValue, _INPBValueMetadata;

@interface _INPBBalanceAmountValue : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;
    _INPBCurrencyAmountValue *_currencyAmount;
    _INPBDecimalNumberValue *_customAmount;
    int _type;
    _INPBValueMetadata *_valueMetadata;
    CDStruct_f953fb60 _has;
}

+ (id)options;
@property(retain, nonatomic) _INPBDecimalNumberValue *customAmount; // @synthesize customAmount=_customAmount;
@property(retain, nonatomic) _INPBCurrencyAmountValue *currencyAmount; // @synthesize currencyAmount=_currencyAmount;
@property(retain, nonatomic) _INPBValueMetadata *valueMetadata; // @synthesize valueMetadata=_valueMetadata;
- (void).cxx_destruct;
@property(readonly, nonatomic) PBUnknownFields *unknownFields;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) BOOL hasCustomAmount;
@property(readonly, nonatomic) BOOL hasCurrencyAmount;
- (int)StringAsType:(id)arg1;
- (id)typeAsString:(int)arg1;
@property(nonatomic) BOOL hasType;
@property(nonatomic) int type; // @synthesize type=_type;
@property(readonly, nonatomic) BOOL hasValueMetadata;

@end

