//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

__attribute__((visibility("hidden")))
@interface RandomNumberGenerator : NSObject
{
    unsigned long long _seed;
    unsigned long long _index;
}

+ (id)randomNumberGeneratorWithSeed:(unsigned long long)arg1;
@property(nonatomic) unsigned long long index; // @synthesize index=_index;
@property unsigned long long seed; // @synthesize seed=_seed;
- (double)randomNumberWithinRangeStart:(double)arg1 rangeEnd:(double)arg2;
- (double)randomNumberBetweenZeroAndOne;

@end
