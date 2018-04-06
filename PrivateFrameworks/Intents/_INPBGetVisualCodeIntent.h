//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@class PBUnknownFields, _INPBIntentMetadata;

@interface _INPBGetVisualCodeIntent : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;
    _INPBIntentMetadata *_intentMetadata;
    int _visualCodeType;
    struct {
        unsigned int visualCodeType:1;
    } _has;
}

+ (id)options;
@property(retain, nonatomic) _INPBIntentMetadata *intentMetadata; // @synthesize intentMetadata=_intentMetadata;
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
- (int)StringAsVisualCodeType:(id)arg1;
- (id)visualCodeTypeAsString:(int)arg1;
@property(nonatomic) BOOL hasVisualCodeType;
@property(nonatomic) int visualCodeType; // @synthesize visualCodeType=_visualCodeType;
@property(readonly, nonatomic) BOOL hasIntentMetadata;

@end
