//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary, NSMutableDictionary, NSString, _MLTLogger;

@interface _MLTModelUpdateValidator : NSObject
{
    BOOL _tested;
    BOOL _useBatchPrediction;
    NSMutableDictionary *_metricsDict;
    _MLTLogger *_logger;
    NSString *_recipePath;
    id <MLBatchProvider> _dataProvider;
    NSMutableDictionary *_validationAccuracyDict;
    NSDictionary *_validationParams;
}

@property BOOL useBatchPrediction; // @synthesize useBatchPrediction=_useBatchPrediction;
@property BOOL tested; // @synthesize tested=_tested;
@property(retain, nonatomic) NSDictionary *validationParams; // @synthesize validationParams=_validationParams;
@property(retain, nonatomic) NSMutableDictionary *validationAccuracyDict; // @synthesize validationAccuracyDict=_validationAccuracyDict;
@property(retain, nonatomic) id <MLBatchProvider> dataProvider; // @synthesize dataProvider=_dataProvider;
@property(retain, nonatomic) NSString *recipePath; // @synthesize recipePath=_recipePath;
@property(retain, nonatomic) _MLTLogger *logger; // @synthesize logger=_logger;
@property(retain, nonatomic) NSMutableDictionary *metricsDict; // @synthesize metricsDict=_metricsDict;
- (void).cxx_destruct;
- (BOOL)validateModel:(id)arg1 withParams:(id)arg2 verbose:(BOOL)arg3 error:(id *)arg4;
- (BOOL)checkIfResultsWithinParams:(BOOL)arg1 error:(id *)arg2;
- (BOOL)addFailingCountForOutput:(id)arg1 forMetric:(id)arg2;
- (BOOL)addPassingCountForOutput:(id)arg1 forMetric:(id)arg2;
- (void)populateMetricsDictFromParams:(id)arg1;
- (id)validationAccuracyForOutput:(id)arg1 error:(id *)arg2;
- (id)initWithConfiguration:(id)arg1 error:(id *)arg2;

@end
