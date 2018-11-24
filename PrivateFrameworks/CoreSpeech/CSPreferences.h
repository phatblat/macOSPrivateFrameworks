//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface CSPreferences : NSObject
{
}

+ (unsigned long long)_deviceCategoryForDeviceProductType:(id)arg1;
+ (id)deviceCategoryStringRepresentationForCategoryType:(unsigned long long)arg1;
+ (BOOL)isCurrentDeviceCompatibleWithVoiceProfileAt:(id)arg1;
+ (id)sharedPreferences;
- (BOOL)useSiriActivationSPIForHomePod;
- (unsigned long long)maxNumLoggingFiles;
- (double)audioSessionActivationDelay;
- (BOOL)smartSiriVolumeSoftVolumeEnabled;
- (BOOL)speakerIdEnabled;
- (id)audioInjectionFilePath;
- (void)setAudioInjectionFilePath:(id)arg1;
- (BOOL)audioInjectionEnabled;
- (BOOL)enableAudioInjection:(BOOL)arg1;
- (BOOL)myriadFileLoggingEnabled;
- (id)interstitialAbsoluteDirForLevel:(long long)arg1;
- (id)interstitialRelativeDirForLevel:(long long)arg1;
- (double)remoteVoiceTriggerEndpointTimeoutWithDefault:(double)arg1;
- (double)remoteVoiceTriggerDelayTime;
- (BOOL)_markSATEnrollmentWithMarker:(id)arg1 forLanguage:(id)arg2;
- (BOOL)_markSATEnrollmentMigratedForLanguageCode:(id)arg1;
- (BOOL)_markSATEnrollmentSuccessForLanguageCode:(id)arg1;
- (void)notifyUserVoiceProfileUpdateReady;
- (id)getUserVoiceProfileUpdateDirectory;
- (BOOL)_isDirectory:(id)arg1;
- (void)notifyUserVoiceProfileUploadComplete;
- (BOOL)_encryptPHSMigratedFileAt:(id)arg1 andSaveTo:(id)arg2 error:(id *)arg3;
- (BOOL)_decryptFileForPHSMigrationAt:(id)arg1 andSaveTo:(id)arg2 error:(id *)arg3;
- (id)getUserVoiceProfileUploadPathWithEnrolledLanguageList:(id *)arg1;
- (id)getUserVoiceProfileUploadPath;
- (id)getUserVoiceProfileFileList;
- (id)_getEnrolledLanguageList;
- (id)_CSSATUploadPath;
- (id)_CSSATUpdatePath;
- (id)CSSATBasePath;
- (void)_secureSatBasePathAt:(id)arg1;
- (BOOL)secondPassAudioLoggingEnabled;
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

