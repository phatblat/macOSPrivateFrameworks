//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "STYIOPMNotificationDelegate.h"
#import "STYWakeDataProvider.h"

@class NSDictionary, NSString, STYHIDWakeEventFetcher, STYIOPMNotificationMonitor, SignpostSupportObjectExtractor;

@interface STYSystemWakeDataProvider : NSObject <STYIOPMNotificationDelegate, STYWakeDataProvider>
{
    SignpostSupportObjectExtractor *_signpostExtractor;
    NSDictionary *_signpostMap;
    unsigned int _ioRegEntryForPM;
    STYIOPMNotificationMonitor *_iopmNotificationMonitor;
    STYHIDWakeEventFetcher *_hidWakeEventFetcher;
    id <STYWakeDataConsumer> _consumer;
}

@property __weak id <STYWakeDataConsumer> consumer; // @synthesize consumer=_consumer;
- (void).cxx_destruct;
- (void)receivedPowerManagerNotification:(unsigned long long)arg1 atTimestamp:(unsigned long long)arg2;
- (void)handleSignpostProcessingCompletion:(id)arg1;
- (void)handleSignpostInterval:(id)arg1;
- (void)handleSignpost:(id)arg1;
- (unsigned long long)firstHidWakeEventAfter:(unsigned long long)arg1 before:(unsigned long long)arg2;
- (unsigned long long)sleepType;
- (unsigned long long)lastWakeTime:(unsigned long long *)arg1;
- (void)stopMonitoringWakeSignposts;
- (void)startMonitoringWakeSignposts;
- (void)startMonitoring;
- (void)dealloc;
- (id)initWithConsumer:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

