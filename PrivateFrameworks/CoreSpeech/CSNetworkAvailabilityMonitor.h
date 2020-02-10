//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CoreSpeech/CSEventMonitor.h>

@interface CSNetworkAvailabilityMonitor : CSEventMonitor
{
    int _notifyToken;
}

+ (id)sharedInstance;
- (void)_notifyObserver:(id)arg1 withNetworkAvailability:(BOOL)arg2;
- (void)_didReceivedNetworkAvailabilityChangedNotification:(BOOL)arg1;
- (void)_availabilityChanged;
- (void)_stopMonitoring;
- (void)_startMonitoringWithQueue:(id)arg1;
- (BOOL)isAvailable;
- (id)init;

@end
