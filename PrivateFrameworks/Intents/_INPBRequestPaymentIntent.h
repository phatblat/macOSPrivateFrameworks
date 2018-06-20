//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "INCodableAttributeAssociating.h"
#import "NSCopying.h"
#import "NSSecureCoding.h"
#import "_INPBRequestPaymentIntent.h"

@class INCodableAttribute, NSString, _INPBContact, _INPBCurrencyAmount, _INPBIntentMetadata, _INPBString;

@interface _INPBRequestPaymentIntent : PBCodable <_INPBRequestPaymentIntent, NSSecureCoding, NSCopying, INCodableAttributeAssociating>
{
    struct _has;
    _INPBCurrencyAmount *_currencyAmount;
    _INPBIntentMetadata *_intentMetadata;
    _INPBString *_note;
    _INPBContact *_payer;
    INCodableAttribute *_associatedCodableAttribute;
}

@property(copy, nonatomic) INCodableAttribute *associatedCodableAttribute; // @synthesize associatedCodableAttribute=_associatedCodableAttribute;
@property(retain, nonatomic) _INPBContact *payer; // @synthesize payer=_payer;
@property(retain, nonatomic) _INPBString *note; // @synthesize note=_note;
@property(retain, nonatomic) _INPBIntentMetadata *intentMetadata; // @synthesize intentMetadata=_intentMetadata;
@property(retain, nonatomic) _INPBCurrencyAmount *currencyAmount; // @synthesize currencyAmount=_currencyAmount;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
@property(readonly) unsigned long long hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
@property(readonly, nonatomic) BOOL hasPayer;
@property(readonly, nonatomic) BOOL hasNote;
@property(readonly, nonatomic) BOOL hasIntentMetadata;
@property(readonly, nonatomic) BOOL hasCurrencyAmount;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

