//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, _MLTLogger;

@interface _MLTInferenceValidator : NSObject
{
    long long _numCorrect;
    long long _numFailed;
    NSString *_computeUnit;
    NSString *_errorString;
    _MLTLogger *_logger;
}

@property(retain) _MLTLogger *logger; // @synthesize logger=_logger;
@property(retain) NSString *errorString; // @synthesize errorString=_errorString;
@property(retain) NSString *computeUnit; // @synthesize computeUnit=_computeUnit;
@property long long numFailed; // @synthesize numFailed=_numFailed;
@property long long numCorrect; // @synthesize numCorrect=_numCorrect;
- (void).cxx_destruct;
- (BOOL)validatePrediction:(id)arg1 withExpectedValue:(id)arg2 testCaseName:(id)arg3 error:(id *)arg4;
- (BOOL)validatePredicted:(id)arg1 withExpectedValue:(id)arg2 featureName:(id)arg3 testCaseName:(id)arg4 metrics:(id)arg5 error:(id *)arg6;
- (void)calculateAndVerifyMetric:(id)arg1 forFeatureName:(id)arg2 betweenPredictedValue:(id)arg3 andExpectedValue:(id)arg4 withThresholdInformation:(id)arg5 andTestCaseName:(id)arg6;
- (void)calculateAndVerifyMetric:(id)arg1 forFeatureName:(id)arg2 withNumericalType:(long long)arg3 betweenPredictedValue:(id)arg4 andExpectedValue:(id)arg5 withThresholdInformation:(id)arg6 andTestCaseName:(id)arg7;
- (void)addErrorString:(id)arg1 forTestCase:(id)arg2 andFeatureName:(id)arg3;
- (id)topKDebugString:(id)arg1;
- (id)initWithComputeUnit:(long long)arg1;
- (id)initWithComputeUnit:(long long)arg1 logger:(id)arg2;
- (id)initWithComputeUnit:(long long)arg1 andLogger:(id)arg2;

@end

