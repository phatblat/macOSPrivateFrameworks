//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "CSAssetManagerDelegate.h"
#import "CSEndpointAnalyzerImpl.h"
#import "EARCaesuraSilencePosteriorGeneratorDelegate.h"

@class CSAsset, CSServerEndpointFeatures, EARCaesuraSilencePosteriorGenerator, EARClientSilenceFeatures, NSDate, NSMutableArray, NSObject<OS_dispatch_queue>, NSString, _EAREndpointer;

@interface CSHybridEndpointAnalyzer : NSObject <CSAssetManagerDelegate, EARCaesuraSilencePosteriorGeneratorDelegate, CSEndpointAnalyzerImpl>
{
    BOOL _saveSamplesSeenInReset;
    BOOL _canProcessCurrentRequest;
    BOOL _didAddAudio;
    BOOL _didReceiveServerFeatures;
    BOOL _useDefaultServerFeaturesOnClientLag;
    BOOL _didCommunicateEndpoint;
    BOOL _didTimestampFirstAudioPacket;
    BOOL _recordingDidStop;
    id <CSEndpointAnalyzerDelegate> _delegate;
    unsigned long long _activeChannel;
    long long _endpointStyle;
    long long _endpointMode;
    double _startWaitTime;
    double _endWaitTime;
    double _interspeechWaitTime;
    double _delay;
    double _automaticEndpointingSuspensionEndTime;
    double _minimumDurationForEndpointer;
    CSAsset *_currentAsset;
    NSObject<OS_dispatch_queue> *_apQueue;
    unsigned long long _numSamplesProcessed;
    EARCaesuraSilencePosteriorGenerator *_caesuraSPG;
    EARClientSilenceFeatures *_clientSilenceFeaturesAtEndpoint;
    _EAREndpointer *_hybridClassifier;
    NSString *_endpointerModelVersion;
    NSObject<OS_dispatch_queue> *_serverFeaturesQueue;
    CSServerEndpointFeatures *_lastKnownServerEPFeatures;
    NSMutableArray *_serverFeatureLatencies;
    double _serverFeaturesWarmupLatency;
    NSDate *_lastServerFeatureTimestamp;
    double _clientLagThresholdMs;
    double _clampedSFLatencyMsForClientLag;
    NSObject<OS_dispatch_queue> *_hybridClassifierQueue;
    double _lastReportedEndpointTimeMs;
    NSObject<OS_dispatch_queue> *_stateSerialQueue;
    unsigned long long _currentRequestSampleRate;
    double _vtExtraAudioAtStartInMs;
    unsigned long long _vtEndInSampleCount;
    double _hepAudioOriginInMs;
    NSDate *_firstAudioPacketTimestamp;
    NSObject<OS_dispatch_queue> *_silencePosteriorGeneratorQueue;
}

@property(retain, nonatomic) NSObject<OS_dispatch_queue> *silencePosteriorGeneratorQueue; // @synthesize silencePosteriorGeneratorQueue=_silencePosteriorGeneratorQueue;
@property(nonatomic) BOOL recordingDidStop; // @synthesize recordingDidStop=_recordingDidStop;
@property(nonatomic) BOOL didTimestampFirstAudioPacket; // @synthesize didTimestampFirstAudioPacket=_didTimestampFirstAudioPacket;
@property(retain, nonatomic) NSDate *firstAudioPacketTimestamp; // @synthesize firstAudioPacketTimestamp=_firstAudioPacketTimestamp;
@property(nonatomic) double hepAudioOriginInMs; // @synthesize hepAudioOriginInMs=_hepAudioOriginInMs;
@property(nonatomic) unsigned long long vtEndInSampleCount; // @synthesize vtEndInSampleCount=_vtEndInSampleCount;
@property(nonatomic) double vtExtraAudioAtStartInMs; // @synthesize vtExtraAudioAtStartInMs=_vtExtraAudioAtStartInMs;
@property(nonatomic) unsigned long long currentRequestSampleRate; // @synthesize currentRequestSampleRate=_currentRequestSampleRate;
@property(nonatomic) BOOL didCommunicateEndpoint; // @synthesize didCommunicateEndpoint=_didCommunicateEndpoint;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *stateSerialQueue; // @synthesize stateSerialQueue=_stateSerialQueue;
@property(nonatomic) double lastReportedEndpointTimeMs; // @synthesize lastReportedEndpointTimeMs=_lastReportedEndpointTimeMs;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *hybridClassifierQueue; // @synthesize hybridClassifierQueue=_hybridClassifierQueue;
@property(nonatomic) BOOL useDefaultServerFeaturesOnClientLag; // @synthesize useDefaultServerFeaturesOnClientLag=_useDefaultServerFeaturesOnClientLag;
@property(nonatomic) double clampedSFLatencyMsForClientLag; // @synthesize clampedSFLatencyMsForClientLag=_clampedSFLatencyMsForClientLag;
@property(nonatomic) double clientLagThresholdMs; // @synthesize clientLagThresholdMs=_clientLagThresholdMs;
@property(nonatomic) BOOL didReceiveServerFeatures; // @synthesize didReceiveServerFeatures=_didReceiveServerFeatures;
@property(retain, nonatomic) NSDate *lastServerFeatureTimestamp; // @synthesize lastServerFeatureTimestamp=_lastServerFeatureTimestamp;
@property(nonatomic) double serverFeaturesWarmupLatency; // @synthesize serverFeaturesWarmupLatency=_serverFeaturesWarmupLatency;
@property(retain, nonatomic) NSMutableArray *serverFeatureLatencies; // @synthesize serverFeatureLatencies=_serverFeatureLatencies;
@property(retain, nonatomic) CSServerEndpointFeatures *lastKnownServerEPFeatures; // @synthesize lastKnownServerEPFeatures=_lastKnownServerEPFeatures;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *serverFeaturesQueue; // @synthesize serverFeaturesQueue=_serverFeaturesQueue;
@property(retain, nonatomic) NSString *endpointerModelVersion; // @synthesize endpointerModelVersion=_endpointerModelVersion;
@property(retain, nonatomic) _EAREndpointer *hybridClassifier; // @synthesize hybridClassifier=_hybridClassifier;
@property(retain, nonatomic) EARClientSilenceFeatures *clientSilenceFeaturesAtEndpoint; // @synthesize clientSilenceFeaturesAtEndpoint=_clientSilenceFeaturesAtEndpoint;
@property(retain, nonatomic) EARCaesuraSilencePosteriorGenerator *caesuraSPG; // @synthesize caesuraSPG=_caesuraSPG;
@property(nonatomic) BOOL didAddAudio; // @synthesize didAddAudio=_didAddAudio;
@property(nonatomic) unsigned long long numSamplesProcessed; // @synthesize numSamplesProcessed=_numSamplesProcessed;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *apQueue; // @synthesize apQueue=_apQueue;
@property(retain, nonatomic) CSAsset *currentAsset; // @synthesize currentAsset=_currentAsset;
@property(nonatomic) BOOL canProcessCurrentRequest; // @synthesize canProcessCurrentRequest=_canProcessCurrentRequest;
@property(nonatomic) BOOL saveSamplesSeenInReset; // @synthesize saveSamplesSeenInReset=_saveSamplesSeenInReset;
@property(nonatomic) double minimumDurationForEndpointer; // @synthesize minimumDurationForEndpointer=_minimumDurationForEndpointer;
@property(nonatomic) double automaticEndpointingSuspensionEndTime; // @synthesize automaticEndpointingSuspensionEndTime=_automaticEndpointingSuspensionEndTime;
@property(nonatomic) double delay; // @synthesize delay=_delay;
@property(nonatomic) double interspeechWaitTime; // @synthesize interspeechWaitTime=_interspeechWaitTime;
@property(nonatomic) double endWaitTime; // @synthesize endWaitTime=_endWaitTime;
@property(nonatomic) double startWaitTime; // @synthesize startWaitTime=_startWaitTime;
@property(nonatomic) long long endpointMode; // @synthesize endpointMode=_endpointMode;
@property(nonatomic) long long endpointStyle; // @synthesize endpointStyle=_endpointStyle;
@property(nonatomic) unsigned long long activeChannel; // @synthesize activeChannel=_activeChannel;
@property(nonatomic) __weak id <CSEndpointAnalyzerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)_getCSHybridEndpointerConfigForAsset:(id)arg1;
- (void)_updateAssetWithCurrentLanguage;
- (void)_updateAssetWithLanguage:(id)arg1;
- (void)CSAssetManagerDidDownloadNewAsset:(id)arg1;
- (void)CSLanguageCodeUpdateMonitor:(id)arg1 didReceiveLanguageCodeChanged:(id)arg2;
@property(readonly, nonatomic) double lastStartOfVoiceActivityTime;
@property(readonly, nonatomic) double lastEndOfVoiceActivityTime;
- (void)reset;
- (void)resetForNewRequestWithSampleRate:(unsigned long long)arg1;
- (void)recordingStoppedForReason:(unsigned long long)arg1;
- (void)preheat;
- (void)handleVoiceTriggerWithActivationInfo:(id)arg1;
- (id)serverFeaturesLatencyDistributionDictionary;
- (void)clientSilenceFeaturesAvailable:(id)arg1;
- (void)shouldAcceptEagerResultForDuration:(double)arg1 resultsCompletionHandler:(CDUnknownBlockType)arg2;
- (void)processServerEndpointFeatures:(id)arg1;
- (void)updateEndpointerDelayedTrigger:(BOOL)arg1;
- (void)updateEndpointerThreshold:(float)arg1;
- (void)processAudioSamplesAsynchronously:(id)arg1;
- (id)init;

// Remaining properties
@property(nonatomic) double bypassSamples;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

