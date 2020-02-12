//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Montreal/MLPLayer.h>

@class NSMutableDictionary;

@interface MLPMatrixLayer : MLPLayer
{
    unsigned long long _numInputs;
    unsigned long long _numOutputs;
    NSMutableDictionary *_inputMatrixToSecondKernel;
    NSMutableDictionary *_inputMatrixToFirstKernel;
}

@property(retain) NSMutableDictionary *inputMatrixToFirstKernel; // @synthesize inputMatrixToFirstKernel=_inputMatrixToFirstKernel;
@property(retain) NSMutableDictionary *inputMatrixToSecondKernel; // @synthesize inputMatrixToSecondKernel=_inputMatrixToSecondKernel;
@property unsigned long long numOutputs; // @synthesize numOutputs=_numOutputs;
@property unsigned long long numInputs; // @synthesize numInputs=_numInputs;
- (void).cxx_destruct;
- (void)updateInputMatrixToSecondKernel:(id)arg1 index:(id)arg2 inference:(BOOL)arg3;
- (void)updateInputMatrixToFirstKernel:(id)arg1 index:(id)arg2 inference:(BOOL)arg3;
- (void)allocateInputDictionaries;
- (id)initWithLayerType:(unsigned long long)arg1 name:(id)arg2 parameters:(CDStruct_96916c69 *)arg3;
- (id)initWithLayerType:(unsigned long long)arg1 name:(id)arg2 neuronType:(int)arg3 neuronParams:(id)arg4;

@end
