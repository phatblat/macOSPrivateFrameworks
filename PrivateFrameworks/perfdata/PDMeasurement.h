//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary, NSNumber, NSString, PDContainer;

@interface PDMeasurement : NSObject
{
    BOOL _largerBetter;
    BOOL _summary;
    BOOL _context;
    NSString *_metric;
    NSString *_unitString;
    NSDictionary *_variables;
    NSDictionary *_labels;
    unsigned long long _group;
    NSNumber *_value;
    NSNumber *_sampleCount;
    NSNumber *_mean;
    NSNumber *_standardDeviation;
    NSNumber *_minimum;
    NSNumber *_maximum;
    NSDictionary *_measurement;
    PDContainer *_container;
    NSString *_cachedMetricFilter;
}

@property(retain, nonatomic) NSString *cachedMetricFilter; // @synthesize cachedMetricFilter=_cachedMetricFilter;
@property(nonatomic) __weak PDContainer *container; // @synthesize container=_container;
@property(retain, nonatomic) NSDictionary *measurement; // @synthesize measurement=_measurement;
@property(nonatomic, getter=isContext) BOOL context; // @synthesize context=_context;
@property(nonatomic, getter=isSummary) BOOL summary; // @synthesize summary=_summary;
@property(retain, nonatomic) NSNumber *maximum; // @synthesize maximum=_maximum;
@property(retain, nonatomic) NSNumber *minimum; // @synthesize minimum=_minimum;
@property(retain, nonatomic) NSNumber *standardDeviation; // @synthesize standardDeviation=_standardDeviation;
@property(retain, nonatomic) NSNumber *mean; // @synthesize mean=_mean;
@property(retain, nonatomic) NSNumber *sampleCount; // @synthesize sampleCount=_sampleCount;
@property(retain, nonatomic) NSNumber *value; // @synthesize value=_value;
@property(nonatomic) unsigned long long group; // @synthesize group=_group;
@property(nonatomic) BOOL largerBetter; // @synthesize largerBetter=_largerBetter;
@property(retain, nonatomic) NSDictionary *labels; // @synthesize labels=_labels;
@property(retain, nonatomic) NSDictionary *variables; // @synthesize variables=_variables;
@property(retain, nonatomic) NSString *unitString; // @synthesize unitString=_unitString;
@property(retain, nonatomic) NSString *metric; // @synthesize metric=_metric;
- (void).cxx_destruct;
- (BOOL)enumeratePercentilesWithError:(id *)arg1 usingBlock:(CDUnknownBlockType)arg2;
@property(readonly, nonatomic) unsigned long long percentileCount;
- (BOOL)enumerateHistogramBucketsWithError:(id *)arg1 usingBlock:(CDUnknownBlockType)arg2;
@property(readonly, nonatomic) unsigned long long histogramBucketCount;
- (BOOL)isComparableTo:(id)arg1 ignoringNullableVariables:(id)arg2;
- (BOOL)isComparableTo:(id)arg1 ignoringVariables:(id)arg2;
- (BOOL)isLike:(id)arg1;
- (BOOL)isComparableTo:(id)arg1;
- (id)metricFilterIgnoringNullableVariables:(id)arg1;
- (id)metricFilterIgnoringVariables:(id)arg1;
- (id)metricFilter;
- (BOOL)matchesVariables:(id)arg1 ignoringMissing:(BOOL)arg2;
- (BOOL)matchesMetricFilter:(id)arg1;
- (id)description;
- (id)initWithContainer:(id)arg1 dictionary:(id)arg2 group:(unsigned long long)arg3 error:(id *)arg4;

@end

