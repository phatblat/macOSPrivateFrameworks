//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CoreSpeech/CSEventMonitor.h>

@interface CSScreenLockMonitor : CSEventMonitor
{
    BOOL _isScreenLocked;
}

+ (id)sharedInstance;
- (BOOL)isScreenLocked;
- (void)_notifyObserver:(id)arg1 isScreenLocked:(BOOL)arg2;
- (BOOL)_queryIsScreenLocked;
- (void)screenLockStateChanged;
- (void)_stopMonitoring;
- (void)_startMonitoringWithQueue:(id)arg1;
- (void)dealloc;
- (id)init;

@end

