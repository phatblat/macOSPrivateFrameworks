//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CoreSpeech/CSVTUITrainingSession.h>

#import "CSVTUIAudioSessionDelegate.h"
#import "CSVTUIEndPointDelegate.h"
#import "SFSpeechRecognitionTaskDelegate.h"

@class NSDictionary, NSString;

@interface CSVTUITrainingSessionWithPayload : CSVTUITrainingSession <SFSpeechRecognitionTaskDelegate, CSVTUIAudioSessionDelegate, CSVTUIEndPointDelegate>
{
    BOOL _detectBOS;
    BOOL _ASRResultReceived;
    BOOL _reportedStopListening;
    BOOL _utteranceStored;
    unsigned long long _numSamplesFed;
    unsigned long long _bestTriggerSampleStart;
    unsigned long long _extraSamplesAtStart;
    NSDictionary *_voiceTriggerEventInfo;
}

@property(retain, nonatomic) NSDictionary *voiceTriggerEventInfo; // @synthesize voiceTriggerEventInfo=_voiceTriggerEventInfo;
- (void).cxx_destruct;
- (void)matchRecognitionResult:(id)arg1 withMatchedBlock:(CDUnknownBlockType)arg2 withNonMatchedBlock:(CDUnknownBlockType)arg3;
- (void)speechRecognitionTask:(id)arg1 didFinishSuccessfully:(BOOL)arg2;
- (void)speechRecognitionTask:(id)arg1 didFinishRecognition:(id)arg2;
- (void)speechRecognitionTask:(id)arg1 didHypothesizeTranscription:(id)arg2;
- (void)closeSessionWithStatus:(int)arg1 successfully:(BOOL)arg2;
- (void)didDetectEndOfSpeech:(long long)arg1;
- (void)didDetectBeginOfSpeech;
- (void)audioSessionUnsupportedAudioRoute;
- (void)audioSessionErrorDidOccur:(id)arg1;
- (void)audioSessionRecordBufferAvailable:(id)arg1;
- (void)audioSessionDidStopRecording:(long long)arg1;
- (void)audioSessionDidStartRecording:(BOOL)arg1 error:(id)arg2;
- (void)handleAudioInput:(id)arg1;
- (void)_reportStopListening;
- (void)_firedEndPointTimeout;
- (void)_registerEndPointTimeout;
- (void)_registerForceEndPointTimeout;
- (void)_firedVoiceTriggerTimeout;
- (void)_registerVoiceTriggerTimeout;
- (BOOL)shouldMatchPayload;
- (BOOL)shouldHandleSession;
- (void)startTraining;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

