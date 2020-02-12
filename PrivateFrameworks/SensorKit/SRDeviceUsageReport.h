//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSSecureCoding.h"
#import "SRSampleExporting.h"
#import "SRSampling.h"

@class NSDictionary, NSMutableDictionary, NSString;

@interface SRDeviceUsageReport : NSObject <SRSampleExporting, NSSecureCoding, SRSampling>
{
    double _duration;
    long long _totalScreenWakes;
    long long _totalUnlocks;
    double _totalUnlockDuration;
    NSMutableDictionary *_mutableApplicationUsageByCategory;
    NSMutableDictionary *_mutableNotificationUsageByCategory;
    NSMutableDictionary *_mutableWebUsageByCategory;
    double _startTime;
}

+ (id)deviceUsageReportWithInterval:(id)arg1;
+ (BOOL)supportsSecureCoding;
@property double startTime; // @synthesize startTime=_startTime;
@property(retain) NSMutableDictionary *mutableWebUsageByCategory; // @synthesize mutableWebUsageByCategory=_mutableWebUsageByCategory;
@property(retain) NSMutableDictionary *mutableNotificationUsageByCategory; // @synthesize mutableNotificationUsageByCategory=_mutableNotificationUsageByCategory;
@property(retain) NSMutableDictionary *mutableApplicationUsageByCategory; // @synthesize mutableApplicationUsageByCategory=_mutableApplicationUsageByCategory;
@property double totalUnlockDuration; // @synthesize totalUnlockDuration=_totalUnlockDuration;
@property long long totalUnlocks; // @synthesize totalUnlocks=_totalUnlocks;
@property long long totalScreenWakes; // @synthesize totalScreenWakes=_totalScreenWakes;
@property double duration; // @synthesize duration=_duration;
- (id)sr_dictionaryRepresentation;
@property(readonly, copy) NSDictionary *webUsageByCategory;
@property(readonly, copy) NSDictionary *notificationUsageByCategory;
@property(readonly, copy) NSDictionary *applicationUsageByCategory;
@property(readonly, copy) NSString *description;
- (id)initWithBinarySampleRepresentation:(id)arg1 metadata:(id)arg2 timestamp:(double)arg3;
- (id)binarySampleRepresentation;
- (BOOL)isEqual:(id)arg1;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
