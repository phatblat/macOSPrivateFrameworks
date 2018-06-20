//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "INCodableAttributeAssociating.h"
#import "NSCopying.h"
#import "NSSecureCoding.h"
#import "_INPBPayloadNeedsValue.h"

@class INCodableAttribute, NSArray, NSString;

@interface _INPBPayloadNeedsValue : PBCodable <_INPBPayloadNeedsValue, NSSecureCoding, NSCopying, INCodableAttributeAssociating>
{
    struct _has;
    NSArray *_promptItems;
    INCodableAttribute *_associatedCodableAttribute;
}

+ (Class)promptItemsType;
@property(copy, nonatomic) INCodableAttribute *associatedCodableAttribute; // @synthesize associatedCodableAttribute=_associatedCodableAttribute;
@property(copy, nonatomic) NSArray *promptItems; // @synthesize promptItems=_promptItems;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
@property(readonly) unsigned long long hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)promptItemsAtIndex:(unsigned long long)arg1;
@property(readonly, nonatomic) unsigned long long promptItemsCount;
- (void)addPromptItems:(id)arg1;
- (void)clearPromptItems;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

