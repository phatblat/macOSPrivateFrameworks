//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSObject<OS_dispatch_group>, NSObject<OS_dispatch_queue>, OS_remote_device_browser, OS_xpc_remote_connection;

@interface CSRemoteControlClient : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;
    OS_xpc_remote_connection *_connection;
    OS_remote_device_browser *_deviceBrowser;
    NSObject<OS_dispatch_group> *_deviceWaitingGroup;
    id <CSRemoteControlClientDelegate> _delegate;
}

@property(nonatomic) __weak id <CSRemoteControlClientDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (BOOL)_saveTransferredData:(id)arg1 to:(id)arg2 numberOfSamplesToWrite:(unsigned long long)arg3;
- (BOOL)_handleWriteFileMessage:(id)arg1 withSpeakerModel:(id)arg2;
- (void)getFirstPassRunningMode:(CDUnknownBlockType)arg1;
- (void)requestUpdatedSATAudioForSpeakerModel:(id)arg1 withRequestTimestamp:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)clearTriggerCount:(CDUnknownBlockType)arg1;
- (void)getTriggerCount:(CDUnknownBlockType)arg1;
- (BOOL)transferInterstitialAudioFiles:(id)arg1 interstitialLevel:(long long)arg2 completion:(CDUnknownBlockType)arg3;
- (BOOL)invalidateInterstitialWithLevel:(long long)arg1;
- (void)voiceTriggerEnabledWithCompletion:(CDUnknownBlockType)arg1;
- (void)setVoiceTriggerEnable:(BOOL)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (BOOL)transferVoiceTriggerAsset:(id)arg1 forLanguageCode:(id)arg2;
- (BOOL)transferVoiceTriggerSpeakerModel:(id)arg1;
- (BOOL)_transferFile:(id)arg1 at:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)readAndClearVoiceTriggeredTokenWithCompletion:(CDUnknownBlockType)arg1;
- (void)readVoiceTriggeredTokenWithCompletion:(CDUnknownBlockType)arg1;
- (void)_handleServerMessage:(id)arg1;
- (void)_handleServerError:(id)arg1;
- (void)_handleServerEvent:(id)arg1;
- (BOOL)isConnected;
- (BOOL)waitingForConnection:(double)arg1 error:(id *)arg2;
- (void)didDeviceDisconnect:(id)arg1;
- (void)didDeviceConnect:(id)arg1;
- (void)dealloc;
- (id)init;

@end

