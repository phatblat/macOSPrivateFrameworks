//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@class NSMutableArray, NSString;

@interface CLPMicroLocationRTLOITypeEntry : PBCodable <NSCopying>
{
    double _confidence;
    double _uncertaintyInMeters;
    int _rtLOIType;
    NSString *_rtLOIUUID;
    int _typeSource;
    NSMutableArray *_visits;
    BOOL _rtVisitTimesAreQuantized;
    struct {
        unsigned int confidence:1;
        unsigned int uncertaintyInMeters:1;
        unsigned int rtLOIType:1;
        unsigned int typeSource:1;
        unsigned int rtVisitTimesAreQuantized:1;
    } _has;
}

+ (Class)visitsType;
@property(nonatomic) BOOL rtVisitTimesAreQuantized; // @synthesize rtVisitTimesAreQuantized=_rtVisitTimesAreQuantized;
@property(retain, nonatomic) NSMutableArray *visits; // @synthesize visits=_visits;
@property(nonatomic) double confidence; // @synthesize confidence=_confidence;
@property(nonatomic) double uncertaintyInMeters; // @synthesize uncertaintyInMeters=_uncertaintyInMeters;
@property(retain, nonatomic) NSString *rtLOIUUID; // @synthesize rtLOIUUID=_rtLOIUUID;
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
@property(nonatomic) BOOL hasRtVisitTimesAreQuantized;
- (id)visitsAtIndex:(unsigned long long)arg1;
- (unsigned long long)visitsCount;
- (void)addVisits:(id)arg1;
- (void)clearVisits;
- (int)StringAsTypeSource:(id)arg1;
- (id)typeSourceAsString:(int)arg1;
@property(nonatomic) BOOL hasTypeSource;
@property(nonatomic) int typeSource; // @synthesize typeSource=_typeSource;
@property(nonatomic) BOOL hasConfidence;
@property(nonatomic) BOOL hasUncertaintyInMeters;
- (int)StringAsRtLOIType:(id)arg1;
- (id)rtLOITypeAsString:(int)arg1;
@property(nonatomic) BOOL hasRtLOIType;
@property(nonatomic) int rtLOIType; // @synthesize rtLOIType=_rtLOIType;
@property(readonly, nonatomic) BOOL hasRtLOIUUID;

@end
