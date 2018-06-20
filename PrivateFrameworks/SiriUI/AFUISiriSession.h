//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "AFAssistantUIService.h"
#import "AFSpeechDelegate.h"
#import "AFUISiriSession.h"
#import "AFUISpeechSynthesisLocalDelegate.h"
#import "AFUIStateMachineDelegate.h"

@class AFConnection, AFUISpeechSynthesis, AFUIStateMachine, NSMutableSet, NSObject<OS_dispatch_group>, NSObject<OS_dispatch_queue>, NSString;

@interface AFUISiriSession : NSObject <AFAssistantUIService, AFSpeechDelegate, AFUIStateMachineDelegate, AFUISpeechSynthesisLocalDelegate, AFUISiriSession>
{
    NSObject<OS_dispatch_queue> *_delegateQueue;
    BOOL _currentRequestDidPresent;
    AFUIStateMachine *_stateMachine;
    AFUISpeechSynthesis *_speechSynthesis;
    NSMutableSet *_speechRequestGroupGraveyard;
    CDUnknownBlockType _continuePendingRequest;
    BOOL _sendContextBeforeContinuingSpeechRequest;
    BOOL _eyesFree;
    BOOL _isProcessingAcousticIdRequest;
    id <AFUISiriSessionDelegate> _delegate;
    id <AFUISiriSessionLocalDataSource> _localDataSource;
    id <AFUISiriSessionLocalDelegate> _localDelegate;
    AFConnection *_connection;
    NSObject<OS_dispatch_group> *_currentSpeechRequestGroup;
}

+ (id)effectiveCoreLocationBundle;
+ (id)currentMicrophoneIdentifier;
+ (void)beginMonitoringSiriAvailability;
+ (unsigned long long)availabilityState;
+ (void)forceAvailabilityStateAvailable:(BOOL)arg1;
@property(retain, nonatomic, getter=_currentSpeechRequestGroup, setter=_setCurrentSpeechRequestGroup:) NSObject<OS_dispatch_group> *currentSpeechRequestGroup; // @synthesize currentSpeechRequestGroup=_currentSpeechRequestGroup;
@property(readonly, nonatomic, getter=_connection) AFConnection *connection; // @synthesize connection=_connection;
@property(readonly, nonatomic) BOOL isProcessingAcousticIdRequest; // @synthesize isProcessingAcousticIdRequest=_isProcessingAcousticIdRequest;
@property(nonatomic, getter=isEyesFree) BOOL eyesFree; // @synthesize eyesFree=_eyesFree;
@property(nonatomic) __weak id <AFUISiriSessionLocalDelegate> localDelegate; // @synthesize localDelegate=_localDelegate;
@property(nonatomic) __weak id <AFUISiriSessionLocalDataSource> localDataSource; // @synthesize localDataSource=_localDataSource;
@property(nonatomic) __weak id <AFUISiriSessionDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)underlyingConnection;
- (float)recordingPowerLevel;
- (BOOL)isListening;
- (BOOL)isPreventingActivationGesture;
- (void)end;
- (void)_discardCurrentSpeechGroup;
- (void)performAceCommands:(id)arg1;
- (void)performAceCommand:(id)arg1;
- (void)performAceCommand:(id)arg1 conflictHandler:(CDUnknownBlockType)arg2;
- (void)_handleRequestUpdateViewsCommand:(id)arg1;
- (void)_performAceCommand:(id)arg1 forRequestUpdateViewsCommand:(id)arg2 afterDelay:(double)arg3;
- (void)_handleUnlockDeviceCommand:(id)arg1;
- (void)setLockState:(unsigned long long)arg1;
- (void)rollbackClearContext;
- (void)resetContextTypes:(long long)arg1;
- (void)clearContext;
- (void)setApplicationContext;
- (void)setAlertContext;
- (void)telephonyRequestCompleted;
- (void)sendReplyCommand:(id)arg1;
- (void)resultDidChangeForAceCommand:(id)arg1;
- (void)startCorrectedRequestWithText:(id)arg1 correctionIdentifier:(id)arg2 userSelectionResults:(id)arg3;
- (void)_startRequestWithText:(id)arg1;
- (void)_startRequestWithInfo:(id)arg1;
- (void)_startContinuityRequestWithInfo:(id)arg1;
- (void)_startDirectActionRequestWithString:(id)arg1 appID:(id)arg2 withContext:(id)arg3;
- (void)recordRequestMetricEvent:(id)arg1 withTimestamp:(double)arg2;
- (void)recordUIMetrics:(id)arg1;
- (void)requestDidPresentViewForErrorCommand:(id)arg1;
- (void)requestDidPresentViewForUICommand:(id)arg1;
- (void)cancelSpeechRequest;
- (void)stopRecordingSpeech;
- (void)_startSpeechPronunciationRequestWithContext:(id)arg1 options:(id)arg2;
- (void)_startSpeechRequestWithSpeechFileAtURL:(id)arg1;
- (void)_startSpeechRequestWithOptions:(id)arg1;
- (void)_requestContextWithCompletion:(CDUnknownBlockType)arg1;
- (id)_preparedSpeechRequestWithRequestOptions:(id)arg1;
- (BOOL)_hasActiveRequest;
- (void)_startRequestWithBlock:(CDUnknownBlockType)arg1;
- (void)_requestWillStart;
- (void)assistantConnection:(id)arg1 speechRecognizedPartialResult:(id)arg2;
- (void)assistantConnection:(id)arg1 speechRecognized:(id)arg2;
- (void)assistantConnection:(id)arg1 speechRecordingDidFail:(id)arg2;
- (void)assistantConnectionSpeechRecordingDidCancel:(id)arg1;
- (void)assistantConnectionSpeechRecordingDidEnd:(id)arg1;
- (void)assistantConnectionSpeechRecordingDidDetectStartpoint:(id)arg1;
- (void)assistantConnectionDidChangeAudioRecordingPower:(id)arg1;
- (void)assistantConnection:(id)arg1 speechRecordingDidChangeAVRecordRoute:(id)arg2;
- (void)assistantConnection:(id)arg1 speechRecordingDidBeginOnAVRecordRoute:(id)arg2;
- (void)assistantConnectionSpeechRecordingWillBegin:(id)arg1;
- (void)assistantConnectionDidDetectMusic:(id)arg1;
- (void)assistantConnectionDismissAssistant:(id)arg1;
- (void)assistantConnection:(id)arg1 shouldSpeak:(BOOL)arg2;
- (void)assistantConnection:(id)arg1 openURL:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)assistantConnectionRequestFinished:(id)arg1;
- (void)assistantConnection:(id)arg1 requestFailedWithError:(id)arg2 requestClass:(id)arg3;
- (void)assistantConnection:(id)arg1 didFinishAcousticIDRequestWithSuccess:(BOOL)arg2;
- (void)assistantConnectionWillStartAcousticIDRequest:(id)arg1;
- (void)_requestDidFinishWithError:(id)arg1;
- (void)assistantConnection:(id)arg1 receivedCommand:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)assistantConnectionRequestWillStart:(id)arg1;
- (BOOL)speechSynthesisConnectionIsRecording:(id)arg1;
- (void)speechSynthesisWillStartSpeaking:(id)arg1;
- (void)stopCurrentRecordingForSpeechSynthesis:(id)arg1;
- (id)speechSynthesis;
- (void)_continuePendingSpeechRequest;
- (void)updateRequestOptions:(id)arg1;
- (void)stopRequestWithOptions:(id)arg1;
- (void)startRequestWithOptions:(id)arg1;
- (void)_startRequestWithFinalOptions:(id)arg1;
- (void)_didChangeDialogPhase:(id)arg1;
- (void)forceAudioSessionInactive;
- (void)forceAudioSessionActive;
- (void)preheat;
- (void)_performBlockWithDelegate:(CDUnknownBlockType)arg1;
- (void)_performTransitionForEvent:(long long)arg1;
- (id)stateMachine:(id)arg1 descriptionForEvent:(long long)arg2;
- (void)stateMachine:(id)arg1 didTransitionFromState:(long long)arg2 forEvent:(long long)arg3;
- (long long)_state;
- (id)_stateMachine;
- (void)_siriNetworkAvailabilityDidChange:(id)arg1;
- (void)_voiceOverStatusDidChange:(id)arg1;
- (void)_outputVoiceDidChange:(id)arg1;
- (void)dealloc;
- (id)initWithConnection:(id)arg1 delegateQueue:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

