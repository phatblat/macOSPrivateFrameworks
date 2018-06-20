//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary, NSString, TLAccessQueue;

@interface TLToneManager : NSObject
{
    TLAccessQueue *_accessQueue;
    NSDictionary *_tonesByIdentifier;
    NSDictionary *_toneIdentifiersBySyncIdentifier;
    NSDictionary *_alertTonesByIdentifier;
    NSDictionary *_toneIdentifierAliasMap;
    BOOL _shouldUseServiceToAccessTonePreferences;
    NSDictionary *_cachedTonePreferences;
    BOOL _shouldIgnoreNextToneDidChangeNotification;
}

+ (BOOL)_checkForFileExistenceAtPath:(id)arg1 allowingTCCPreflight:(BOOL)arg2;
+ (id)_defaultToneIdentifierForAlertType:(long long)arg1 topic:(id)arg2;
+ (id)_systemWideTonePreferenceKeyForAlertType:(long long)arg1;
+ (id)sharedToneManager;
- (void).cxx_destruct;
- (void)_handleTonePreferencesChangedNotificationForPreferencesKinds:(unsigned long long)arg1;
- (void)_didSetTonePreferenceSuccessfullyWithKey:(id)arg1 inDomain:(id)arg2 usingPreferencesOfKind:(unsigned long long)arg3;
- (BOOL)_ensureDirectoryExistsAtPath:(id)arg1;
- (id)_localizedNameOfToneWithIdentifier:(id)arg1;
- (id)_fileNameFromToneIdentifier:(id)arg1 withPrefix:(id)arg2;
- (void)_performBlockInAccessQueue:(CDUnknownBlockType)arg1;
- (BOOL)toneWithIdentifierIsValid:(id)arg1;
- (BOOL)_toneWithIdentifierIsValid:(id)arg1;
- (id)_toneIdentifierForFileAtPath:(id)arg1 isValid:(char *)arg2;
- (id)_nameForToneIdentifier:(id)arg1 isValid:(char *)arg2;
- (id)nameForToneIdentifier:(id)arg1;
- (id)_previewSoundForToneIdentifier:(id)arg1;
- (id)_filePathForToneIdentifier:(id)arg1 isValid:(char *)arg2;
- (id)filePathForToneIdentifier:(id)arg1;
- (id)_soundForToneIdentifier:(id)arg1;
- (id)_defaultRingtonePath;
- (id)_defaultRingtoneName;
- (id)defaultRingtoneIdentifier;
- (id)_defaultToneIdentifierForAlertType:(long long)arg1 topic:(id)arg2;
- (id)defaultToneIdentifierForAlertType:(long long)arg1;
- (unsigned int)currentToneSoundIDForAlertType:(long long)arg1 topic:(id)arg2;
- (unsigned int)currentToneSoundIDForAlertType:(long long)arg1;
- (id)currentToneNameForAlertType:(long long)arg1;
- (void)setCurrentToneIdentifier:(id)arg1 forAlertType:(long long)arg2 topic:(id)arg3;
- (id)currentToneIdentifierForAlertType:(long long)arg1 topic:(id)arg2;
- (id)_currentToneIdentifierForAlertType:(long long)arg1 topic:(id)arg2;
- (void)setCurrentToneIdentifier:(id)arg1 forAlertType:(long long)arg2;
- (id)currentToneIdentifierForAlertType:(long long)arg1;
- (BOOL)_setToneIdentifierUsingService:(id)arg1 keyedByTopic:(id)arg2 forPreferenceKey:(id)arg3;
- (id)_tonePreferencesFromService;
- (id)_newServiceConnection;
- (BOOL)_toneWithIdentifierIsAlarmWakeUp:(id)arg1;
- (BOOL)_toneWithIdentifierIsSystemAlertTone:(id)arg1;
- (BOOL)_toneWithIdentifierIsITunesRingtone:(id)arg1;
- (BOOL)_toneWithIdentifierIsNonDefaultSystemRingtone:(id)arg1;
- (BOOL)_toneWithIdentifierIsDefaultRingtone:(id)arg1;
- (id)_aliasForToneIdentifier:(id)arg1;
- (void)_loadToneIdentifierAliasMap;
- (void)_loadAlertToneInfo;
- (id)_systemNewSoundDirectory;
- (id)_systemSoundDirectory;
- (id)_systemEmbeddedModernSoundDirectory;
- (id)_systemEmbeddedSoundDirectory;
- (id)_baseDirectoryForAlertToneSoundFiles;
- (id)_alarmWakeUpRingtoneDirectory;
- (unsigned long long)_installedTonesSize;
- (id)_installedTones;
- (id)_toneWithIdentifier:(id)arg1;
- (void)_reloadTones;
- (void)_reloadTonesAfterExternalChange;
- (id)_tonesFromManifestPath:(id)arg1 mediaDirectoryPath:(id)arg2;
- (void)_loadITunesRingtoneInfoPlistAtPath:(id)arg1;
@property(readonly, nonatomic) NSString *_systemRingtoneDirectory;
@property(readonly, nonatomic) NSString *_iTunesRingtoneInformationPlist;
@property(readonly, nonatomic) NSString *_iTunesRingtoneDirectory;
@property(readonly, nonatomic) NSString *_deviceITunesRingtoneInformationPlist;
@property(readonly, nonatomic) NSString *_deviceITunesRingtoneDirectory;
@property(readonly, nonatomic) NSString *_rootDirectory;
- (void)dealloc;
- (id)initWithITunesRingtonePlistAtPath:(id)arg1;
- (id)init;

@end

