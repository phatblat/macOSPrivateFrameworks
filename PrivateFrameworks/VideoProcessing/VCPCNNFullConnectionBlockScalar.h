//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <VideoProcessing/VCPCNNFullConnectionBlock.h>

@interface VCPCNNFullConnectionBlockScalar : VCPCNNFullConnectionBlock
{
}

- (int)loadWeights:(struct __sFILE *)arg1 inputDim:(int)arg2 outputDim:(int)arg3 quantFactor:(int)arg4;
- (int)forward;
- (int)initializeRest;

@end

