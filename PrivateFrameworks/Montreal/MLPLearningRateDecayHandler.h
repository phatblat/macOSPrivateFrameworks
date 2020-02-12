//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface MLPLearningRateDecayHandler : NSObject
{
    BOOL _stairCase;
    float _learningRate;
    float _decayRate;
    float _decayedLearningRate;
    unsigned long long _decaySteps;
    unsigned long long _globalSteps;
    id <MLPLearningRateDecayHandlerDelegate> _delegate;
}

@property __weak id <MLPLearningRateDecayHandlerDelegate> delegate; // @synthesize delegate=_delegate;
@property unsigned long long globalSteps; // @synthesize globalSteps=_globalSteps;
@property float decayedLearningRate; // @synthesize decayedLearningRate=_decayedLearningRate;
@property(readonly) BOOL stairCase; // @synthesize stairCase=_stairCase;
@property(readonly) float decayRate; // @synthesize decayRate=_decayRate;
@property(readonly) unsigned long long decaySteps; // @synthesize decaySteps=_decaySteps;
@property(readonly) float learningRate; // @synthesize learningRate=_learningRate;
- (void).cxx_destruct;
- (void)updateGlobalStep;
- (id)initWithLearningRate:(float)arg1 decaySteps:(unsigned long long)arg2 decayRate:(float)arg3 stairCase:(BOOL)arg4;

@end

