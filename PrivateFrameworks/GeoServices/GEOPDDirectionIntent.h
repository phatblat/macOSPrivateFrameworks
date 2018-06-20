//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@class GEOPDResolvedItem, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDDirectionIntent : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;
    GEOPDResolvedItem *_destination;
    GEOPDResolvedItem *_origin;
    int _transportType;
    CDStruct_a995201b _has;
}

@property(retain, nonatomic) GEOPDResolvedItem *destination; // @synthesize destination=_destination;
@property(retain, nonatomic) GEOPDResolvedItem *origin; // @synthesize origin=_origin;
- (void).cxx_destruct;
@property(readonly, nonatomic) PBUnknownFields *unknownFields;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
- (int)StringAsTransportType:(id)arg1;
- (id)transportTypeAsString:(int)arg1;
@property(nonatomic) BOOL hasTransportType;
@property(nonatomic) int transportType; // @synthesize transportType=_transportType;
@property(readonly, nonatomic) BOOL hasDestination;
@property(readonly, nonatomic) BOOL hasOrigin;

@end

