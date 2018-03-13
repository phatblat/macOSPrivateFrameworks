//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@class AWDProactiveModelFittingMinibatchStats, AWDProactiveModelFittingModelInfo, AWDProactiveModelFittingQuantizedSparseMatrix, AWDProactiveModelFittingSparseFloatMatrix;

@interface AWDProactiveModelFittingLinRegFeatureMatrix : PBCodable <NSCopying>
{
    unsigned long long _timestamp;
    float _featureMatrixL2norm;
    float _featureMatrixScaleFactor;
    AWDProactiveModelFittingMinibatchStats *_minibatchStats;
    AWDProactiveModelFittingModelInfo *_modelInfo;
    AWDProactiveModelFittingSparseFloatMatrix *_sparseFloatFeatureMatrix;
    AWDProactiveModelFittingQuantizedSparseMatrix *_sparseQuantizedFeatureMatrix;
    struct {
        unsigned int timestamp:1;
        unsigned int featureMatrixL2norm:1;
        unsigned int featureMatrixScaleFactor:1;
    } _has;
}

@property(nonatomic) float featureMatrixL2norm; // @synthesize featureMatrixL2norm=_featureMatrixL2norm;
@property(nonatomic) float featureMatrixScaleFactor; // @synthesize featureMatrixScaleFactor=_featureMatrixScaleFactor;
@property(retain, nonatomic) AWDProactiveModelFittingQuantizedSparseMatrix *sparseQuantizedFeatureMatrix; // @synthesize sparseQuantizedFeatureMatrix=_sparseQuantizedFeatureMatrix;
@property(retain, nonatomic) AWDProactiveModelFittingMinibatchStats *minibatchStats; // @synthesize minibatchStats=_minibatchStats;
@property(retain, nonatomic) AWDProactiveModelFittingSparseFloatMatrix *sparseFloatFeatureMatrix; // @synthesize sparseFloatFeatureMatrix=_sparseFloatFeatureMatrix;
@property(retain, nonatomic) AWDProactiveModelFittingModelInfo *modelInfo; // @synthesize modelInfo=_modelInfo;
@property(nonatomic) unsigned long long timestamp; // @synthesize timestamp=_timestamp;
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
@property(nonatomic) BOOL hasFeatureMatrixL2norm;
@property(nonatomic) BOOL hasFeatureMatrixScaleFactor;
@property(readonly, nonatomic) BOOL hasSparseQuantizedFeatureMatrix;
@property(readonly, nonatomic) BOOL hasMinibatchStats;
@property(readonly, nonatomic) BOOL hasSparseFloatFeatureMatrix;
@property(readonly, nonatomic) BOOL hasModelInfo;
@property(nonatomic) BOOL hasTimestamp;
- (float)featureMatrixValueAtRow:(unsigned long long)arg1 column:(unsigned long long)arg2;
- (BOOL)hasFeatureMatrix;

@end

