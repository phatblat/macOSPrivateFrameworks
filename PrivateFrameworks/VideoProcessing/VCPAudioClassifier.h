//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class AVAudioPCMBuffer, NSMutableArray, SNAudioStreamAnalyzer;

@interface VCPAudioClassifier : NSObject
{
    unsigned long long _analysisTypes;
    SNAudioStreamAnalyzer *_SNAnalyzer;
    AVAudioPCMBuffer *_pcmBuffer;
    long long _framePosition;
    float _sampleRate;
    NSMutableArray *_detectors;
}

- (void).cxx_destruct;
- (id)results;
- (int)finalizeAnalysisAtTime:(const CDStruct_1b6d18a9 *)arg1;
- (int)processAudioSamples:(struct AudioBufferList *)arg1 timestamp:(struct AudioTimeStamp)arg2;
- (int)setupWithSample:(struct opaqueCMSampleBuffer *)arg1 andSampleBatchSize:(int)arg2;
- (id)initWithTypes:(unsigned long long)arg1;

@end
