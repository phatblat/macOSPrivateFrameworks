//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@class GEOSnapScorePoint, NSMutableArray, PBDataReader, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOSnapScoreMetadata : PBCodable <NSCopying>
{
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    NSMutableArray *_destinationAccessPoints;
    NSMutableArray *_destinationPoints;
    NSMutableArray *_originAccessPoints;
    GEOSnapScorePoint *_originPoint;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    struct {
        unsigned int read_unknownFields:1;
        unsigned int read_destinationAccessPoints:1;
        unsigned int read_destinationPoints:1;
        unsigned int read_originAccessPoints:1;
        unsigned int read_originPoint:1;
        unsigned int wrote_unknownFields:1;
        unsigned int wrote_destinationAccessPoints:1;
        unsigned int wrote_destinationPoints:1;
        unsigned int wrote_originAccessPoints:1;
        unsigned int wrote_originPoint:1;
    } _flags;
}

+ (BOOL)isValid:(id)arg1;
+ (Class)destinationAccessPointType;
+ (Class)destinationPointType;
+ (Class)originAccessPointType;
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
- (id)destinationAccessPointAtIndex:(unsigned long long)arg1;
- (unsigned long long)destinationAccessPointsCount;
- (void)_addNoFlagsDestinationAccessPoint:(id)arg1;
- (void)addDestinationAccessPoint:(id)arg1;
- (void)clearDestinationAccessPoints;
@property(retain, nonatomic) NSMutableArray *destinationAccessPoints;
- (void)_readDestinationAccessPoints;
- (id)destinationPointAtIndex:(unsigned long long)arg1;
- (unsigned long long)destinationPointsCount;
- (void)_addNoFlagsDestinationPoint:(id)arg1;
- (void)addDestinationPoint:(id)arg1;
- (void)clearDestinationPoints;
@property(retain, nonatomic) NSMutableArray *destinationPoints;
- (void)_readDestinationPoints;
- (id)originAccessPointAtIndex:(unsigned long long)arg1;
- (unsigned long long)originAccessPointsCount;
- (void)_addNoFlagsOriginAccessPoint:(id)arg1;
- (void)addOriginAccessPoint:(id)arg1;
- (void)clearOriginAccessPoints;
@property(retain, nonatomic) NSMutableArray *originAccessPoints;
- (void)_readOriginAccessPoints;
@property(retain, nonatomic) GEOSnapScorePoint *originPoint;
@property(readonly, nonatomic) BOOL hasOriginPoint;
- (void)_readOriginPoint;
- (id)initWithData:(id)arg1;
- (id)init;

@end
