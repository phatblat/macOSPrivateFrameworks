//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@class PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDRating : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;
    double _maxScore;
    double _score;
    int _numRatingsUsedForScore;
    int _ratingType;
    struct {
        unsigned int maxScore:1;
        unsigned int score:1;
        unsigned int numRatingsUsedForScore:1;
        unsigned int ratingType:1;
    } _has;
}

+ (id)ratingForPlaceData:(id)arg1 type:(int)arg2;
@property(nonatomic) int numRatingsUsedForScore; // @synthesize numRatingsUsedForScore=_numRatingsUsedForScore;
@property(nonatomic) double score; // @synthesize score=_score;
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
@property(nonatomic) BOOL hasNumRatingsUsedForScore;
@property(nonatomic) BOOL hasMaxScore;
@property(nonatomic) double maxScore; // @synthesize maxScore=_maxScore;
@property(nonatomic) BOOL hasScore;
- (int)StringAsRatingType:(id)arg1;
- (id)ratingTypeAsString:(int)arg1;
@property(nonatomic) BOOL hasRatingType;
@property(nonatomic) int ratingType; // @synthesize ratingType=_ratingType;

@end

