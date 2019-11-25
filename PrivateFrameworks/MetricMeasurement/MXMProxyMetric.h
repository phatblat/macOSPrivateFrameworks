//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <MetricMeasurement/MXMMetric.h>

@class MXMProbe;

@interface MXMProxyMetric : MXMMetric
{
    MXMMetric *__underlyingMetric;
}

+ (BOOL)supportsSecureCoding;
@property(readonly, retain) MXMMetric *_underlyingMetric; // @synthesize _underlyingMetric=__underlyingMetric;
- (void).cxx_destruct;
- (void)didStopAtTime:(unsigned long long)arg1 stopDate:(id)arg2;
- (void)willStop;
- (void)didStartAtTime:(unsigned long long)arg1 startDate:(id)arg2;
- (void)willStartAtEstimatedTime:(unsigned long long)arg1;
- (BOOL)prepareWithOptions:(id)arg1 error:(id *)arg2;
- (id)_constructProbe;
- (BOOL)_shouldConstructProbe;
- (BOOL)_shouldNeverWrapInProxy;
- (BOOL)_shouldAlwaysWrapInProxy;
- (unsigned long long)_sampleMode;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
@property(readonly, copy) MXMProbe *_remoteProbe;
@property(readonly, copy) MXMMetric *metric;
- (id)initWithMetric:(id)arg1;

@end

