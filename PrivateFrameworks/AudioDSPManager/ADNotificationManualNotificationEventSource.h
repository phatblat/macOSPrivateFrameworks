//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "ADNotificationBusDelegate.h"

@class ADNotificationBus, NSString;

__attribute__((visibility("hidden")))
@interface ADNotificationManualNotificationEventSource : NSObject <ADNotificationBusDelegate>
{
    ADNotificationBus *_eventBus;
}

@property(retain, nonatomic) ADNotificationBus *eventBus; // @synthesize eventBus=_eventBus;
- (void).cxx_destruct;
- (void)sendEventWithPayload:(id)arg1;
- (void)busWillSleep:(id)arg1;
- (void)busWillWakeUp:(id)arg1;
- (void)newConsumer:(id)arg1 onBus:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
