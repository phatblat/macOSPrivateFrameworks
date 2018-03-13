//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "AVVoiceControllerPlaybackDelegate.h"
#import "AVVoiceControllerRecordDelegate.h"
#import "CSBeepCancellerDelegate.h"
#import "CSRemoteRecordClientDelegate.h"

@class AVVoiceController, CSAudioPowerMeter, CSAudioSampleRateConverter, CSAudioZeroCounter, CSAudioZeroFilter, CSBeepCanceller, CSRemoteRecordClient, NSDictionary, NSString;

@interface CSAudioRecorder : NSObject <CSRemoteRecordClientDelegate, AVVoiceControllerRecordDelegate, AVVoiceControllerPlaybackDelegate, CSBeepCancellerDelegate>
{
    AVVoiceController *_voiceController;
    CSAudioZeroFilter *_zeroFilter;
    CSBeepCanceller *_beepCanceller;
    unsigned long long _vtEndInSampleCount;
    unsigned long long _numSamplesProcessed;
    struct OpaqueAudioConverter *_deinterleaver;
    struct AudioBufferList _interleavedABL;
    struct AudioBufferList *_pNonInterleavedABL;
    CSAudioSampleRateConverter *_sampleRateConverter;
    BOOL _needSampleRateConversion;
    CSRemoteRecordClient *_remoteRecordClient;
    CSAudioPowerMeter *_powerMeter;
    NSDictionary *_latestContext;
    BOOL _shouldUseRemoteRecord;
    CSAudioZeroCounter *_continuousZeroCounter;
    id <CSAudioRecorderDelegate> _delegate;
}

@property(nonatomic) __weak id <CSAudioRecorderDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_createSampleRateConverterIfNeeded;
- (void)_createDeInterleaverIfNeeded;
- (id)_deinterleaveBufferIfNeeded:(id)arg1;
- (id)_samplingRateConvertIfNeeded:(id)arg1;
- (void)remoteRecordConnectionDisconnected;
- (void)remoteRecordTwoShotDetectedAtTime:(double)arg1;
- (void)remoteRecordLPCMBufferAvailable:(id)arg1;
- (void)remoteRecordDidStopRecordingWithError:(id)arg1;
- (void)remoteRecordDidStartRecordingWithError:(id)arg1;
- (void)voiceControllerMediaServicesWereReset:(id)arg1;
- (void)voiceControllerMediaServicesWereLost:(id)arg1;
- (void)voiceTriggerOccuredNotification:(id)arg1;
- (void)updateVoiceTriggerAOPModel:(id)arg1;
- (void)enableVoiceTriggerOnAOP:(BOOL)arg1;
- (void)voiceControllerRecordHardwareConfigurationDidChange:(id)arg1 toConfiguration:(int)arg2;
- (void)voiceControllerDidStopRecording:(id)arg1 forReason:(long long)arg2;
- (void)voiceControllerDidStartRecording:(id)arg1 successfully:(BOOL)arg2 error:(id)arg3;
- (void)_audioRecorderDidStopRecordingForReason:(long long)arg1;
- (void)_audioRecorderDidStartRecordingSuccessfully:(BOOL)arg1 error:(id)arg2;
- (id)metrics;
- (float)averagePowerForChannel:(unsigned long long)arg1;
- (float)peakPowerForChannel:(unsigned long long)arg1;
- (void)updateMeters;
- (void)setMeteringEnabled:(BOOL)arg1;
- (BOOL)playAlertSoundForType:(long long)arg1;
- (BOOL)playRecordStartingAlertAndResetEndpointer;
- (BOOL)setAlertSoundFromURL:(id)arg1 forType:(long long)arg2;
- (void)voiceControllerRecordBufferAvailable:(id)arg1 buffer:(id)arg2;
- (void)beepCancellerDidCancelSamples:(id)arg1 buffer:(id)arg2 timestamp:(unsigned long long)arg3;
- (void)voiceControllerLPCMRecordBufferAvailable:(id)arg1 buffer:(id)arg2;
- (void)_processAudioChainWithZeroFiltering:(id)arg1 atTime:(unsigned long long)arg2;
- (void)_processAudioChain:(id)arg1 atTime:(unsigned long long)arg2;
- (BOOL)_shouldRunZeroFilter;
- (id)voiceTriggerInfo;
- (id)playbackRoute;
- (id)recordRoute;
- (BOOL)isNarrowBand;
- (float)_recordingSampleRate;
- (BOOL)isRecording;
- (void)stopRecording;
- (BOOL)startRecording;
- (BOOL)startRecording:(id *)arg1;
- (BOOL)_shouldUseRemoteRecordForContext:(id)arg1;
- (void)_resetZeroFilter;
- (double)getRecordBufferDuration;
- (BOOL)setRecordBufferDuration:(double)arg1;
- (void)setSynchronousCallbackEnabled:(BOOL)arg1;
- (id)recordSettings;
@property(nonatomic) BOOL duckOthersOption;
- (void)prewarmAudioSession;
- (BOOL)setCurrentContext:(id)arg1 error:(id *)arg2;
- (BOOL)prepareRecordWithSettings:(id)arg1 error:(id *)arg2;
- (id)_beepCanceller;
- (id)_voiceControllerWithContext:(id)arg1 error:(id *)arg2;
- (void)_destroyVoiceController;
- (void)dealloc;
- (void)willDestroy;
- (id)initWithContext:(id)arg1 error:(id *)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

