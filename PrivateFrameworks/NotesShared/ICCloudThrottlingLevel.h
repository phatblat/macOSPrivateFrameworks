//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface ICCloudThrottlingLevel : NSObject
{
    double _batchInterval;
    unsigned long long _numberOfBatches;
}

@property(nonatomic) unsigned long long numberOfBatches; // @synthesize numberOfBatches=_numberOfBatches;
@property(nonatomic) double batchInterval; // @synthesize batchInterval=_batchInterval;
- (id)debugDescription;
- (id)description;
- (id)initWithBatchInterval:(double)arg1 numberOfBatches:(unsigned long long)arg2;
- (id)init;

@end
