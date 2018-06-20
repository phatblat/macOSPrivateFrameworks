//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "INCodableAttributeAssociating.h"
#import "NSCopying.h"
#import "NSSecureCoding.h"
#import "_INPBSpatialEventTrigger.h"

@class INCodableAttribute, NSString, _INPBLocationValue;

@interface _INPBSpatialEventTrigger : PBCodable <_INPBSpatialEventTrigger, NSSecureCoding, NSCopying, INCodableAttributeAssociating>
{
    struct {
        unsigned int event:1;
    } _has;
    int _event;
    _INPBLocationValue *_location;
    INCodableAttribute *_associatedCodableAttribute;
}

@property(copy, nonatomic) INCodableAttribute *associatedCodableAttribute; // @synthesize associatedCodableAttribute=_associatedCodableAttribute;
@property(retain, nonatomic) _INPBLocationValue *location; // @synthesize location=_location;
@property(nonatomic) int event; // @synthesize event=_event;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
@property(readonly) unsigned long long hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
@property(readonly, nonatomic) BOOL hasLocation;
- (int)StringAsEvent:(id)arg1;
- (id)eventAsString:(int)arg1;
@property(nonatomic) BOOL hasEvent;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end
