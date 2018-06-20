//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSObject<OS_dispatch_queue>, NSOrderedSet;

@interface MRNotificationClient : NSObject
{
    unsigned long long _registeredNowPlayingObservers;
    NSObject<OS_dispatch_queue> *_customNotificationsQueue;
    NSObject<OS_dispatch_queue> *_serialQueue;
    NSObject<OS_dispatch_queue> *_notificationQueue;
    NSOrderedSet *_nowPlayingNotifications;
    NSOrderedSet *_routesChangedNotifications;
    NSOrderedSet *_volumeControlNotifications;
    NSOrderedSet *_externalScreenNotifications;
    NSOrderedSet *_originNotifications;
    NSOrderedSet *_supportedCommandsNotifications;
    NSOrderedSet *_voiceInputNotifications;
    NSOrderedSet *_errorNotifications;
    BOOL _receivesExternalScreenTypeChangedNotifications;
    BOOL _receivesSupportedCommandsNotifications;
    BOOL _receivesRoutesChangedNotifications;
    BOOL _receivesVolumeControlNotifications;
    BOOL _receivesOriginChangedNotifications;
    BOOL _receivesPlaybackErrorNotifications;
    BOOL _receivesVoiceInputRecordingStateNotifications;
}

+ (id)nowPlayingNotifications;
@property(nonatomic) BOOL receivesVoiceInputRecordingStateNotifications; // @synthesize receivesVoiceInputRecordingStateNotifications=_receivesVoiceInputRecordingStateNotifications;
@property(nonatomic) BOOL receivesPlaybackErrorNotifications; // @synthesize receivesPlaybackErrorNotifications=_receivesPlaybackErrorNotifications;
@property(nonatomic) BOOL receivesOriginChangedNotifications; // @synthesize receivesOriginChangedNotifications=_receivesOriginChangedNotifications;
@property(nonatomic) BOOL receivesVolumeControlNotifications; // @synthesize receivesVolumeControlNotifications=_receivesVolumeControlNotifications;
@property(nonatomic) BOOL receivesRoutesChangedNotifications; // @synthesize receivesRoutesChangedNotifications=_receivesRoutesChangedNotifications;
@property(nonatomic) BOOL receivesSupportedCommandsNotifications; // @synthesize receivesSupportedCommandsNotifications=_receivesSupportedCommandsNotifications;
@property(nonatomic) BOOL receivesExternalScreenTypeChangedNotifications; // @synthesize receivesExternalScreenTypeChangedNotifications=_receivesExternalScreenTypeChangedNotifications;
- (void).cxx_destruct;
- (BOOL)_postNotification:(id)arg1 userInfo:(id)arg2 object:(id)arg3 withHandler:(CDUnknownBlockType)arg4;
- (BOOL)postNotification:(id)arg1 userInfo:(id)arg2 object:(id)arg3;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *notificationQueue;
@property(readonly, nonatomic, getter=isRegisteredForNowPlayingNotifications) BOOL registeredForNowPlayingNotifications;
- (void)unregisterForNowPlayingNotifications;
- (void)registerForNowPlayingNotificationsWithQueue:(id)arg1 force:(BOOL)arg2;
- (void)registerForNowPlayingNotificationsWithQueue:(id)arg1;
- (id)init;

@end

