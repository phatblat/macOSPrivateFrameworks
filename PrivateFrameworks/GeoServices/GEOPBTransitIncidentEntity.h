//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "GEOTransitIncidentEntity.h"
#import "NSCopying.h"

@class GEOPBTransitIncidentEntityFilter, NSSet, NSString, PBUnknownFields;

@interface GEOPBTransitIncidentEntity : PBCodable <GEOTransitIncidentEntity, NSCopying>
{
    PBUnknownFields *_unknownFields;
    unsigned long long _affectedMuid;
    GEOPBTransitIncidentEntityFilter *_filter;
    struct {
        unsigned int affectedMuid:1;
    } _has;
}

@property(retain, nonatomic) GEOPBTransitIncidentEntityFilter *filter; // @synthesize filter=_filter;
@property(nonatomic) unsigned long long affectedMuid; // @synthesize affectedMuid=_affectedMuid;
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
@property(readonly, nonatomic) BOOL hasFilter;
@property(nonatomic) BOOL hasAffectedMuid;
@property(readonly, nonatomic) NSSet *nextStopIDs;
@property(readonly, nonatomic) BOOL hasNextStopIDs;
@property(readonly, nonatomic) unsigned long long muid;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

