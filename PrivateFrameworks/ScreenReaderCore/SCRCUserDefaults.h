//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <ScreenReaderCore/SCRCUserDefaultsBase.h>

@class NSDictionary, NSLock, NSMutableDictionary, NSSet, NSString, SCRCTargetSelectorTimer, SCRCThreadKey, SCRCUserDefaultsRegistry;

@interface SCRCUserDefaults : SCRCUserDefaultsBase
{
    NSLock *_lock;
    int _familyMember;
    NSString *_familyMemberString;
    BOOL _useMainThreadForCallbacks;
    struct __CFDictionary *_transaction;
    SCRCTargetSelectorTimer *_syncTimer;
    SCRCTargetSelectorTimer *_syncTimerLocal;
    SCRCTargetSelectorTimer *_syncTimerCommon;
    SCRCTargetSelectorTimer *_syncTimerCustom;
    NSString *_domain;
    NSString *_pdomain;
    SCRCUserDefaultsRegistry *_registry;
    BOOL _disableValueForKey;
    id _commonProxy;
    id _localProxy;
    struct __CFDictionary *_customProxies;
    NSSet *_profileSet;
    struct __DASession *_daSession;
    struct __DASession *_daApprovalSession;
    NSMutableDictionary *_portableDevices;
    NSDictionary *_iDiskPortablePreferences;
    NSDictionary *_currentPortablePreferences;
    NSDictionary *_detectedPortablePreferences;
    double _lastPortablePrefFoundTime;
    NSString *_currentPortableIdentifier;
    id <SCRCUserDefaultsDiskArbDelegate> _diskArbDelegate;
    BOOL _remote;
    BOOL _docked;
    BOOL _portablePreferencesEnabled;
    BOOL _remoteHasChanges;
    BOOL _localPrefsTouched;
    long long _cursorTrackingEnabledCommand;
    NSString *_preferencesFolder;
    SCRCThreadKey *_threadKey;
}

+ (BOOL)automaticallyNotifiesObserversForKey:(id)arg1;
+ (id)sharedUserDefaults;
+ (void)checkAndUpdateVOPrefs;
+ (BOOL)_checkAndUpdateVO2Prefs:(id)arg1;
+ (BOOL)_checkAndUpdateVO3Prefs:(id)arg1;
+ (void)convertFile:(id)arg1 toFile:(id)arg2 conversionType:(id)arg3;
- (void).cxx_destruct;
- (void)_threadedGlobalDefaultsChanged:(id)arg1;
- (void)_globalDefaultsChanged:(id)arg1;
- (id)_allKeysForProxy:(id)arg1;
- (id)allKeys;
- (id)_dictionaryWithValuesForKeys:(id)arg1 proxy:(id)arg2;
- (id)dictionaryWithValuesForKeys:(id)arg1;
- (id)_valueForKey:(id)arg1 proxy:(id)arg2 exclusive:(BOOL)arg3;
- (id)exclusiveValueForKey:(id)arg1;
- (id)valueForKey:(id)arg1;
- (void)_setValue:(id)arg1 forKey:(id)arg2 proxy:(id)arg3;
- (void)setValue:(id)arg1 forKey:(id)arg2;
- (BOOL)_hasValidSetterForKey:(id)arg1;
- (void)_removeAllValuesForProxy:(id)arg1;
- (void)removeAllValues;
- (void)cancelTransaction;
- (void)_commitDictionary:(struct __CFDictionary *)arg1 local:(BOOL)arg2;
- (void)commitTransaction;
- (void)suppressTransactionKVO;
- (void)_beginTransaction:(id)arg1 proxy:(id)arg2;
- (void)beginTransaction:(id)arg1 withDomain:(id)arg2;
- (void)beginCommonTransaction:(id)arg1;
- (void)beginLocalTransaction:(id)arg1;
- (void)beginTransaction:(id)arg1;
- (void)synchronizeWhileIWait;
- (void)synchronize;
- (void)_synchronizeCustom:(BOOL)arg1;
- (void)_synchronizeCustom;
- (void)_synchronizeCommon:(BOOL)arg1;
- (void)_synchronizeCommon;
- (void)_synchronizeLocal;
- (void)_synchronize:(BOOL)arg1;
- (void)_synchronize;
- (int)familyMember;
- (void)_globalDefaultsLaunch:(id)arg1;
- (void)setFamilyMember:(int)arg1;
- (BOOL)useMainThreadForCallbacks;
- (void)setUseMainThreadForCallbacks:(BOOL)arg1;
- (id)domainWithName:(id)arg1;
- (id)_domainWithName:(id)arg1 profilable:(BOOL)arg2;
- (id)common;
- (id)local;
- (id)registry;
- (id)threadKey;
- (void)dealloc;
- (id)init;
- (id)localDomain;
- (id)preferencesFolder;
- (void)setPreferencesFolder:(id)arg1;
- (void)resetPreferencesFolder;
- (void)_threadedGlobalProfilesUpdated:(id)arg1;
- (void)_globalProfilesUpdated:(id)arg1;
- (void)_postGlobalUpdateProfilesNotofication;
- (void)_threadedGlobalCurrentProfileChanged:(id)arg1;
- (void)_globalCurrentProfileChanged:(id)arg1;
- (BOOL)isDefaultProfileCurrentProfile;
- (id)lastProfile;
- (id)currentProfile;
- (id)_profileForKey:(id)arg1;
- (void)_setCurrentProfile:(id)arg1 post:(BOOL)arg2 force:(BOOL)arg3;
- (void)setCurrentProfile:(id)arg1 force:(BOOL)arg2;
- (void)setCurrentProfile:(id)arg1;
- (id)_currentProfileKey;
- (BOOL)moveProfileAtIndex:(unsigned long long)arg1 toIndex:(unsigned long long)arg2;
- (void)_setValue:(id)arg1 forKey:(id)arg2 forProfile:(id)arg3;
- (void)setApplications:(id)arg1 forProfile:(id)arg2;
- (id)_prunedDuplicateApplications:(id)arg1 forProfile:(id)arg2 inProfiles:(id)arg3;
- (void)setSites:(id)arg1 forProfile:(id)arg2;
- (void)setMask:(id)arg1 forProfile:(id)arg2;
- (void)setName:(id)arg1 forProfile:(id)arg2;
- (void)removeProfile:(id)arg1;
- (void)removeAllProfiles;
- (void)resetProfile:(id)arg1 type:(int)arg2;
- (id)_createProfileAfterIndex:(unsigned long long)arg1 withName:(id)arg2 createType:(int)arg3;
- (id)_addProfile:(id)arg1;
- (void)addProfileAfterIndex:(unsigned long long)arg1 withName:(id)arg2;
- (void)duplicateProfileAtIndex:(unsigned long long)arg1;
- (long long)profileCount;
- (id)allProfiles;
- (void)_validateAndPrune;
- (id)_alwaysUsePortablePreferenceIdentifiers;
- (void)_addAlwaysUsePortalePreferenceIdentifier:(id)arg1;
- (id)_getPortablePreferenceIdentifierForDevice:(id)arg1;
- (void)resetAlwaysUsePortablePreferences;
- (BOOL)shouldAlwaysUsePortablePreferences:(id)arg1;
- (void)setAlwaysUsePortablePreferences:(id)arg1;
- (void)_syncHome:(id)arg1 portable:(id)arg2 kvoTarget:(id)arg3;
- (void)_synchPortablePreferences;
- (void)_synchProfilesForPortablePreferences;
- (id)_newestValueForMasterKey:(id)arg1 profileKey:(id)arg2 homeProfile:(id)arg3 portableProfile:(id)arg4 time:(id *)arg5;
- (void)_deleteJournalTimeForMasterKey:(id)arg1 profileKey:(id)arg2;
- (void)_touchJournalTime:(id)arg1 forMasterKey:(id)arg2 profileKey:(id)arg3;
- (BOOL)_isHomeValueNewerForMasterKey:(id)arg1 profileKey:(id)arg2 time:(id *)arg3;
- (BOOL)_isHomeValueNewerForKey:(id)arg1 time:(id *)arg2;
- (void)_threadedSynchronizeDomain:(id)arg1 portable:(id)arg2;
- (void)_synchronizeDomain:(id)arg1 portable:(id)arg2;
- (id)_copyKeyListFromDomain:(id)arg1 portable:(id)arg2;
- (id)_copyValuesForKeys:(id)arg1 domain:(id)arg2 portable:(id)arg3;
- (id)_copyValueForKey:(id)arg1 domain:(id)arg2 portable:(id)arg3;
- (void)_setJournalTime:(id)arg1 forKey:(id)arg2 updatePortable:(id)arg3;
- (void)_touchJournalTime:(id)arg1 forKey:(id)arg2;
- (void)_setValue:(id)arg1 forKey:(id)arg2 domain:(id)arg3 portable:(id)arg4;
- (void)_removePortablePreferencesForDevice:(id)arg1;
- (void)_addPortablePreferencesForDevice:(id)arg1 useImmediately:(BOOL)arg2;
- (void)pollForPortablePreferences;
- (void)_threadedPollForPortablePreferences;
- (BOOL)_volumeIsPortableForDescription:(struct __CFDictionary *)arg1;
- (void)_diskDisappearedCallback:(struct __CFDictionary *)arg1;
- (void)_diskUnmountCallbackFunction:(struct __CFDictionary *)arg1;
- (void)_diskDescriptionChangedCallback:(struct __CFDictionary *)arg1 keys:(struct __CFArray *)arg2;
- (void)_tryAddingPortablePreferencesFromDiskWithDescription:(struct __CFDictionary *)arg1;
- (void)_diskAppearedCallback:(struct __CFDictionary *)arg1;
- (void)_diskAppearedSpinUpAndCallback:(struct __CFDictionary *)arg1;
- (void)_spoolAndAddPortablePreferencesForDevice:(id)arg1;
- (BOOL)_isVolumeIDisk:(id)arg1 volumeKind:(id)arg2 volumeName:(id)arg3;
- (id)_volumeKey:(struct __CFDictionary *)arg1;
- (void)_threadedGlobalCurrentPortablePreferencesChanged:(id)arg1;
- (void)_globalCurrentPortablePreferencesChanged:(id)arg1;
- (void)ejectPortablePreferences;
- (id)detectedPortablePreferences;
- (id)currentPortablePreferences;
- (void)setCurrentPortablePreferences:(id)arg1;
- (void)_setDetectedPortablePreferences:(id)arg1 useImmediately:(BOOL)arg2;
- (void)_threadedSetCurrentPortablePreferences:(id)arg1 post:(BOOL)arg2;
- (void)_threadedSetCurrentPortablePreferences:(id)arg1;
- (BOOL)portablePreferencesExistOnDevice:(id)arg1 remote:(char *)arg2;
- (void)createPortablePreferencesOnDevice:(id)arg1 replace:(BOOL)arg2;
- (id)allPortableDevices;
- (int)portablePreferencesSetting;
- (void)setPortablePreferencesSetting:(int)arg1;
- (void)stopPortablePreferenceDetection;
- (void)startPortablePreferenceDetectionWithDelegate:(id)arg1;
- (BOOL)isPortablePreferenceDetectionEnabled;
- (id)mobileMeUsername;
- (BOOL)isIDiskConnected;
- (id)iDiskVolumePath;
- (id)_prunedKeys:(id)arg1 archiveType:(int)arg2;
- (id)customFilePrefixesForArchiveType:(int)arg1;
- (void)_threadedGlobalDefaultsReset;
- (void)_globalDefaultsReset:(id)arg1;
- (void)postResetNotification;
- (BOOL)exportToPath:(id)arg1 archiveType:(int)arg2 profileKeys:(id)arg3;
- (void)_replaceDictionary:(id)arg1 forProxy:(id)arg2;
- (void)_mergeElementDictionary:(id)arg1;
- (unsigned long long)_indexOfLabel:(id)arg1 inLabels:(id)arg2;
- (void)_mergeWebspotDictionary:(id)arg1;
- (unsigned long long)_doesWebSpotExist:(id)arg1 inWebSpots:(id)arg2;
- (void)_insertWebSpot:(id)arg1 inWebSpots:(id)arg2;
- (void)_importFromDictionary:(id)arg1 archiveType:(int)arg2 mergeItems:(int)arg3;
- (BOOL)importFromPath:(id)arg1 mergeItems:(int)arg2 error:(id *)arg3;
- (int)mergeMaskForFileAtPath:(id)arg1;
- (int)archiveTypeOfFileAtPath:(id)arg1;
- (int)_getArchiveTypeFromDictionary:(id)arg1;
- (void)addPronunciation:(id)arg1 forKey:(id)arg2;
- (id)_generatePrimaryKey;
- (void)resetNonCustomPreferences;
- (void)resetAllPreferences;
- (void)resetPreferencesForDomain:(id)arg1;
- (id)preferenceDomains;

@end

