//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "AVAudioPlayerDelegate.h"

@class ACAccount, ACAccountStore, APCListener, AVAudioPlayer, HMHome, NSArray, NSDictionary, NSObject<OS_dispatch_queue>, NSObject<OS_dispatch_source>, NSString, SFDevice, SFDeviceOperationCDPSetup, SFDeviceOperationWiFiSetup, SFSession, SSAccount;

@interface SFDeviceSetupB238Session : NSObject <AVAudioPlayerDelegate>
{
    BOOL _activateCalled;
    BOOL _invalidateCalled;
    unsigned long long _startTicks;
    int _proxSetupActiveToken;
    BOOL _audioProgress;
    AVAudioPlayer *_audioPlayerStart;
    AVAudioPlayer *_audioPlayerStep;
    CDUnknownBlockType _audioPlayerCompletion;
    BOOL _preflightEnabled;
    int _preflightWiFiState;
    int _preflightiCloudState;
    BOOL _preventAppleWiFi;
    ACAccountStore *_iCloudAccountStore;
    ACAccount *_iCloudAccount;
    NSString *_iCloudUserID;
    int _iCloudAccountState;
    BOOL _homeiCloudEnabled;
    int _preflightiTunesState;
    SSAccount *_iTunesAccount;
    BOOL _iTunesSignInSkip;
    NSString *_iTunesUserID;
    BOOL _appleMusicEnabled;
    int _appleMusicState;
    BOOL _appleMusicForce;
    NSObject<OS_dispatch_source> *_appleMusicTimeoutTimer;
    int _preflightAppleMusicState;
    int _preflightMiscState;
    BOOL _locationEnabled;
    BOOL _locationDecided;
    BOOL _siriEnabled;
    BOOL _prefStereoPairEnabled;
    BOOL _prefStereoWait;
    int _stereoPairUserInputState;
    int _stereoPairRole;
    SFSession *_sfSession;
    BOOL _sfSessionSecured;
    int _sfSessionState;
    int _preAuthState;
    BOOL _preAuthStartedProgress;
    unsigned int _siriFlags;
    NSArray *_siriLanguageCodes;
    long long _siriLanguageIndex;
    BOOL _siriLanguagePicked;
    int _siriLanguageState;
    NSString *_siriPreferredLanguage;
    BOOL _apcEnabled;
    BOOL _apcInitDone;
    APCListener *_apcListener;
    BOOL _apcListening;
    BOOL _apcMetricsLogged;
    NSString *_apcPasscode;
    BOOL _apcPlayAgain;
    BOOL _apcPlaying;
    BOOL _apcSecured;
    BOOL _apcSkip;
    int _apcState;
    BOOL _apcStartDone;
    BOOL _apcStartedPairSetup;
    unsigned long long _apcStartTicks;
    NSObject<OS_dispatch_source> *_apcTimer;
    unsigned int _apcTimeoutCount;
    BOOL _apcTryingPasscode;
    BOOL _lpcAligned;
    int _lpcAlignmentState;
    BOOL _lpcPlayAgain;
    BOOL _lpcSkip;
    BOOL _siriPasscodeEnabled;
    BOOL _siriPasscodeInitDone;
    BOOL _siriPasscodeSecured;
    int _siriPasscodeState;
    unsigned int _pairSetupFlags;
    int _pairSetupState;
    double _pairSetupSecs;
    int _recognizeVoiceEnabled;
    int _recognizeVoiceState;
    int _recognizeVoiceStepState;
    int _personalRequestsState;
    int _personalRequestsChoice;
    BOOL _siriForEveryoneAnswered;
    int _siriForEveryoneState;
    int _siriDataSharing;
    int _termsState;
    BOOL _termsAgreed;
    int _shareSettingsState;
    BOOL _shareSettingsAgreed;
    int _authKitTrustState;
    int _basicConfigState;
    unsigned long long _basicConfigStartTicks;
    double _basicConfigSecs;
    NSString *_deviceGUID;
    NSString *_deviceSerialNumber;
    SFDeviceOperationWiFiSetup *_wifiSetupOperation;
    int _wifiSetupState;
    double _wifiSetupSecs;
    double _wifiSetupStepSecs;
    double _wifiBonjourTestSecs;
    BOOL _cdpEnabled;
    SFDeviceOperationCDPSetup *_cdpSetupOperation;
    double _cdpSetupSecs;
    int _cdpState;
    BOOL _hasExistingHomePod;
    int _multiUserEnableState;
    int _multiUserEnableStepState;
    int _finishState;
    unsigned long long _finishStartTicks;
    double _finishSecs;
    double _iTunesWaitSecs;
    double _mediaSystemWaitSecs;
    double _totalSecs;
    BOOL _prefBonjourTest;
    BOOL _prefForceSiriGreeting;
    BOOL _prefLEDPasscodeEnabled;
    BOOL _prefMultiUser;
    BOOL _hasMultipleUsers;
    BOOL _liveOn;
    BOOL _pauseAfterPreAuth;
    unsigned char _stereoCounterpartColor;
    BOOL _touchRemoteEnabled;
    int _bonjourTestState;
    NSDictionary *_additionalMetrics;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    SFDevice *_peerDevice;
    unsigned long long _peerFeatureFlags;
    NSDictionary *_preAuthResponse;
    unsigned long long _testFlags;
    CDUnknownBlockType _preAuthHandler;
    CDUnknownBlockType _progressHandler;
    CDUnknownBlockType _promptForAppleMusicHandler;
    CDUnknownBlockType _promptForHomeHandler;
    CDUnknownBlockType _promptForHomeiCloudHandler;
    CDUnknownBlockType _promptForiTunesSignInHandler;
    CDUnknownBlockType _promptForLocationEnableHandler;
    CDUnknownBlockType _promptForPersonalRequestsHandler;
    CDUnknownBlockType _promptForPINHandler;
    CDUnknownBlockType _promptForRoomHandler;
    CDUnknownBlockType _promptForSiriEnableHandler;
    CDUnknownBlockType _promptForTermsHandler;
    CDUnknownBlockType _promptToInstallHomeAppHandler;
    CDUnknownBlockType _promptToShareSettingsHandler;
    CDUnknownBlockType _promptForSiriLanguageHandler;
    CDUnknownBlockType _promptForStereoRoleHandler;
    CDUnknownBlockType _promptForStereoMultipleHandler;
}

@property(copy, nonatomic) CDUnknownBlockType promptForStereoMultipleHandler; // @synthesize promptForStereoMultipleHandler=_promptForStereoMultipleHandler;
@property(copy, nonatomic) CDUnknownBlockType promptForStereoRoleHandler; // @synthesize promptForStereoRoleHandler=_promptForStereoRoleHandler;
@property(copy, nonatomic) CDUnknownBlockType promptForSiriLanguageHandler; // @synthesize promptForSiriLanguageHandler=_promptForSiriLanguageHandler;
@property(copy, nonatomic) CDUnknownBlockType promptToShareSettingsHandler; // @synthesize promptToShareSettingsHandler=_promptToShareSettingsHandler;
@property(copy, nonatomic) CDUnknownBlockType promptToInstallHomeAppHandler; // @synthesize promptToInstallHomeAppHandler=_promptToInstallHomeAppHandler;
@property(copy, nonatomic) CDUnknownBlockType promptForTermsHandler; // @synthesize promptForTermsHandler=_promptForTermsHandler;
@property(copy, nonatomic) CDUnknownBlockType promptForSiriEnableHandler; // @synthesize promptForSiriEnableHandler=_promptForSiriEnableHandler;
@property(copy, nonatomic) CDUnknownBlockType promptForRoomHandler; // @synthesize promptForRoomHandler=_promptForRoomHandler;
@property(copy, nonatomic) CDUnknownBlockType promptForPINHandler; // @synthesize promptForPINHandler=_promptForPINHandler;
@property(copy, nonatomic) CDUnknownBlockType promptForPersonalRequestsHandler; // @synthesize promptForPersonalRequestsHandler=_promptForPersonalRequestsHandler;
@property(copy, nonatomic) CDUnknownBlockType promptForLocationEnableHandler; // @synthesize promptForLocationEnableHandler=_promptForLocationEnableHandler;
@property(copy, nonatomic) CDUnknownBlockType promptForiTunesSignInHandler; // @synthesize promptForiTunesSignInHandler=_promptForiTunesSignInHandler;
@property(copy, nonatomic) CDUnknownBlockType promptForHomeiCloudHandler; // @synthesize promptForHomeiCloudHandler=_promptForHomeiCloudHandler;
@property(copy, nonatomic) CDUnknownBlockType promptForHomeHandler; // @synthesize promptForHomeHandler=_promptForHomeHandler;
@property(copy, nonatomic) CDUnknownBlockType promptForAppleMusicHandler; // @synthesize promptForAppleMusicHandler=_promptForAppleMusicHandler;
@property(copy, nonatomic) CDUnknownBlockType progressHandler; // @synthesize progressHandler=_progressHandler;
@property(copy, nonatomic) CDUnknownBlockType preAuthHandler; // @synthesize preAuthHandler=_preAuthHandler;
@property(nonatomic) BOOL touchRemoteEnabled; // @synthesize touchRemoteEnabled=_touchRemoteEnabled;
@property(nonatomic) unsigned long long testFlags; // @synthesize testFlags=_testFlags;
@property(readonly, nonatomic) unsigned char stereoCounterpartColor; // @synthesize stereoCounterpartColor=_stereoCounterpartColor;
@property(retain, nonatomic) NSDictionary *preAuthResponse; // @synthesize preAuthResponse=_preAuthResponse;
@property(nonatomic) unsigned long long peerFeatureFlags; // @synthesize peerFeatureFlags=_peerFeatureFlags;
@property(retain, nonatomic) SFDevice *peerDevice; // @synthesize peerDevice=_peerDevice;
@property(nonatomic) BOOL pauseAfterPreAuth; // @synthesize pauseAfterPreAuth=_pauseAfterPreAuth;
@property(nonatomic) BOOL liveOn; // @synthesize liveOn=_liveOn;
@property(readonly, nonatomic) BOOL hasMultipleUsers; // @synthesize hasMultipleUsers=_hasMultipleUsers;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // @synthesize dispatchQueue=_dispatchQueue;
@property(readonly, nonatomic) int bonjourTestState; // @synthesize bonjourTestState=_bonjourTestState;
@property(copy, nonatomic) NSDictionary *additionalMetrics; // @synthesize additionalMetrics=_additionalMetrics;
- (void).cxx_destruct;
- (void)audioSessionInterrupted:(id)arg1;
- (void)audioPlayerDidFinishPlaying:(id)arg1 successfully:(BOOL)arg2;
- (void)audioPlayerDecodeErrorDidOccur:(id)arg1 error:(id)arg2;
- (void)_setupAudio;
- (void)_reportError:(id)arg1 label:(id)arg2;
- (BOOL)_recognizeVoiceAlreadyEnabled;
- (void)_promptForPINWithFlags:(unsigned int)arg1 throttleSeconds:(int)arg2;
- (void)_playLocalSoundID:(int)arg1 remoteSoundID:(int)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_playLocalSoundID:(int)arg1 remoteSoundID:(int)arg2;
- (void)_logMetrics;
- (void)_homeKitUpdateiCloudSwitchState:(BOOL)arg1;
- (id)_homeKitFindSettingsWithKeyPath:(id)arg1 group:(id)arg2;
- (void)_handlePeerEvent:(id)arg1 flags:(unsigned int)arg2;
- (void)_runFinishResponse:(id)arg1 error:(id)arg2;
- (void)_runFinishRequest;
- (int)_runFinishStart;
- (int)_runCDPSetup:(BOOL)arg1;
- (int)_runWiFiSetup;
- (int)_runAppleMusic;
- (void)_runBasicConfigReceiveResponse:(id)arg1 error:(id)arg2;
- (void)_runBasicConfigSendRequest;
- (int)_runBasicConfig;
- (int)_runPairSetup;
- (void)_runSiriPasscodeStartPairSetup;
- (void)_runSiriPasscodeInitResponse:(id)arg1 error:(id)arg2;
- (void)_runSiriPasscodeInitRequest;
- (int)_runSiriPasscode;
- (void)_runAudioPasscodeLogMetrics;
- (void)_runAudioPasscodeCleanup:(BOOL)arg1;
- (void)_runAudioPasscodeTimeout;
- (void)_runAudioPasscodeHandleData:(id)arg1;
- (void)_runAudioPasscodeStopRequest;
- (void)_runAudioPasscodeStartResponse:(id)arg1 error:(id)arg2;
- (void)_runAudioPasscodeStartRequest;
- (void)_runAudioPasscodeInitResponse:(id)arg1 error:(id)arg2;
- (void)_runAudioPasscodeInitRequest;
- (int)_runAudioPasscode;
- (int)_runLEDPassCodeAlignment;
- (int)_runShareSettings;
- (int)_runTerms;
- (int)_runSiriForEveryone;
- (int)_runPersonalRequests;
- (void)_runRecognizeVoiceCheckVoiceProfileResponse:(BOOL)arg1 error:(id)arg2;
- (void)_runRecognizeVoiceCheckVoiceProfileStart;
- (void)_runRecognizeVoiceCheckLanguageResponse:(id)arg1 error:(id)arg2;
- (void)_runRecognizeVoiceCheckLanguageStart;
- (int)_runRecognizeVoice;
- (int)_runSiriLanguage;
- (int)_runCheckAccount;
- (void)_runPreAuthResponse:(id)arg1 error:(id)arg2;
- (void)_runPreAuthRequest;
- (int)_runPreAuth;
- (int)_runPreflightMisc;
- (int)_runPreflightiTunes;
- (int)_runPreflightiCloud;
- (int)_runPreflightWiFi;
- (int)_runSFSessionStart;
- (void)_run;
- (void)termsAgreed;
- (void)stereoMultiplePicked:(id)arg1;
- (void)stereoRolePicked:(int)arg1;
- (void)_speakPasscodeWithInstructions:(id)arg1 languageCode:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)speakPasscodeWithInstructions:(id)arg1 languageCode:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)speakPasscodeWithInstructions:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)speakPasscodeWithLanguageCode:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)speakPasscodeWithCompletion:(CDUnknownBlockType)arg1;
- (void)skipiTunesSignIn;
- (void)skipAudioPasscode;
- (void)siriLanguagePicked:(long long)arg1;
- (void)siriForEveryoneAnswered;
@property(readonly, nonatomic) BOOL siriDataSharingEnabled;
- (void)siriEnable;
- (void)shareSettingsAgreed;
@property(readonly, nonatomic) NSString *selectedSiriLanguage;
@property(readonly, nonatomic) HMHome *selectedHome;
- (void)recognizeVoiceAnswered:(BOOL)arg1;
- (void)_preflightAppleMusicCompleted:(int)arg1;
- (void)_preflightAppleMusic;
- (void)preflight;
- (void)playAudioPasscodeAgain;
- (void)personalRequestsEnabled:(BOOL)arg1;
- (void)pairSetupTryPIN:(id)arg1;
- (void)locationEnable:(BOOL)arg1;
- (void)ledPasscodeMatched;
- (void)homeKitSelectRoom:(id)arg1;
- (void)homeKitReselectHome;
- (void)homeKitSelectHome:(id)arg1;
- (void)homeiCloudEnable;
- (void)homeAppInstallChoice:(BOOL)arg1;
- (void)disconnect;
- (void)appleMusicNext;
- (void)_invalidate;
- (void)invalidate;
- (void)_activate;
- (void)activate;
- (void)_cleanupSession;
- (void)_cleanup;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

