//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SVXModuleInstance.h"

@class NSMutableDictionary, NSString, SVXModule, SVXSessionManager, SVXSpeechSynthesizer;

@interface SVXDeviceSetupManager : NSObject <SVXModuleInstance>
{
    SVXModule *_module;
    SVXSpeechSynthesizer *_speechSynthesizer;
    SVXSessionManager *_sessionManager;
    NSMutableDictionary *_cachedSceneMapsByVoiceKey;
}

- (void).cxx_destruct;
- (void)_cacheScene:(id)arg1 forLanguageCode:(id)arg2 andGender:(long long)arg3;
- (id)_cachedSceneWithID:(long long)arg1 forLanguageCode:(id)arg2 andGender:(long long)arg3 siriCapabilitiesHint:(id)arg4;
- (void)_evictCachedContents;
- (void)_endSetup;
- (void)_beginSetupWithContext:(id)arg1;
- (void)_prepareTryHeySiriWeatherSceneWithLanguageCode:(id)arg1 gender:(long long)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_prepareTryHeySiriNewsSceneWithLanguageCode:(id)arg1 gender:(long long)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_prepareTryHeySiriMusicSceneWithLanguageCode:(id)arg1 gender:(long long)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_prepareSiriCapabilitiesSceneWithID:(long long)arg1 languageCode:(id)arg2 gender:(long long)arg3 hint:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (void)_prepareTryHeySiriCapabilitiesSceneWithLanguageCode:(id)arg1 gender:(long long)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_prepareSiriIntroSceneWithLanguageCode:(id)arg1 gender:(long long)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_prepareForSetupWithContext:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)stopWithModuleInstanceProvider:(id)arg1;
- (void)startWithModuleInstanceProvider:(id)arg1 platformDependencies:(id)arg2;
- (id)initWithModule:(id)arg1;
- (void)evictCachedContents;
- (void)endSetup;
- (void)beginSetupWithContext:(id)arg1;
- (void)prepareForSetupWithContext:(id)arg1 completion:(CDUnknownBlockType)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

