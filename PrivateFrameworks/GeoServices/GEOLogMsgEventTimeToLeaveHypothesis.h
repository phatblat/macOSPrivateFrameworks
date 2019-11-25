//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@interface GEOLogMsgEventTimeToLeaveHypothesis : PBCodable <NSCopying>
{
    double _earliestArrivalOffset;
    double _earliestDepartureOffset;
    double _latestArrivalOffset;
    double _latestDepartureOffset;
    int _arrival;
    int _departure;
    unsigned int _numberOfReroutes;
    int _ttlUiNotificationShown;
    struct {
        unsigned int has_earliestArrivalOffset:1;
        unsigned int has_earliestDepartureOffset:1;
        unsigned int has_latestArrivalOffset:1;
        unsigned int has_latestDepartureOffset:1;
        unsigned int has_arrival:1;
        unsigned int has_departure:1;
        unsigned int has_numberOfReroutes:1;
        unsigned int has_ttlUiNotificationShown:1;
    } _flags;
}

+ (BOOL)isValid:(id)arg1;
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
@property(nonatomic) BOOL hasLatestArrivalOffset;
@property(nonatomic) double latestArrivalOffset;
@property(nonatomic) BOOL hasEarliestArrivalOffset;
@property(nonatomic) double earliestArrivalOffset;
@property(nonatomic) BOOL hasLatestDepartureOffset;
@property(nonatomic) double latestDepartureOffset;
@property(nonatomic) BOOL hasEarliestDepartureOffset;
@property(nonatomic) double earliestDepartureOffset;
- (int)StringAsTtlUiNotificationShown:(id)arg1;
- (id)ttlUiNotificationShownAsString:(int)arg1;
@property(nonatomic) BOOL hasTtlUiNotificationShown;
@property(nonatomic) int ttlUiNotificationShown;
@property(nonatomic) BOOL hasNumberOfReroutes;
@property(nonatomic) unsigned int numberOfReroutes;
- (int)StringAsArrival:(id)arg1;
- (id)arrivalAsString:(int)arg1;
@property(nonatomic) BOOL hasArrival;
@property(nonatomic) int arrival;
- (int)StringAsDeparture:(id)arg1;
- (id)departureAsString:(int)arg1;
@property(nonatomic) BOOL hasDeparture;
@property(nonatomic) int departure;

@end

