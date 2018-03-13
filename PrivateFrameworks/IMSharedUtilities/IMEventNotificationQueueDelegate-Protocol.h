//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class IMEventNotificationQueue;

@protocol IMEventNotificationQueueDelegate <NSObject>

@optional
- (void)eventNotificationQueueDidSendNotifications:(IMEventNotificationQueue *)arg1;
- (void)eventNotificationQueueWillSendNotifications:(IMEventNotificationQueue *)arg1;
- (void)eventNotificationQueue:(IMEventNotificationQueue *)arg1 didChangePausedState:(BOOL)arg2;
- (void)eventNotificationQueue:(IMEventNotificationQueue *)arg1 didChangeBusyState:(BOOL)arg2;
@end

