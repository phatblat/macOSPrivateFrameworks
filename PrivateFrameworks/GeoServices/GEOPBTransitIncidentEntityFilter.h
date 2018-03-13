//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@class PBUnknownFields;

@interface GEOPBTransitIncidentEntityFilter : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;
    CDStruct_62a50c50 _nextStopMuids;
}

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
- (void)setNextStopMuids:(unsigned long long *)arg1 count:(unsigned long long)arg2;
- (unsigned long long)nextStopMuidAtIndex:(unsigned long long)arg1;
- (void)addNextStopMuid:(unsigned long long)arg1;
- (void)clearNextStopMuids;
@property(readonly, nonatomic) unsigned long long *nextStopMuids;
@property(readonly, nonatomic) unsigned long long nextStopMuidsCount;
- (void)dealloc;

@end

