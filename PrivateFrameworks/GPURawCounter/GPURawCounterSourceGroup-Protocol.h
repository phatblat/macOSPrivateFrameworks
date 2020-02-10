//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSDictionary, NSString;

@protocol GPURawCounterSourceGroup <NSObject>
@property(readonly) unsigned long long availableCounterTriggers;
@property(readonly) unsigned long long sampleMarker;
@property(copy) NSDictionary *vendorOptions;
@property unsigned long long samplingTriggers;
@property unsigned long long samplingPeriodInMicroseconds;
@property(readonly) NSArray *sourceList;
@property(readonly) NSString *name;
- (BOOL)stopSampling;
- (BOOL)startSampling;
@end
