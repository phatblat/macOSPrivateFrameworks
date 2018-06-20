//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "INCodableAttributeAssociating.h"
#import "NSCopying.h"
#import "NSSecureCoding.h"
#import "_INPBConfigureHomeIntent.h"

@class INCodableAttribute, NSArray, NSString, _INPBIntentMetadata;

@interface _INPBConfigureHomeIntent : PBCodable <_INPBConfigureHomeIntent, NSSecureCoding, NSCopying, INCodableAttributeAssociating>
{
    struct _has;
    NSArray *_entities;
    _INPBIntentMetadata *_intentMetadata;
    INCodableAttribute *_associatedCodableAttribute;
}

+ (Class)entitiesType;
@property(copy, nonatomic) INCodableAttribute *associatedCodableAttribute; // @synthesize associatedCodableAttribute=_associatedCodableAttribute;
@property(retain, nonatomic) _INPBIntentMetadata *intentMetadata; // @synthesize intentMetadata=_intentMetadata;
@property(copy, nonatomic) NSArray *entities; // @synthesize entities=_entities;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
@property(readonly) unsigned long long hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
@property(readonly, nonatomic) BOOL hasIntentMetadata;
- (id)entitiesAtIndex:(unsigned long long)arg1;
@property(readonly, nonatomic) unsigned long long entitiesCount;
- (void)addEntities:(id)arg1;
- (void)clearEntities;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

