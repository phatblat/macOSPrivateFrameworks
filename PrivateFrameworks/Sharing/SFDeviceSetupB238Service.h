//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class APCPlayer, CUAudioPlayer, NSDate, NSObject<OS_dispatch_queue>, NSObject<OS_dispatch_source>, NSString, SFClient, SFDeviceOperationHandlerCDPSetup, SFDeviceOperationHandlerWiFiSetup, SFService, SFSession, SFSiriClient;

@interface SFDeviceSetupB238Service : NSObject
{
    BOOL _activateCalled;
    BOOL _advertiseFast;
    struct NSData *_apcCapData;
    APCPlayer *_apcPlayer;
    NSObject<OS_dispatch_source> *_finishApplyTimer;
    NSObject<OS_dispatch_source> *_finishTimeoutTimer;
    BOOL _finished;
    BOOL _finished2;
    BOOL _finishedEventSent;
    BOOL _finishSessionEnded;
    BOOL _invalidateCalled;
    BOOL _iTunesCloudCompleted;
    int _iTunesCloudCompleteToken;
    double _iTunesCloudWaitSeconds;
    BOOL _mediaSystemReady;
    double _mediaSystemWaitSeconds;
    unsigned long long _peerFeatureFlags;
    SFClient *_sfClient;
    SFService *_sfService;
    SFSession *_sfSession;
    SFSiriClient *_siriClient;
    BOOL _siriDidDeviceSetup;
    BOOL _siriHeardWhatCanYouDo;
    BOOL _wifiSetupEnabled;
    SFDeviceOperationHandlerCDPSetup *_cdpSetupHandler;
    SFDeviceOperationHandlerWiFiSetup *_wifiSetupHandler;
    CUAudioPlayer *_audioPlayer;
    BOOL _prefCDPEnabled;
    NSString *_languageCode;
    NSString *_localeIdentifier;
    NSString *_temperatureUnit;
    int _siriDataSharingState;
    BOOL _siriDisabled;
    NSString *_siriListenLanguage;
    long long _siriVoiceGender;
    NSString *_siriVoiceLanguage;
    NSDate *_timeObj;
    int _timeAuto;
    long long _timeCycle;
    NSString *_timeZone;
    int _timeZoneAuto;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    CDUnknownBlockType _progressHandler;
}

@property(copy, nonatomic) CDUnknownBlockType progressHandler; // @synthesize progressHandler=_progressHandler;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // @synthesize dispatchQueue=_dispatchQueue;
- (void).cxx_destruct;
- (void)_setSystemName:(id)arg1 hostname:(id)arg2;
- (void)_setSiriInfo;
- (void)_speakLocalizedKey:(id)arg1 event:(unsigned int)arg2;
- (void)_siriGreetingDialogCPhrase:(id)arg1 error:(id)arg2;
- (void)_siriGreetingDialogCStart;
- (void)_siriGreetingDialogBPhrase:(id)arg1 localizedText:(id)arg2 error:(id)arg3;
- (void)_siriGreetingDialogBStart;
- (void)_siriGreetingDialogA;
- (void)_siriGreetingIntroPhrase:(id)arg1 error:(id)arg2;
- (void)_siriGreetingIntroStart;
- (void)_siriGreetingStart:(CDUnknownBlockType)arg1;
- (void)_playReadyToSetupSound;
- (void)_handleSiriDialogIdentifier:(id)arg1;
- (void)_handleRawRequest:(id)arg1 flags:(unsigned int)arg2 responseHandler:(CDUnknownBlockType)arg3;
- (void)_handlePreAuthRequest:(id)arg1 responseHandler:(CDUnknownBlockType)arg2;
- (void)_handlePlaySoundRequest:(id)arg1 responseHandler:(CDUnknownBlockType)arg2;
- (BOOL)_handleFinishDone2Ready;
- (void)_handleFinishDone2:(unsigned int)arg1 responseHandler:(CDUnknownBlockType)arg2;
- (void)_handleFinishDone:(unsigned int)arg1 responseHandler:(CDUnknownBlockType)arg2;
- (void)_handleFinishApply:(id)arg1 responseHandler:(CDUnknownBlockType)arg2;
- (void)_handleFinishRequest:(id)arg1 responseHandler:(CDUnknownBlockType)arg2;
- (void)_handleBasicConfigResponse:(id)arg1;
- (int)_handleBasicConfigRequest:(id)arg1;
- (void)_handleAuthActionSiriStart:(id)arg1 response:(id)arg2 responseHandler:(CDUnknownBlockType)arg3;
- (void)_handleAuthActionSiriInit;
- (void)_handleAuthActionAudioPasscodeStartWithResponse:(id)arg1;
- (void)_handleAuthActionAudioPasscodeInit:(id)arg1 response:(id)arg2;
- (void)_handleAuthActionRequest:(id)arg1 responseHandler:(CDUnknownBlockType)arg2;
- (void)_handleSessionEnded:(id)arg1;
- (void)_handleSessionStarted:(id)arg1;
- (void)_sfServiceStart;
- (void)_invalidate;
- (void)invalidate;
- (void)_activate;
- (void)activate;
- (void)_cleanup;
- (void)dealloc;
- (id)init;

@end

