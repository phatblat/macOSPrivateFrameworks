//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "TLAlertPlaybackBackEndController.h"
#import "TLBacklightObserver.h"

@class NSMapTable, NSObject<OS_dispatch_queue>, NSString;

@interface TLAlertSystemSoundController : NSObject <TLBacklightObserver, TLAlertPlaybackBackEndController>
{
    NSObject<OS_dispatch_queue> *_accessQueue;
    NSString *_accessQueueLabel;
    NSMapTable *_alertSystemSoundContexts;
    long long _backlightStatus;
    unsigned long long _backlightObservationRequestsCount;
}

+ (void)_reportPlaybackFailureWithPlaybackCompletionContext:(id)arg1;
+ (id)_optionsForSystemSoundAlert:(id)arg1 withSound:(id)arg2;
+ (unsigned int)_soundBehaviorForAlert:(id)arg1 withSound:(id)arg2;
+ (id)_toneIdentifierForDeemphasizingAlert:(id)arg1;
+ (id)_soundForAlert:(id)arg1 toneIdentifierForDeemphasizingAlert:(id)arg2;
- (void).cxx_destruct;
- (void)backlightStatusDidChange:(long long)arg1;
- (void)_endRequiringBacklightObservation;
- (void)_beginRequiringBacklightObservation;
- (void)_notifyOfPlaybackCompletionWithContext:(id)arg1;
- (void)_didCompletePlaybackForAlert:(id)arg1;
- (void)_willBeginPlayingAlert:(id)arg1 withSound:(id)arg2;
- (void)_stopPlayingAlerts:(id)arg1 withOptions:(id)arg2 playbackCompletionType:(long long)arg3 willStopAlertsHandler:(CDUnknownBlockType)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)_playAlert:(id)arg1 withSound:(id)arg2;
- (void)_playAlert:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)stopPlayingAlerts:(id)arg1 withOptions:(id)arg2 playbackCompletionType:(long long)arg3 willStopAlertsHandler:(CDUnknownBlockType)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)playAlert:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)_assertRunningOnAccessQueue;
- (void)_performBlockOnAccessQueue:(CDUnknownBlockType)arg1;
- (void)_prepareForDealloc;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

