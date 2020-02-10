//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CoreSpeech/CSAudioRouteChangeMonitor.h>

@class NSObject<OS_dispatch_queue>;

@interface CSAudioRouteChangeMonitorImplMac : CSAudioRouteChangeMonitor
{
    NSObject<OS_dispatch_queue> *_queue;
    BOOL _isHearstConnected;
    CDUnknownBlockType _pickedRoutesChangedBlock;
}

- (void).cxx_destruct;
- (BOOL)_fetchHearstConnectionState;
- (void)_notifyHearstConnectionState:(BOOL)arg1;
- (BOOL)_fetchHearstConnectionStateWithDeviceID:(unsigned int)arg1;
- (void)_stopMonitoring;
- (void)_startMonitoringWithQueue:(id)arg1;
- (void)preferredExternalRouteDidChange;
- (BOOL)jarvisConnected;
- (void)getJarvisConnected:(CDUnknownBlockType)arg1;
- (BOOL)hearstConnected;
- (void)getHearstConnected:(CDUnknownBlockType)arg1;
- (id)init;

@end
