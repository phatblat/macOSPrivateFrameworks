//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class MLModel, NSError, NSString, _MLTJSONReader, _MLTLogger, _MLTPerfTracer;

@interface _MLTInferenceTester : NSObject
{
    BOOL _tested;
    BOOL _testDataFromFile;
    BOOL _measurePredictionPerformance;
    BOOL _measurePredictionCPUCycles;
    BOOL _measurePredictionCPUMemory;
    BOOL _measurePredictionGPUMemory;
    BOOL _measurePredictionANEMemory;
    NSError *_testError;
    MLModel *_model;
    NSString *_modelPath;
    id <_MLTInputProvider> _testDataProvider;
    _MLTJSONReader *_testDataReader;
    long long _computeUnit;
    NSString *_errorString;
    _MLTPerfTracer *_perfTracer;
    _MLTLogger *_logger;
}

@property BOOL measurePredictionANEMemory; // @synthesize measurePredictionANEMemory=_measurePredictionANEMemory;
@property BOOL measurePredictionGPUMemory; // @synthesize measurePredictionGPUMemory=_measurePredictionGPUMemory;
@property BOOL measurePredictionCPUMemory; // @synthesize measurePredictionCPUMemory=_measurePredictionCPUMemory;
@property BOOL measurePredictionCPUCycles; // @synthesize measurePredictionCPUCycles=_measurePredictionCPUCycles;
@property BOOL measurePredictionPerformance; // @synthesize measurePredictionPerformance=_measurePredictionPerformance;
@property(retain) _MLTLogger *logger; // @synthesize logger=_logger;
@property(retain) _MLTPerfTracer *perfTracer; // @synthesize perfTracer=_perfTracer;
@property BOOL testDataFromFile; // @synthesize testDataFromFile=_testDataFromFile;
@property(retain) NSString *errorString; // @synthesize errorString=_errorString;
@property long long computeUnit; // @synthesize computeUnit=_computeUnit;
@property(retain) _MLTJSONReader *testDataReader; // @synthesize testDataReader=_testDataReader;
@property(retain) id <_MLTInputProvider> testDataProvider; // @synthesize testDataProvider=_testDataProvider;
@property(retain) NSString *modelPath; // @synthesize modelPath=_modelPath;
@property(retain) MLModel *model; // @synthesize model=_model;
@property BOOL tested; // @synthesize tested=_tested;
@property(retain) NSError *testError; // @synthesize testError=_testError;
- (void).cxx_destruct;
- (void)dealloc;
- (id)meanCPUCyclesPerPrediction:(id *)arg1;
- (id)peakModelLoadMemory:(id *)arg1;
- (id)peakPredictionMemoryForComputeUnit:(long long)arg1 error:(id *)arg2;
- (id)meanValidationTime:(id *)arg1;
- (id)meanPredictionTime:(id *)arg1;
- (BOOL)testModel:(id *)arg1;
- (id)getTestNameFromDataSet:(id)arg1;
- (id)getExpectedOutputFromDataSet:(id)arg1;
- (id)getModelInputFromDataSet:(id)arg1 error:(id *)arg2;
- (id)nextDataSet:(id *)arg1;
- (BOOL)testFinished;
- (id)initWithConfiguration:(id)arg1 error:(id *)arg2;

@end

