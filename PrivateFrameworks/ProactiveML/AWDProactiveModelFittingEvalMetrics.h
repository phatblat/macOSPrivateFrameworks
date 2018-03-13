//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@interface AWDProactiveModelFittingEvalMetrics : PBCodable <NSCopying>
{
    CDStruct_fae3dc92 _negativeScores;
    CDStruct_fae3dc92 _positiveScores;
    unsigned long long _falseNegatives;
    unsigned long long _falsePositives;
    unsigned long long _trueNegatives;
    unsigned long long _truePositives;
    float _f1;
    float _rmse;
    float _secsToExecute;
    struct {
        unsigned int falseNegatives:1;
        unsigned int falsePositives:1;
        unsigned int trueNegatives:1;
        unsigned int truePositives:1;
        unsigned int f1:1;
        unsigned int rmse:1;
        unsigned int secsToExecute:1;
    } _has;
}

+ (id)evalMetricsWithRmse:(float)arg1 f1:(float)arg2 truePositives:(unsigned long long)arg3 trueNegatives:(unsigned long long)arg4 falsePositives:(unsigned long long)arg5 falseNegatives:(unsigned long long)arg6;
+ (id)evalMetricsWithRmse:(float)arg1 f1:(float)arg2;
@property(nonatomic) float secsToExecute; // @synthesize secsToExecute=_secsToExecute;
@property(nonatomic) unsigned long long falseNegatives; // @synthesize falseNegatives=_falseNegatives;
@property(nonatomic) unsigned long long falsePositives; // @synthesize falsePositives=_falsePositives;
@property(nonatomic) unsigned long long trueNegatives; // @synthesize trueNegatives=_trueNegatives;
@property(nonatomic) unsigned long long truePositives; // @synthesize truePositives=_truePositives;
@property(nonatomic) float f1; // @synthesize f1=_f1;
@property(nonatomic) float rmse; // @synthesize rmse=_rmse;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) BOOL hasSecsToExecute;
- (void)setNegativeScores:(float *)arg1 count:(unsigned long long)arg2;
- (float)negativeScoresAtIndex:(unsigned long long)arg1;
- (void)addNegativeScores:(float)arg1;
- (void)clearNegativeScores;
@property(readonly, nonatomic) float *negativeScores;
@property(readonly, nonatomic) unsigned long long negativeScoresCount;
- (void)setPositiveScores:(float *)arg1 count:(unsigned long long)arg2;
- (float)positiveScoresAtIndex:(unsigned long long)arg1;
- (void)addPositiveScores:(float)arg1;
- (void)clearPositiveScores;
@property(readonly, nonatomic) float *positiveScores;
@property(readonly, nonatomic) unsigned long long positiveScoresCount;
@property(nonatomic) BOOL hasFalseNegatives;
@property(nonatomic) BOOL hasFalsePositives;
@property(nonatomic) BOOL hasTrueNegatives;
@property(nonatomic) BOOL hasTruePositives;
@property(nonatomic) BOOL hasF1;
@property(nonatomic) BOOL hasRmse;
- (void)dealloc;
- (id)toDictionary;

@end

