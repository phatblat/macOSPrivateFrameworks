//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "INCodableAttributeAssociating.h"
#import "NSCopying.h"
#import "NSSecureCoding.h"
#import "_INPBPair.h"

@class INCodableAttribute, NSString, _INPBContactValue, _INPBCurrencyAmountValue, _INPBCustomObject, _INPBDataString, _INPBDistanceValue, _INPBDoubleValue, _INPBImageValue, _INPBIntegerValue, _INPBLocationValue, _INPBPaymentMethodValue, _INPBStringValue, _INPBTemperatureValue, _INPBURLValue;

@interface _INPBPair : PBCodable <_INPBPair, NSSecureCoding, NSCopying, INCodableAttributeAssociating>
{
    struct _has;
    NSString *_key;
    _INPBCurrencyAmountValue *_pairCurrencyAmountValue;
    _INPBCustomObject *_pairCustomObject;
    _INPBDataString *_pairDataString;
    _INPBDistanceValue *_pairDistanceValue;
    _INPBDoubleValue *_pairDoubleValue;
    _INPBImageValue *_pairImageValue;
    _INPBIntegerValue *_pairIntegerValue;
    _INPBLocationValue *_pairLocationValue;
    _INPBPaymentMethodValue *_pairPaymentMethodValue;
    _INPBContactValue *_pairPersonValue;
    _INPBStringValue *_pairStringValue;
    _INPBTemperatureValue *_pairTemperatureValue;
    _INPBURLValue *_pairUrlValue;
    INCodableAttribute *_associatedCodableAttribute;
}

@property(copy, nonatomic) INCodableAttribute *associatedCodableAttribute; // @synthesize associatedCodableAttribute=_associatedCodableAttribute;
@property(retain, nonatomic) _INPBURLValue *pairUrlValue; // @synthesize pairUrlValue=_pairUrlValue;
@property(retain, nonatomic) _INPBTemperatureValue *pairTemperatureValue; // @synthesize pairTemperatureValue=_pairTemperatureValue;
@property(retain, nonatomic) _INPBStringValue *pairStringValue; // @synthesize pairStringValue=_pairStringValue;
@property(retain, nonatomic) _INPBContactValue *pairPersonValue; // @synthesize pairPersonValue=_pairPersonValue;
@property(retain, nonatomic) _INPBPaymentMethodValue *pairPaymentMethodValue; // @synthesize pairPaymentMethodValue=_pairPaymentMethodValue;
@property(retain, nonatomic) _INPBLocationValue *pairLocationValue; // @synthesize pairLocationValue=_pairLocationValue;
@property(retain, nonatomic) _INPBIntegerValue *pairIntegerValue; // @synthesize pairIntegerValue=_pairIntegerValue;
@property(retain, nonatomic) _INPBImageValue *pairImageValue; // @synthesize pairImageValue=_pairImageValue;
@property(retain, nonatomic) _INPBDoubleValue *pairDoubleValue; // @synthesize pairDoubleValue=_pairDoubleValue;
@property(retain, nonatomic) _INPBDistanceValue *pairDistanceValue; // @synthesize pairDistanceValue=_pairDistanceValue;
@property(retain, nonatomic) _INPBDataString *pairDataString; // @synthesize pairDataString=_pairDataString;
@property(retain, nonatomic) _INPBCustomObject *pairCustomObject; // @synthesize pairCustomObject=_pairCustomObject;
@property(retain, nonatomic) _INPBCurrencyAmountValue *pairCurrencyAmountValue; // @synthesize pairCurrencyAmountValue=_pairCurrencyAmountValue;
@property(copy, nonatomic) NSString *key; // @synthesize key=_key;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
@property(readonly) unsigned long long hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
@property(readonly, nonatomic) BOOL hasPairUrlValue;
@property(readonly, nonatomic) BOOL hasPairTemperatureValue;
@property(readonly, nonatomic) BOOL hasPairStringValue;
@property(readonly, nonatomic) BOOL hasPairPersonValue;
@property(readonly, nonatomic) BOOL hasPairPaymentMethodValue;
@property(readonly, nonatomic) BOOL hasPairLocationValue;
@property(readonly, nonatomic) BOOL hasPairIntegerValue;
@property(readonly, nonatomic) BOOL hasPairImageValue;
@property(readonly, nonatomic) BOOL hasPairDoubleValue;
@property(readonly, nonatomic) BOOL hasPairDistanceValue;
@property(readonly, nonatomic) BOOL hasPairDataString;
@property(readonly, nonatomic) BOOL hasPairCustomObject;
@property(readonly, nonatomic) BOOL hasPairCurrencyAmountValue;
@property(readonly, nonatomic) BOOL hasKey;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end
