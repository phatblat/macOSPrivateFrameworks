//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MTLComputePipelineState.h"

@class MTLDebugInstrumentationData;

@protocol MTLComputePipelineStateSPI <MTLComputePipelineState>
@property(readonly, retain, nonatomic) MTLDebugInstrumentationData *debugInstrumentationData;
@property(readonly) unsigned long long uniqueIdentifier;
@property(readonly) unsigned long long staticThreadgroupMemoryLength;
- (unsigned int)getComputeKernelTelemetryID;

@optional
@property(nonatomic) unsigned long long resourceIndex;
@end

