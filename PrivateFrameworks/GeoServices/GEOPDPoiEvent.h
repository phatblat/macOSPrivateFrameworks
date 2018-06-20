//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@class GEOLocalizedString, GEOPDMapsIdentifier, GEOTimezone, NSMutableArray, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDPoiEvent : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;
    NSMutableArray *_eventCategorys;
    NSMutableArray *_eventDateTimes;
    GEOPDMapsIdentifier *_eventId;
    int _expectedAttendance;
    GEOLocalizedString *_name;
    NSMutableArray *_performers;
    NSMutableArray *_poiIds;
    GEOTimezone *_timezone;
    struct {
        unsigned int expectedAttendance:1;
    } _has;
}

+ (Class)performerType;
+ (Class)eventDateTimeType;
+ (Class)poiIdType;
+ (Class)eventCategoryType;
@property(nonatomic) int expectedAttendance; // @synthesize expectedAttendance=_expectedAttendance;
@property(retain, nonatomic) NSMutableArray *performers; // @synthesize performers=_performers;
@property(retain, nonatomic) GEOTimezone *timezone; // @synthesize timezone=_timezone;
@property(retain, nonatomic) NSMutableArray *eventDateTimes; // @synthesize eventDateTimes=_eventDateTimes;
@property(retain, nonatomic) NSMutableArray *poiIds; // @synthesize poiIds=_poiIds;
@property(retain, nonatomic) NSMutableArray *eventCategorys; // @synthesize eventCategorys=_eventCategorys;
@property(retain, nonatomic) GEOLocalizedString *name; // @synthesize name=_name;
@property(retain, nonatomic) GEOPDMapsIdentifier *eventId; // @synthesize eventId=_eventId;
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
@property(nonatomic) BOOL hasExpectedAttendance;
- (id)performerAtIndex:(unsigned long long)arg1;
- (unsigned long long)performersCount;
- (void)addPerformer:(id)arg1;
- (void)clearPerformers;
@property(readonly, nonatomic) BOOL hasTimezone;
- (id)eventDateTimeAtIndex:(unsigned long long)arg1;
- (unsigned long long)eventDateTimesCount;
- (void)addEventDateTime:(id)arg1;
- (void)clearEventDateTimes;
- (id)poiIdAtIndex:(unsigned long long)arg1;
- (unsigned long long)poiIdsCount;
- (void)addPoiId:(id)arg1;
- (void)clearPoiIds;
- (id)eventCategoryAtIndex:(unsigned long long)arg1;
- (unsigned long long)eventCategorysCount;
- (void)addEventCategory:(id)arg1;
- (void)clearEventCategorys;
@property(readonly, nonatomic) BOOL hasName;
@property(readonly, nonatomic) BOOL hasEventId;

@end

