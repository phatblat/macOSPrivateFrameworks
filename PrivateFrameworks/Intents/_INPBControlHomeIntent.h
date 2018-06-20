//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "INCodableAttributeAssociating.h"
#import "NSCopying.h"
#import "NSSecureCoding.h"
#import "_INPBControlHomeIntent.h"

@class INCodableAttribute, NSArray, NSString, _INPBHomeAttribute, _INPBIntentMetadata;

@interface _INPBControlHomeIntent : PBCodable <_INPBControlHomeIntent, NSSecureCoding, NSCopying, INCodableAttributeAssociating>
{
    struct _has;
    _INPBHomeAttribute *_attribute;
    NSArray *_contents;
    NSArray *_entities;
    _INPBIntentMetadata *_intentMetadata;
    INCodableAttribute *_associatedCodableAttribute;
}

+ (Class)entitiesType;
+ (Class)contentsType;
@property(copy, nonatomic) INCodableAttribute *associatedCodableAttribute; // @synthesize associatedCodableAttribute=_associatedCodableAttribute;
@property(retain, nonatomic) _INPBIntentMetadata *intentMetadata; // @synthesize intentMetadata=_intentMetadata;
@property(copy, nonatomic) NSArray *entities; // @synthesize entities=_entities;
@property(copy, nonatomic) NSArray *contents; // @synthesize contents=_contents;
@property(retain, nonatomic) _INPBHomeAttribute *attribute; // @synthesize attribute=_attribute;
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
- (id)contentsAtIndex:(unsigned long long)arg1;
@property(readonly, nonatomic) unsigned long long contentsCount;
- (void)addContents:(id)arg1;
- (void)clearContents;
@property(readonly, nonatomic) BOOL hasAttribute;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end
