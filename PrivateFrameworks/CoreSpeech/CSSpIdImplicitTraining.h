//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface CSSpIdImplicitTraining : NSObject
{
}

+ (id)sharedInstance;
- (void)processSingleUserImplicitTrainingUtterance:(id)arg1 audioDeviceType:(id)arg2 audioRecordType:(id)arg3 withVoiceTriggerCtxt:(id)arg4 withOtherCtxt:(id)arg5 withCompletion:(CDUnknownBlockType)arg6;
- (void)recordingStoppedForReason:(long long)arg1;
- (void)processImplicitTrainingUtteranceWithVoiceTriggerEventInfo:(id)arg1;
- (void)processAudioChunk:(id)arg1;
- (void)processImplicitTrainingUtterance:(id)arg1 forVoiceProfileId:(id)arg2 withRecordDeviceInfo:(id)arg3 withRecordCtxt:(id)arg4 withVoiceTriggerCtxt:(id)arg5 withOtherCtxt:(id)arg6 withCompletion:(CDUnknownBlockType)arg7;
- (void)setRecordingContext:(id)arg1;

@end
