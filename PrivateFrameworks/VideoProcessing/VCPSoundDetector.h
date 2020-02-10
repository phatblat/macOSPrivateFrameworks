//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SNResultsObserving.h"

@class NSMutableArray, NSString;

@interface VCPSoundDetector : NSObject <SNResultsObserving>
{
    NSMutableArray *_results;
    CDStruct_1b6d18a9 _activeStart;
    CDStruct_1b6d18a9 _activeEnd;
    int _length;
    float _sampleRate;
    CDStruct_1b6d18a9 _trackStart;
    float _activeConfidence;
    float _threshold;
    int _minDetections;
    NSString *_resultsKey;
}

- (void).cxx_destruct;
- (id)results;
- (int)finalizeAnalysisAtTime:(const CDStruct_1b6d18a9 *)arg1;
- (void)request:(id)arg1 didProduceResult:(id)arg2;
- (void)addDetectionFromTime:(const CDStruct_1b6d18a9 *)arg1 toTime:(const CDStruct_1b6d18a9 *)arg2 confidence:(float)arg3;
- (id)initWithTrackStart:(CDStruct_1b6d18a9)arg1 threshold:(float)arg2 resultsKey:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
