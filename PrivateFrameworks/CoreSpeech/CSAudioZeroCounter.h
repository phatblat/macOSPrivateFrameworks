//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface CSAudioZeroCounter : NSObject
{
    NSString *_methodToken;
    unsigned int _continuousZeroCounter;
    unsigned int _zeroCounterWinSz;
    unsigned int _numChannels;
    unsigned int _analyzeStep;
    float _sampleRate;
    BOOL _shouldDeinterleaveAudio;
}

- (void).cxx_destruct;
- (void)stopReportZeroStatistics;
- (void)getZeroStatisticsFromBuffer:(id)arg1 entireSamples:(unsigned int)arg2;
- (void)resetWithSampleRate:(float)arg1;
- (id)initWithToken:(id)arg1 sampleRate:(float)arg2 numChannels:(unsigned int)arg3;

@end

