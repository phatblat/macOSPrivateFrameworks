//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "INCodableAttributeAssociating.h"
#import "NSCopying.h"
#import "NSSecureCoding.h"
#import "_INPBPaymentMethodList.h"

@class INCodableAttribute, NSArray, NSString, _INPBCondition;

@interface _INPBPaymentMethodList : PBCodable <_INPBPaymentMethodList, NSSecureCoding, NSCopying, INCodableAttributeAssociating>
{
    struct _has;
    _INPBCondition *_condition;
    NSArray *_paymentMethods;
    INCodableAttribute *_associatedCodableAttribute;
}

+ (Class)paymentMethodsType;
@property(copy, nonatomic) INCodableAttribute *associatedCodableAttribute; // @synthesize associatedCodableAttribute=_associatedCodableAttribute;
@property(copy, nonatomic) NSArray *paymentMethods; // @synthesize paymentMethods=_paymentMethods;
@property(retain, nonatomic) _INPBCondition *condition; // @synthesize condition=_condition;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
@property(readonly) unsigned long long hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)paymentMethodsAtIndex:(unsigned long long)arg1;
@property(readonly, nonatomic) unsigned long long paymentMethodsCount;
- (void)addPaymentMethods:(id)arg1;
- (void)clearPaymentMethods;
@property(readonly, nonatomic) BOOL hasCondition;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

