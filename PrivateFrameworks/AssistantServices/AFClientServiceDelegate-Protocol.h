//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class AFAudioPlaybackRequest, AFSpeechInterpretation, AFXPCWrapper, AceObject<SAAceCommand>, INImage, INIntent, NSArray, NSDictionary, NSError, NSString, NSURL, SASSpeechPartialResult, SASSpeechRecognized;

@protocol AFClientServiceDelegate <NSObject>
- (oneway void)audioSessionDidBecomeActive:(BOOL)arg1;
- (oneway void)audioSessionWillBecomeActive:(BOOL)arg1;
- (oneway void)startPlaybackDidFail:(long long)arg1;
- (oneway void)willProcessStartPlayback:(long long)arg1 intent:(INIntent *)arg2 completion:(void (^)(BOOL, BOOL))arg3;
- (oneway void)audioPlaybackRequestDidStop:(AFAudioPlaybackRequest *)arg1 error:(NSError *)arg2;
- (oneway void)audioPlaybackRequestDidStart:(AFAudioPlaybackRequest *)arg1;
- (oneway void)audioPlaybackRequestWillStart:(AFAudioPlaybackRequest *)arg1;
- (oneway void)audioSessionDidEndInterruption:(BOOL)arg1;
- (oneway void)audioSessionDidBeginInterruption;
- (oneway void)aceConnectionWillRetryOnError:(NSError *)arg1;
- (oneway void)speechRecordingWillBeginRecognitionUpdateForTask:(NSString *)arg1;
- (oneway void)speechRecordingDidUpdateRecognitionPhrases:(NSArray *)arg1 utterances:(NSArray *)arg2 refId:(NSString *)arg3;
- (oneway void)speechRecognitionDidFail:(NSError *)arg1;
- (oneway void)speechRecognizedPartialResult:(SASSpeechPartialResult *)arg1;
- (oneway void)speechRecognizedAdditionalInterpretation:(AFSpeechInterpretation *)arg1 refId:(NSString *)arg2;
- (oneway void)speechRecognized:(SASSpeechRecognized *)arg1;
- (oneway void)speechRecordingDidFail:(NSError *)arg1 reply:(void (^)(void))arg2;
- (oneway void)speechRecordingDidCancelWithReply:(void (^)(void))arg1;
- (oneway void)speechRecordingDidEndWithReply:(void (^)(void))arg1;
- (oneway void)speechRecordingPerformTwoShotPromptWithType:(long long)arg1 reply:(void (^)(double, double, NSError *))arg2;
- (oneway void)speechRecordingStartpointDetectedWithReply:(void (^)(void))arg1;
- (oneway void)speechRecordingDidChangeAVRecordRoute:(NSString *)arg1 isDucking:(BOOL)arg2 isTwoShot:(BOOL)arg3 speechEndHostTime:(unsigned long long)arg4 reply:(void (^)(void))arg5;
- (oneway void)speechRecordingDidBeginOnAVRecordRoute:(NSString *)arg1 reply:(void (^)(void))arg2;
- (oneway void)speechRecordingWillBeginWithInputAudioPowerXPCWrapper:(AFXPCWrapper *)arg1 reply:(void (^)(void))arg2;
- (oneway void)getClockContext:(void (^)(AFClockAlarmSnapshot *, AFClockTimerSnapshot *))arg1;
- (oneway void)getBulletinContext:(void (^)(NSArray *))arg1;
- (oneway void)startUIRequestWithText:(NSString *)arg1 completion:(void (^)(BOOL))arg2;
- (oneway void)extensionRequestFinishedForApplication:(NSString *)arg1 error:(NSError *)arg2;
- (oneway void)extensionRequestWillStartForApplication:(NSString *)arg1;
- (oneway void)cacheImage:(INImage *)arg1;
- (oneway void)invalidateCurrentUserActivity;
- (oneway void)setUserActivityInfo:(NSDictionary *)arg1 webpageURL:(NSURL *)arg2;
- (oneway void)acousticIDRequestDidFinishWithSuccess:(BOOL)arg1;
- (oneway void)musicWasDetected;
- (oneway void)acousticIDRequestWillStart;
- (oneway void)quickStopWasHandledWithActions:(unsigned long long)arg1;
- (oneway void)requestRequestedDismissAssistant;
- (oneway void)requestRequestedOpenURL:(NSURL *)arg1 reply:(void (^)(BOOL))arg2;
- (oneway void)requestRequestedOpenApplicationWithBundleID:(NSString *)arg1 URL:(NSURL *)arg2 reply:(void (^)(BOOL))arg3;
- (oneway void)requestHandleCommand:(AceObject<SAAceCommand> *)arg1 reply:(void (^)(AceObject<SAAceCommand> *, NSError *))arg2;
- (oneway void)shouldSpeakChanged:(BOOL)arg1;
@end

