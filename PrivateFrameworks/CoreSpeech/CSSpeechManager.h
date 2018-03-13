//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "CSAssetManagerDelegate.h"
#import "CSAudioRecorderDelegate.h"
#import "CSLanguageCodeUpdateMonitorDelegate.h"
#import "CSSiriEnabledMonitorDelegate.h"
#import "CSStateMachineDelegate.h"
#import "CSVoiceTriggerDelegate.h"

@class CSAsset, CSAudioCircularBuffer, CSAudioRecorder, CSSmartSiriVolume, CSStateMachine, NSDictionary, NSHashTable, NSObject<OS_dispatch_queue>, NSObject<OS_dispatch_source>, NSString, NSUUID;

@interface CSSpeechManager : NSObject <CSAudioRecorderDelegate, CSStateMachineDelegate, CSVoiceTriggerDelegate, CSSiriEnabledMonitorDelegate, CSAssetManagerDelegate, CSLanguageCodeUpdateMonitorDelegate>
{
    BOOL _isSiriEnabled;
    float _systemVolumeValue;
    CSAudioRecorder *_audioRecorder;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_queue> *_assetQueryQueue;
    CSStateMachine *_stateMachine;
    CSAudioCircularBuffer *_audioBuffer;
    CSAsset *_currentVoiceTriggerAsset;
    id <CSSpeechManagerDelegate> _clientController;
    CSSmartSiriVolume *_smartSiriVolume;
    NSHashTable *_activeAudioProcessors;
    NSHashTable *_continuousAudioProcessors;
    unsigned long long _lastForwardedSampleCount;
    unsigned long long _secondPassStartSampleCount;
    unsigned long long _clientStartSampleCount;
    unsigned long long _recordPendingStartMachAbsTime;
    NSDictionary *_lastVoiceTriggerEventInfo;
    NSObject<OS_dispatch_source> *_listenPollingTimer;
    NSUUID *_pendingSetRecordModeToRecordingToken;
    CDUnknownBlockType _pendingSetRecordModeToRecordingCompletion;
}

@property(nonatomic) BOOL isSiriEnabled; // @synthesize isSiriEnabled=_isSiriEnabled;
@property(nonatomic) float systemVolumeValue; // @synthesize systemVolumeValue=_systemVolumeValue;
@property(copy, nonatomic) CDUnknownBlockType pendingSetRecordModeToRecordingCompletion; // @synthesize pendingSetRecordModeToRecordingCompletion=_pendingSetRecordModeToRecordingCompletion;
@property(retain, nonatomic) NSUUID *pendingSetRecordModeToRecordingToken; // @synthesize pendingSetRecordModeToRecordingToken=_pendingSetRecordModeToRecordingToken;
@property(retain, nonatomic) NSObject<OS_dispatch_source> *listenPollingTimer; // @synthesize listenPollingTimer=_listenPollingTimer;
@property(retain, nonatomic) NSDictionary *lastVoiceTriggerEventInfo; // @synthesize lastVoiceTriggerEventInfo=_lastVoiceTriggerEventInfo;
@property(nonatomic) unsigned long long recordPendingStartMachAbsTime; // @synthesize recordPendingStartMachAbsTime=_recordPendingStartMachAbsTime;
@property(nonatomic) unsigned long long clientStartSampleCount; // @synthesize clientStartSampleCount=_clientStartSampleCount;
@property(nonatomic) unsigned long long secondPassStartSampleCount; // @synthesize secondPassStartSampleCount=_secondPassStartSampleCount;
@property(nonatomic) unsigned long long lastForwardedSampleCount; // @synthesize lastForwardedSampleCount=_lastForwardedSampleCount;
@property(retain, nonatomic) NSHashTable *continuousAudioProcessors; // @synthesize continuousAudioProcessors=_continuousAudioProcessors;
@property(retain, nonatomic) NSHashTable *activeAudioProcessors; // @synthesize activeAudioProcessors=_activeAudioProcessors;
@property(retain, nonatomic) CSSmartSiriVolume *smartSiriVolume; // @synthesize smartSiriVolume=_smartSiriVolume;
@property(nonatomic) __weak id <CSSpeechManagerDelegate> clientController; // @synthesize clientController=_clientController;
@property(retain, nonatomic) CSAsset *currentVoiceTriggerAsset; // @synthesize currentVoiceTriggerAsset=_currentVoiceTriggerAsset;
@property(retain, nonatomic) CSAudioCircularBuffer *audioBuffer; // @synthesize audioBuffer=_audioBuffer;
@property(retain, nonatomic) CSStateMachine *stateMachine; // @synthesize stateMachine=_stateMachine;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *assetQueryQueue; // @synthesize assetQueryQueue=_assetQueryQueue;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(retain, nonatomic) CSAudioRecorder *audioRecorder; // @synthesize audioRecorder=_audioRecorder;
- (void).cxx_destruct;
- (void)CSSiriEnabledMonitor:(id)arg1 didReceiveEnabled:(BOOL)arg2;
- (float)getEstimatedTTSVolume;
- (id)_eventName:(unsigned long long)arg1;
- (id)_stateName:(long long)arg1;
- (void)_reinitializeSmartSiriVolumeWithAsset:(id)arg1;
- (void)CSLanguageCodeUpdateMonitor:(id)arg1 didReceiveLanguageCodeChanged:(id)arg2;
- (void)CSAssetManagerDidDownloadNewAsset:(id)arg1;
- (unsigned long long)hostTimeFromSampleCount:(unsigned long long)arg1;
- (void)voiceTriggerDidDetectTwoShotAtTime:(double)arg1;
- (void)voiceTriggerDidDetectKeyword:(id)arg1;
- (void)voiceTriggerDetectedOnAOP:(id)arg1;
- (void)audioRecorderDisconnected:(id)arg1;
- (void)audioRecorderRecordHardwareConfigurationDidChange:(id)arg1 toConfiguration:(long long)arg2;
- (void)audioRecorderDidStopRecording:(id)arg1 forReason:(long long)arg2;
- (void)audioRecorderDidStartRecording:(id)arg1 successfully:(BOOL)arg2 error:(id)arg3;
- (void)audioRecorderBufferAvailable:(id)arg1 buffer:(id)arg2;
- (void)audioRecorderBufferAvailable:(id)arg1 buffer:(id)arg2 atTime:(unsigned long long)arg3;
- (id)_getClientRecordContext;
- (void)_startObservingSystemControllerLifecycle;
- (void)startObservingSystemVolumes;
- (void)systemControllerDied:(id)arg1;
- (void)systemVolumeDidChange:(id)arg1;
- (void)fetchVolumeFromAVSystemController;
- (void)_startForwardingToSmartSiriVolume;
- (void)_stopForwardingToClient;
- (void)_startForwardingToClient;
- (void)_destroyAudioRecorderIfNeeded;
- (void)_stopListenPolling;
- (void)_startListenPolling;
- (void)_createListenPollingTimer;
- (void)didIgnoreEvent:(long long)arg1 from:(long long)arg2;
- (void)didTransitFrom:(long long)arg1 to:(long long)arg2 by:(long long)arg3;
- (void)mediaserverdDidRestart;
- (void)audioRecorderLostMediaserverd:(id)arg1;
- (void)stopRecordingWithEvent:(unsigned long long)arg1;
- (void)_startRecordingForClient:(id)arg1 error:(id *)arg2;
- (BOOL)startRecordingWithSetting:(id)arg1 event:(unsigned long long)arg2 error:(id *)arg3;
- (BOOL)_setCurrentContext:(id)arg1 error:(id *)arg2;
- (void)_performPendingSetRecordModeToRecordingForReason:(id)arg1;
- (void)_cancelPendingSetRecordModeToRecordingForReason:(id)arg1;
- (void)_scheduleSetRecordModeToRecordingWithDelay:(double)arg1 forReason:(id)arg2 validator:(CDUnknownBlockType)arg3 completion:(CDUnknownBlockType)arg4;
- (BOOL)_setRecordMode:(long long)arg1 error:(id *)arg2;
- (BOOL)_startListening:(id *)arg1;
- (BOOL)_startRecordingWithSettings:(id)arg1 error:(id *)arg2;
- (BOOL)prepareRecordingForClient:(id)arg1 error:(id *)arg2;
- (BOOL)setClientContext:(id)arg1 error:(id *)arg2;
- (BOOL)isNarrowBand;
- (BOOL)isClientRecording;
- (id)recordSettings;
- (id)recordRoute;
- (void)prewarmAudioSession;
- (BOOL)_prepareListenWithSettings:(id)arg1 error:(id *)arg2;
- (BOOL)_prepareRecorderWithSettings:(id)arg1 error:(id *)arg2;
- (BOOL)_createRecorderWithContextIfNeeded:(id)arg1 error:(id *)arg2;
- (void)_notifyEvent:(unsigned long long)arg1;
- (void)notifyEvent:(unsigned long long)arg1;
- (long long)getCurrentState;
- (void)_setupStateMachine;
- (void)registerSpeechController:(id)arg1;
- (void)setupSmartSiriVolume;
- (void)_setupCircularBuffer;
- (id)_getSmartSiriVolumeAsset;
- (void)_reset;
- (void)reset;
- (void)startManager;
- (void)dealloc;
- (id)initWithVoiceTriggerFirstPass:(id)arg1 voicetriggerSecondPass:(id)arg2 voicetriggerEventNotifier:(id)arg3 audioRecorder:(id)arg4;
- (id)init;
- (float)averagePowerForChannel:(unsigned long long)arg1;
- (float)peakPowerForChannel:(unsigned long long)arg1;
- (void)updateMeters;
- (void)setMeteringEnabled:(BOOL)arg1;
- (BOOL)playRecordStartingAlertAndResetEndpointer;
- (BOOL)playAlertSoundForType:(long long)arg1;
- (BOOL)setAlertSoundFromURL:(id)arg1 forType:(long long)arg2;
- (id)metrics;
- (id)passThruVoiceTriggerInfo;
- (void)setDuckOthersOption:(BOOL)arg1;
- (BOOL)duckOthersOption;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

