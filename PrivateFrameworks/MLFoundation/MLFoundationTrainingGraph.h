//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <MLFoundation/MLFoundationGraph.h>

@class MLFoundationLayer, MLFoundationOptimizer, MLFoundationTensor, NSMutableArray;

@interface MLFoundationTrainingGraph : MLFoundationGraph
{
    MLFoundationOptimizer *_optimizer;
    MLFoundationLayer *_lossLayer;
    NSMutableArray *_optimizerUpdateLayerList;
    MLFoundationTensor *_rootSourceGradientTensor;
}

+ (id)trainingGraphWithGraphObjects:(id)arg1 lossLayer:(id)arg2 optimizer:(id)arg3;
@property(retain, nonatomic) MLFoundationTensor *rootSourceGradientTensor; // @synthesize rootSourceGradientTensor=_rootSourceGradientTensor;
@property(retain, nonatomic) NSMutableArray *optimizerUpdateLayerList; // @synthesize optimizerUpdateLayerList=_optimizerUpdateLayerList;
@property(readonly, retain, nonatomic) MLFoundationLayer *lossLayer; // @synthesize lossLayer=_lossLayer;
@property(retain, nonatomic) MLFoundationOptimizer *optimizer; // @synthesize optimizer=_optimizer;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)synchronizeUpdates;
- (id)resultTensorForLayer:(id)arg1;
- (id)resultGradientTensorForLayer:(id)arg1;
- (void)executeWithOptions:(unsigned long long)arg1 inputTensor:(id)arg2 lossLabels:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)executeGradientWithLastLayerIndex:(unsigned long long)arg1;
- (void)executeForwardWithLastLayerIndex:(unsigned long long)arg1;
- (id)description;
- (unsigned long long)totalDeviceMemorySize;
- (unsigned long long)resultTensorDeviceMemorySizeForLayer:(id)arg1;
- (BOOL)compileWithOptions:(unsigned long long)arg1 device:(id)arg2;
- (id)initWithGraphObjects:(id)arg1 lossLayer:(id)arg2 optimizer:(id)arg3;
- (id)init;

@end
