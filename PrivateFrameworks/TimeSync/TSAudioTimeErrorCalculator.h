//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray;

@interface TSAudioTimeErrorCalculator : NSObject
{
    long long _numberOfSamples;
    long long _maxMeasurements;
    long long _measurementsInBuffer;
    const float *_channelASamples;
    const float *_channelBSamples;
    double *_sampleTimestamps;
    double *_timeErrors;
    BOOL _calculatedTimeError;
    long long _interval;
    long long _correlationLength;
    long long _upscaleFactor;
    double _samplingRate;
    long long _correlationType;
    BOOL _noCopy;
}

- (void)dealloc;
- (BOOL)exportTimeErrorToPath:(id)arg1;
- (BOOL)exportTimeErrorToDirectoryURL:(id)arg1 withFilename:(id)arg2;
- (BOOL)exportTimeErrorToDirectoryURL:(id)arg1;
@property(readonly, copy, nonatomic) NSArray *timeErrors; // @dynamic timeErrors;
@property(readonly, copy, nonatomic) NSArray *audioTimeErrors; // @dynamic audioTimeErrors;
- (void)calculateTimeErrorFromStartOffset:(long long)arg1 toEndOffset:(long long)arg2 withThreadingOption:(long long)arg3;
- (void)calculateTimeErrorFromStartOffset:(long long)arg1 toEndOffset:(long long)arg2;
- (void)calculateTimeErrorWithThreadingOption:(long long)arg1;
- (void)calculateTimeError;
- (void)_processTimeErrorFromStartOffset:(long long)arg1 atIndex:(long long)arg2 withCount:(long long)arg3;
- (id)initNoCopyWithChannelA:(const float *)arg1 andChannelB:(const float *)arg2 ofLength:(long long)arg3 withInterval:(long long)arg4 correlationLength:(long long)arg5 upscaleFactor:(long long)arg6 atSamplingRate:(double)arg7 correlationType:(long long)arg8;
- (id)initNoCopyWithChannelA:(const float *)arg1 andChannelB:(const float *)arg2 ofLength:(long long)arg3 withInterval:(long long)arg4 correlationLength:(long long)arg5 upscaleFactor:(long long)arg6 atSamplingRate:(double)arg7;
- (id)initWithChannelA:(const float *)arg1 andChannelB:(const float *)arg2 ofLength:(long long)arg3 withInterval:(long long)arg4 correlationLength:(long long)arg5 upscaleFactor:(long long)arg6 atSamplingRate:(double)arg7 correlationType:(long long)arg8;
- (id)initWithChannelA:(const float *)arg1 andChannelB:(const float *)arg2 ofLength:(long long)arg3 withInterval:(long long)arg4 correlationLength:(long long)arg5 upscaleFactor:(long long)arg6 atSamplingRate:(double)arg7;

@end

