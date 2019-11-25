//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray;

@interface CRLatticePath : NSObject
{
    NSArray *_edges;
    double _lexiconScore;
    double _cnnScore;
    double _ngramScore;
    double _geometryScore;
    double _patternScore;
    double _totalScore;
}

@property(readonly) double totalScore; // @synthesize totalScore=_totalScore;
@property(readonly) double patternScore; // @synthesize patternScore=_patternScore;
@property(readonly) double geometryScore; // @synthesize geometryScore=_geometryScore;
@property(readonly) double ngramScore; // @synthesize ngramScore=_ngramScore;
@property(readonly) double cnnScore; // @synthesize cnnScore=_cnnScore;
@property(readonly) double lexiconScore; // @synthesize lexiconScore=_lexiconScore;
@property(readonly, nonatomic) NSArray *edges; // @synthesize edges=_edges;
- (void).cxx_destruct;
- (id)initWithEdgeIndexes:(id)arg1 lex:(double)arg2 cnn:(double)arg3 ngram:(double)arg4 geom:(double)arg5 pattern:(double)arg6 total:(double)arg7;

@end

