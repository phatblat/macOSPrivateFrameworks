//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@class PBUnknownFields, _INPBLocationValue;

@interface _INPBSpatialEventTrigger : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;
    int _event;
    _INPBLocationValue *_location;
    struct {
        unsigned int event:1;
    } _has;
}

+ (id)options;
@property(retain, nonatomic) _INPBLocationValue *location; // @synthesize location=_location;
- (void).cxx_destruct;
@property(readonly, nonatomic) PBUnknownFields *unknownFields;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
- (int)StringAsEvent:(id)arg1;
- (id)eventAsString:(int)arg1;
@property(nonatomic) BOOL hasEvent;
@property(nonatomic) int event; // @synthesize event=_event;
@property(readonly, nonatomic) BOOL hasLocation;

@end

