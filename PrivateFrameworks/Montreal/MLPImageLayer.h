//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Montreal/MLPLayer.h>

@class NSArray, NSMutableDictionary;

@interface MLPImageLayer : MLPLayer
{
    NSMutableDictionary *_inputImagesToSecondKernel;
    NSMutableDictionary *_inputImagesToFirstKernel;
    NSMutableDictionary *_primaryCurrentStates;
    NSMutableDictionary *_secondaryCurrentStates;
}

@property(readonly) NSMutableDictionary *secondaryCurrentStates; // @synthesize secondaryCurrentStates=_secondaryCurrentStates;
@property(readonly) NSMutableDictionary *primaryCurrentStates; // @synthesize primaryCurrentStates=_primaryCurrentStates;
@property(readonly) NSMutableDictionary *inputImagesToFirstKernel; // @synthesize inputImagesToFirstKernel=_inputImagesToFirstKernel;
@property(readonly) NSMutableDictionary *inputImagesToSecondKernel; // @synthesize inputImagesToSecondKernel=_inputImagesToSecondKernel;
- (void).cxx_destruct;
- (id)generateNode:(id)arg1 model:(id)arg2 weightIter:(unsigned long long *)arg3 params:(CDStruct_96916c69 *)arg4;
- (void)updateSecondaryCurrentState:(struct NSArray *)arg1 index:(id)arg2 inference:(BOOL)arg3;
- (void)updateSecondaryCurrentState:(struct NSArray *)arg1 inference:(BOOL)arg2;
- (void)updatePrimaryCurrentState:(struct NSArray *)arg1 index:(id)arg2 inference:(BOOL)arg3;
- (void)updatePrimaryCurrentState:(struct NSArray *)arg1 inference:(BOOL)arg2;
- (void)updateInputToSecondKernel:(struct NSArray *)arg1 index:(id)arg2 inference:(BOOL)arg3;
- (void)updateInputToSecondKernel:(struct NSArray *)arg1 inference:(BOOL)arg2;
- (void)updateInputToFirstKernel:(struct NSArray *)arg1 index:(id)arg2 inference:(BOOL)arg3;
- (void)updateInputToFirstKernel:(struct NSArray *)arg1 inference:(BOOL)arg2;
@property(readonly) NSArray *secondaryCurrentState;
@property(readonly) NSArray *primaryCurrentState;
@property(readonly) NSArray *inputToFirstKernel;
@property(readonly) NSArray *inputToSecondKernel;
- (void)allocateInputDictionaries;
- (id)initWithLayerType:(unsigned long long)arg1 name:(id)arg2 parameters:(CDStruct_96916c69 *)arg3;
- (id)initWithLayerType:(unsigned long long)arg1 name:(id)arg2 neuronType:(int)arg3 neuronParams:(id)arg4;

@end

