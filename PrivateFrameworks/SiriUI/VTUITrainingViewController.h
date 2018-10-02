//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSViewController.h"

#import "AFMyriadDelegate.h"
#import "CSVTUITrainingManagerDelegate.h"
#import "SiriUIFlamesAndAuraViewDelegate.h"

@class AFMyriadCoordinator, CSVTUITrainingManager, NSArray, NSButton, NSString, NSTextField, SiriUIFlamesAndAuraView, VTUIPagedLabel, VTUITickMarkView;

@interface VTUITrainingViewController : NSViewController <CSVTUITrainingManagerDelegate, SiriUIFlamesAndAuraViewDelegate, AFMyriadDelegate>
{
    VTUIPagedLabel *_instructionPagedLabel;
    NSTextField *_statusLabel;
    SiriUIFlamesAndAuraView *_flamesView;
    NSButton *_endpointButton;
    VTUITickMarkView *_tickMark;
    CSVTUITrainingManager *_trainingManager;
    NSArray *_trainingPageInstructions;
    unsigned long long _sessionId;
    unsigned long long _retries;
    BOOL _hasRetriedTraining;
    float _audioRms;
    long long _badMicRetryCount;
    long long _AVVCRetryCount;
    long long _timeoutRetryCount;
    BOOL _hasCancelledTraining;
    AFMyriadCoordinator *_myriadCoordinator;
    BOOL _hasCompletedTraining;
    NSString *_siriLanguageCode;
    id <VTUITrainingViewControllerDelegate> _delegate;
    long long _currentTrainingState;
}

@property BOOL hasCompletedTraining; // @synthesize hasCompletedTraining=_hasCompletedTraining;
@property(nonatomic) long long currentTrainingState; // @synthesize currentTrainingState=_currentTrainingState;
@property __weak id <VTUITrainingViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(copy, nonatomic) NSString *siriLanguageCode; // @synthesize siriLanguageCode=_siriLanguageCode;
- (void).cxx_destruct;
- (void)shouldContinue:(id)arg1;
- (void)shouldAbortAnotherDeviceBetter:(id)arg1;
- (BOOL)canRetryCurrentInstruction;
- (id)currentInstructionString;
- (id)_trainingPageInstructions;
- (void)_triggerEndpoint:(id)arg1;
- (void)_handleTrainingResultWithStatus:(int)arg1;
- (void)_showBadMicAlertWithCompletion:(CDUnknownBlockType)arg1;
- (id)_keyForAudioSource:(unsigned long long)arg1;
- (void)_displayTimeoutInstruction;
- (void)_retryInstruction;
- (void)_updateFlamesForStatus:(int)arg1;
- (void)_stopListening;
- (void)_startListening;
- (float)audioLevel;
- (BOOL)VTUITrainingManagerHasTrainUtterance:(id)arg1 languageCode:(id)arg2;
- (void)VTUITrainingManagerStopListening;
- (void)VTUITrainingManagerAudioSessionRouteChange;
- (void)VTUITrainingManagerAudioSessionTerminatedInStatus:(int)arg1;
- (void)VTUITrainingManagerFeedLevel:(float)arg1;
- (void)_cleanupTrainingManagerWithCompletion:(CDUnknownBlockType)arg1;
- (void)_setPHSEnrollmentPrefEnabled:(BOOL)arg1;
- (void)advance;
- (void)cancelTraining;
- (void)abortTraining;
- (void)beginTraining;
- (void)reset;
- (void)viewWillAppear;
- (void)loadView;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

