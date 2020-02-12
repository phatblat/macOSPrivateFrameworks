//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SPPowerMonitorDelegate.h"

@class NSDate, NSObject<OS_dispatch_queue>, NSString, SPMacBeaconConfig, SPNetworkMonitor, SPPowerStateMonitorMac;

__attribute__((visibility("hidden")))
@interface SPMonitorsWrapper : NSObject <SPPowerMonitorDelegate>
{
    BOOL _isRunning;
    id <SPMonitorsWrapperDelegate> _delegate;
    NSObject<OS_dispatch_queue> *_delegateQueue;
    SPNetworkMonitor *_networkMonitor;
    NSDate *_lastStateChangeDate;
    NSDate *_nextStateChangeDate;
    NSDate *_networkOffDuringSleepDate;
    SPPowerStateMonitorMac *_powerStateMonitor;
    SPMacBeaconConfig *_macBeaconConfig;
}

@property(retain, nonatomic) SPMacBeaconConfig *macBeaconConfig; // @synthesize macBeaconConfig=_macBeaconConfig;
@property(retain, nonatomic) SPPowerStateMonitorMac *powerStateMonitor; // @synthesize powerStateMonitor=_powerStateMonitor;
@property(retain, nonatomic) NSDate *networkOffDuringSleepDate; // @synthesize networkOffDuringSleepDate=_networkOffDuringSleepDate;
@property BOOL isRunning; // @synthesize isRunning=_isRunning;
@property(retain, nonatomic) NSDate *nextStateChangeDate; // @synthesize nextStateChangeDate=_nextStateChangeDate;
@property(retain, nonatomic) NSDate *lastStateChangeDate; // @synthesize lastStateChangeDate=_lastStateChangeDate;
@property(retain, nonatomic) SPNetworkMonitor *networkMonitor; // @synthesize networkMonitor=_networkMonitor;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *delegateQueue; // @synthesize delegateQueue=_delegateQueue;
@property(nonatomic) __weak id <SPMonitorsWrapperDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)nextWakeTimeForState:(unsigned long long)arg1;
- (void)powerMonitor:(id)arg1 didChangeState:(unsigned long long)arg2;
- (void)calculateLowPowerNetworkOffDate;
- (void)updateConfig:(id)arg1;
- (void)resume;
- (void)pause;
- (void)stop;
- (void)start;
- (unsigned long long)powerState;
- (BOOL)isNetworkUp;
- (id)initWithBeaconManager:(id)arg1 delegateQueueu:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

