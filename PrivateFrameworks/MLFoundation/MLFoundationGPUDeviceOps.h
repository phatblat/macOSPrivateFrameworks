//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <MLFoundation/MLFoundationDeviceOps.h>

@class NSArray, NSMutableArray;

@interface MLFoundationGPUDeviceOps : MLFoundationDeviceOps
{
    id _forwardKernel;
    id _gradientKernel;
    id _secondaryGradientKernel;
    id _lossInitialGradientKernel;
    id _combinedForwardAndGradientLossKernel;
    id _gradientState;
    id _forwardStatisticsKernel;
    id _gradientStatisticsKernel;
    NSArray *_momentumVectors;
    NSArray *_velocityVectors;
    id _exportableState;
    id _movingState;
    NSArray *_movingVectors;
    id _bnMovingUpdater;
    NSMutableArray *_rnnTrainableWeights;
    NSMutableArray *_rnnTrainableWeightGradients;
    NSMutableArray *_rnnTrainableStates;
    NSMutableArray *_rnnBuffers;
    id _imageToMatrixCopyKernel;
    id _matrixToImageCopyKernel;
}

+ (id)deviceOpsWithForwardKernel:(id)arg1 gradientKernel:(id)arg2 secondaryGradientKernel:(id)arg3 forwardStatistics:(id)arg4 gradientStatistics:(id)arg5;
+ (id)deviceOpsWithForwardKernel:(id)arg1 gradientKernel:(id)arg2 secondaryGradientKernel:(id)arg3;
+ (id)deviceOpsWithForwardKernel:(id)arg1 gradientKernel:(id)arg2;
+ (id)new;
@property(retain, nonatomic) id matrixToImageCopyKernel; // @synthesize matrixToImageCopyKernel=_matrixToImageCopyKernel;
@property(retain, nonatomic) id imageToMatrixCopyKernel; // @synthesize imageToMatrixCopyKernel=_imageToMatrixCopyKernel;
@property(retain, nonatomic) NSMutableArray *rnnBuffers; // @synthesize rnnBuffers=_rnnBuffers;
@property(retain, nonatomic) NSMutableArray *rnnTrainableStates; // @synthesize rnnTrainableStates=_rnnTrainableStates;
@property(retain, nonatomic) NSMutableArray *rnnTrainableWeightGradients; // @synthesize rnnTrainableWeightGradients=_rnnTrainableWeightGradients;
@property(retain, nonatomic) NSMutableArray *rnnTrainableWeights; // @synthesize rnnTrainableWeights=_rnnTrainableWeights;
@property(retain, nonatomic) id bnMovingUpdater; // @synthesize bnMovingUpdater=_bnMovingUpdater;
@property(retain, nonatomic) NSArray *movingVectors; // @synthesize movingVectors=_movingVectors;
@property(retain, nonatomic) id movingState; // @synthesize movingState=_movingState;
@property(retain, nonatomic) id exportableState; // @synthesize exportableState=_exportableState;
@property(retain, nonatomic) NSArray *velocityVectors; // @synthesize velocityVectors=_velocityVectors;
@property(retain, nonatomic) NSArray *momentumVectors; // @synthesize momentumVectors=_momentumVectors;
@property(readonly, nonatomic) id gradientStatisticsKernel; // @synthesize gradientStatisticsKernel=_gradientStatisticsKernel;
@property(readonly, nonatomic) id forwardStatisticsKernel; // @synthesize forwardStatisticsKernel=_forwardStatisticsKernel;
@property(retain, nonatomic) id gradientState; // @synthesize gradientState=_gradientState;
@property(retain, nonatomic) id combinedForwardAndGradientLossKernel; // @synthesize combinedForwardAndGradientLossKernel=_combinedForwardAndGradientLossKernel;
@property(retain, nonatomic) id lossInitialGradientKernel; // @synthesize lossInitialGradientKernel=_lossInitialGradientKernel;
@property(readonly, nonatomic) id secondaryGradientKernel; // @synthesize secondaryGradientKernel=_secondaryGradientKernel;
@property(readonly, nonatomic) id gradientKernel; // @synthesize gradientKernel=_gradientKernel;
@property(readonly, nonatomic) id forwardKernel; // @synthesize forwardKernel=_forwardKernel;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)initWithForwardKernel:(id)arg1 gradientKernel:(id)arg2 secondaryGradientKernel:(id)arg3 forwardStatistics:(id)arg4 gradientStatistics:(id)arg5;
- (id)initWithForwardKernel:(id)arg1 gradientKernel:(id)arg2;
- (id)init;

@end

