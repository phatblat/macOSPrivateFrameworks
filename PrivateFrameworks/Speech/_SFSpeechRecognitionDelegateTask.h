//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Speech/SFSpeechRecognitionTask.h>

@class SFSpeechRecognitionResult;

@interface _SFSpeechRecognitionDelegateTask : SFSpeechRecognitionTask
{
    id <_SFSpeechRecognitionTaskDelegatePrivate> _delegate;
    SFSpeechRecognitionResult *_recognitionResultToReportAfterFinalSearchResults;
    _SFSpeechRecognitionDelegateTask *_selfReference;
    BOOL _waitForVoiceSearchResult;
    BOOL _hasSentRealSearchResults;
}

- (void).cxx_destruct;
- (void)dictationConnection:(id)arg1 didReceiveSearchResults:(id)arg2 recognizedText:(id)arg3 stable:(BOOL)arg4 final:(BOOL)arg5;
- (void)dictationConnection:(id)arg1 didProcessAudioDuration:(double)arg2;
- (void)dictationConnection:(id)arg1 didRecognizeTokens:(id)arg2 languageModel:(id)arg3;
- (void)dictationConnection:(id)arg1 didRecognizePackage:(id)arg2;
- (void)dictationConnectionSpeechRecognitionDidSucceed:(id)arg1;
- (void)dictationConnection:(id)arg1 speechRecognitionDidFail:(id)arg2;
- (void)dictationConnectionSpeechRecordingDidEnd:(id)arg1;
- (void)dictationConnection:(id)arg1 speechRecordingDidFail:(id)arg2;
- (void)_tellDelegateDidFinishSuccessfully:(BOOL)arg1;
- (void)dictationConnectionSpeechRecordingDidCancel:(id)arg1;
- (id)_initWithRequest:(id)arg1 queue:(id)arg2 languageCode:(id)arg3 taskHint:(long long)arg4 delegate:(id)arg5;

@end

