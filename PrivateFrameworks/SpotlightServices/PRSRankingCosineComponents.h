//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray;

@interface PRSRankingCosineComponents : NSObject
{
    NSArray *_TermFrequencies;
    NSArray *_TermFrequenciesWeighted;
    NSArray *_InverseDocFrequencies;
    NSArray *_TermInverseDoc;
    NSArray *_TermInverseDocWeighted;
    unsigned long long _fieldLength;
}

@property(nonatomic) unsigned long long fieldLength; // @synthesize fieldLength=_fieldLength;
@property(retain, nonatomic) NSArray *TermInverseDocWeighted; // @synthesize TermInverseDocWeighted=_TermInverseDocWeighted;
@property(retain, nonatomic) NSArray *TermInverseDoc; // @synthesize TermInverseDoc=_TermInverseDoc;
@property(retain, nonatomic) NSArray *InverseDocFrequencies; // @synthesize InverseDocFrequencies=_InverseDocFrequencies;
@property(retain, nonatomic) NSArray *TermFrequenciesWeighted; // @synthesize TermFrequenciesWeighted=_TermFrequenciesWeighted;
@property(retain, nonatomic) NSArray *TermFrequencies; // @synthesize TermFrequencies=_TermFrequencies;
- (void).cxx_destruct;

@end
