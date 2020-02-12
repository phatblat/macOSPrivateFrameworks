//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <AXMediaUtilities/AXMDataRegressionModel.h>

@interface AXMDataRegressionModelLinear : AXMDataRegressionModel
{
    double _rSquared;
}

@property(readonly, nonatomic) double rSquared; // @synthesize rSquared=_rSquared;
- (id)modelFunctionStringForParameters:(double *)arg1 significantFigures:(int)arg2;
- (id)partialDerivatives;
- (void)getInitialParams:(double *)arg1;
- (int)modelParameterCount;
- (CDUnknownBlockType)modelFunction;
- (double)fitDataWithModelParams:(double *)arg1 finalParams:(double *)arg2;
- (id)modelDescription;

@end

