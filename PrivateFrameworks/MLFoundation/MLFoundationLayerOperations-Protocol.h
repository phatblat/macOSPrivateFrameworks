//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class MLFoundationConvolutionDescriptor, MLFoundationLSTMDescriptor, MLFoundationLossDescriptor, MLFoundationNeuronDescriptor, MLFoundationOptimizerDescriptor, MLFoundationPaddingDescriptor, MLFoundationPoolingDescriptor, MLFoundationTensor, MLFoundationYOLOLossDescriptor, NSArray;

@protocol MLFoundationLayerOperations <NSObject>
- (void)fuseLayersForTrainingGraph:(NSArray *)arg1;
- (void)setPoolingLayerPaddingPolicy:(NSArray *)arg1 poolingDescriptor:(MLFoundationPoolingDescriptor *)arg2 paddingPolicy:(int)arg3;
- (void)setPaddingPolicyForLayer:(NSArray *)arg1 paddingPolicy:(int)arg2;
- (NSArray *)optimizerAdamWithDescriptor:(MLFoundationOptimizerDescriptor *)arg1 beta1:(double)arg2 beta2:(double)arg3 epsilon:(float)arg4 timeStep:(unsigned long long)arg5;
- (NSArray *)optimizerSGDWithDescriptor:(MLFoundationOptimizerDescriptor *)arg1 momentunScale:(float)arg2 useNestrovMomentum:(BOOL)arg3;
- (NSArray *)lstmLayerWithDescriptor:(MLFoundationLSTMDescriptor *)arg1 inputWeights:(NSArray *)arg2 hiddenWeights:(NSArray *)arg3 peepholeWeights:(NSArray *)arg4 biasTerms:(NSArray *)arg5 gateActivations:(NSArray *)arg6 outputResultActivation:(MLFoundationNeuronDescriptor *)arg7;
- (NSArray *)imageReshapeWithWidth:(unsigned long long)arg1 height:(unsigned long long)arg2 alignCorners:(BOOL)arg3;
- (NSArray *)paddingLayerWithDescriptor:(MLFoundationPaddingDescriptor *)arg1;
- (NSArray *)reshapeLayerWithShape:(NSArray *)arg1;
- (NSArray *)dropoutLayerWithRate:(float)arg1 seed:(unsigned long long)arg2;
- (NSArray *)lossYOLOLayerWithDescriptor:(MLFoundationYOLOLossDescriptor *)arg1;
- (NSArray *)lossLayerWithDescriptor:(MLFoundationLossDescriptor *)arg1;
- (NSArray *)softmaxLayerWithOperation:(int)arg1;
- (NSArray *)arithmeticLayerWithOperation:(int)arg1;
- (NSArray *)batchNormalizationLayerWithChannelCount:(unsigned long long)arg1 mean:(MLFoundationTensor *)arg2 variance:(MLFoundationTensor *)arg3 beta:(MLFoundationTensor *)arg4 gamma:(MLFoundationTensor *)arg5 variance_epsilon:(float)arg6 momentum:(float)arg7;
- (NSArray *)neuronLayerWithDescriptor:(MLFoundationNeuronDescriptor *)arg1;
- (NSArray *)poolingLayerWithDescriptor:(MLFoundationPoolingDescriptor *)arg1;
- (NSArray *)convolutionTransposeLayerWithDescriptor:(MLFoundationConvolutionDescriptor *)arg1 weights:(MLFoundationTensor *)arg2;
- (NSArray *)fullyConnectedLayerWithDescriptor:(MLFoundationConvolutionDescriptor *)arg1 weights:(MLFoundationTensor *)arg2 biasTerms:(MLFoundationTensor *)arg3;
- (NSArray *)convolutionLayerWithDescriptor:(MLFoundationConvolutionDescriptor *)arg1 weights:(MLFoundationTensor *)arg2 biasTerms:(MLFoundationTensor *)arg3;

@optional
- (BOOL)compileOptimizerDeviceOps:(NSArray *)arg1;
- (BOOL)compileLayerDeviceOps:(NSArray *)arg1 sourceTensors:(NSArray *)arg2 resultTensor:(MLFoundationTensor *)arg3;
- (NSArray *)fusedFullyConnectedBatchNormalizationAndNeuronLayerWithDescriptor:(MLFoundationConvolutionDescriptor *)arg1 mean:(MLFoundationTensor *)arg2 variance:(MLFoundationTensor *)arg3 beta:(MLFoundationTensor *)arg4 gamma:(MLFoundationTensor *)arg5 varianceEpsilon:(float)arg6 momentum:(float)arg7 neuronDescriptor:(MLFoundationNeuronDescriptor *)arg8 weights:(MLFoundationTensor *)arg9 biasTerms:(MLFoundationTensor *)arg10;
- (NSArray *)fusedConvolutionBatchNormalizationAndNeuronLayerWithDescriptor:(MLFoundationConvolutionDescriptor *)arg1 mean:(MLFoundationTensor *)arg2 variance:(MLFoundationTensor *)arg3 beta:(MLFoundationTensor *)arg4 gamma:(MLFoundationTensor *)arg5 varianceEpsilon:(float)arg6 momentum:(float)arg7 neuronDescriptor:(MLFoundationNeuronDescriptor *)arg8 weights:(MLFoundationTensor *)arg9 biasTerms:(MLFoundationTensor *)arg10;
- (NSArray *)fusedBatchNormalizationAndNeuronLayerWithDescriptor:(MLFoundationNeuronDescriptor *)arg1 numOfFeatureChannels:(unsigned long long)arg2 mean:(MLFoundationTensor *)arg3 variance:(MLFoundationTensor *)arg4 beta:(MLFoundationTensor *)arg5 gamma:(MLFoundationTensor *)arg6 variance_epsilon:(float)arg7 momentum:(float)arg8;
- (NSArray *)fusedFullyConnectedAndNeuronLayerWithDescriptor:(MLFoundationNeuronDescriptor *)arg1 convolutionDescriptor:(MLFoundationConvolutionDescriptor *)arg2 weights:(MLFoundationTensor *)arg3 biasTerms:(MLFoundationTensor *)arg4;
- (NSArray *)fusedConvolutionAndNeuronLayerWithDescriptor:(MLFoundationNeuronDescriptor *)arg1 convolutionDescriptor:(MLFoundationConvolutionDescriptor *)arg2 weights:(MLFoundationTensor *)arg3 biasTerms:(MLFoundationTensor *)arg4;
@end
