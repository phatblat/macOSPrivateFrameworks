//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class AVAudioPCMBuffer, NSMutableArray;

@interface VCPLoudnessAnalyzer : NSObject
{
    AVAudioPCMBuffer *_pcmBuffer;
    long long _framePosition;
    struct LkFsMeasure *_loudnessAnalyzer;
    struct CAStreamBasicDescription *_processFormat;
    float _sampleRate;
    struct vector<double, std::__1::allocator<double>> _peakValues;
    struct vector<double, std::__1::allocator<double>> _momentaryEnergyValues;
    struct vector<float, std::__1::allocator<float>> _loudnessSampleBuffer;
    NSMutableArray *_loudnessResults;
    unsigned int _samplesFor100ms;
    struct AUOutputBL *_samplesForProcessingBufferList;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)results;
- (int)finalizeAnalysisAtTime:(const CDStruct_1b6d18a9 *)arg1;
- (int)processAudioSamples:(struct AudioBufferList *)arg1 timestamp:(struct AudioTimeStamp)arg2;
- (void)dealloc;
- (int)setupWithSample:(struct opaqueCMSampleBuffer *)arg1 andSampleBatchSize:(int)arg2;
- (id)init;

@end
