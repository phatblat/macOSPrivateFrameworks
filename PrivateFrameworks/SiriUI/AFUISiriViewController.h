//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSViewController.h"

#import "AFUIDelayedActionCommandCacheDelegate.h"
#import "AFUISiriSessionLocalDataSource.h"
#import "AFUISiriSessionLocalDelegate.h"
#import "SiriUIAutoDismissalControllerDelegate.h"
#import "SiriUISiriViewDelegate.h"

@class AFUIDelayedActionCommandCache, AFUISiriSession, NSNumber, NSObject<OS_dispatch_queue>, NSString, NSTrackingArea, SVSSiriViewController, SiriUIConfiguration, SiriUIRequestOptions, SiriUISiriView;

@interface AFUISiriViewController : NSViewController <SiriUISiriViewDelegate, AFUISiriSessionLocalDataSource, AFUISiriSessionLocalDelegate, AFUIDelayedActionCommandCacheDelegate, SiriUIAutoDismissalControllerDelegate>
{
    BOOL _active;
    BOOL _remoteViewControllerDispatchQueueSuspended;
    long long _vtEnabledCount;
    long long _currentRequestSource;
    CDUnknownBlockType _triggerUpdater;
    AFUIDelayedActionCommandCache *_delayedActionCommandCache;
    BOOL _siriSessionWantsToEnd;
    SiriUIConfiguration *_configuration;
    CDUnknownBlockType _unlockCompletion;
    unsigned int _darkWakeAssertion;
    BOOL _visible;
    BOOL _eyesFree;
    BOOL _mapsGatekeeperEnabled;
    BOOL _inHoldToTalkMode;
    BOOL _isBeingPresented;
    id <AFUISiriViewControllerDataSource> _dataSource;
    id <AFUISiriViewControllerDelegate> _delegate;
    AFUISiriSession *_session;
    SVSSiriViewController *_svsViewController;
    NSObject<OS_dispatch_queue> *_remoteViewControllerDispatchQueue;
    SiriUIRequestOptions *_currentRequestOptions;
    NSNumber *_recordingStartedTimeValue;
    double _viewDidAppearTime;
    NSTrackingArea *_trackingArea;
}

+ (id)viewControllerWithConnection:(id)arg1 configuration:(id)arg2 delegate:(id)arg3 dataSource:(id)arg4;
+ (id)sharedSiriViewController;
@property(retain) NSTrackingArea *trackingArea; // @synthesize trackingArea=_trackingArea;
@property BOOL isBeingPresented; // @synthesize isBeingPresented=_isBeingPresented;
@property(nonatomic, getter=_viewDidAppearTime, setter=_setViewDidAppearTime:) double viewDidAppearTime; // @synthesize viewDidAppearTime=_viewDidAppearTime;
@property(retain, nonatomic, getter=_recordingStartedTimeValue, setter=_setRecordingStartedTimeValue:) NSNumber *recordingStartedTimeValue; // @synthesize recordingStartedTimeValue=_recordingStartedTimeValue;
@property(copy, nonatomic, getter=_currentRequestOptions, setter=_setCurrentRequestOptions:) SiriUIRequestOptions *currentRequestOptions; // @synthesize currentRequestOptions=_currentRequestOptions;
@property(nonatomic, getter=_isInHoldToTalkMode, setter=_setInHoldToTalkMode:) BOOL inHoldToTalkMode; // @synthesize inHoldToTalkMode=_inHoldToTalkMode;
@property(readonly, nonatomic, getter=_remoteViewControllerDispatchQueue) NSObject<OS_dispatch_queue> *remoteViewControllerDispatchQueue; // @synthesize remoteViewControllerDispatchQueue=_remoteViewControllerDispatchQueue;
@property(retain, nonatomic) SVSSiriViewController *svsViewController; // @synthesize svsViewController=_svsViewController;
@property(readonly, nonatomic, getter=_session) AFUISiriSession *session; // @synthesize session=_session;
@property(nonatomic) BOOL mapsGatekeeperEnabled; // @synthesize mapsGatekeeperEnabled=_mapsGatekeeperEnabled;
@property(nonatomic, getter=isEyesFree) BOOL eyesFree; // @synthesize eyesFree=_eyesFree;
@property(nonatomic, getter=isVisible) BOOL visible; // @synthesize visible=_visible;
@property(nonatomic) __weak id <AFUISiriViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak id <AFUISiriViewControllerDataSource> dataSource; // @synthesize dataSource=_dataSource;
- (void).cxx_destruct;
- (void)siriPresentationContentHeightDidChange;
- (void)serviceAcousticIDRequestDidFinishWithSuccess:(BOOL)arg1;
- (void)serviceWillStartAcousticIDRequest;
- (void)serviceStashSnippetControllerCard:(id)arg1 forAddViewsCommand:(id)arg2;
- (void)showBugTemplateWithInformation:(id)arg1;
- (void)serviceDidPresentUserInterface;
- (void)serviceOpenURL:(id)arg1 appBundleID:(id)arg2 allowSiriDismissal:(BOOL)arg3;
- (void)serviceOpenURL:(id)arg1 delaySessionEndForTTS:(BOOL)arg2 replyHandler:(CDUnknownBlockType)arg3;
- (void)setBugReportingAvailable:(BOOL)arg1;
- (void)pulseHelpButton;
- (void)setHelpButtonEmphasized:(BOOL)arg1;
- (void)setStatusViewDisabled:(BOOL)arg1;
- (void)setStatusViewHidden:(BOOL)arg1;
- (void)siriIdleAndQuietStatusDidChange:(BOOL)arg1;
- (void)serviceLaunchApplicationWithBundleIdentifier:(id)arg1 withURL:(id)arg2 replyHandler:(CDUnknownBlockType)arg3;
- (void)performUnlockDependentAction:(CDUnknownBlockType)arg1;
- (void)askUserToUnlock;
- (void)serviceDidFinishRequest;
- (void)serviceStartRequestWithOptions:(id)arg1;
- (void)serviceRequestsDismissal:(BOOL)arg1;
- (void)handleLongPressEndFromSource:(long long)arg1 atTime:(double)arg2;
- (void)handleLongPressBeginFromSource:(long long)arg1;
- (void)handleClickFromSource:(long long)arg1;
- (void)handlePreheatFromSource:(long long)arg1;
- (void)didPresentCreateBugTemplateWithConfirm:(BOOL)arg1 values:(id)arg2;
- (void)siriSessionDidEnd:(id)arg1;
- (void)siriSessionWillEnd:(id)arg1;
- (BOOL)siriSessionCanEnd:(id)arg1;
- (void)siriSession:(id)arg1 didChangeDialogPhase:(id)arg2;
- (void)siriSessionRecordingDidFail:(id)arg1;
- (void)siriSessionRecordingDidCancel:(id)arg1;
- (void)siriSessionRecordingDidEnd:(id)arg1;
- (void)siriSessionRecordingWillBegin:(id)arg1;
- (void)siriSessionDidReceiveDelayedActionCancelCommand:(id)arg1;
- (void)siriSessionDidReceiveDelayedActionCommand:(id)arg1;
- (void)siriSession:(id)arg1 didReceiveDeviceUnlockRequestAndCancelRequest:(BOOL)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (void)siriSession:(id)arg1 didReceiveDeviceUnlockRequestWithCompletion:(CDUnknownBlockType)arg2;
- (void)siriSession:(id)arg1 didChangeToState:(long long)arg2;
- (unsigned long long)lockStateForSiriSession:(id)arg1;
- (id)contextAppInfosForSiriSession:(id)arg1;
- (id)bulletinsForSiriSession:(id)arg1;
- (void)commandCache:(id)arg1 didInvalidateDelayedActionCommand:(id)arg2;
- (void)commandCache:(id)arg1 didPerformDelayedActionCommand:(id)arg2;
- (void)sendReplyCommand:(id)arg1 forCommandCache:(id)arg2;
- (void)performGenericAceCommands:(id)arg1 forCommandCache:(id)arg2;
- (void)releaseKeySiriView:(id)arg1;
- (void)siriView:(id)arg1 makeKeyWithCompletion:(CDUnknownBlockType)arg2;
- (void)siriView:(id)arg1 didReceiveSiriActivationMessageWithSource:(long long)arg2;
- (BOOL)siriView:(id)arg1 attemptUnlockWithPassword:(id)arg2;
- (void)siriView:(id)arg1 didReceiveTextInput:(id)arg2;
- (void)siriViewDidReceiveCloseAction:(id)arg1;
- (void)siriViewDidReceiveHelpAction:(id)arg1;
- (void)siriViewDidReceiveReportBugAction:(id)arg1;
- (void)siriViewDidRecieveStatusViewHoldDidEndAction:(id)arg1;
- (void)siriViewDidRecieveStatusViewHoldDidBeginAction:(id)arg1;
- (void)siriViewDidRecieveStatusViewClickedAction:(id)arg1;
- (float)audioRecordingPowerLevelForSiriView:(id)arg1;
- (void)_resumeRemoteViewControllerDispatchQueue;
- (void)_suspendRemoteViewControllerDispatchQueue;
- (void)telephonyRequestCompleted;
- (void)endSession;
- (void)cancelTTS;
- (BOOL)hasQueuedTTS;
- (BOOL)isListening;
- (BOOL)isPreventingActivationGesture;
- (void)startRequestWithActivationTrigger:(id)arg1;
- (void)_activationTriggerDidRelease:(id)arg1;
- (double)_manualEndpointingThreshold;
- (void)_exitHoldToTalkMode;
- (void)_transitionToAutomaticEndpointMode;
- (void)_enterHoldToTalkMode;
- (BOOL)_holdToTalkThresholdHasElapsed;
- (void)_holdToTalkTriggerDidReleaseFromSource:(long long)arg1;
- (id)viewServiceApplicationInfo;
- (void)shortTapAction;
- (void)handleViewFullyRevealed;
- (void)updateViewForPercentageRevealed:(double)arg1;
- (void)userInteractionDidOccur;
- (void)setLockState:(unsigned long long)arg1;
- (void)showPresentationWithIdentifier:(id)arg1 properties:(id)arg2;
- (void)cancelRequest;
- (id)currentRequestOptions;
- (void)updateRequestOptions:(id)arg1;
- (void)stopRequestWithOptions:(id)arg1;
- (void)startRequestWithOptions:(id)arg1;
- (void)setAndCancelPreviousUnlockCompletion:(CDUnknownBlockType)arg1;
- (void)setAlertContext;
- (void)updateContexts:(long long)arg1;
- (void)resetContextTypes:(long long)arg1;
- (void)siriDidDeactivate;
- (long long)currentSource;
- (void)siriDidActivateFromSource:(long long)arg1;
- (void)siriWillActivateFromSource:(long long)arg1;
- (void)preheat;
- (void)defrost;
- (void)svsViewWillDisappear;
- (void)svsViewWillAppear;
- (void)handlePasscodeUnlockAndCancelRequest:(BOOL)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)declareUserActivityForReason:(id)arg1;
- (void)handlePasscodeUnlockWithCompletion:(CDUnknownBlockType)arg1;
- (void)_handleLongPressEndedFromSource:(long long)arg1 atTime:(double)arg2;
- (void)_handleLongPressBeganFromSource:(long long)arg1;
- (void)_handleClickFromSource:(long long)arg1;
- (void)startMyriadAdvertisingWithRequestOptions:(id)arg1;
- (void)_handlePreheatFromSource:(long long)arg1;
- (void)_enqueueRemoteViewControllerMessageBlock:(CDUnknownBlockType)arg1;
- (BOOL)shouldAutomaticallyForwardAppearanceMethods;
- (void)_presentRemoteViewController;
- (void)presentRemoteViewControllerIfNecessary;
- (void)_setVoiceTriggerEnabled:(BOOL)arg1;
- (void)autoDismissController:(id)arg1 willAutoDismiss:(BOOL)arg2;
- (void)viewDidDisappear;
- (void)viewWillDisappear;
- (void)viewDidAppear;
- (void)idleTimeout;
- (void)releaseDarkWakeAssertion;
- (void)holdDarkWakeAssertion:(double)arg1;
- (BOOL)isHoldingDarkWakeAssertion;
- (void)viewWillAppear;
@property(readonly, nonatomic) BOOL hasScreenSnapshot;
- (void)viewDidLoad;
- (id)_siriView;
- (void)didChangeWindowHeight:(BOOL)arg1;
@property(readonly, nonatomic) double contentHeight;
@property(readonly, nonatomic) BOOL isProcessingAcousticIdRequest;
- (id)underlyingConnection;
- (void)dealloc;
- (void)_setupWithConnection:(id)arg1 configuration:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(retain) SiriUISiriView *view; // @dynamic view;

@end

