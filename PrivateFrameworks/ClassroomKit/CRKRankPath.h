//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray;

@interface CRKRankPath : NSObject
{
    NSArray *_ranks;
}

@property(copy, nonatomic) NSArray *ranks; // @synthesize ranks=_ranks;
- (void).cxx_destruct;
@property(readonly, nonatomic) long long length;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualToRankPath:(id)arg1;
- (long long)compare:(id)arg1;
- (id)rankPathByAppendingRank:(long long)arg1;
- (id)initWithRanks:(id)arg1;
- (id)initWithRank:(long long)arg1;
- (id)init;

@end

