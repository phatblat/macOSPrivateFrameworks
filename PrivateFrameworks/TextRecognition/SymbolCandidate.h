//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface SymbolCandidate : NSObject
{
    unsigned short _symbol;
    double _probability;
    double _logProbability;
}

@property(nonatomic) double logProbability; // @synthesize logProbability=_logProbability;
@property(nonatomic) double probability; // @synthesize probability=_probability;
@property(nonatomic) unsigned short symbol; // @synthesize symbol=_symbol;
@property(readonly, nonatomic) NSString *description;

@end

