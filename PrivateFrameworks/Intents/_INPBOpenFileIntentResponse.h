//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "INCodableAttributeAssociating.h"
#import "NSCopying.h"
#import "NSSecureCoding.h"
#import "_INPBOpenFileIntentResponse.h"

@class INCodableAttribute, NSArray, NSString, _INPBInteger, _INPBString;

@interface _INPBOpenFileIntentResponse : PBCodable <_INPBOpenFileIntentResponse, NSSecureCoding, NSCopying, INCodableAttributeAssociating>
{
    CDStruct_f2ecb737 _has;
    BOOL _success;
    NSArray *_entities;
    _INPBInteger *_numResults;
    _INPBString *_query;
    INCodableAttribute *_associatedCodableAttribute;
}

+ (Class)entitiesType;
@property(copy, nonatomic) INCodableAttribute *associatedCodableAttribute; // @synthesize associatedCodableAttribute=_associatedCodableAttribute;
@property(nonatomic) BOOL success; // @synthesize success=_success;
@property(retain, nonatomic) _INPBString *query; // @synthesize query=_query;
@property(retain, nonatomic) _INPBInteger *numResults; // @synthesize numResults=_numResults;
@property(copy, nonatomic) NSArray *entities; // @synthesize entities=_entities;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
@property(readonly) unsigned long long hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
@property(nonatomic) BOOL hasSuccess;
@property(readonly, nonatomic) BOOL hasQuery;
@property(readonly, nonatomic) BOOL hasNumResults;
- (id)entitiesAtIndex:(unsigned long long)arg1;
@property(readonly, nonatomic) unsigned long long entitiesCount;
- (void)addEntities:(id)arg1;
- (void)clearEntities;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

