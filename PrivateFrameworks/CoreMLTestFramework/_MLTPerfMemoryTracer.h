//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "_MLTPerfTracerProtocol.h"

@class NSMutableArray;

@interface _MLTPerfMemoryTracer : NSObject <_MLTPerfTracerProtocol>
{
    BOOL _inMeasurement;
    int _pid;
    long long _computeUnit;
    unsigned long long _sampleStartMemory;
    NSMutableArray *_values;
}

@property(retain, nonatomic) NSMutableArray *values; // @synthesize values=_values;
@property(nonatomic) BOOL inMeasurement; // @synthesize inMeasurement=_inMeasurement;
@property(nonatomic) unsigned long long sampleStartMemory; // @synthesize sampleStartMemory=_sampleStartMemory;
@property(nonatomic) int pid; // @synthesize pid=_pid;
@property(nonatomic) long long computeUnit; // @synthesize computeUnit=_computeUnit;
- (void).cxx_destruct;
- (BOOL)stopSampling:(id *)arg1;
- (BOOL)startSampling:(id *)arg1;
- (id)measurements;
- (id)initWithComputeUnit:(long long)arg1;

@end

