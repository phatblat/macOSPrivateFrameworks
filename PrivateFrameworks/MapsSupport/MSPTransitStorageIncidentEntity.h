//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "GEOTransitIncidentEntity.h"
#import "NSCopying.h"

@class NSSet, NSString, PBUnknownFields;

@interface MSPTransitStorageIncidentEntity : PBCodable <GEOTransitIncidentEntity, NSCopying>
{
    PBUnknownFields *_unknownFields;
    struct {
        unsigned long long *list;
        unsigned long long count;
        unsigned long long size;
    } _nextStopsMuids;
    unsigned long long _muid;
    CDStruct_e99c65f7 _has;
}

@property(nonatomic) unsigned long long muid; // @synthesize muid=_muid;
- (void).cxx_destruct;
@property(readonly, nonatomic) PBUnknownFields *unknownFields;
- (void)mergeFrom:(id)arg1;
@property(readonly) unsigned long long hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
@property(readonly, copy) NSString *description;
- (void)setNextStopsMuids:(unsigned long long *)arg1 count:(unsigned long long)arg2;
- (unsigned long long)nextStopsMuidsAtIndex:(unsigned long long)arg1;
- (void)addNextStopsMuids:(unsigned long long)arg1;
- (void)clearNextStopsMuids;
@property(readonly, nonatomic) unsigned long long *nextStopsMuids;
@property(readonly, nonatomic) unsigned long long nextStopsMuidsCount;
@property(nonatomic) BOOL hasMuid;
- (void)dealloc;
@property(readonly, nonatomic) BOOL hasNextStopIDs;
@property(readonly, nonatomic) NSSet *nextStopIDs;
- (id)initWithIncidentEntity:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

