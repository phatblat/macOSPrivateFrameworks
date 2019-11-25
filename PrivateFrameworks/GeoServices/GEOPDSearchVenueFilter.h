//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@class GEOPDVenueIdentifier, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDSearchVenueFilter : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;
    GEOPDVenueIdentifier *_venueFilter;
    int _venueSearchType;
    struct {
        unsigned int has_venueSearchType:1;
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
- (int)StringAsVenueSearchType:(id)arg1;
- (id)venueSearchTypeAsString:(int)arg1;
@property(nonatomic) BOOL hasVenueSearchType;
@property(nonatomic) int venueSearchType;
@property(retain, nonatomic) GEOPDVenueIdentifier *venueFilter;
@property(readonly, nonatomic) BOOL hasVenueFilter;

@end

