//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <MetricKitServices/MXService.h>

@class MXSourceXPCPayload, NSMutableArray, NSObject<OS_dispatch_queue>, NSObject<OS_os_log>;

@interface MXPowerlogService : MXService
{
    NSMutableArray *_powerlogDataPaths;
    MXSourceXPCPayload *_unarchivedPowerlogData;
    NSObject<OS_os_log> *_MXPowerLogServiceLogHandle;
    NSObject<OS_dispatch_queue> *_requestQueue;
}

+ (id)sharedPowerlogService;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *requestQueue; // @synthesize requestQueue=_requestQueue;
@property(retain) NSObject<OS_os_log> *MXPowerLogServiceLogHandle; // @synthesize MXPowerLogServiceLogHandle=_MXPowerLogServiceLogHandle;
@property(retain) MXSourceXPCPayload *unarchivedPowerlogData; // @synthesize unarchivedPowerlogData=_unarchivedPowerlogData;
@property(retain) NSMutableArray *powerlogDataPaths; // @synthesize powerlogDataPaths=_powerlogDataPaths;
- (void).cxx_destruct;
- (BOOL)metricsAvailableForDate:(id)arg1;
- (id)getMetricsForClient:(id)arg1 dateString:(id)arg2;
- (BOOL)_updateMetrics;
- (BOOL)stopService;
- (BOOL)startService;
- (id)init;

@end

