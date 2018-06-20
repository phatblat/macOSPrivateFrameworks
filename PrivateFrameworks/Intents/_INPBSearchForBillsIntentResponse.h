//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "INCodableAttributeAssociating.h"
#import "NSCopying.h"
#import "NSSecureCoding.h"
#import "_INPBSearchForBillsIntentResponse.h"

@class INCodableAttribute, NSArray, NSString;

@interface _INPBSearchForBillsIntentResponse : PBCodable <_INPBSearchForBillsIntentResponse, NSSecureCoding, NSCopying, INCodableAttributeAssociating>
{
    struct _has;
    NSArray *_bills;
    INCodableAttribute *_associatedCodableAttribute;
}

+ (Class)billsType;
@property(copy, nonatomic) INCodableAttribute *associatedCodableAttribute; // @synthesize associatedCodableAttribute=_associatedCodableAttribute;
@property(copy, nonatomic) NSArray *bills; // @synthesize bills=_bills;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
@property(readonly) unsigned long long hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)billsAtIndex:(unsigned long long)arg1;
@property(readonly, nonatomic) unsigned long long billsCount;
- (void)addBills:(id)arg1;
- (void)clearBills;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end
