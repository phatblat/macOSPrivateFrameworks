//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface CSPreferences : NSObject
{
}

+ (id)sharedPreferences;
- (BOOL)myriadFileLoggingEnabled;
- (id)interstitialAbsoluteDirForLevel:(long long)arg1;
- (id)interstitialRelativeDirForLevel:(long long)arg1;
- (double)remoteVoiceTriggerEndpointTimeoutWithDefault:(double)arg1;
- (double)remoteVoiceTriggerDelayTime;
- (id)_deviceCategoryMap;
- (BOOL)isCurrentDeviceCompatibleWithVoiceProfileAt:(id)arg1;
- (BOOL)_markSATEnrollmentWithMarker:(id)arg1 forLanguage:(id)arg2;
- (BOOL)_markSATEnrollmentMigratedForLanguageCode:(id)arg1;
- (BOOL)_markSATEnrollmentSuccessForLanguageCode:(id)arg1;
- (void)notifyUserVoiceProfileUpdateReady;
- (id)getUserVoiceProfileUpdateDirectory;
- (BOOL)_isDirectory:(id)arg1;
- (void)notifyUserVoiceProfileUploadComplete;
- (id)getUserVoiceProfileUploadPathWithEnrolledLanguageList:(id *)arg1;
- (id)getUserVoiceProfileUploadPath;
- (id)getUserVoiceProfileFileList;
- (id)_getEnrolledLanguageList;
- (id)_CSSATUploadPath;
- (id)_CSSATUpdatePath;
- (id)CSSATBasePath;
- (id)assistantAudioFileLogDirectory;
- (id)assistantLogDirectory;
- (id)voiceTriggerAudioLogDirectory;
- (id)baseDir;
- (void)setFileLoggingLevel:(id)arg1;
- (id)fileLoggingLevel;
- (BOOL)fileLoggingIsEnabled;
- (void)setFileLoggingIsEnabled:(BOOL)arg1;
- (BOOL)_storeModeEnabled;
- (BOOL)twoShotNotificationEnabled;
- (BOOL)voiceTriggerInCoreSpeech;
- (BOOL)voiceTriggerEnabled;

@end

