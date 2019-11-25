//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CSAudioSessionController, NSDictionary;

@protocol CSAudioSessionControllerDelegate <NSObject>

@optional
- (void)audioSessionController:(CSAudioSessionController *)arg1 didReceiveAudioSessionOwnerLostNotification:(NSDictionary *)arg2;
- (void)audioSessionController:(CSAudioSessionController *)arg1 didReceiveAudioSessionMediaServicesWereResetNotificationWithUserInfo:(NSDictionary *)arg2;
- (void)audioSessionController:(CSAudioSessionController *)arg1 didReceiveAudioSessionMediaServicesWereLostNotificationWithUserInfo:(NSDictionary *)arg2;
- (void)audioSessionController:(CSAudioSessionController *)arg1 didReceiveAudioSessionRouteChangeNotificationWithUserInfo:(NSDictionary *)arg2;
- (void)audioSessionController:(CSAudioSessionController *)arg1 didReceiveAudioSessionInterruptionNotificationWithUserInfo:(NSDictionary *)arg2;
@end

