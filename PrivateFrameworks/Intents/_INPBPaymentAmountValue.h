//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@class PBUnknownFields, _INPBCurrencyAmountValue;

@interface _INPBPaymentAmountValue : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;
    int _amountType;
    _INPBCurrencyAmountValue *_value;
    struct {
        unsigned int amountType:1;
    } _has;
}

+ (id)options;
@property(retain, nonatomic) _INPBCurrencyAmountValue *value; // @synthesize value=_value;
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
- (int)StringAsAmountType:(id)arg1;
- (id)amountTypeAsString:(int)arg1;
@property(nonatomic) BOOL hasAmountType;
@property(nonatomic) int amountType; // @synthesize amountType=_amountType;
@property(readonly, nonatomic) BOOL hasValue;

@end

