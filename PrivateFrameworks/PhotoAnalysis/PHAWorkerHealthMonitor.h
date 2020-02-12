//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary;

@interface PHAWorkerHealthMonitor : NSObject
{
    struct os_unfair_lock_s _lock;
    double _maxScoreRecentnessInterval;
    NSMutableDictionary *_scoresByWorkerType;
    NSMutableDictionary *_cachedAverageScoresByWorkerType;
    NSMutableDictionary *_lastTrimDateByWorkerType;
}

@property(readonly, nonatomic) NSMutableDictionary *lastTrimDateByWorkerType; // @synthesize lastTrimDateByWorkerType=_lastTrimDateByWorkerType;
@property(readonly, nonatomic) NSMutableDictionary *cachedAverageScoresByWorkerType; // @synthesize cachedAverageScoresByWorkerType=_cachedAverageScoresByWorkerType;
@property(readonly, nonatomic) NSMutableDictionary *scoresByWorkerType; // @synthesize scoresByWorkerType=_scoresByWorkerType;
@property(nonatomic) double maxScoreRecentnessInterval; // @synthesize maxScoreRecentnessInterval=_maxScoreRecentnessInterval;
- (void).cxx_destruct;
- (id)statusAsDictionary;
- (BOOL)isHealthyForWorkerType:(short)arg1;
- (void)reset;
- (void)recordResultsFromWorkerJob:(id)arg1;
- (float)averageScoreForWorkerType:(short)arg1;
- (BOOL)_isHealthyForWorkerType:(short)arg1;
- (float)_averageScoreForWorkerType:(short)arg1;
- (id)init;
- (float)_calculateAverageScoreForWorkerType:(short)arg1;
- (void)_trimScoresForWorkerType:(short)arg1;
- (BOOL)_needsTrimScoresForWorkerType:(short)arg1;
- (id)_scoresForWorkerType:(short)arg1;

@end

