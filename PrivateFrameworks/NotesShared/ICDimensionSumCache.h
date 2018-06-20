//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary;

@interface ICDimensionSumCache : NSObject
{
    double _sum;
    double _estimateDimension;
    NSMutableDictionary *_dimensions;
}

@property(readonly, nonatomic) NSMutableDictionary *dimensions; // @synthesize dimensions=_dimensions;
@property(readonly, nonatomic) double estimateDimension; // @synthesize estimateDimension=_estimateDimension;
@property(nonatomic) double sum; // @synthesize sum=_sum;
- (void).cxx_destruct;
- (void)removeDimensionForKey:(id)arg1;
- (void)setDimension:(double)arg1 forKey:(id)arg2;
- (double)dimensionForKey:(id)arg1;
- (id)initWithKeys:(id)arg1 andEstimateDimension:(double)arg2;
- (id)init;
@property(readonly, nonatomic) unsigned long long count;

@end

