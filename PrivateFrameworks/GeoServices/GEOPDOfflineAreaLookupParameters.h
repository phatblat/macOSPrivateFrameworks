//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@class GEOLocation, NSMutableArray, PBDataReader, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDOfflineAreaLookupParameters : PBCodable <NSCopying>
{
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    GEOLocation *_extendedLocation;
    unsigned long long _featureId;
    NSMutableArray *_layers;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    struct {
        unsigned int has_featureId:1;
        unsigned int read_unknownFields:1;
        unsigned int read_extendedLocation:1;
        unsigned int read_layers:1;
        unsigned int wrote_unknownFields:1;
        unsigned int wrote_extendedLocation:1;
        unsigned int wrote_featureId:1;
        unsigned int wrote_layers:1;
    } _flags;
}

+ (BOOL)isValid:(id)arg1;
+ (Class)layerType;
- (void).cxx_destruct;
- (void)clearUnknownFields:(BOOL)arg1;
@property(readonly, nonatomic) PBUnknownFields *unknownFields;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)clearSensitiveFields;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)readAll:(BOOL)arg1;
- (id)dictionaryRepresentation;
- (id)description;
- (id)layerAtIndex:(unsigned long long)arg1;
- (unsigned long long)layersCount;
- (void)_addNoFlagsLayer:(id)arg1;
- (void)addLayer:(id)arg1;
- (void)clearLayers;
@property(retain, nonatomic) NSMutableArray *layers;
- (void)_readLayers;
@property(retain, nonatomic) GEOLocation *extendedLocation;
@property(readonly, nonatomic) BOOL hasExtendedLocation;
- (void)_readExtendedLocation;
@property(nonatomic) BOOL hasFeatureId;
@property(nonatomic) unsigned long long featureId;
- (id)initWithData:(id)arg1;
- (id)init;

@end

