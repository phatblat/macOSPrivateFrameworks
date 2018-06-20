//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "AFClientServiceDelegate.h"

@class AFConnection, NSObject<OS_dispatch_queue>, NSString;

@interface AFConnectionClientServiceDelegate : NSObject <AFClientServiceDelegate>
{
    AFConnection *_connection;
    NSObject<OS_dispatch_queue> *_targetQueue;
}

- (void).cxx_destruct;
- (oneway void)audioSessionDidBecomeActive:(BOOL)arg1;
- (oneway void)audioSessionWillBecomeActive:(BOOL)arg1;
- (oneway void)startPlaybackDidFail:(long long)arg1;
- (oneway void)willProcessStartPlayback:(long long)arg1;
- (oneway void)audioPlaybackRequestDidStop:(id)arg1 error:(id)arg2;
- (oneway void)audioPlaybackRequestDidNotStart:(id)arg1 error:(id)arg2;
- (oneway void)audioPlaybackRequestDidStart:(id)arg1;
- (oneway void)audioPlaybackRequestWillStart:(id)arg1;
- (oneway void)audioSessionDidEndInterruption:(BOOL)arg1;
- (oneway void)audioSessionDidBeginInterruption;
- (oneway void)speechRecognitionDidFail:(id)arg1;
- (oneway void)speechRecognizedPartialResult:(id)arg1;
- (oneway void)speechRecordingDidRecognizePhrases:(id)arg1 utterances:(id)arg2;
- (oneway void)speechRecordingDidFinishRecognitionUpdateWithError:(id)arg1;
- (oneway void)speechRecordingWillBeginRecognitionUpdateForTask:(id)arg1;
- (oneway void)speechRecordingDidUpdateRecognitionPhrases:(id)arg1 utterances:(id)arg2 refId:(id)arg3;
- (oneway void)speechRecognizedAdditionalInterpretation:(id)arg1 refId:(id)arg2;
- (oneway void)speechRecognized:(id)arg1;
- (oneway void)speechRecordingDidFail:(id)arg1;
- (oneway void)speechRecordingDidCancel;
- (oneway void)speechRecordingDidEnd;
- (oneway void)speechRecordingPerformTwoShotPromptWithType:(long long)arg1 reply:(CDUnknownBlockType)arg2;
- (oneway void)speechRecordingStartpointDetected;
- (oneway void)speechRecordingDidChangeAVRecordRoute:(id)arg1;
- (oneway void)speechRecordingDidBeginOnAVRecordRoute:(id)arg1;
- (oneway void)speechRecordingWillBeginWithInputAudioPowerXPCWrapper:(id)arg1;
- (oneway void)aceConnectionWillRetryOnError:(id)arg1;
- (oneway void)shouldSpeakChanged:(BOOL)arg1;
- (oneway void)handleIntent:(id)arg1 inBackgroundAppWithBundleId:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (oneway void)extensionRequestFinishedForApplication:(id)arg1 error:(id)arg2;
- (oneway void)extensionRequestWillStartForApplication:(id)arg1;
- (oneway void)cacheImage:(id)arg1;
- (oneway void)invalidateCurrentUserActivity;
- (oneway void)setUserActivityInfo:(id)arg1 webpageURL:(id)arg2;
- (oneway void)acousticIDRequestDidFinishWithSuccess:(BOOL)arg1;
- (oneway void)musicWasDetected;
- (oneway void)acousticIDRequestWillStart;
- (oneway void)getClockContext:(CDUnknownBlockType)arg1;
- (oneway void)getBulletinContext:(CDUnknownBlockType)arg1;
- (oneway void)quickStopWasHandledWithActions:(unsigned long long)arg1;
- (oneway void)requestRequestedDismissAssistant;
- (oneway void)requestRequestedOpenURL:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (oneway void)requestRequestedOpenApplicationWithBundleID:(id)arg1 URL:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (oneway void)requestDidReceiveCommand:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (oneway void)startUIRequestWithText:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)_connectionDelegate;
- (id)initWithConnection:(id)arg1 targetQueue:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

