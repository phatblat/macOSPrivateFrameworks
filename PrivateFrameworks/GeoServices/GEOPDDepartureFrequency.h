//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "GEOTransitDepartureFrequency.h"
#import "NSCopying.h"

@class NSDate, NSString, PBUnknownFields;

@interface GEOPDDepartureFrequency : PBCodable <GEOTransitDepartureFrequency, NSCopying>
{
    PBUnknownFields *_unknownFields;
    unsigned int _displayDepartureFrequency;
    unsigned int _earliestDepartureTime;
    unsigned int _latestDepartureTime;
    unsigned int _maxDepartureFrequency;
    unsigned int _minDepartureFrequency;
    BOOL _isEstimated;
    struct {
        unsigned int displayDepartureFrequency:1;
        unsigned int earliestDepartureTime:1;
        unsigned int latestDepartureTime:1;
        unsigned int maxDepartureFrequency:1;
        unsigned int minDepartureFrequency:1;
        unsigned int isEstimated:1;
    } _has;
}

@property(nonatomic) unsigned int displayDepartureFrequency; // @synthesize displayDepartureFrequency=_displayDepartureFrequency;
@property(nonatomic) BOOL isEstimated; // @synthesize isEstimated=_isEstimated;
@property(nonatomic) unsigned int latestDepartureTime; // @synthesize latestDepartureTime=_latestDepartureTime;
@property(nonatomic) unsigned int earliestDepartureTime; // @synthesize earliestDepartureTime=_earliestDepartureTime;
@property(nonatomic) unsigned int maxDepartureFrequency; // @synthesize maxDepartureFrequency=_maxDepartureFrequency;
@property(nonatomic) unsigned int minDepartureFrequency; // @synthesize minDepartureFrequency=_minDepartureFrequency;
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
@property(nonatomic) BOOL hasDisplayDepartureFrequency;
@property(nonatomic) BOOL hasIsEstimated;
@property(nonatomic) BOOL hasLatestDepartureTime;
@property(nonatomic) BOOL hasEarliestDepartureTime;
@property(nonatomic) BOOL hasMaxDepartureFrequency;
@property(nonatomic) BOOL hasMinDepartureFrequency;
@property(readonly, nonatomic) double frequencyForSorting;
- (BOOL)isValidAtDate:(id)arg1;
@property(readonly, nonatomic) long long frequencyType;
@property(readonly, nonatomic) long long maxFrequency;
@property(readonly, nonatomic) long long minFrequency;
@property(readonly, nonatomic) long long displayFrequency;
@property(readonly, nonatomic) BOOL isEstimate;
@property(readonly, nonatomic) NSDate *lastTimeInFrequency;
@property(readonly, nonatomic) NSDate *firstTimeInFrequency;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

