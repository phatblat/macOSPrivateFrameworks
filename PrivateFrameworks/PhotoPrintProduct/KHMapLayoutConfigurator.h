//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray;

@interface KHMapLayoutConfigurator : NSObject
{
    NSMutableArray *_variableLayoutElements;
    NSMutableArray *_staticLayoutElements;
    unsigned long long _numLayoutPermutations;
}

- (id)layoutTaskDescription;
- (double)_scoreLayoutWithChoiceIndices:(unsigned long long *)arg1 bestScore:(double)arg2;
- (double)_collisionIntensityForVariableElementIdx:(unsigned long long)arg1 choiceIdx:(unsigned long long)arg2 withChoiceIndices:(unsigned long long *)arg3;
- (double)_layoutScoreDeltaWithChoiceIndices:(unsigned long long *)arg1 changingIdx:(unsigned long long)arg2 fromChoice:(unsigned long long)arg3 toChoice:(unsigned long long)arg4;
- (unsigned long long)_incrementChoiceIndices:(unsigned long long *)arg1;
- (unsigned long long)_chooseRandomLayoutChoiceIdxForVariableElement:(id)arg1 currentChoiceIndex:(unsigned long long)arg2 trialedLayoutChoiceIndicesMap:(id)arg3;
- (id)_layoutConfigurationForChoiceIndices:(unsigned long long *)arg1;
- (id)layoutConfiguration;
- (void)addStaticLayoutElement:(CDStruct_3496d041)arg1;
- (void)addVariableLayoutElement:(id)arg1;
- (id)init;
- (void)dealloc;

@end
