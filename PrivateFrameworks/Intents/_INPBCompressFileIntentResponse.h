//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@class PBUnknownFields, _INPBString;

@interface _INPBCompressFileIntentResponse : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;
    _INPBString *_entityName;
    BOOL _success;
    CDStruct_f2ecb737 _has;
}

+ (id)options;
@property(retain, nonatomic) _INPBString *entityName; // @synthesize entityName=_entityName;
@property(nonatomic) BOOL success; // @synthesize success=_success;
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
@property(readonly, nonatomic) BOOL hasEntityName;
@property(nonatomic) BOOL hasSuccess;

@end

