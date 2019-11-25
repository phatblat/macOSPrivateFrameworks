//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@class GEOLatLng, NSMutableArray, PBDataReader, PBUnknownFields;

@interface GEOSnapScorePoint : PBCodable <NSCopying>
{
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    NSMutableArray *_candidates;
    GEOLatLng *_point;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    struct {
        unsigned int read_unknownFields:1;
        unsigned int read_candidates:1;
        unsigned int read_point:1;
        unsigned int wrote_unknownFields:1;
        unsigned int wrote_candidates:1;
        unsigned int wrote_point:1;
    } _flags;
}

+ (BOOL)isValid:(id)arg1;
+ (Class)candidateType;
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
- (id)candidateAtIndex:(unsigned long long)arg1;
- (unsigned long long)candidatesCount;
- (void)_addNoFlagsCandidate:(id)arg1;
- (void)addCandidate:(id)arg1;
- (void)clearCandidates;
@property(retain, nonatomic) NSMutableArray *candidates;
- (void)_readCandidates;
@property(retain, nonatomic) GEOLatLng *point;
@property(readonly, nonatomic) BOOL hasPoint;
- (void)_readPoint;
- (id)initWithData:(id)arg1;
- (id)init;

@end

