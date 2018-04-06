//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "CSAudioConverterDelegate.h"
#import "CSSpeechManagerDelegate.h"

@class CSAudioConverter, CSAudioFileWriter, CSAudioSampleRateConverter, CSAudioZeroCounter, CSEndpointerProxy, CSSpeechManager, NSDictionary, NSObject<OS_dispatch_queue>, NSString;

@interface CSSpeechController : NSObject <CSSpeechManagerDelegate, CSAudioConverterDelegate>
{
    NSObject<OS_dispatch_queue> *_queue;
    CSAudioConverter *_opusAudioConverter;
    CSAudioConverter *_narrowBandOpusConverter;
    CSAudioConverter *_audioConverter;
    CSAudioSampleRateConverter *_downsampler;
    NSDictionary *_requestedRecordSettings;
    NSDictionary *_lastVoiceTriggerInfo;
    CSAudioZeroCounter *_continuousZeroCounter;
    BOOL _isOpus;
    BOOL _isActivated;
    BOOL _isNarrowBand;
    BOOL _twoShotNotificationEnabled;
    id <CSSpeechControllerDelegate> _delegate;
    CSEndpointerProxy *_endpointerProxy;
    CSSpeechManager *_speechManager;
    NSDictionary *_avvcContext;
    CSAudioFileWriter *_audioFileWriter;
    unsigned long long _activeChannel;
}

+ (id)sharedController;
@property(nonatomic) BOOL twoShotNotificationEnabled; // @synthesize twoShotNotificationEnabled=_twoShotNotificationEnabled;
@property(nonatomic) unsigned long long activeChannel; // @synthesize activeChannel=_activeChannel;
@property(retain, nonatomic) CSAudioFileWriter *audioFileWriter; // @synthesize audioFileWriter=_audioFileWriter;
@property(nonatomic) BOOL isNarrowBand; // @synthesize isNarrowBand=_isNarrowBand;
@property(nonatomic) BOOL isActivated; // @synthesize isActivated=_isActivated;
@property(nonatomic) BOOL isOpus; // @synthesize isOpus=_isOpus;
@property(retain, nonatomic) NSDictionary *avvcContext; // @synthesize avvcContext=_avvcContext;
@property(nonatomic) __weak CSSpeechManager *speechManager; // @synthesize speechManager=_speechManager;
@property(retain, nonatomic) CSEndpointerProxy *endpointerProxy; // @synthesize endpointerProxy=_endpointerProxy;
@property(nonatomic) __weak id <CSSpeechControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (float)getSmartSiriVolume;
- (void)shouldAcceptEagerResultForDuration:(double)arg1 resultsCompletionHandler:(CDUnknownBlockType)arg2;
- (void)updateEndpointerDelayedTrigger:(BOOL)arg1;
- (void)updateEndpointerThreshold:(float)arg1;
- (id)endpointerModelVersion;
- (double)lastEndOfVoiceActivityTime;
- (id)_getRecordSettings;
- (id)_contextToString:(id)arg1;
- (void)_deviceAudioLogging;
- (id)_getSpeechIdentifier;
- (void)processServerEndpointFeatures:(id)arg1;
- (void)resetEndpointer;
- (long long)_currentAudioRecorderSampleRate;
- (void)setEndpointAnalyzerDelegate:(id)arg1;
@property(readonly, nonatomic) id <CSEndpointAnalyzer> endpointAnalyzer;
- (id)metrics;
- (void)keywordDetectorDidDetectKeyword;
- (void)voiceTriggerDidDetectTwoShotAtTime:(double)arg1;
- (void)voiceTriggerDidDetectKeyword:(id)arg1;
- (id)voiceTriggerInfo;
- (unsigned long long)outputReferenceChannel;
- (float)averagePowerForOutputReference;
- (float)peakPowerForOutputReference;
- (float)averagePowerForChannel:(unsigned long long)arg1;
- (float)peakPowerForChannel:(unsigned long long)arg1;
- (void)updateMeters;
- (void)setMeteringEnabled:(BOOL)arg1;
- (BOOL)playRecordStartingAlertAndResetEndpointer;
- (BOOL)playAlertSoundForType:(long long)arg1;
- (BOOL)setAlertSoundFromURL:(id)arg1 forType:(long long)arg2;
- (void)audioConverterDidConvertPackets:(id)arg1 packets:(id)arg2 timestamp:(unsigned long long)arg3;
- (BOOL)_setupAudioConverter:(BOOL)arg1;
- (void)_setupDownsamplerIfNeeded;
- (void)speechManagerDetectedSystemVolumeChange:(id)arg1 withVolume:(float)arg2;
- (void)speechManagerRecordHardwareConfigurationDidChange:(id)arg1 toConfiguration:(long long)arg2;
- (id)speechManagerRecordingContext;
- (void)speechManagerDidStopForwarding:(id)arg1 forReason:(long long)arg2;
- (void)speechManagerDidStartForwarding:(id)arg1 successfully:(BOOL)arg2 error:(id)arg3;
- (void)speechManagerRecordBufferAvailable:(id)arg1 buffer:(id)arg2;
- (void)speechManagerLPCMRecordBufferAvailable:(id)arg1 chunk:(id)arg2;
- (BOOL)_isVoiceTriggered;
- (BOOL)isVoiceTriggered;
- (id)recordRoute;
- (BOOL)isRecording;
- (void)stopRecording;
- (BOOL)startRecording:(id *)arg1;
- (BOOL)startRecordingWithSettings:(id)arg1 error:(id *)arg2;
@property(nonatomic) BOOL duckOthersOption;
- (double)getRecordBufferDuration;
- (BOOL)setRecordBufferDuration:(double)arg1;
- (void)setSynchronousCallbackEnabled:(BOOL)arg1;
- (struct AudioStreamBasicDescription)getLPCMAudioStreamBasicDescription;
- (id)recordSettings;
- (void)reset;
- (void)resetAudioSession;
- (void)prewarmAudioSession;
- (void)preheat;
- (BOOL)setCurrentContext:(id)arg1 error:(id *)arg2;
- (BOOL)prepareRecordWithSettings:(id)arg1 error:(id *)arg2;
- (void)startController;
- (BOOL)initializeRecordSessionWithContext:(id)arg1;
- (id)initWithManager:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
