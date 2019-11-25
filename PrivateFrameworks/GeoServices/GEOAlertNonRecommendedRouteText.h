//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@class GEOFormattedString, GEOPlaceFormattedString, PBDataReader, PBUnknownFields;

@interface GEOAlertNonRecommendedRouteText : PBCodable <NSCopying>
{
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    GEOPlaceFormattedString *_body;
    GEOFormattedString *_responseAlertPrimary;
    GEOFormattedString *_responseAlertSecondary;
    GEOPlaceFormattedString *_title;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    struct {
        unsigned int read_unknownFields:1;
        unsigned int read_body:1;
        unsigned int read_responseAlertPrimary:1;
        unsigned int read_responseAlertSecondary:1;
        unsigned int read_title:1;
        unsigned int wrote_unknownFields:1;
        unsigned int wrote_body:1;
        unsigned int wrote_responseAlertPrimary:1;
        unsigned int wrote_responseAlertSecondary:1;
        unsigned int wrote_title:1;
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
@property(retain, nonatomic) GEOPlaceFormattedString *body;
@property(readonly, nonatomic) BOOL hasBody;
- (void)_readBody;
@property(retain, nonatomic) GEOPlaceFormattedString *title;
@property(readonly, nonatomic) BOOL hasTitle;
- (void)_readTitle;
@property(retain, nonatomic) GEOFormattedString *responseAlertSecondary;
@property(readonly, nonatomic) BOOL hasResponseAlertSecondary;
- (void)_readResponseAlertSecondary;
@property(retain, nonatomic) GEOFormattedString *responseAlertPrimary;
@property(readonly, nonatomic) BOOL hasResponseAlertPrimary;
- (void)_readResponseAlertPrimary;
- (id)initWithData:(id)arg1;
- (id)init;

@end

