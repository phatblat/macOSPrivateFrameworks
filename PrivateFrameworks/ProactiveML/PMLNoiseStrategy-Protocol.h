//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"
#import "PMLPlistAndChunksSerializableProtocol.h"

@class PMLDenseMatrix, PMLModelWeights, PMLMutableDenseVector, PMLSparseMatrix, PMLSparseVector;

@protocol PMLNoiseStrategy <NSObject, PMLPlistAndChunksSerializableProtocol>
@property int maxIterations;
- (void)addNoiseToDenseVector:(PMLMutableDenseVector *)arg1;
- (void)addNoiseToSparseMatrix:(PMLSparseMatrix *)arg1;
- (void)addNoiseToSparseVector:(PMLSparseVector *)arg1;
- (void)addNoiseToObjectiveFeatures:(PMLMutableDenseVector *)arg1;
- (void)addNoiseToFeatureMatrix:(PMLDenseMatrix *)arg1;
- (void)addNoiseToGradient:(PMLMutableDenseVector *)arg1;
- (void)addNoiseToWeights:(PMLModelWeights *)arg1;
@end

