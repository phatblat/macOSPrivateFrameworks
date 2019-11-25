//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@class GEOTrafficResponseMetaData, NSMutableArray, PBDataReader;

__attribute__((visibility("hidden")))
@interface GEOTrafficTrafficApiResponse : PBCodable <NSCopying>
{
    PBDataReader *_reader;
    struct GEOSessionID _responseId;
    NSMutableArray *_incidentSnapshots;
    GEOTrafficResponseMetaData *_metaData;
    NSMutableArray *_speedSnapshots;
    NSMutableArray *_trafficSnapshots;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    struct {
        unsigned int has_responseId:1;
        unsigned int read_incidentSnapshots:1;
        unsigned int read_metaData:1;
        unsigned int read_speedSnapshots:1;
        unsigned int read_trafficSnapshots:1;
        unsigned int wrote_responseId:1;
        unsigned int wrote_incidentSnapshots:1;
        unsigned int wrote_metaData:1;
        unsigned int wrote_speedSnapshots:1;
        unsigned int wrote_trafficSnapshots:1;
    } _flags;
}

+ (BOOL)isValid:(id)arg1;
+ (Class)trafficSnapshotsType;
+ (Class)incidentSnapshotsType;
+ (Class)speedSnapshotsType;
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
- (id)trafficSnapshotsAtIndex:(unsigned long long)arg1;
- (unsigned long long)trafficSnapshotsCount;
- (void)_addNoFlagsTrafficSnapshots:(id)arg1;
- (void)addTrafficSnapshots:(id)arg1;
- (void)clearTrafficSnapshots;
@property(retain, nonatomic) NSMutableArray *trafficSnapshots;
- (void)_readTrafficSnapshots;
@property(retain, nonatomic) GEOTrafficResponseMetaData *metaData;
@property(readonly, nonatomic) BOOL hasMetaData;
- (void)_readMetaData;
@property(nonatomic) BOOL hasResponseId;
@property(nonatomic) struct GEOSessionID responseId;
- (id)incidentSnapshotsAtIndex:(unsigned long long)arg1;
- (unsigned long long)incidentSnapshotsCount;
- (void)_addNoFlagsIncidentSnapshots:(id)arg1;
- (void)addIncidentSnapshots:(id)arg1;
- (void)clearIncidentSnapshots;
@property(retain, nonatomic) NSMutableArray *incidentSnapshots;
- (void)_readIncidentSnapshots;
- (id)speedSnapshotsAtIndex:(unsigned long long)arg1;
- (unsigned long long)speedSnapshotsCount;
- (void)_addNoFlagsSpeedSnapshots:(id)arg1;
- (void)addSpeedSnapshots:(id)arg1;
- (void)clearSpeedSnapshots;
@property(retain, nonatomic) NSMutableArray *speedSnapshots;
- (void)_readSpeedSnapshots;
- (id)initWithData:(id)arg1;
- (id)init;

@end

