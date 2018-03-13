//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "AFNetworkAvailabilityObserver.h"

@class AFAudioPowerUpdater, AFSpeechRequestOptions, NSMutableData, NSObject<OS_dispatch_group>, NSObject<OS_dispatch_queue>, NSObject<OS_dispatch_source>, NSSet, NSString, NSXPCConnection;

@interface AFDictationConnection : NSObject <AFNetworkAvailabilityObserver>
{
    NSXPCConnection *_connection;
    NSString *_lastUsedLanguage;
    NSSet *_knownOfflineInstalledLanguages;
    id <AFDictationDelegate> _delegate;
    AFAudioPowerUpdater *_inputAudioPowerUpdater;
    BOOL _isCapturingSpeech;
    BOOL _hasActiveRequest;
    BOOL _isWaitingForAudioFile;
    NSObject<OS_dispatch_group> *_speechCallbackGroup;
    NSObject<OS_dispatch_queue> *_internalQueue;
    NSObject<OS_dispatch_source> *_timeoutTimer;
    NSObject<OS_dispatch_source> *_bufferTimer;
    BOOL _forceOfflineRecognition;
    AFSpeechRequestOptions *_stopOptions;
    NSMutableData *_buffer;
    double _audioStartTime;
    double _amountDataSent;
    BOOL _narrowband;
    NSString *_requestIdString;
    NSObject<OS_dispatch_queue> *_delegateQueue;
}

+ (void)fetchSupportedLanguageCodes:(CDUnknownBlockType)arg1;
+ (BOOL)dictationIsSupportedForLanguageCode:(id)arg1 error:(id *)arg2;
+ (BOOL)dictationIsEnabled;
+ (void)getForcedOfflineDictationSupportedLanguagesWithCompletion:(CDUnknownBlockType)arg1;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *delegateQueue; // @synthesize delegateQueue=_delegateQueue;
@property(nonatomic) __weak id <AFDictationDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_cancelTimerClearBuffer;
- (void)_cancelBufferFlushTimer;
- (void)_updateBufferFlushTimerWithDelay:(double)arg1;
- (id)_dequeueAudioWithLength:(unsigned long long)arg1;
- (void)_sendDataIfNeeded;
- (void)requestOfflineDictationSupportForLanguage:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)endSession;
- (float)peakPower;
- (float)averagePower;
- (void)sendSpeechCorrection:(id)arg1 forIdentifier:(id)arg2;
- (void)updateSpeechOptions:(id)arg1;
- (void)stopSpeech;
- (void)_delayedStopSpeechWithOptions:(id)arg1;
- (void)stopSpeechWithOptions:(id)arg1;
- (void)cancelSpeech;
- (void)addRecordedSpeechSampleData:(id)arg1;
- (void)startRecordedAudioDictationWithOptions:(id)arg1 forLanguage:(id)arg2 narrowband:(BOOL)arg3;
- (void)startRecordedAudioDictationWithOptions:(id)arg1 forLanguage:(id)arg2;
- (void)startDictationWithLanguageCode:(id)arg1 options:(id)arg2;
- (void)startDictationWithLanguageCode:(id)arg1 options:(id)arg2 speechOptions:(id)arg3;
- (CDUnknownBlockType)startRecordingForPendingDictationWithLanguageCode:(id)arg1 options:(id)arg2 speechOptions:(id)arg3;
- (void)_setActivationTimeOnOptionsIfNecessary:(id)arg1;
- (void)preheatWithRecordDeviceIdentifier:(id)arg1;
- (void)preheat;
- (void)_willCompleteDictation;
- (void)_willFailDictationWithError:(id)arg1;
- (void)_willCancelDictation;
- (void)_willStartDictationWithLanguageCode:(id)arg1 options:(id)arg2 speechOptions:(id)arg3 machAbsoluteTime:(unsigned long long)arg4;
- (void)cancelAvailabilityMonitoring;
- (void)beginAvailabilityMonitoring;
- (void)networkAvailability:(id)arg1 isAvailable:(BOOL)arg2;
- (void)_availabilityChanged;
- (BOOL)forcedOfflineDictationIsAvailableForLanguage:(id)arg1;
- (BOOL)dictationIsAvailableForLanguage:(id)arg1;
- (void)_stopInputAudioPowerUpdates;
- (void)_startInputAudioPowerUpdatesWithXPCWrapper:(id)arg1;
- (void)_extendRequestTimeout;
- (void)_invokeRequestTimeout;
- (void)_cancelRequestTimeout;
- (void)_scheduleRequestTimeout;
- (id)_dictationServiceWithErrorHandler:(CDUnknownBlockType)arg1;
- (id)_dictationService;
- (id)_connection;
- (void)_registerInvalidationHandlerForXPCConnection:(id)arg1;
- (void)_clearConnection;
- (void)_connectionClearedForInterruption:(BOOL)arg1;
- (void)_tellSpeechDelegateAvailabilityChanged;
- (void)_tellSpeechDelegateAudioFileFinished:(id)arg1 error:(id)arg2;
- (void)_tellSpeechDelegateSpeechRecognitionDidSucceed;
- (void)_tellSpeechDelegateRecognitionDidFail:(id)arg1;
- (void)_tellSpeechDelegateDidRecognizeTranscriptionObjects:(id)arg1 languageModel:(id)arg2;
- (void)_tellSpeechDelegateDidProcessAudioDuration:(double)arg1;
- (void)_tellSpeechDelegateDidRecognizeSpeechTokens:(id)arg1 languageModel:(id)arg2;
- (void)_tellSpeechDelegateDidRecognizeSpeechPhrases:(id)arg1 languageModel:(id)arg2 correctionIdentifier:(id)arg3;
- (void)_tellSpeechDelegateDidRecognizePackage:(id)arg1;
- (void)_tellSpeechDelegateRecordingDidFail:(id)arg1;
- (void)_tellSpeechDelegateRecordingDidCancel;
- (void)_tellSpeechDelegateRecordingDidEnd;
- (void)_tellSpeechDelegateRecordingDidBegin;
- (void)_tellSpeechDelegateRecordingWillBegin;
- (void)_dispatchCallbackGroupBlock:(CDUnknownBlockType)arg1;
- (void)_dispatchAsync:(CDUnknownBlockType)arg1;
- (void)_checkAndSetIsCapturingSpeech:(BOOL)arg1;
- (void)dealloc;
- (id)init;
- (void)sendEngagementFeedback:(long long)arg1 voiceQueryIdentifier:(id)arg2;
- (void)startDictationWithSpeechFileAtURL:(id)arg1 isNarrowBand:(BOOL)arg2 options:(id)arg3 forLanguage:(id)arg4;
- (void)startDictationWithSpeechFileAtURL:(id)arg1 options:(id)arg2 forLanguage:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

