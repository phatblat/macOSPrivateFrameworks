//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "INCodableAttributeAssociating.h"
#import "NSCopying.h"
#import "NSSecureCoding.h"
#import "_INPBEventList.h"

@class INCodableAttribute, NSArray, NSString, _INPBCondition;

@interface _INPBEventList : PBCodable <_INPBEventList, NSSecureCoding, NSCopying, INCodableAttributeAssociating>
{
    struct _has;
    _INPBCondition *_condition;
    NSArray *_events;
    INCodableAttribute *_associatedCodableAttribute;
}

+ (Class)eventType;
@property(copy, nonatomic) INCodableAttribute *associatedCodableAttribute; // @synthesize associatedCodableAttribute=_associatedCodableAttribute;
@property(copy, nonatomic) NSArray *events; // @synthesize events=_events;
@property(retain, nonatomic) _INPBCondition *condition; // @synthesize condition=_condition;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
@property(readonly) unsigned long long hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)eventAtIndex:(unsigned long long)arg1;
@property(readonly, nonatomic) unsigned long long eventsCount;
- (void)addEvent:(id)arg1;
- (void)clearEvents;
@property(readonly, nonatomic) BOOL hasCondition;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end
