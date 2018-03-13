//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSData, NSString, UNNotification, UNNotificationResponse;

@protocol UNUserNotificationServiceConnectionObserver <NSObject>

@optional
- (void)didReceiveNotificationResponse:(UNNotificationResponse *)arg1 forBundleIdentifier:(NSString *)arg2 withCompletionHandler:(void (^)(void))arg3;
- (void)willPresentNotification:(UNNotification *)arg1 forBundleIdentifier:(NSString *)arg2 withCompletionHandler:(void (^)(unsigned long long))arg3;
- (void)didChangePendingNotificationRequests:(NSArray *)arg1 forBundleIdentifier:(NSString *)arg2;
- (void)didDeliverNotifications:(NSArray *)arg1 forBundleIdentifier:(NSString *)arg2;
- (void)didReceiveDeviceToken:(NSData *)arg1 forBundleIdentifier:(NSString *)arg2;
@end

