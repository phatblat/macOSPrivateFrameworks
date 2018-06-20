//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "INCodableAttributeAssociating.h"
#import "NSCopying.h"
#import "NSSecureCoding.h"
#import "_INPBCondition.h"

@class INCodableAttribute, NSString;

@interface _INPBCondition : PBCodable <_INPBCondition, NSSecureCoding, NSCopying, INCodableAttributeAssociating>
{
    struct {
        unsigned int conditionalOperator:1;
    } _has;
    int _conditionalOperator;
    INCodableAttribute *_associatedCodableAttribute;
}

@property(copy, nonatomic) INCodableAttribute *associatedCodableAttribute; // @synthesize associatedCodableAttribute=_associatedCodableAttribute;
@property(nonatomic) int conditionalOperator; // @synthesize conditionalOperator=_conditionalOperator;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
@property(readonly) unsigned long long hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (int)StringAsConditionalOperator:(id)arg1;
- (id)conditionalOperatorAsString:(int)arg1;
@property(nonatomic) BOOL hasConditionalOperator;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end
