//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Montreal/MLPConvolutionBase.h>

@interface MLPPoolingLayer : MLPConvolutionBase
{
}

- (id)generateNode:(id)arg1 model:(id)arg2 weightIter:(unsigned long long *)arg3;
- (struct NSArray *)backward:(id)arg1 inputGradient:(struct NSArray *)arg2;
- (struct NSArray *)forward:(id)arg1 input:(struct NSArray *)arg2 labels:(id)arg3 runInference:(BOOL)arg4;
- (void)createKernel;
- (id)initWithName:(id)arg1 parameters:(CDStruct_96916c69 *)arg2;
- (id)initWithName:(id)arg1 inputLength:(unsigned long long)arg2 inputChannels:(unsigned long long)arg3 kernelWidth:(unsigned long long)arg4 kernelHeight:(unsigned long long)arg5 kernelStride:(unsigned long long)arg6;
- (id)initWithName:(id)arg1 previousLayer:(id)arg2 kernelWidth:(unsigned long long)arg3 kernelHeight:(unsigned long long)arg4 kernelStride:(unsigned long long)arg5;

@end

