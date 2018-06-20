//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@class GEOFormattedString, NSMutableArray;

@interface GEOTransitRouteDisplayStrings : PBCodable <NSCopying>
{
    NSMutableArray *_advisorys;
    GEOFormattedString *_badge;
    GEOFormattedString *_duration;
    GEOFormattedString *_durationList;
    GEOFormattedString *_planningDescription;
    GEOFormattedString *_travelDescription;
}

+ (Class)advisoryType;
@property(retain, nonatomic) GEOFormattedString *badge; // @synthesize badge=_badge;
@property(retain, nonatomic) NSMutableArray *advisorys; // @synthesize advisorys=_advisorys;
@property(retain, nonatomic) GEOFormattedString *travelDescription; // @synthesize travelDescription=_travelDescription;
@property(retain, nonatomic) GEOFormattedString *durationList; // @synthesize durationList=_durationList;
@property(retain, nonatomic) GEOFormattedString *duration; // @synthesize duration=_duration;
@property(retain, nonatomic) GEOFormattedString *planningDescription; // @synthesize planningDescription=_planningDescription;
- (void).cxx_destruct;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) BOOL hasBadge;
- (id)advisoryAtIndex:(unsigned long long)arg1;
- (unsigned long long)advisorysCount;
- (void)addAdvisory:(id)arg1;
- (void)clearAdvisorys;
@property(readonly, nonatomic) BOOL hasTravelDescription;
@property(readonly, nonatomic) BOOL hasDurationList;
@property(readonly, nonatomic) BOOL hasDuration;
@property(readonly, nonatomic) BOOL hasPlanningDescription;

@end
