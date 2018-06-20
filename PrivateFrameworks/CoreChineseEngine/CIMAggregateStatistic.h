//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary;

@interface CIMAggregateStatistic : NSObject
{
    float _candidateLengthStatisticAverage;
    unsigned long long _candidateLengthStatisticMaximum;
    unsigned long long _candidateLengthStatisticTotal;
    unsigned long long _candidateSelectedStatisticTotal;
    unsigned long long _partialCandidateSelectedStatisticTotal;
    unsigned long long _latinScriptCandidateSelectedStatisticTotal;
    NSMutableDictionary *_selectionMethodAggregates;
}

+ (id)aggregateStatistic;
@property(retain) NSMutableDictionary *selectionMethodAggregates; // @synthesize selectionMethodAggregates=_selectionMethodAggregates;
@property unsigned long long latinScriptCandidateSelectedStatisticTotal; // @synthesize latinScriptCandidateSelectedStatisticTotal=_latinScriptCandidateSelectedStatisticTotal;
@property unsigned long long partialCandidateSelectedStatisticTotal; // @synthesize partialCandidateSelectedStatisticTotal=_partialCandidateSelectedStatisticTotal;
@property unsigned long long candidateSelectedStatisticTotal; // @synthesize candidateSelectedStatisticTotal=_candidateSelectedStatisticTotal;
@property unsigned long long candidateLengthStatisticTotal; // @synthesize candidateLengthStatisticTotal=_candidateLengthStatisticTotal;
@property unsigned long long candidateLengthStatisticMaximum; // @synthesize candidateLengthStatisticMaximum=_candidateLengthStatisticMaximum;
@property float candidateLengthStatisticAverage; // @synthesize candidateLengthStatisticAverage=_candidateLengthStatisticAverage;
- (void).cxx_destruct;
- (void)addDataPointForCandidate:(id)arg1 partial:(BOOL)arg2 selectionMethod:(id)arg3;
- (id)init;

@end

