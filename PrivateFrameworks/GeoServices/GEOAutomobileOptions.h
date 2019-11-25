//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@class GEOUserPreferences, PBUnknownFields;

@interface GEOAutomobileOptions : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;
    GEOUserPreferences *_userPreferences;
    int _trafficType;
    BOOL _includeHistoricTravelTime;
    BOOL _includeStaticTravelTime;
    struct {
        unsigned int has_trafficType:1;
        unsigned int has_includeHistoricTravelTime:1;
        unsigned int has_includeStaticTravelTime:1;
    } _flags;
}

+ (BOOL)isValid:(id)arg1;
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
@property(retain, nonatomic) GEOUserPreferences *userPreferences;
@property(readonly, nonatomic) BOOL hasUserPreferences;
@property(nonatomic) BOOL hasIncludeStaticTravelTime;
@property(nonatomic) BOOL includeStaticTravelTime;
- (int)StringAsTrafficType:(id)arg1;
- (id)trafficTypeAsString:(int)arg1;
@property(nonatomic) BOOL hasTrafficType;
@property(nonatomic) int trafficType;
@property(nonatomic) BOOL hasIncludeHistoricTravelTime;
@property(nonatomic) BOOL includeHistoricTravelTime;

@end

