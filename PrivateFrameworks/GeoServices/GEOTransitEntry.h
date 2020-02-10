//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@class PBUnknownFields;

@interface GEOTransitEntry : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;
    unsigned long long _lineMuid;
    unsigned long long _tripMuid;
    unsigned int _tripStaticDepartureTime;
    unsigned int _windowStartTime;
    struct {
        unsigned int has_lineMuid:1;
        unsigned int has_tripMuid:1;
        unsigned int has_tripStaticDepartureTime:1;
        unsigned int has_windowStartTime:1;
    } _flags;
}

+ (BOOL)isValid:(id)arg1;
- (void).cxx_destruct;
- (void)clearUnknownFields:(BOOL)arg1;
@property(readonly, nonatomic) PBUnknownFields *unknownFields;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)readAll:(BOOL)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) BOOL hasWindowStartTime;
@property(nonatomic) unsigned int windowStartTime;
@property(nonatomic) BOOL hasTripStaticDepartureTime;
@property(nonatomic) unsigned int tripStaticDepartureTime;
@property(nonatomic) BOOL hasLineMuid;
@property(nonatomic) unsigned long long lineMuid;
@property(nonatomic) BOOL hasTripMuid;
@property(nonatomic) unsigned long long tripMuid;

@end
