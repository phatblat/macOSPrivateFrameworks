//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "GEOComposedRouteTransitDisplayStrings.h"
#import "NSCopying.h"

@class GEOFormattedString, NSArray, NSMutableArray, NSString, PBDataReader, PBUnknownFields;

@interface GEOTransitRouteDisplayStrings : PBCodable <GEOComposedRouteTransitDisplayStrings, NSCopying>
{
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    NSMutableArray *_advisorys;
    GEOFormattedString *_badge;
    GEOFormattedString *_durationList;
    GEOFormattedString *_duration;
    GEOFormattedString *_planningDescription;
    GEOFormattedString *_travelDescription;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    struct {
        unsigned int read_unknownFields:1;
        unsigned int read_advisorys:1;
        unsigned int read_badge:1;
        unsigned int read_durationList:1;
        unsigned int read_duration:1;
        unsigned int read_planningDescription:1;
        unsigned int read_travelDescription:1;
        unsigned int wrote_unknownFields:1;
        unsigned int wrote_advisorys:1;
        unsigned int wrote_badge:1;
        unsigned int wrote_durationList:1;
        unsigned int wrote_duration:1;
        unsigned int wrote_planningDescription:1;
        unsigned int wrote_travelDescription:1;
    } _flags;
}

+ (BOOL)isValid:(id)arg1;
+ (Class)advisoryType;
- (void).cxx_destruct;
- (void)clearUnknownFields:(BOOL)arg1;
@property(readonly, nonatomic) PBUnknownFields *unknownFields;
- (void)mergeFrom:(id)arg1;
@property(readonly) unsigned long long hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)readAll:(BOOL)arg1;
- (id)dictionaryRepresentation;
@property(readonly, copy) NSString *description;
@property(retain, nonatomic) GEOFormattedString *badge;
@property(readonly, nonatomic) BOOL hasBadge;
- (void)_readBadge;
- (id)advisoryAtIndex:(unsigned long long)arg1;
- (unsigned long long)advisorysCount;
- (void)_addNoFlagsAdvisory:(id)arg1;
- (void)addAdvisory:(id)arg1;
- (void)clearAdvisorys;
@property(retain, nonatomic) NSMutableArray *advisorys;
- (void)_readAdvisorys;
@property(retain, nonatomic) GEOFormattedString *travelDescription;
@property(readonly, nonatomic) BOOL hasTravelDescription;
- (void)_readTravelDescription;
@property(retain, nonatomic) GEOFormattedString *durationList;
@property(readonly, nonatomic) BOOL hasDurationList;
- (void)_readDurationList;
@property(retain, nonatomic) GEOFormattedString *duration;
@property(readonly, nonatomic) BOOL hasDuration;
- (void)_readDuration;
@property(retain, nonatomic) GEOFormattedString *planningDescription;
@property(readonly, nonatomic) BOOL hasPlanningDescription;
- (void)_readPlanningDescription;
- (id)initWithData:(id)arg1;
- (id)init;
@property(readonly, nonatomic) id <GEOServerFormattedString> transitRouteBadge;
@property(readonly, nonatomic) NSArray *transitAdvisories;
@property(readonly, nonatomic) id <GEOServerFormattedString> transitDescriptionFormatString;
@property(readonly, nonatomic) id <GEOServerFormattedString> pickingDurationFormatString;
@property(readonly, nonatomic) id <GEOServerFormattedString> previewDurationFormatString;
@property(readonly, nonatomic) id <GEOServerFormattedString> planningDescriptionFormatString;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

