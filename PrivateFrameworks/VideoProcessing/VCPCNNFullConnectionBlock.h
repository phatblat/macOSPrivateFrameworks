//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <VideoProcessing/VCPCNNBlock.h>

@interface VCPCNNFullConnectionBlock : VCPCNNBlock
{
    float *_weight;
    float *_bias;
    int _numNeurons;
    int _neuronType;
}

- (BOOL)useGPU;
- (BOOL)supportGPU;
- (int)readFromDisk:(struct __sFILE *)arg1 quantFactor:(short)arg2;
- (int)shuffleWeights:(float *)arg1 fromSrc:(float *)arg2 inputChannels:(int)arg3 inputHeight:(int)arg4 inputWidth:(int)arg5 outputChannels:(int)arg6;
- (int)readWeightsBias:(struct __sFILE *)arg1 weights:(float *)arg2 bias:(float *)arg3 inputDim:(int)arg4 outputDim:(int)arg5 quantFactor:(int)arg6;
- (int)straightForward;
- (int)forward;
- (int)constructBlock:(id)arg1 context:(id)arg2;
- (void)dealloc;
- (id)initWithParameters:(int)arg1 NeuronType:(int)arg2;

@end

