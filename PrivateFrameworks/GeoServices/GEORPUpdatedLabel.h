//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@class GEOLatLng, NSString, PBDataReader;

@interface GEORPUpdatedLabel : PBCodable <NSCopying>
{
    PBDataReader *_reader;
    GEOLatLng *_center;
    NSString *_localizedText;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    struct {
        unsigned int read_center:1;
        unsigned int read_localizedText:1;
        unsigned int wrote_center:1;
        unsigned int wrote_localizedText:1;
    } _flags;
}

+ (BOOL)isValid:(id)arg1;
- (void).cxx_destruct;
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
@property(retain, nonatomic) GEOLatLng *center;
@property(readonly, nonatomic) BOOL hasCenter;
- (void)_readCenter;
@property(retain, nonatomic) NSString *localizedText;
@property(readonly, nonatomic) BOOL hasLocalizedText;
- (void)_readLocalizedText;
- (id)initWithData:(id)arg1;
- (id)init;

@end

