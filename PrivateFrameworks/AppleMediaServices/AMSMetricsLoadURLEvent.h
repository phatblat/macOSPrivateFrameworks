//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <AppleMediaServices/AMSMetricsEvent.h>

@class NSArray, NSString;

__attribute__((visibility("hidden")))
@interface AMSMetricsLoadURLEvent : AMSMetricsEvent
{
    BOOL _xpSamplingForced;
    double _xpSessionDuration;
    double _xpSamplingPercentageUsers;
    double _xpSamplingPercentageCachedResponses;
}

+ (double)_timingDataMetricToServerTimeInterval:(id)arg1;
+ (id)_resolvedIPAddressFromTask:(id)arg1;
+ (double)_randomDouble;
+ (id)_metricsDictionaryFromTaskInfo:(id)arg1;
+ (unsigned long long)_messageSizeFromTaskInfo:(id)arg1 forRequest:(BOOL)arg2;
+ (id)_fetchNetworkQualityReports;
+ (id)_DNSServerIPAddresses;
+ (BOOL)shouldCollectMetricsFromTask:(id)arg1;
+ (id)eventWithTaskInfo:(id)arg1;
@property(nonatomic) double xpSamplingPercentageCachedResponses; // @synthesize xpSamplingPercentageCachedResponses=_xpSamplingPercentageCachedResponses;
@property(nonatomic) double xpSamplingPercentageUsers; // @synthesize xpSamplingPercentageUsers=_xpSamplingPercentageUsers;
@property(nonatomic) BOOL xpSamplingForced; // @synthesize xpSamplingForced=_xpSamplingForced;
@property(nonatomic) double xpSessionDuration; // @synthesize xpSessionDuration=_xpSessionDuration;
- (double)_timeIntervalFromMilliseconds:(id)arg1;
- (id)_millisecondsFromTimeInterval:(double)arg1;
- (void)setXPSamplingPercentageCachedResponses:(double)arg1;
- (void)setXPSamplingPercentageUsers:(double)arg1;
- (void)setXPSamplingForced:(BOOL)arg1;
- (void)setXPSessionDuration:(double)arg1;
@property(retain, nonatomic) NSString *TIDState;
@property(nonatomic) long long statusCode;
@property(nonatomic) double secureConnectionStartTime;
@property(nonatomic) double responseStartTime;
@property(nonatomic) unsigned long long responseMessageSize;
@property(nonatomic) double responseEndTime;
@property(retain, nonatomic) NSString *responseDate;
@property(retain, nonatomic) NSString *resolvedIPAddress;
@property(retain, nonatomic) NSString *requestURL;
@property(nonatomic) unsigned long long requestMessageSize;
@property(nonatomic) double requestStartTime;
@property(nonatomic) double redirectStartTime;
@property(nonatomic) double redirectEndTime;
@property(nonatomic) unsigned long long redirectCount;
@property(retain, nonatomic) NSString *originalApp;
@property(retain, nonatomic) NSArray *networkQualityReports;
@property(nonatomic) double fetchStartTime;
@property(retain, nonatomic) NSString *edgeNodeCacheStatus;
@property(nonatomic) double domainLookupStartTime;
@property(nonatomic) double domainLookupEndTime;
@property(retain, nonatomic) NSString *DNSServers;
@property(retain, nonatomic) NSString *connectionType;
@property(nonatomic) double connectionStartTime;
@property(nonatomic) unsigned long long connectionStopNStatTXBytes;
@property(nonatomic) unsigned long long connectionStopNStatRXBytes;
@property(nonatomic) unsigned long long connectionStartNStatTXBytes;
@property(nonatomic) unsigned long long connectionStartNStatRXBytes;
@property(nonatomic) BOOL connectionReused;
@property(retain, nonatomic) NSString *connectionInterface;
@property(nonatomic) double connectionEndTime;
@property(retain, nonatomic) NSString *clientError;
@property(retain, nonatomic) NSString *clientCorrelationKey;
@property(nonatomic) BOOL cachedResponse;
@property(nonatomic) BOOL apsRelaySucceeded;
@property(nonatomic) BOOL apsRelayDidFallback;
@property(nonatomic) BOOL apsRelayAttempted;
@property(retain, nonatomic) NSString *appleTimingApp;

@end

