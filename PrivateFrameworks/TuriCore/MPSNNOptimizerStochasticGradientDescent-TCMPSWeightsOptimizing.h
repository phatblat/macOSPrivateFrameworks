//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MPSNNOptimizerStochasticGradientDescent.h"

#import "TCMPSConvolutionWeightsOptimizing.h"

@class NSString;

@interface MPSNNOptimizerStochasticGradientDescent (TCMPSWeightsOptimizing) <TCMPSConvolutionWeightsOptimizing>
- (void)encodeToCommandBuffer:(id)arg1 batchNormalizationState:(id)arg2 batchNormData:(id)arg3;
- (void)encodeToCommandBuffer:(id)arg1 convolutionGradientState:(id)arg2 convolutionWeights:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end
