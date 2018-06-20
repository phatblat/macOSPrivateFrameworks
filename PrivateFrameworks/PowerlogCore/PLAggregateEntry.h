//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSMutableDictionary, NSString;

@interface PLAggregateEntry : NSObject
{
    short _aggregateFunction;
    NSString *_entryKey;
    NSMutableDictionary *_matchingKeyToValue;
    NSArray *_otherAggregateKeys;
    NSString *_aggregateKey;
    double _aggregateValue;
}

@property short aggregateFunction; // @synthesize aggregateFunction=_aggregateFunction;
@property double aggregateValue; // @synthesize aggregateValue=_aggregateValue;
@property(retain) NSString *aggregateKey; // @synthesize aggregateKey=_aggregateKey;
@property(retain) NSArray *otherAggregateKeys; // @synthesize otherAggregateKeys=_otherAggregateKeys;
@property(retain, nonatomic) NSMutableDictionary *matchingKeyToValue; // @synthesize matchingKeyToValue=_matchingKeyToValue;
@property(retain) NSString *entryKey; // @synthesize entryKey=_entryKey;
- (void).cxx_destruct;
- (id)description;
- (id)aggregateOperationWithMatchingPairs:(id)arg1;
- (id)matchingPairs;
- (id)query;
- (void)updateWithValue:(double)arg1;

@end

