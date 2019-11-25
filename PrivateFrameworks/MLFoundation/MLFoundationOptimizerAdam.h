//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <MLFoundation/MLFoundationOptimizer.h>

#import "MLFoundationOptimizerCompiling.h"
#import "NSCopying.h"

@class MLFoundationOptimizerDescriptor, NSString;

@interface MLFoundationOptimizerAdam : MLFoundationOptimizer <NSCopying, MLFoundationOptimizerCompiling>
{
    float _epsilon;
    double _beta1;
    double _beta2;
    unsigned long long _timeStep;
    MLFoundationOptimizerDescriptor *_optimizerDescriptor;
}

+ (id)optimizerWithDescriptor:(id)arg1 beta1:(double)arg2 beta2:(double)arg3 epsilon:(float)arg4 timeStep:(unsigned long long)arg5;
@property(readonly, nonatomic) MLFoundationOptimizerDescriptor *optimizerDescriptor; // @synthesize optimizerDescriptor=_optimizerDescriptor;
@property(readonly, nonatomic) unsigned long long timeStep; // @synthesize timeStep=_timeStep;
@property(readonly, nonatomic) float epsilon; // @synthesize epsilon=_epsilon;
@property(readonly, nonatomic) double beta2; // @synthesize beta2=_beta2;
@property(readonly, nonatomic) double beta1; // @synthesize beta1=_beta1;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, copy) NSString *description;
- (BOOL)compileForDevice:(id)arg1;
- (id)initWithDescriptor:(id)arg1 beta1:(double)arg2 beta2:(double)arg3 epsilon:(float)arg4 timeStep:(unsigned long long)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

