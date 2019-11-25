//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@interface GEOPredictedCommuteDestination : PBCodable <NSCopying>
{
    double _confidenceScore;
    int _destinationType;
    BOOL _chosen;
    struct {
        unsigned int has_confidenceScore:1;
        unsigned int has_destinationType:1;
        unsigned int has_chosen:1;
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
@property(nonatomic) BOOL hasChosen;
@property(nonatomic) BOOL chosen;
@property(nonatomic) BOOL hasConfidenceScore;
@property(nonatomic) double confidenceScore;
- (int)StringAsDestinationType:(id)arg1;
- (id)destinationTypeAsString:(int)arg1;
@property(nonatomic) BOOL hasDestinationType;
@property(nonatomic) int destinationType;

@end

