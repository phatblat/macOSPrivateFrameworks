//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CoreSpeech/CSEventMonitor.h>

@interface CSSpeechDetectionDevicePresentMonitor : CSEventMonitor
{
}

+ (id)sharedInstance;
- (BOOL)isPresent;
- (void)handleSpeechDetectionVADPresentChange:(id)arg1;
- (void)_stopMonitoring;
- (void)_startMonitoringWithQueue:(id)arg1;
- (id)init;

@end

